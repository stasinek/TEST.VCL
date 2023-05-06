//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ADVBAR"
#pragma link "BARGRAPH"
#pragma link "HINTBOX"
#pragma link "ADVBAR"
#pragma link "BARGRAPH"
#pragma link "HINTBOX"
#pragma link "BROWSEDLG"
#pragma link "EXEDLG"
#pragma link "EXEINFO"
#pragma link "EXERES"
#pragma link "FRAMEPAN"
#pragma link "SYSTRAY"
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::ScrollBar1Change(TObject *Sender)
{
ProgressBar1->Position = ScrollBar1->Position;
AdvancedBar1->Position = ScrollBar1->Position;
Form1->Caption = AdvancedBar1->Position;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
BarGraph1->Add(clRed,ScrollBar1->Position);    
}
//---------------------------------------------------------------------------



