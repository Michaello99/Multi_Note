object Form1: TForm1
  Left = 0
  Top = 0
  Caption = 'Multi Note'
  ClientHeight = 411
  ClientWidth = 672
  Color = clBtnFace
  Constraints.MinHeight = 200
  Constraints.MinWidth = 400
  UseDockManager = True
  DockSite = True
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = 20
  Font.Name = 'Segoe UI'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Visible = True
  OnClose = FormClose
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 20
  object tresc: TRichEdit
    Left = 0
    Top = 65
    Width = 672
    Height = 292
    Align = alClient
    BevelInner = bvNone
    BevelOuter = bvNone
    BorderStyle = bsNone
    Color = clWhite
    Font.Charset = EASTEUROPE_CHARSET
    Font.Color = clGray
    Font.Height = 25
    Font.Name = 'Segoe UI'
    Font.Style = []
    HideScrollBars = False
    Lines.Strings = (
      '')
    ParentFont = False
    ScrollBars = ssVertical
    TabOrder = 0
    WantTabs = True
    Zoom = 100
  end
  object Panel1: TPanel
    Left = 0
    Top = 384
    Width = 672
    Height = 27
    Align = alBottom
    Alignment = taLeftJustify
    Caption = 'NULL'
    FullRepaint = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    Visible = False
  end
  object Panel2: TPanel
    Left = 0
    Top = 0
    Width = 672
    Height = 65
    Align = alTop
    Alignment = taLeftJustify
    FullRepaint = False
    ShowCaption = False
    TabOrder = 2
    Visible = False
    DesignSize = (
      672
      65)
    object Label1: TLabel
      Left = 8
      Top = 7
      Width = 136
      Height = 20
      Caption = 'Tekst do wyszukania:'
    end
    object Edit1: TEdit
      Left = 152
      Top = 4
      Width = 337
      Height = 28
      Anchors = [akLeft, akTop, akRight]
      TabOrder = 0
      Visible = False
      OnKeyDown = Edit1KeyDown
    end
    object Button1: TButton
      Left = 495
      Top = 3
      Width = 81
      Height = 30
      Hint = 'Naciskaj kilka razy aby przechodzi'#263' do kolejnych wynik'#243'w'
      Anchors = [akTop, akRight]
      Caption = 'Szukaj'
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      Visible = False
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 582
      Top = 3
      Width = 83
      Height = 30
      Anchors = [akTop, akRight]
      Caption = 'Zamknij'
      TabOrder = 2
      OnClick = Button2Click
    end
    object CheckBox1: TCheckBox
      Left = 8
      Top = 38
      Width = 201
      Height = 21
      Caption = 'Uwzgl'#281'dniaj wielko'#347#263' liter'
      TabOrder = 3
      OnClick = CheckBox1Click
    end
    object CheckBox2: TCheckBox
      Left = 215
      Top = 38
      Width = 186
      Height = 21
      Caption = 'Szukaj jako ca'#322'e s'#322'owo'
      TabOrder = 4
      OnClick = CheckBox2Click
    end
  end
  object Panel3: TPanel
    Left = 0
    Top = 357
    Width = 672
    Height = 27
    Align = alBottom
    Alignment = taLeftJustify
    Caption = 'Aktywna linia: '
    FullRepaint = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 3
  end
  object MainMenu1: TMainMenu
    BiDiMode = bdLeftToRight
    OwnerDraw = True
    ParentBiDiMode = False
    Left = 80
    Top = 72
    object Plik1: TMenuItem
      Caption = 'Plik'
      object Nowyplik1: TMenuItem
        Caption = 'Nowy plik'
        ShortCut = 16462
        OnClick = Nowyplik1Click
      end
      object Wczytajplik1: TMenuItem
        Caption = 'Wczytaj plik'
        ShortCut = 16471
        OnClick = Wczytajplik1Click
      end
      object N1: TMenuItem
        Caption = '-'
      end
      object Nadpiszbiecerdo1: TMenuItem
        Caption = 'Nadpisz bie'#380#261'ce '#378'r'#243'd'#322'o'
        ShortCut = 16467
        OnClick = Nadpiszbiecerdo1Click
      end
      object Zapiszjakonowy1: TMenuItem
        Caption = 'Zapisz jako nowy plik'
        OnClick = Zapiszjakonowy1Click
      end
    end
    object Schowek1: TMenuItem
      Caption = 'Schowek'
      object Cofnij1: TMenuItem
        Caption = 'Cofnij (Ctrl+Z)'
        OnClick = Cofnij1Click
      end
      object Cofnij2: TMenuItem
        Caption = 'Wytnij (Ctrl+X)'
        OnClick = Cofnij2Click
      end
      object Kopiuj1: TMenuItem
        Caption = 'Kopiuj (Ctrl+C)'
        OnClick = Kopiuj1Click
      end
      object Wklej1: TMenuItem
        Caption = 'Wklej (Ctrl+V)'
        OnClick = Wklej1Click
      end
    end
    object Czynnoci1: TMenuItem
      Caption = 'Czynno'#347'ci'
      object Odtwarzacz1: TMenuItem
        Caption = 'Odtwarzacz muzyki'
        OnClick = Odtwarzacz1Click
      end
      object Odtwarzaczwideo1: TMenuItem
        Caption = 'Odtwarzacz wideo'
        OnClick = Odtwarzaczwideo1Click
      end
      object Przegldarkaobrazw1: TMenuItem
        Caption = 'Obrazy'
        OnClick = Przegldarkaobrazw1Click
      end
      object Kalkulator1: TMenuItem
        Caption = 'Kalkulator'
        OnClick = Kalkulator1Click
      end
      object Kalendarz1: TMenuItem
        Caption = 'Kalendarz'
        OnClick = Kalendarz1Click
      end
      object Rysownik1: TMenuItem
        Caption = 'Rysownik'
        OnClick = Rysownik1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object WyczMultiNote1: TMenuItem
        Caption = 'Wy'#322#261'cz program (Alt+F4)'
        OnClick = WyczMultiNote1Click
      end
    end
    object Edycjatekstu1: TMenuItem
      Caption = 'Edycja tekstu'
      object Zawijaniewierszy1: TMenuItem
        Caption = 'Zawijanie wierszy'
        Checked = True
        OnClick = Zawijaniewierszy1Click
      end
      object Edycjaczcionki1: TMenuItem
        Caption = 'Edycja czcionki'
        OnClick = Edycjaczcionki1Click
      end
      object Zoompolatekstowego1: TMenuItem
        Caption = 'Zoom pola tekstowego'
        object N1001: TMenuItem
          Caption = 'Domy'#347'lny'
          Checked = True
          OnClick = N1001Click
        end
        object Podwjny1: TMenuItem
          Caption = 'Podw'#243'jny'
          OnClick = Podwjny1Click
        end
        object Potrjny1: TMenuItem
          Caption = 'Potr'#243'jny'
          OnClick = Potrjny1Click
        end
      end
      object Pooenietekstu1: TMenuItem
        Caption = 'Po'#322'o'#380'enie tekstu'
        object Dolewej1: TMenuItem
          Caption = 'Do lewej'
          OnClick = Dolewej1Click
        end
        object Narodku1: TMenuItem
          Caption = 'Na '#347'rodku'
          OnClick = Narodku1Click
        end
        object Doprawej1: TMenuItem
          Caption = 'Do prawej'
          OnClick = Doprawej1Click
        end
      end
      object Wyszukajwtekcie1: TMenuItem
        Caption = 'Wyszukiwanie w tek'#347'cie'
        OnClick = Wyszukajwtekcie1Click
      end
      object N3: TMenuItem
        Caption = '-'
      end
      object ylkodoodczytu1: TMenuItem
        Caption = 'Tylko do odczytu'
        OnClick = ylkodoodczytu1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc i ustawienia'
      object Oprogramie1: TMenuItem
        Caption = 'O programie'
        OnClick = Oprogramie1Click
      end
      object Pomocsieciowa1: TMenuItem
        Caption = 'Porady '
        OnClick = Pomocsieciowa1Click
      end
      object Ustawienia1: TMenuItem
        Caption = 'Ustawienia i wsparcie'
        OnClick = Ustawienia1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 
      'Plik tekstowy z formatowaniem (RTF)|*.rtf|Plik tekstowy bez form' +
      'atowania (TXT)|*.txt|Wszystkie pliki|*.*'
    Title = 'Wczytaj tekst'
    Left = 160
    Top = 72
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy z formatowaniem (RTF)|*.rtf'
    Title = 'Zapisz tekst'
    Left = 224
    Top = 72
  end
  object FontDialog1: TFontDialog
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -20
    Font.Name = 'Segoe UI'
    Font.Style = []
    Left = 296
    Top = 72
  end
  object PopupMenu1: TPopupMenu
    Left = 376
    Top = 72
    object Odtwarzacz2: TMenuItem
      Caption = 'Odtwarzacz muzyki'
      object Wznw1: TMenuItem
        Caption = 'Wzn'#243'w'
        OnClick = Wznw1Click
      end
      object Zatrzymaj1: TMenuItem
        Caption = 'Zatrzymaj'
        OnClick = Zatrzymaj1Click
      end
      object Wczytajplik2: TMenuItem
        Caption = 'Wczytaj plik'
        OnClick = Wczytajplik2Click
      end
      object Nastpny1: TMenuItem
        Caption = 'Nast'#281'pny'
        OnClick = Nastpny1Click
      end
      object Poprzedni1: TMenuItem
        Caption = 'Poprzedni'
        OnClick = Poprzedni1Click
      end
      object Zresetujutwr1: TMenuItem
        Caption = 'Zresetuj utw'#243'r'
        OnClick = Zresetujutwr1Click
      end
    end
    object Rysownik2: TMenuItem
      Caption = 'Rysownik'
      OnClick = Rysownik2Click
    end
    object Przegldarkaobrazw2: TMenuItem
      Caption = 'Przegl'#261'darka obraz'#243'w'
      OnClick = Przegldarkaobrazw2Click
    end
    object Kalkulator2: TMenuItem
      Caption = 'Kalkulator'
      OnClick = Kalkulator2Click
    end
    object Kalendarz2: TMenuItem
      Caption = 'Kalendarz'
      OnClick = Kalendarz2Click
    end
    object N4: TMenuItem
      Caption = '-'
    end
    object WyczMultiNote2: TMenuItem
      Caption = 'Wy'#322#261'cz Multi Note'
      OnClick = WyczMultiNote2Click
    end
  end
  object TrayIcon1: TTrayIcon
    Hint = 'Multi Note 15'
    PopupMenu = PopupMenu1
    Visible = True
    OnClick = TrayIcon1Click
    Left = 440
    Top = 72
  end
  object Timer1: TTimer
    Enabled = False
    Interval = 15000
    OnTimer = Timer1Timer
    Left = 496
    Top = 72
  end
  object Timer2: TTimer
    Interval = 300
    OnTimer = Timer2Timer
    Left = 544
    Top = 72
  end
end
