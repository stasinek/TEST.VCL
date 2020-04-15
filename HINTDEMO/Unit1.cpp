//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "CCALENDR"
#pragma link "HINTBOX"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
CheckBox1->Checked = Form2->HintBox1->Formatting;
// Notice: BCB3 doesn't always read this correctly!
CheckBox2->Checked = Form2->HintBox1->DrawBox;
// Notice: This can cause access violation on BCB3 (just comment it out)
Form2->Memo1->Lines->Text = Form2->HintBox1->Lines->Text;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox1Click(TObject *Sender)
{
Form2->HintBox1->Formatting = CheckBox1->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormResize(TObject *Sender)
{
//HintBox1->Height = Height-Memo1->Height-CheckBox1->Height-30;
//Memo1->Top = Height-Memo1->Height-10;
//SpeedButton1->Top = Height-Memo1->Height-CheckBox1->Height-20;
//CheckBox1->Top = Height-Memo1->Height-CheckBox1->Height-20;
//CheckBox2->Top = Height-Memo1->Height-CheckBox1->Height-20;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::CheckBox2Click(TObject *Sender)
{
Form2->HintBox1->DrawBox = CheckBox2->Checked;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
if (FontDialog1->Execute()) Form2->HintBox1->Font = FontDialog1->Font;
}
//---------------------------------------------------------------------------

