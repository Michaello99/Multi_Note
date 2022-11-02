//---------------------------------------------------------------------------

#ifndef Unit4H
#define Unit4H
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Menus.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <fstream>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Dialogs.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Menus.hpp>
#include <System.ImageList.hpp>
#include <Vcl.ImgList.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Imaging.jpeg.hpp>
#include <Vcl.Imaging.GIFimg.hpp>
#include <Vcl.Imaging.GIFConsts.hpp>
//---------------------------------------------------------------------------
class TForm4 : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TLabel *Label10;
	TImage *Image2;
	TImage *Image4;
	TImage *Image5;
	TImage *Image6;
	TImage *Image1;
	TListBox *ListBox1;
	TOpenDialog *OpenDialog1;
	TPanel *Panel2;
	TScrollBox *ScrollBox1;
	TPopupMenu *PopupMenu1;
	TMenuItem *Dopasujdookna1;
	TButton *Button1;
	void __fastcall FormCreate(TObject *Sender);
	void __fastcall FormDestroy(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall FormActivate(TObject *Sender);
	void __fastcall ListBox1Click(TObject *Sender);
	void __fastcall Image6Click(TObject *Sender);
	void __fastcall ScrollBox1MouseWheelDown(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall ScrollBox1MouseWheelUp(TObject *Sender, TShiftState Shift, TPoint &MousePos,
          bool &Handled);
	void __fastcall Dopasujdookna1Click(TObject *Sender);
	void __fastcall FormKeyDown(TObject *Sender, WORD &Key, TShiftState Shift);
	void __fastcall Button1Click(TObject *Sender);

private:	// User declarations
void __fastcall WczytajObrazek(void);
void __fastcall PokazObrazek(int index);

 void __fastcall CreateParams(TCreateParams &Params);
public:		// User declarations
	__fastcall TForm4(TComponent* Owner);
    TStringList *Listao;

};
//---------------------------------------------------------------------------
extern PACKAGE TForm4 *Form4;
//---------------------------------------------------------------------------
#endif
