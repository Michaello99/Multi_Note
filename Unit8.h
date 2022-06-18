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
//---------------------------------------------------------------------------
class TForm8 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TImage *Image2;
	TLabel *Label1;
	TPanel *Panel2;
	TLabel *Label9;
	TLabel *Label11;
	TLabel *Label2;
	TCheckBox *CheckBox1;
	TLabel *Label5;
	TCheckBox *CheckBox5;
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
	void __fastcall CheckBox1Click(TObject *Sender);
	void __fastcall CheckBox2Click(TObject *Sender);
	void __fastcall CheckBox5Click(TObject *Sender);
	void __fastcall CheckBox6Click(TObject *Sender);
	void __fastcall CheckBox7Click(TObject *Sender);
private:	// User declarations
 void __fastcall CreateParams(TCreateParams &Params);
public:		// User declarations
	__fastcall TForm8(TComponent* Owner);
	AnsiString autoodtwarzanie="tak";
    bool adaptrys=false,ochrona=true;
};
//---------------------------------------------------------------------------
extern PACKAGE TForm8 *Form8;
//---------------------------------------------------------------------------
#endif
