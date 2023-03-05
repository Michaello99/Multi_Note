//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.CustomizeDlg.hpp>
#include <Vcl.Samples.Gauges.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
	TRichEdit *tresc;
	TMainMenu *MainMenu1;
	TMenuItem *Plik1;
	TMenuItem *Schowek1;
	TMenuItem *Czynnoci1;
	TMenuItem *Edycjatekstu1;
	TMenuItem *Pomoc1;
	TMenuItem *Oprogramie1;
	TMenuItem *Nowyplik1;
	TMenuItem *Wczytajplik1;
	TMenuItem *Nadpiszbiecerdo1;
	TMenuItem *Zapiszjakonowy1;
	TMenuItem *N1;
	TMenuItem *Cofnij1;
	TMenuItem *Cofnij2;
	TMenuItem *Kopiuj1;
	TMenuItem *Wklej1;
	TMenuItem *Odtwarzacz1;
	TMenuItem *Przegldarkaobrazw1;
	TMenuItem *Kalkulator1;
	TMenuItem *Kalendarz1;
	TMenuItem *Rysownik1;
	TMenuItem *N2;
	TMenuItem *Ustawienia1;
	TMenuItem *WyczMultiNote1;
	TMenuItem *Zawijaniewierszy1;
	TMenuItem *Edycjaczcionki1;
	TMenuItem *Zoompolatekstowego1;
	TMenuItem *Pooenietekstu1;
	TMenuItem *ylkodoodczytu1;
	TMenuItem *Pomocsieciowa1;
	TOpenDialog *OpenDialog1;
	TSaveDialog *SaveDialog1;
	TFontDialog *FontDialog1;
	TPopupMenu *PopupMenu1;
	TTrayIcon *TrayIcon1;
	TPanel *Panel1;
	TMenuItem *N3;
	TMenuItem *N1001;
	TMenuItem *Dolewej1;
	TMenuItem *Narodku1;
	TMenuItem *Doprawej1;
	TMenuItem *Odtwarzacz2;
	TMenuItem *Rysownik2;
	TMenuItem *Przegldarkaobrazw2;
	TMenuItem *Kalkulator2;
	TMenuItem *Kalendarz2;
	TMenuItem *N4;
	TMenuItem *WyczMultiNote2;
	TMenuItem *Wznw1;
	TMenuItem *Zatrzymaj1;
	TMenuItem *Wczytajplik2;
	TMenuItem *Nastpny1;
	TMenuItem *Poprzedni1;
	TMenuItem *Zresetujutwr1;
	TPanel *Panel2;
	TEdit *Edit1;
	TButton *Button1;
	TMenuItem *Wyszukajwtekcie1;
	TButton *Button2;
	TMenuItem *Podwjny1;
	TMenuItem *Potrjny1;
	TLabel *Label1;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox2;
	TTimer *Timer1;
	TPanel *Panel3;
	TTimer *Timer2;
	TMenuItem *Odtwarzaczwideo1;
	void __fastcall Oprogramie1Click(TObject *Sender);
	void __fastcall Nowyplik1Click(TObject *Sender);
	void __fastcall WyczMultiNote1Click(TObject *Sender);
	void __fastcall Zapiszjakonowy1Click(TObject *Sender);
	void __fastcall Nadpiszbiecerdo1Click(TObject *Sender);
	void __fastcall Cofnij1Click(TObject *Sender);
	void __fastcall Cofnij2Click(TObject *Sender);
	void __fastcall Kopiuj1Click(TObject *Sender);
	void __fastcall Wklej1Click(TObject *Sender);
	void __fastcall Zawijaniewierszy1Click(TObject *Sender);
	void __fastcall Edycjaczcionki1Click(TObject *Sender);
	void __fastcall Pomocsieciowa1Click(TObject *Sender);
	void __fastcall ylkodoodczytu1Click(TObject *Sender);
	void __fastcall Odtwarzacz1Click(TObject *Sender);
	void __fastcall Przegldarkaobrazw1Click(TObject *Sender);
	void __fastcall N1001Click(TObject *Sender);
	void __fastcall Dolewej1Click(TObject *Sender);
	void __fastcall Narodku1Click(TObject *Sender);
	void __fastcall Doprawej1Click(TObject *Sender);
	void __fastcall Kalkulator1Click(TObject *Sender);
	void __fastcall Kalendarz1Click(TObject *Sender);
	void __fastcall Rysownik1Click(TObject *Sender);
	void __fastcall Ustawienia1Click(TObject *Sender);
	void __fastcall TrayIcon1Click(TObject *Sender);
	void __fastcall Rysownik2Click(TObject *Sender);
	void __fastcall Przegldarkaobrazw2Click(TObject *Sender);
	void __fastcall Kalkulator2Click(TObject *Sender);
	void __fastcall Kalendarz2Click(TObject *Sender);
	void __fastcall Wznw1Click(TObject *Sender);
	void __fastcall Zatrzymaj1Click(TObject *Sender);
	void __fastcall Wczytajplik2Click(TObject *Sender);
	void __fastcall Nastpny1Click(TObject *Sender);
	void __fastcall Poprzedni1Click(TObject *Sender);
	void __fastcall Zresetujutwr1Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Wyszukajwtekcie1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall WyczMultiNote2Click(TObject *Sender);
	void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Podwjny1Click(TObject *Sender);
	void __fastcall Potrjny1Click(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall Timer1Timer(TObject *Sender);
	void __fastcall Timer2Timer(TObject *Sender);
	void __fastcall Wczytajplik1Click(TObject *Sender);
	void __fastcall Odtwarzaczwideo1Click(TObject *Sender);
private:	// User declarations

public:		// User declarations
	void __fastcall load_file();
	__fastcall TForm1(TComponent* Owner);
	String file_name="";
	int width  = Screen->Width; // mierzy szerokoœæ ekranu.
	int height = Screen->Height; // mierzy wysokoœæ ekranu
	bool file_opened = false;
    AnsiString name_without_path;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
