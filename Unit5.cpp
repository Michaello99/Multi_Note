//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit5.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
AnsiString a,b;
float wynik,ako,bko;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
wynik=0;
}
//---------------------------------------------------------------------------
 void __fastcall TForm5::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}
//-----------------------------------------------------------


void __fastcall TForm5::Button1Click(TObject *Sender)
{
try{
a=Edit1->Text;
b=Edit2->Text;
ako=atof(a.c_str());
bko=atof(b.c_str());
wynik=ako+bko;
Edit3->Text=wynik;
  if(Form8->CheckBox3->Checked==true)                        //dodawanie
  {
	Edit1->Text="";
	Edit2->Text="";
  }
}
catch (...)
{
 ShowMessage("B³¹d kalkulatora Multi Note");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button2Click(TObject *Sender)
{
try{
a=Edit1->Text;
b=Edit2->Text;
ako=atof(a.c_str());
bko=atof(b.c_str());
wynik=ako-bko;
Edit3->Text=wynik;
  if(Form8->CheckBox3->Checked==true)                        //odejmowanie
  {
	Edit1->Text="";
	Edit2->Text="";
  }
}
catch (...)
{
 ShowMessage("B³¹d kalkulatora Multi Note");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button3Click(TObject *Sender)
{
try{
a=Edit1->Text;
b=Edit2->Text;
ako=atof(a.c_str());
bko=atof(b.c_str());
wynik=ako*bko;
Edit3->Text=wynik;
  if(Form8->CheckBox3->Checked==true)                        //mno¿enie
  {
	Edit1->Text="";
	Edit2->Text="";
  }
}
catch (...)
{
 ShowMessage("B³¹d kalkulatora Multi Note");
}
}
//---------------------------------------------------------------------------
void __fastcall TForm5::Button4Click(TObject *Sender)
{
try{
a=Edit1->Text;
b=Edit2->Text;
ako=atof(a.c_str());
bko=atof(b.c_str());
wynik=ako/bko;
Edit3->Text=wynik;
  if(Form8->CheckBox3->Checked==true)                        //dzielenie
  {
	Edit1->Text="";
	Edit2->Text="";
  }
}
catch (...)
{
 ShowMessage("B³¹d kalkulatora Multi Note");
}
}
//---------------------------------------------------------------------------
