//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit5.h"
#include "Unit8.h"
#include "C:/Users/micha/Desktop/mnmodul/mnmodul.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm5 *Form5;
//---------------------------------------------------------------------------
__fastcall TForm5::TForm5(TComponent* Owner)
	: TForm(Owner)
{
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
Edit3->Text=Suma(Edit1->Text,Edit2->Text);
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
Edit3->Text=Roznica(Edit1->Text,Edit2->Text);
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
Edit3->Text=Iloczyn(Edit1->Text,Edit2->Text);
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
Edit3->Text=Iloraz(Edit1->Text,Edit2->Text);
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


