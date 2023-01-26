//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include "Unit1.h"
#include "Unit3.h"
#include "Unit8.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm3 *Form3;

//---------------------------------------------------------------------------
__fastcall TForm3::TForm3(TComponent* Owner)
	: TForm(Owner)
{
Application->HintHidePause = 10000;
opened="nie";
pause="nie";

}
//---------------------------------------------------------------------------
 void __fastcall TForm3::CreateParams(TCreateParams &Params)
{
 TForm::CreateParams(Params);
 Params.ExStyle |= WS_EX_APPWINDOW;
 Params.WndParent = GetDesktopWindow();
}


void __fastcall TForm3::FormActivate(TObject *Sender)
{
 if(opened=="tak")
   {
   Label1->Caption=ExtractFileName(MediaPlayer1->FileName);
   }
   else
   {
	Label1->Caption="Tytu³";
   }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormCreate(TObject *Sender)
{
	Lista = new TStringList;
	MediaPlayer1->Show();

}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button3Click(TObject *Sender)
{
if(pause=="nie")
  {
	try{
	Timer2->Enabled = false;
	MediaPlayer1->Pause();
	pause="tak";
	protecttime=0;
	Timer1->Enabled = false;
	}
	catch(...)
	{
	ShowMessage("B³¹d. ¯aden plik nie jest odtwarzany.");
	}
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button4Click(TObject *Sender)
{
	try{
	Timer2->Enabled=false;
	MediaPlayer1->Enabled=false;
	MediaPlayer1->Close();
	opened="nie";
	PlayFile(ListBox1->ItemIndex);
	}
	catch(...)
	{
	ShowMessage("B³¹d. Brak pliku w odtwarzaczu.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button5Click(TObject *Sender)
{
try{
	if(pause=="tak")
	{
	Timer2->Enabled = true;
	MediaPlayer1->Play();
	pause="nie";
	opened="tak";
		if(TrackBar1->Position>40000&&Form8->protect&&Timer1->Enabled==false)
		{
		Timer1->Enabled=true;
		}
	}
}
catch(...)
{
 ShowMessage("B³¹d wznawiania pliku");
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::TrackBar1Change(TObject *Sender)
{
waveOutSetVolume(0, (TrackBar1->Position * 65536) + TrackBar1->Position);
if(TrackBar1->Position==65535)
{
   if(Form8->protect==true)
  {
   TrackBar1->Position=40000;
	if (Application->MessageBox(L"Czy na pewno chcesz aktywowaæ maksymaln¹ g³oœnoœæ programu?\n \nUpewnij siê, ¿e g³oœnoœæ ogólna systemu nie jest zbyt wysoka, aby nie naraziæ siê na uszkodzenie s³uchu.",L"Ostrze¿enie",MB_YESNO | MB_ICONEXCLAMATION) == IDYES)
	{
        max_volume_timer->Enabled=true;
		//TrackBar1->Position=65530;
	}
	else
	{
    return;
	}
  }
}
	if(TrackBar1->Position>40000&&Form8->protect)
	{
	 Timer1->Enabled=true;
	}
	else
	{
	 Timer1->Enabled=false;
	 protecttime=0;
    }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormDestroy(TObject *Sender)
{
Lista->Free();                 //niszczenie formy
MediaPlayer1->Free();
Timer2->Enabled=false;
}
//---------------------------------------------------------------------------
 void __fastcall TForm3::LoadFiles(void)
{
	if(OpenDialog1->Execute())
	{
		for(int i = 0; i < Lista->Count; i++)
		{
		if(OpenDialog1->FileName == Lista->Strings[i]) return;   //jesli juz jest taki plik na liscie to zwraca
		}
		Lista->Add(OpenDialog1->FileName); //dodaje do listy plik
		ListBox1->Items->Add(ExtractFileName(OpenDialog1->FileName));
		if(Lista->Count==1)
		{
		     //autoodtw pierwszego pliku
			if(Form8->autoplay==true&&opened!="tak")
			{
			ListBox1->ItemIndex=0;
			PlayFile(ListBox1->ItemIndex);
			opened="tak";
			}
		}
	 }
}

   //-----------------------------------------------

void __fastcall TForm3::Button1Click(TObject *Sender)
{
ListBox1->Items->Clear();     //czyszczenie pamieci
Lista->Clear();
}
//---------------------------------------------------------------------------
AnsiString TForm3::FullTime(void)
{
  String MediaLength = "??:??:??";
  MediaPlayer1->TimeFormat = tfMilliseconds;
  int Time = MediaPlayer1->Length / 1000;
  int Hours = Time / 3600;
  int Minutes = (Time - (Hours*3600)) / 60;
  int Seconds = Time - (Hours*3600) - (Minutes*60);

  MediaLength = FormatCurr("D³ugoœæ: 0#:", Hours);
  MediaLength += FormatCurr("0#:", Minutes);
  MediaLength += FormatCurr("0#", Seconds);

  return MediaLength;
}
//--------------------------------------------------------
void __fastcall TForm3::PlayFile(int index)
{
	try
	{
	    if(FileExists(Lista->Strings[index])==1)
   		{
		MediaPlayer1->FileName = Lista->Strings[index];
		MediaPlayer1->Open();
		Label1->Caption=ExtractFileName(MediaPlayer1->FileName);
		trayshow=Label1->Caption;
		MediaPlayer1->Enabled=true;
		ProgressBar1->Max = MediaPlayer1->Length;
		MediaPlayer1->Play();
		Timer2->Enabled = true;
		Label3->Caption=FullTime();
		pause="nie";
		opened="tak";
   		}
		else
		{
		ShowMessage("Ten utwór zosta³ przeniesiony lub jest uszkodzony");
		}

	}
	catch(...)
	{
    		ShowMessage("B³¹d odtwarzania. SprawdŸ stan pliku.");
	}
}
//------------------------------------------

void __fastcall TForm3::Timer2Timer(TObject *Sender)
{
	ProgressBar1->Position = MediaPlayer1->Position;
	if(ProgressBar1->Position == MediaPlayer1->Length)
	{
	   Timer2->Enabled = false;
	   if(Form8->autoplay==true)
	   {
		if(ListBox1->ItemIndex < ListBox1->Items->Count - 1)
		{
		ListBox1->ItemIndex = ListBox1->ItemIndex + 1;
		}
		else ListBox1->ItemIndex = 0;
		MediaPlayer1->Close();
		PlayFile(ListBox1->ItemIndex);
	   }
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::ListBox1DblClick(TObject *Sender)
{
if(ListBox1->ItemIndex >= 0)
{
PlayFile(ListBox1->ItemIndex);
}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button6Click(TObject *Sender)
{
	try{
	if(ListBox1->ItemIndex > 0)
	ListBox1->ItemIndex--;
	PlayFile(ListBox1->ItemIndex);
	}
	catch(...)
	{
	ShowMessage("B³¹d. Brak plików na liœcie lub uszkodzony plik.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button7Click(TObject *Sender)
{
   try
	{
	if(ListBox1->ItemIndex < ListBox1->Items->Count)
	ListBox1->ItemIndex++;
	PlayFile(ListBox1->ItemIndex);
	}
	catch(...)
	{
	ShowMessage("B³¹d. Brak plików na liœcie lub uszkodzony plik.");
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image3Click(TObject *Sender)
{
TrackBar1->Position=1;
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Image4Click(TObject *Sender)
{
  if(Form8->protect==true)
  {
	 if(TrackBar1->Position<65430){
		if (Application->MessageBox(L"Czy na pewno chcesz aktywowaæ maksymaln¹ g³oœnoœæ programu?\n \nUpewnij siê, ¿e g³oœnoœæ ogólna systemu nie jest zbyt wysoka, aby nie naraziæ siê na uszkodzenie s³uchu.",L"Ostrze¿enie",MB_YESNO | MB_ICONEXCLAMATION) == IDYES)
		{
		max_volume_timer->Enabled=true;
		}
	 }
	 else{
         return;
     }
  }
  else
  {
  TrackBar1->Position=65534;
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::Button2Click(TObject *Sender)
{
 try
  {
  LoadFiles();
  opened="tak";
  }
  catch(...)
  {
  ShowMessage("B³¹d otwarcia pliku. Jeœli masz problem, zajrzyj na moj¹ stronê WWW.");
  }
}
//---------------------------------------------------------------------------

void __fastcall TForm3::FormShow(TObject *Sender)
{
	if(Form8->protect==true)
	{
	waveOutSetVolume(0, (TrackBar1->Position * 65536) + TrackBar1->Position);
	}
}
//---------------------------------------------------------------------------




void __fastcall TForm3::Timer1Timer(TObject *Sender)
{
protecttime+=1;
	if(protecttime>=300&&pause=="nie"&&opened=="tak"&&protect_alerts==0)
	{
	 protecttime=0;
	 protect_alerts++;
	 if(Form8->windows_notifications)
	 {
	 TrayIcon1->Visible=true;
     TrayIcon1->BalloonFlags = bfInfo;
	 TrayIcon1->BalloonHint="S³uchasz muzyki zbyt g³oœno. Rozwa¿ zmniejszenie g³oœnoœci odtwarzacza";
	 TrayIcon1->BalloonTitle="Multi Note - Ochrona s³uchu";
	 TrayIcon1->ShowBalloonHint();
	 TrayIcon1->Visible=false;
	 }
	 else
	 {
	  ShowMessage("S³uchasz muzyki zbyt g³oœno. Rozwa¿ zmniejszenie g³oœnoœci odtwarzacza");
	 }
	}
	else if (protecttime>=300&&pause=="nie"&&opened=="tak"&&protect_alerts>0)
	{
	 protecttime=0;
	 protect_alerts++;
     if(Form8->windows_notifications)
	 {
	 TrayIcon1->Visible=true;
     TrayIcon1->BalloonFlags = bfWarning;
	 TrayIcon1->BalloonHint="S³uchasz muzyki zbyt g³oœno. Ochrona s³uchu zmniejsza g³oœnoœæ odtwarzacza";
	 TrayIcon1->BalloonTitle="Multi Note - Ochrona s³uchu";
	 TrayIcon1->ShowBalloonHint();
	 TrayIcon1->Visible=false;
     alert_volume_timer->Enabled=true;
	 }
	 else
	 {
	  ShowMessage("S³uchasz muzyki zbyt g³oœno. Ochrona s³uchu zmniejsza g³oœnoœæ odtwarzacza");
	 }
    }
}
//---------------------------------------------------------------------------



void __fastcall TForm3::max_volume_timerTimer(TObject *Sender)
{
	TrackBar1->Position+=100;
	if(TrackBar1->Position>=65430){
	max_volume_timer->Enabled=false;
	}
}
//---------------------------------------------------------------------------

void __fastcall TForm3::alert_volume_timerTimer(TObject *Sender)
{
	TrackBar1->Position-=100;
	if(TrackBar1->Position<=39000){
	alert_volume_timer->Enabled=false;
	}
}
//---------------------------------------------------------------------------

