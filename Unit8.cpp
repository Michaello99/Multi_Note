//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit2.h"
#include "Unit3.h"
#include "Unit4.h"
#include "Unit5.h"
#include "Unit6.h"
#include "Unit7.h"
#include "Unit8.h"
#include <IniFiles.hpp>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm8 *Form8;

fstream ostatni_plik;
//---------------------------------------------------------------------------
__fastcall TForm8::TForm8(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
 void __fastcall TForm8::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}
//--------------------------------------------------------
void __fastcall TForm8::CheckBox2Click(TObject *Sender)
{
	if (CheckBox2->Checked==true)
	{
	autoplay=true;
	}
	else                                 //autoodtwarzanie
	{
	autoplay=false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::CheckBox6Click(TObject *Sender)
{
		if(CheckBox6->Checked==false)
		{
			adaptivedraw=false;
		}
        else if(CheckBox6->Checked==true)
		{

			adaptivedraw=true;
			if(Form7->Image1->Canvas->Brush->Color==clBlack)
        	{                                                     //adaptacyjne_pedzel
				 Form7->Image1->Canvas->Pen->Color=clWhite;
        	}
			else if(Form7->Image1->Canvas->Brush->Color==clWhite)
			{
				 Form7->Image1->Canvas->Pen->Color=clBlack;
			}
			else if(Form7->Image1->Canvas->Brush->Color==clBlue)
			{
				 Form7->Image1->Canvas->Pen->Color=clWhite;
			}


		}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox7Click(TObject *Sender)
{
	if(CheckBox7->Checked==false)
	{
	protect=false;
		if(Form3->Timer1->Enabled)
		{
		Form3->Timer1->Enabled = false;
	    Form3->protecttime = 0;				 //ochrona sluchu
		}
	else if (CheckBox7->Checked==true)
	{
    protect=true;
	}
	}
}
//---------------------------------------------------------------------------


//---------------------------------------------------------------------------





void __fastcall TForm8::ScrollBox1MouseWheelDown(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled)
{
ScrollBox1->VertScrollBar->Position+=10;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::ScrollBox1MouseWheelUp(TObject *Sender, TShiftState Shift,
          TPoint &MousePos, bool &Handled)
{
ScrollBox1->VertScrollBar->Position-=10;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormCreate(TObject *Sender)
{
TIniFile *Ini = new TIniFile(ExtractFilePath(Application->ExeName)+"\\MultiNote_Data\\Ustawienia.ini");
CheckBox2->Checked=Ini->ReadBool("Ustawienia", "autoodtwarzanie", true);
CheckBox7->Checked=Ini->ReadBool("Ustawienia","ochronasluchu",true);
CheckBox3->Checked=Ini->ReadBool("Ustawienia","czyscskladnik",true);
CheckBox4->Checked=Ini->ReadBool("Ustawienia","autolistaobrazow",true);
Form1->CheckBox1->Checked=Ini->ReadBool("Ustawienia","wielkoscliter",false);
Form1->CheckBox2->Checked=Ini->ReadBool("Ustawienia","caleslowa",false);
CheckBox10->Checked=Ini->ReadBool("Ustawienia","interaktywnaikona",true);
CheckBox11->Checked=Ini->ReadBool("Ustawienia","powiadomieniawysuwane",true);
CheckBox5->Checked=Ini->ReadBool("Ustawienia","obliczanierozmiarupliku",false);
CheckBox12->Checked=Ini->ReadBool("Ustawienia","aktywnalinia",true);
CheckBox13->Checked=Ini->ReadBool("Ustawienia","ostatniplik",true);
	try
	{
	CheckBox6->Checked=Ini->ReadBool("Ustawienia","adaptacyjnypedzel",false);
	}
	catch(...)
	{
	return;
	}


delete Ini;

if(last_file){
	try
	{
	TIniFile *Ini2 = new TIniFile(ExtractFilePath(Application->ExeName)+"\\MultiNote_Data\\Variables.ini");
	Form1->file_name=Ini2->ReadString("Usprawnienia","ostatniplik","");
	Form1->tresc->Lines->LoadFromFile(Form1->file_name);
	Form1->name_without_path=ExtractFileName(Form1->file_name);
	Form1->Caption="Multi Note - "+Form1->name_without_path;
	Form1->file_opened = true;
	delete Ini2;
	}
	catch(...)
	{
    return;
	}

}
//---------------


}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
TIniFile *Ini = new TIniFile(ExtractFilePath(Application->ExeName)+"\\MultiNote_Data\\Ustawienia.ini");
Ini->WriteBool("Ustawienia", "autoodtwarzanie", CheckBox2->Checked);
Ini->WriteBool("Ustawienia","ochronasluchu", CheckBox7->Checked);
Ini->WriteBool("Ustawienia","czyscskladnik", CheckBox3->Checked);
Ini->WriteBool("Ustawienia","autolistaobrazow", CheckBox4->Checked);
Ini->WriteBool("Ustawienia","adaptacyjnypedzel", CheckBox6->Checked);
Ini->WriteBool("Ustawienia","interaktywnaikona", CheckBox10->Checked);
Ini->WriteBool("Ustawienia","powiadomieniawysuwane", CheckBox11->Checked);
Ini->WriteBool("Ustawienia","obliczanierozmiarupliku",CheckBox5->Checked);
Ini->WriteBool("Ustawienia","aktywnalinia",CheckBox12->Checked);
Ini->WriteBool("Ustawienia","ostatniplik",CheckBox13->Checked);

delete Ini;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox10Click(TObject *Sender)
{
	if(CheckBox10->Checked)
	{
	Form1->TrayIcon1->Visible=true;
	}
	else
	{
    Form1->TrayIcon1->Visible=false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm8::CheckBox11Click(TObject *Sender)
{
	if(CheckBox11->Checked)
	{
	windows_notifications = true;
	}
	else
	{
	windows_notifications = false;
	}
}
//---------------------------------------------------------------------------


void __fastcall TForm8::Button1Click(TObject *Sender)
{
ShellExecuteA(NULL, ("open"), LPCSTR("https://michaello99.wixsite.com/michaello99/flagowy-produkt-multi-note"), NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------



void __fastcall TForm8::Button2Click(TObject *Sender)
{
ShellExecuteA(NULL, _NULL, LPCSTR("mailto:michaello99@op.pl"), NULL, NULL, SW_SHOWNORMAL);
}
//---------------------------------------------------------------------------

void __fastcall TForm8::Label2DblClick(TObject *Sender)
{
Form8->ScrollBox1->Enabled=true;            //anulowanie zakonczenia wsparcia
Form6->support_ended = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox1Click(TObject *Sender)
{
	if(CheckBox1->Checked)
	{
	autosave = true;
	Form1->Timer1->Enabled = true;
	}
	else                                                //autozapis
	{
	autosave = false;
    Form1->Timer1->Enabled = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox5Click(TObject *Sender)
{
 	if(CheckBox5->Checked)
	{
	file_size_panel = true;
	}
	else
	{                                                //panel_rozmiar_pliku
	file_size_panel = false;
    Form1->Panel1->Visible = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox8Click(TObject *Sender)
{
	if(CheckBox8->Checked)
	{
	Form1->WindowState=wsMaximized;
	Form1->BorderStyle=bsNone;                     //tryb pelnoekranowy
	Form1->Align=alClient;
	}
	else
	{
	Form1->WindowState=wsNormal;
	Form1->BorderStyle=bsSizeable;
	Form1->Align=alNone;
	Form1->Height=470;
    Form1->Width=680;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox9Click(TObject *Sender)
{
	if(CheckBox9->Checked)
	{
    Form4->Image1->IncrementalDisplay = true;
	}                                                   //renderowanie czesciowe
	else
	{
    Form4->Image1->IncrementalDisplay = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox12Click(TObject *Sender)
{
	if(CheckBox12->Checked)
	{
	Form1->Panel3->Visible = true;
	}                                           //aktywna linia
	else
	{
	Form1->Panel3->Visible = false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm8::CheckBox13Click(TObject *Sender)
{
	if(CheckBox13->Checked)
	{
	last_file=true;
	}
	else                       //ostatni plik
	{
    last_file=false;
    }
}
//---------------------------------------------------------------------------

