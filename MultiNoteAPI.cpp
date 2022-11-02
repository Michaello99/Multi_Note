//---------------------------------------------------------------------------
#include <vcl.h>
#pragma hdrstop

#include "MultiNoteAPI.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
//---------------------------------------------------------------------------

float SumaText(AnsiString a,AnsiString b)      //pobranie liczb z pola tekstowego
{
float ako=atof(a.c_str());   //zamiana tekstu na zmiennoprzecinkowe
float bko=atof(b.c_str());
float wynik=ako+bko;
return wynik;
}