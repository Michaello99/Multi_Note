//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit8.h"
#include "Unit9.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm9 *Form9;
bool video_playing = false;
//---------------------------------------------------------------------------
__fastcall TForm9::TForm9(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button1Click(TObject *Sender)
{
	if(OpenDialog1->Execute())
	{
	MediaPlayer1->FileName = OpenDialog1->FileName;
	MediaPlayer1->Open();
		if(video_playing == false)
		{
		 MediaPlayer1->Play();
		 MediaPlayer1->DisplayRect = Panel2->ClientRect;
		 video_playing = true;
        }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm9::Button3Click(TObject *Sender)
{
MediaPlayer1->Play();
MediaPlayer1->DisplayRect = Panel2->ClientRect;
video_playing = true;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::Button2Click(TObject *Sender)
{
MediaPlayer1->Stop();
video_playing = false;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::FormResize(TObject *Sender)
{
MediaPlayer1->DisplayRect = Panel2->ClientRect;
}
//---------------------------------------------------------------------------
void __fastcall TForm9::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}