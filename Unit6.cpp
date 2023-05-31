//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit6.h"
#include "Unit1.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma link "ccalendr"
#pragma resource "*.dfm"
TForm6 *Form6;
AnsiString month,year;
//---------------------------------------------------------------------------
__fastcall TForm6::TForm6(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
 void __fastcall TForm6::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}
void __fastcall TForm6::FormCreate(TObject *Sender)
{
month=CCalendar1->Month;
year=CCalendar1->Year;
Panel2->Caption="Miesi¹c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
CCalendar1->PrevMonth();
month=CCalendar1->Month;
year=CCalendar1->Year;
Panel2->Caption="Miesi¹c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
CCalendar1->NextMonth();
month=CCalendar1->Month;
year=CCalendar1->Year;
Panel2->Caption="Miesi¹c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------

