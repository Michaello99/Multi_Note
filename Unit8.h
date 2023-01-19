//---------------------------------------------------------------------------

#ifndef Unit8H
#define Unit8H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <IPPeerClient.hpp>
#include <IPPeerServer.hpp>
#include <System.Tether.Manager.hpp>
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image2;
	TLabel *Label1;
	TScrollBox *ScrollBox1;
	TLabel *Label8;
	TCheckBox *CheckBox2;
	TLabel *Label10;
	TCheckBox *CheckBox3;
	TLabel *Label3;
	TCheckBox *CheckBox4;
	TLabel *Label12;
	TCheckBox *CheckBox6;
	TLabel *Label4;
	TCheckBox *CheckBox7;
	TLabel *Label14;
	TLabel *Label6;
	TCheckBox *CheckBox10;
	TCheckBox *CheckBox11;
	TLabel *Label2;
	TScrollBox *ScrollBox2;
	TLabel *Label5;
	TLabel *Label7;
	TButton *Button1;
	TLabel *end_of_support;
	TLabel *end_of_support2;
	TLabel *Label9;
	TLabel *Label11;
	TButton *Button2;
	TLabel *Label15;
	TLabel *Label16;
	TLabel *Label13;
	TCheckBox *CheckBox1;
	TCheckBox *CheckBox5;
	TCheckBox *CheckBox8;
	TCheckBox *CheckBox9;
	TCheckBox *CheckBox12;
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox6Click(TObject *Sender);
	void __fastcall CheckBox7Click(TObject *Sender);
	void __fastcall ScrollBox1MouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall ScrollBox1MouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall CheckBox10Click(TObject *Sender);
	void __fastcall CheckBox11Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Label2DblClick(TObject *Sender);
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall CheckBox8Click(TObject *Sender);
	void __fastcall CheckBox9Click(TObject *Sender);
	void __fastcall CheckBox12Click(TObject *Sender);

private:	// User declarations
 void __fastcall CreateParams(TCreateParams &Params);
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
	bool autoplay = true;
	bool adaptivedraw=false,protect=true,dynamic_form=true,letter_size=false,whole_word=false;
	bool windows_notifications = true;
	bool autosave = false;
	bool file_size_panel = false;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
