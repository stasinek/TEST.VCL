//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "HINTBOX"
#pragma resource "*.dfm"
TForm2 *Form2;
//---------------------------------------------------------------------------
__fastcall TForm2::TForm2(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm2::FormResize(TObject *Sender)
{
Form2->HintBox1->Width = Form2->ClientWidth - 2*Form2->HintBox1->Left;
Form2->HintBox1->Height = (Form2->ClientHeight - 4*Form2->HintBox1->Top - Form2->Label1->Height)/2;

Form2->Label1->Left = (Form2->ClientWidth - Form2->Label1->Width)/2;
Form2->Label1->Top = (Form2->ClientHeight - Form2->Label1->Height)/2;

Form2->Memo1->Top = 4*Form2->HintBox1->Top + Form2->HintBox1->Height + Form2->Label1->Height;
Form2->Memo1->Width = Form2->ClientWidth - 2*Form2->Memo1->Left;
Form2->Memo1->Height = Form2->ClientHeight - Form2->Memo1->Top - Form2->HintBox1->Top;
}
//---------------------------------------------------------------------------

//---------------------------------------------------------------------------

void __fastcall TForm2::Memo1Change(TObject *Sender)
{
HintBox1->Lines->Assign(Memo1->Lines);
HintBox1->Update();
}
//---------------------------------------------------------------------------

