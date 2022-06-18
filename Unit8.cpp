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
void __fastcall TForm8::CheckBox1Click(TObject *Sender)
{
	if(CheckBox1->Checked==true)
	{
	Form1->Panel1->Visible=true;
	int bity = GetDeviceCaps(Canvas->Handle, BITSPIXEL);
	int refresh = GetDeviceCaps(Canvas->Handle, VREFRESH);
	if(Form1->width<1366||Form1->height<768)
	{
	Form1->Panel1->Caption = "Zbyt niska rozdzielczoœæ ekranu; Program zosta³ automatycznie okrojony z funkcji";
	}
	else if(Form1->width==1366||Form1->height==768)
	{
	Form1->Panel1->Caption="Rozdzielczoœæ ekranu "+IntToStr(Form1->width)+"x"+IntToStr(Form1->height)+", "+IntToStr(bity)+" bity, "+"odœwie¿anie: "+IntToStr(refresh)+"Hz"+", niektóre elementy interfejsu ukryte";
	}
	else
	{
	Form1->Panel1->Caption = "Rozdzielczoœæ ekranu OK: "+IntToStr(Form1->width)+"x"+IntToStr(Form1->height)+", "+IntToStr(bity)+" bity,"+" odœwie¿anie: "+IntToStr(refresh)+"Hz";
	}
	}
	if(CheckBox1->Checked==false)
	{
	Form1->Panel1->Visible=false;
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::CheckBox2Click(TObject *Sender)
{
	if (CheckBox2->Checked==true)
	{
	autoodtwarzanie="tak";
	}
	else
	{
	autoodtwarzanie="nie";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::CheckBox5Click(TObject *Sender)
{
	if(CheckBox5->Checked==false)
	{
        SetPriorityClass(GetCurrentProcess(), NORMAL_PRIORITY_CLASS);
         CheckBox5->Caption="Wy³¹czone";
	}
	else if(CheckBox5->Checked==true)
	{
        SetPriorityClass(GetCurrentProcess(), HIGH_PRIORITY_CLASS);
        CheckBox5->Caption="W³¹czone";
	}
}
//---------------------------------------------------------------------------
void __fastcall TForm8::CheckBox6Click(TObject *Sender)
{
		if(CheckBox6->Checked==false)
		{
        	adaptrys=false;
		}
        else if(CheckBox6->Checked==true)
        {
        	adaptrys=true;
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
	ochrona=false;
	}
	else if (CheckBox7->Checked==true)
	{
    ochrona=true;
	}
}
//---------------------------------------------------------------------------

