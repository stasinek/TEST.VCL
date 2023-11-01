/***************************************************************************/
/* THintBox example program                                                */
/* ----------------------------------------------------------------------- */
/* Disclaimer:                                                             */
/* -----------                                                             */
/* This software is provided "AS IS" without warranty of any               */
/* kind, either expressed or implied, including but not limited            */
/* to the implied warranties of merchantability and fitness                */
/* for a particular purpose. In no event shall Cramon Utilites             */
/* be liable for any damages whatsoever including direct, indirect,        */
/* incidental, consequential, loss of business profits or                  */
/* special damages, even if Cramon Utilities has been advised              */
/* of the possibility of such damages.                                     */
/* You may use THintBox free of charge in any application you make         */
/* You may use THintBox free of charge in any application you make         */
/* be it freeware, shareware or commercial. If you change the sourcecode   */
/* of THintBox you must include this text and clearly state which parts    */
/* are changed by you and that this is not the original version.           */
/* If you would like your changes in the "official" version please send    */
/* the updated source file(s) to me and I'll update my sourcecode (you'll  */
/* ofcourse get credit for all changes you've made to THintBox).           */
/* ----------------------------------------------------------------------- */
/* Made by Jeppe Cramon 1999		                                       */
/* (C) Copyright 1999 Cramon Utilities                                     */
/***************************************************************************/

//---------------------------------------------------------------------------
#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Grids.hpp>
#include <Buttons.hpp>
#include <Dialogs.hpp>
#include "CCALENDR.h"
#include <HINTBOX.h>
#include <vcl/dstring.h>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TCheckBox *CheckBox1;
        TCheckBox *CheckBox2;
        TFontDialog *FontDialog1;
    void __fastcall FormCreate(TObject *Sender);
    void __fastcall CheckBox1Click(TObject *Sender);
    void __fastcall FormResize(TObject *Sender);
    void __fastcall CheckBox2Click(TObject *Sender);
    void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
    __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
