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
if(CCalendar1->Month>=1&&CCalendar1->Year>=2028)
{
ShowMessage("Wsparcie programu zakoñczy³o siê 31.12.2027. Czêœæ opcji przesta³a dzia³aæ. Pobierz nowsz¹ wersjê Multi Note.");
Form1->Panel1->Visible=true;
Form1->Panel1->Caption="Ta wersja programu nie jest ju¿ wspierana. Pobierz nowsz¹ wersjê Multi Note.";
Form8->end_of_support->Visible=true;
Form8->end_of_support2->Visible=true;
Form8->ScrollBox1->Enabled=false;
Form8->Button2->Enabled=false;
Form8->Label7->Caption="Zakoñczone";
support_ended = true;
}
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

