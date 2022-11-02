//---------------------------------------------------------------------------

#include <vcl.h>
#include <fstream>
#include <cstdlib>
#pragma hdrstop
#include "Unit1.h"
#include "Unit4.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
bool opened;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm4::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}
//-------------------------------------
void __fastcall TForm4::FormCreate(TObject *Sender)
{
Listao = new TStringList;
}
//----------------


//---------------------------------------------------------------------------
void __fastcall TForm4::WczytajObrazek(void)    //funkcja do wywo³ania wczytywania obrazka
{
 if (OpenDialog1->Execute())
 {
	try
	{
    	for(int i = 0; i < Listao->Count; i++)
		{
		if(OpenDialog1->FileName == Listao->Strings[i]) return;   //jesli juz jest taki plik na liscie to zwraca
		}
	 Listao->Add(OpenDialog1->FileName); //dodaje do listy plik
	 ListBox1->Items->Add(ExtractFileName(OpenDialog1->FileName));
	 Image1->Show();

	 if(Listao->Count>=2)
	 {
	 ListBox1->Visible=true;
     }
	 if(Listao->Count==1&&opened!=true)
	 {
	 ListBox1->ItemIndex=0;
	 PokazObrazek(ListBox1->ItemIndex);
	 opened=true;
	 }
	}
	catch(...)
	{
	ShowMessage("B³¹d otwarcia pliku :(  SprawdŸ, czy plik posiada prawid³owe rozszerzenie.");
	}
 }

}
//----------------------------
void __fastcall TForm4::PokazObrazek(int index)
{
Image1->Picture->LoadFromFile(Listao->Strings[index]);
}
//-------------------------

//---------------------------------------------------------------------------

void __fastcall TForm4::FormDestroy(TObject *Sender)
{
      Listao->Clear();
	  Listao->Free();
	  opened=false;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image5Click(TObject *Sender)
{
	try
	{
	if(ListBox1->ItemIndex > 0)
	ListBox1->ItemIndex--;
	PokazObrazek(ListBox1->ItemIndex);
	}
	catch(...)
	{
	ShowMessage("B³¹d. Brak plików na liœcie lub uszkodzony plik.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image4Click(TObject *Sender)
{
	try
	{
	if(ListBox1->ItemIndex < ListBox1->Items->Count)
	ListBox1->ItemIndex++;
	PokazObrazek(ListBox1->ItemIndex);
	}
	catch(...)
	{
	ShowMessage("B³¹d. Brak plików na liœcie lub uszkodzony plik.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::FormActivate(TObject *Sender)
{
	if(Form8->CheckBox4->Checked==false)
	{
	ListBox1->Visible=true;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ListBox1Click(TObject *Sender)
{
if(ListBox1->ItemIndex >= 0)
PokazObrazek(ListBox1->ItemIndex);
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Image6Click(TObject *Sender)
{
	ListBox1->Items->Clear();
	Listao->Clear();
	if(Form8->CheckBox4->Checked!=false)
	{
	ListBox1->Visible=false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm4::ScrollBox1MouseWheelDown(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled)
{
ScrollBox1->VertScrollBar->Position+=10;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::ScrollBox1MouseWheelUp(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled)
{
ScrollBox1->VertScrollBar->Position-=10;
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Dopasujdookna1Click(TObject *Sender)
{
	if(Image1->Align==alNone)
	{
	Image1->Align=alClient;
	Image1->Proportional=true;
	Dopasujdookna1->Checked=true;
	}
	else if(Image1->Align==alClient)
	{
	Image1->Align=alNone;
    Image1->Proportional=false;
    Dopasujdookna1->Checked=false;
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm4::FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift)

{
 	if(Key==VK_DOWN||Key==VK_RIGHT)
	{
		Form4->Image4Click(this);
	}
	if(Key==VK_UP||VK_LEFT)
	{
		Form4->Image5Click(this);
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Button1Click(TObject *Sender)
{
WczytajObrazek();
}
//---------------------------------------------------------------------------

