//---------------------------------------------------------------------------

#include <vcl.h>
#include <iostream>
#include <windows.h>
#include <winbase.h>
#include <fstream>
#include <cstdlib>
#include <ctime>
#pragma hdrstop

#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
using namespace std;
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
AnsiString nazwae;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
	: TForm(Owner)
{
 tresc->Alignment=taLeftJustify;

}
//---------------------------------------------------------------------------
void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
 Form2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Nowyplik1Click(TObject *Sender)
{
		if (Application->MessageBox(L"Czy utworzenie nowego pliku jest zamierzone?",L"PotwierdŸ",MB_YESNOCANCEL | MB_ICONQUESTION) == IDYES)
		{
		tresc->Lines->Clear();
		nazwapliku="";
		Form1->Caption="Multi Note";
		}
}
//---------------------------------------------------------------------------
void __fastcall TForm1::WyczMultiNote1Click(TObject *Sender)
{
if (Application->MessageBox(L"Czy jesteœ pewny, ¿e chcesz zamkn¹æ Multi Note?",L"PotwierdŸ",MB_YESNO | MB_ICONQUESTION) == IDYES)
{
Application->Terminate();
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wczytajplik1Click(TObject *Sender)
{
 if (OpenDialog1->Execute())
 {
   try
   {

   tresc->Lines->LoadFromFile(OpenDialog1->FileName);
   nazwapliku=OpenDialog1->FileName;
   nazwae=ExtractFileName(OpenDialog1->FileName);
   Form1->Caption="Multi Note - "+nazwae;

   }
   catch (...)
   {
   ShowMessage("B³¹d otwarcia pliku :(");
   }
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zapiszjakonowy1Click(TObject *Sender)
{
	   if (SaveDialog1->Execute())
		{

		try{          //automatyczne dopisywanie rozszerzeñ
			if( SaveDialog1->FilterIndex == 1 )
			{
			tresc->Lines->SaveToFile( SaveDialog1->FileName + ".txt" );
			tresc->Modified = true;
			Form1->Caption="Multi Note - "+ExtractFileName(SaveDialog1->FileName)+".txt";
			}
			if( SaveDialog1->FilterIndex == 2 )
			{
			tresc->Lines->SaveToFile( SaveDialog1->FileName + ".html" );
			tresc->Modified = true;
			Form1->Caption="Multi Note - "+ExtractFileName(SaveDialog1->FileName)+".html";
			}
			}
			catch (...)
			{
			ShowMessage("Zapis pliku niemo¿liwy :(");
			}
		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Nadpiszbiecerdo1Click(TObject *Sender)
{
	   if (nazwapliku!="")         //jeœli plik ma nazwê
        {     try
              {
              tresc->Lines->SaveToFile(nazwapliku);

              }
              catch(...)
              {
              ShowMessage("B³¹d nadpisywania pliku :(");

              }
        }
        else     //Jeœli plik jeszcze nie ma nazwy(nie istnieje)
        {


        ShowMessage("Ten plik nie istnieje (nie mo¿e byæ nadpisany). Utwórz go teraz :)");
        Form1->Zapiszjakonowy1Click(MainMenu1);


		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cofnij1Click(TObject *Sender)
{
tresc->Undo();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Cofnij2Click(TObject *Sender)
{
tresc->CutToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kopiuj1Click(TObject *Sender)
{
 tresc->CopyToClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wklej1Click(TObject *Sender)
{
 tresc->PasteFromClipboard();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zawijaniewierszy1Click(TObject *Sender)
{
	if(Zawijaniewierszy1->Checked==true)
        {
                Zawijaniewierszy1->Checked=false;
                tresc->WordWrap=false;
				tresc->ScrollBars=ssBoth;

		}
        else
		{
                Zawijaniewierszy1->Checked=true;
                tresc->WordWrap=true;
				tresc->ScrollBars=ssVertical;


		}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Edycjaczcionki1Click(TObject *Sender)
{
 if (FontDialog1->Execute())
 {

		//Nazwa czcionki
		tresc->Font->Name=FontDialog1->Font->Name;
		//Kolor czcionki
		tresc->Font->Color=FontDialog1->Font->Color;
		//Rozmiar czcionki
        tresc->Font->Size=FontDialog1->Font->Size;
		//Styl czcionki
		tresc->Font->Style=FontDialog1->Font->Style;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Pomocsieciowa1Click(TObject *Sender)
{
//otwarcie adresu strony w domyœlnej przegl¹darce
ShellExecuteA(NULL, ("open"), LPCSTR("https://michaello99.wixsite.com/michaello99/pomoc-i-porady"), NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::ylkodoodczytu1Click(TObject *Sender)
{
 if(ylkodoodczytu1->Checked==false)
 {
 ylkodoodczytu1->Checked=true;
 tresc->ReadOnly=true;
 }
 else{
 ylkodoodczytu1->Checked=false;
 tresc->ReadOnly=false;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Odtwarzacz1Click(TObject *Sender)
{
Form3->Show();
Form3->WindowState=wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Przegldarkaobrazw1Click(TObject *Sender)
{
Form4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N751Click(TObject *Sender)
{
 tresc->Zoom=75;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N1001Click(TObject *Sender)
{
 tresc->Zoom=100;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N1251Click(TObject *Sender)
{
 tresc->Zoom=125;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::N1501Click(TObject *Sender)
{
  tresc->Zoom=150;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Dolewej1Click(TObject *Sender)
{
tresc->Paragraph->Alignment=taLeftJustify;  //przesuniecie linii do lewej
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Narodku1Click(TObject *Sender)
{
tresc->Paragraph->Alignment=taCenter;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Doprawej1Click(TObject *Sender)
{
 tresc->Paragraph->Alignment=taRightJustify;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kalkulator1Click(TObject *Sender)
{
Form5->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kalendarz1Click(TObject *Sender)
{
Form6->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rysownik1Click(TObject *Sender)
{
 Form7->Show();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Ustawienia1Click(TObject *Sender)
{
 Form8->Show();
}
//---------------------------------------------------------------------------

//-------------------------------------------------------------



void __fastcall TForm1::TrayIcon1Click(TObject *Sender)
{
WindowState=wsNormal;
Application->BringToFront();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Rysownik2Click(TObject *Sender)
{
Form7->Show();
Form7->WindowState=wsNormal;
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Przegldarkaobrazw2Click(TObject *Sender)
{
Form4->Show();
Form4->WindowState=wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kalkulator2Click(TObject *Sender)
{
Form5->Show();
Form5->WindowState=wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Kalendarz2Click(TObject *Sender)
{
Form6->Show();
Form6->WindowState=wsNormal;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wznw1Click(TObject *Sender)
{
Form3->Button5Click(Form3);
TrayIcon1->BalloonHint="Wznowiono odtwarzanie utworu";
TrayIcon1->BalloonTitle="Wznowiono";
TrayIcon1->BalloonFlags=bfNone;
TrayIcon1->ShowBalloonHint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zatrzymaj1Click(TObject *Sender)
{
Form3->Button3Click(Form3);
TrayIcon1->BalloonHint="Wstrzymano odtwarzanie utworu";
TrayIcon1->BalloonTitle="Zatrzymano";
TrayIcon1->BalloonFlags=bfNone;
TrayIcon1->ShowBalloonHint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wczytajplik2Click(TObject *Sender)
{
Form3->Button2Click(Form3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Nastpny1Click(TObject *Sender)
{
Form3->Button7Click(Form3);
TrayIcon1->BalloonHint=Form3->traypokaz;
TrayIcon1->BalloonTitle="Zmiana utworu";
Sleep(300);
Application->ProcessMessages();
TrayIcon1->ShowBalloonHint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Poprzedni1Click(TObject *Sender)
{
Form3->Button6Click(Form3);
TrayIcon1->BalloonHint=Form3->traypokaz;
TrayIcon1->BalloonTitle="Zmiana utworu";
Sleep(300);
Application->ProcessMessages();
TrayIcon1->ShowBalloonHint();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Zresetujutwr1Click(TObject *Sender)
{
Form3->Button4Click(Form3);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
 TSearchTypes st;

 String fText = Edit1->Text.Trim().LowerCase();

 if(tresc->SelLength)
  tresc->SelStart += 1;

 int fPos = tresc->FindText(fText, tresc->SelStart, tresc->Text.LowerCase().Length(), st);
 tresc->SelStart = fPos;
 tresc->SelLength = fText.Length();
 tresc->SetFocus();

 if(fPos != -1)
 {
  tresc->SelStart = fPos;
  tresc->SelLength = fText.Length();
 }
 else
 {
  tresc->SelStart = 0;
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Wyszukajwtekcie1Click(TObject *Sender)
{
Panel2->Visible=true;
Edit1->Visible=true;        //panel wyszukiwania w tekscie
Button1->Visible=true;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button2Click(TObject *Sender)
{
Panel2->Visible=false;           //zamykanie wyszukiwania
Edit1->Visible=false;
Button1->Visible=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormCreate(TObject *Sender)
{
tresc->Perform(EM_EXLIMITTEXT, 0, 4194176);   //zwiekszanie limitu tekstu
DragAcceptFiles(Handle, true);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::FormClose(TObject *Sender, TCloseAction &Action)
{
if (Application->MessageBox(L"Czy jesteœ pewny, ¿e chcesz zamkn¹æ Multi Note?",L"PotwierdŸ",MB_YESNO | MB_ICONQUESTION) == IDYES)
{
Application->Terminate();        //zamykanie formy x-em
}
else
{
Action=caNone;
}
}
//---------------------------------------------------------------------------

void __fastcall TForm1::WyczMultiNote2Click(TObject *Sender)
{
Application->Terminate();
}
//---------------------------------------------------------------------------

