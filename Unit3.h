//---------------------------------------------------------------------------

#ifndef Unit3H
#define Unit3H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.MPlayer.hpp>
//---------------------------------------------------------------------------
class TForm3 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label10;
	TImage *Image1;
	TButton *Button2;
	TOpenDialog *OpenDialog1;
	TTimer *Timer2;
	TLabel *Label1;
	TLabel *Label2;
	TProgressBar *ProgressBar1;
	TLabel *Label3;
	TButton *Button5;
	TButton *Button3;
	TButton *Button4;
	TButton *Button7;
	TButton *Button6;
	TLabel *Label4;
	TListBox *ListBox1;
	TButton *Button1;
	TImage *Image3;
	TTrackBar *TrackBar1;
	TImage *Image4;
	TPanel *Panel2;
	TMediaPlayer *MediaPlayer1;
	TPanel *Panel3;
	TTimer *Timer1;
	TTrayIcon *TrayIcon1;
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall TrackBar1Change(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall ListBox1DblClick(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button7Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
private:	// User declarations
void __fastcall CreateParams(TCreateParams &Params);
void __fastcall LoadFiles(void);
	void __fastcall PlayFile(int index);
	AnsiString FullTime(void);

public:		// User declarations
	__fastcall TForm3(TComponent* Owner);
    TStringList *Lista;
	AnsiString trayshow,opened,pause;
    int protecttime=0;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm3 *Form3;
//---------------------------------------------------------------------------
#endif
