//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit7.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm7 *Form7;
//---------------------------------------------------------------------------
__fastcall TForm7::TForm7(TComponent* Owner)
	: TForm(Owner)
{
DoubleBuffered=true;
}
//---------------------------------------------------------------------------
 void __fastcall TForm7::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}
//------------------
bool draw = false;
TPoint OldPos;
//---------------


void __fastcall TForm7::Image1MouseDown(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
draw = true;
OldPos = Point(X, Y);
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image1MouseUp(TObject *Sender, TMouseButton Button, TShiftState Shift,
          int X, int Y)
{
draw = false;
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image1MouseMove(TObject *Sender, TShiftState Shift, int X,
          int Y)
{
 if(draw==true)
 {
  Image1->Canvas->MoveTo(OldPos.x, OldPos.y);
  OldPos = Point(X, Y);
  Image1->Canvas->LineTo(X, Y);
 }
}
//---------------------------------------------------------------------------

void __fastcall TForm7::FormCreate(TObject *Sender)
{
 Image1->Canvas->Pen->Color = clWhite;
 Image1->Canvas->Pen->Width = 2;
 Image1->Canvas->Brush->Color = clBlack;
 Image1->Canvas->FillRect( TRect(0,0,Image1->Width,Image1->Height));
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image4Click(TObject *Sender)
{
if(SaveDialog1->Execute())
{
   if(SaveDialog1->FilterIndex==1){
	Image1->Picture->SaveToFile(SaveDialog1->FileName+".jpg");
   }
   else if(SaveDialog1->FilterIndex==2){
    Image1->Picture->SaveToFile(SaveDialog1->FileName+".png");
   }

}
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image2Click(TObject *Sender)
{
   if(Form8->adaptivedraw==false)
    {
	if(ColorDialog1->Execute())
	{
	Image1->Canvas->Pen->Color=ColorDialog1->Color;
	}
    }
	else if(Form8->adaptivedraw==true)
    {
    ShowMessage("Adaptacyjny kolor pióra jest w³¹czony. Wy³¹cz go w Ustawieniach.");
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm7::Image6Click(TObject *Sender)
{
Image1->Canvas->FillRect(TRect(0,0,Image1->Width,Image1->Height));
}
//---------------------------------------------------------------------------

void __fastcall TForm7::Image7Click(TObject *Sender)
{
 if(Image1->Canvas->Brush->Color==clWhite)
    {
	Image1->Canvas->Brush->Color = clBlack;
	Image1->Canvas->FillRect(TRect(0,0,Image1->Width,Image1->Height));
		if(Form8->adaptivedraw==true)
        {
         Image1->Canvas->Pen->Color=clWhite;
        }
    }
    else if(Image1->Canvas->Brush->Color==clBlack)
    {
       Image1->Canvas->Brush->Color = clBlue;
	Image1->Canvas->FillRect(TRect(0,0,Image1->Width,Image1->Height));
		 if(Form8->adaptivedraw==true)
        {
         Image1->Canvas->Pen->Color=clWhite;
        }
    }
    else if(Image1->Canvas->Brush->Color==clBlue)
    {
	Image1->Canvas->Brush->Color = clWhite;
	Image1->Canvas->FillRect(TRect(0,0,Image1->Width,Image1->Height));
         if(Form8->adaptivedraw==true)
        {
         Image1->Canvas->Pen->Color=clBlack;
        }
    }
}
//---------------------------------------------------------------------------


void __fastcall TForm7::width_trackbarChange(TObject *Sender)
{
Image1->Canvas->Pen->Width = width_trackbar->Position;
}
//---------------------------------------------------------------------------

