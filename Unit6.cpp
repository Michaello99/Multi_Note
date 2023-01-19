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
ShowMessage("Wsparcie programu zako�czy�o si� 31.12.2027. Cz�� opcji przesta�a dzia�a�. Pobierz nowsz� wersj� Multi Note.");
Form1->Panel1->Visible=true;
Form1->Panel1->Caption="Ta wersja programu nie jest ju� wspierana. Pobierz nowsz� wersj� Multi Note.";
Form8->end_of_support->Visible=true;
Form8->end_of_support2->Visible=true;
Form8->ScrollBox1->Enabled=false;
Form8->Button2->Enabled=false;
Form8->Label7->Caption="Zako�czone";
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
Panel2->Caption="Miesi�c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button1Click(TObject *Sender)
{
CCalendar1->PrevMonth();
month=CCalendar1->Month;
year=CCalendar1->Year;
Panel2->Caption="Miesi�c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------
void __fastcall TForm6::Button2Click(TObject *Sender)
{
CCalendar1->NextMonth();
month=CCalendar1->Month;
year=CCalendar1->Year;
Panel2->Caption="Miesi�c: "+month+" "+"Rok: "+year;
}
//---------------------------------------------------------------------------

