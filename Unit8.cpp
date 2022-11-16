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
	else
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
        	{
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
	protect=false;                     //ochrona sluchu
	}
	else if (CheckBox7->Checked==true)
	{
    protect=true;
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
TIniFile *Ini = new TIniFile(ExtractFilePath(Application->ExeName)+"\\Ustawienia.ini");
CheckBox2->Checked=Ini->ReadBool("Ustawienia", "autoodtwarzanie", true);
CheckBox7->Checked=Ini->ReadBool("Ustawienia","ochronasluchu",true);
CheckBox3->Checked=Ini->ReadBool("Ustawienia","czyscskladnik",true);
CheckBox4->Checked=Ini->ReadBool("Ustawienia","autolistaobrazow",true);
Form1->CheckBox1->Checked=Ini->ReadBool("Ustawienia","wielkoscliter",false);
Form1->CheckBox2->Checked=Ini->ReadBool("Ustawienia","caleslowa",false);
CheckBox10->Checked=Ini->ReadBool("Ustawienia","interaktywnaikona",true);
CheckBox11->Checked=Ini->ReadBool("Ustawienia","powiadomieniawysuwane",true);
	try{
	CheckBox6->Checked=Ini->ReadBool("Ustawienia","adaptacyjnypedzel",false);
	}
	catch(...)
	{
	return;
	}
delete Ini;
//---------------

}
//---------------------------------------------------------------------------

void __fastcall TForm8::FormClose(TObject *Sender, TCloseAction &Action)
{
TIniFile *Ini = new TIniFile(ExtractFilePath(Application->ExeName)+"\\Ustawienia.ini");
Ini->WriteBool("Ustawienia", "autoodtwarzanie", CheckBox2->Checked);
Ini->WriteBool("Ustawienia","ochronasluchu", CheckBox7->Checked);
Ini->WriteBool("Ustawienia","czyscskladnik", CheckBox3->Checked);
Ini->WriteBool("Ustawienia","autolistaobrazow", CheckBox4->Checked);
Ini->WriteBool("Ustawienia","wielkoscliter", Form1->CheckBox1->Checked);
Ini->WriteBool("Ustawienia","caleslowa", Form1->CheckBox2->Checked);
Ini->WriteBool("Ustawienia","adaptacyjnypedzel", CheckBox6->Checked);
Ini->WriteBool("Ustawienia","interaktywnaikona", CheckBox10->Checked);
Ini->WriteBool("Ustawienia","powiadomieniawysuwane", CheckBox11->Checked);
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
	else{
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
Form8->ScrollBox1->Enabled=true;
}
//---------------------------------------------------------------------------

