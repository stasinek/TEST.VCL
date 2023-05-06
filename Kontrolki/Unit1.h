//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "ADVBAR.h"
#include "BARGRAPH.h"
#include "HINTBOX.h"
#include <ComCtrls.hpp>
#include <ExtCtrls.hpp>
#include "ADVBAR.h"
#include <ExtCtrls.hpp>
#include <ComCtrls.hpp>
#include "BARGRAPH.h"
#include "HINTBOX.h"
#include "BROWSEDLG.h"
#include "EXEDLG.h"
#include "EXEINFO.h"
#include "EXERES.h"
#include "FRAMEPAN.h"
#include "SYSTRAY.h"
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
    TAdvancedBar *AdvancedBar1;
    TButton *Button1;
    TTimer *Timer1;
    TScrollBar *ScrollBar1;
    TProgressBar *ProgressBar1;
    TBarGraph *BarGraph1;
    THintBox *HintBox1;
    TSysTray *SysTray1;
    TBrowseDialog *BrowseDialog1;
    TExeResource *ExeResource1;
    TExeInformation *ExeInformation1;
    TExeDialog *ExeDialog1;
    void __fastcall ScrollBar1Change(TObject *Sender);
    void __fastcall Button1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
