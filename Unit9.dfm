object Form9: TForm9
  Left = 0
  Top = 0
  Caption = 'Odtwarzacz wideo'
  ClientHeight = 393
  ClientWidth = 664
  Color = clBtnFace
  Constraints.MinHeight = 350
  Constraints.MinWidth = 660
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  OnResize = FormResize
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 664
    Height = 58
    Hint = 'Panel g'#243'rny'
    Align = alTop
    DockSite = True
    FullRepaint = False
    ParentShowHint = False
    ShowCaption = False
    ShowHint = True
    TabOrder = 0
    DesignSize = (
      664
      58)
    object Label1: TLabel
      Left = 60
      Top = 10
      Width = 203
      Height = 35
      Caption = 'Odtwarzacz wideo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 35
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Image2: TImage
      Left = 0
      Top = 0
      Width = 56
      Height = 55
      Center = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000300000
        003008060000005702F987000000097048597300000B1300000B1301009A9C18
        000003E84944415478DAED994D4C134114C767B65B40601B82104520A58281C4
        C40B06F5A837F5201CF8887830F1A3B685E84D203104A3016F22B440483C91A8
        404C4CD49321F1A0469093C688515AB0A02010DB2D24C5ED3E5F0B2501E9D2A5
        BB5D20BC4377B3DB9DFDFF66DEBC796F96926D6E546B01BB005A0BD81A00BDA0
        33CE794B18919E04428B2990226C390B0052432FA1D4070426F16C8412181609
        0C8C4D19064913153505C8B72FE48A34602300175065B69C6711C84D80F6B002
        63FF763DC51D578082566F66404FEF600F5FC4DE4D88A513B08D456CE3A15E07
        B7BE9A0D33AA031C74F0E701481B3E991E8BF0756C16FDA966CCCA3D5605A0B8
        0BF4B382CF4129B9ACB0F0D506A42B9D4DAD1D36D3BF8A016475417292C0F7A3
        9F9F56557C9801E0A59FE5CA7F9AE942CC00C19E9F13F867F112BF0241E05572
        0677F673055D8C0920CFCE77ABEE3691ADD369E52C9B063075F0D5D8153D1A89
        0F19068C2A978D7B221BE0409B676F02C37CC1DECFD012003B704ECF4261A410
        1B11C0E4E0BBF0705553F12B0CC4E1B272B6A8010A5AE7730436F03DDA45AAAF
        6C0FB93FB448DEB803EA00E062C7B0ECA15173F2785400D8FB2D78B819ED0B46
        2DA194870CFF0AA8068273A105E742FDC6008DC0E4EDE3C728A1397201C2A60A
        08C084339333920ABAAAD1FF008C9D9E138CC8BC95D3F65A00D54068E098D392
        3628096072781BF0F25D25009406C154BC7ED46A689106B0F34FF16A9992004A
        816034EAC768542E0990E7F07E42FF3FAC0640AC20985E7C74590D4724017004
        66E5A6CA7201360B829168062351A624409EDDEB975BA46C16402E088E801F47
        206967036C7F17DA0193787B87D1ADBC90E108D4E108DC9304303A3CC719C2BC
        530240F154029812A72D65481260399973E13CC8DD2C801AC91CA6D4E3AE69CE
        B476376FDD741AEBE066ACC4EAE402A89A4E13D28CFEDFB0F6BA2205CDA3734B
        05CDFB49950A1A8CFF02D5E5BB2D29135101040D8B9A0E3C5C5345915C008076
        97CD50BBDEBD880039DD7FD2D945DD88E6453D21B37A1D14C92EEA836674F055
        0C7A88C600154E2BD717E9E6861B5BB8B075E2BFCC5A2847D7B1A3EBD448FD67
        E3BDD15ED099667CFD78561A57F184BC304EA596BE6EA2426C006469733751E0
        FB302A9D898B7820CFFD6C6AA5229BBB610B6DF2067C0F88CA9129E836C669EE
        C6463D2F1B206CB8C855E2A15DE9E8842EF31BC5D8A426AC2200410BED9BEA98
        DBF8DA4B987224C6261CFCF8D32D24888DEE2B6973729F8FE9235F4EC77C362B
        8A358442B59CDC6959F80F7C7D8F4019FB7A2B6C5C00560C1340D37ECF510ACC
        2991D0629457488166A3C8A5CFAC84FA80821BCFBEE2BD0F147403CEE9E461CD
        3FB36E05DB05D0DAB63DC03FB6E5144F7146213F0000000049454E44AE426082}
    end
    object Button1: TButton
      Left = 504
      Top = 3
      Width = 160
      Height = 54
      Anchors = [akTop, akRight]
      Caption = 'Wczytaj wideo'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 24
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 424
      Top = 3
      Width = 74
      Height = 54
      Anchors = [akTop, akRight]
      Caption = 'Pauza'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 24
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 320
      Top = 3
      Width = 98
      Height = 54
      Anchors = [akTop, akRight]
      Caption = 'Odtwarzaj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 24
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      OnClick = Button3Click
    end
    object MediaPlayer1: TMediaPlayer
      Left = 269
      Top = 10
      Width = 29
      Height = 30
      VisibleButtons = []
      DoubleBuffered = True
      Display = Panel2
      Visible = False
      ParentDoubleBuffered = False
      TabOrder = 3
    end
  end
  object Panel2: TPanel
    Left = 0
    Top = 58
    Width = 664
    Height = 318
    Align = alClient
    DockSite = True
    DoubleBuffered = True
    FullRepaint = False
    ParentDoubleBuffered = False
    ShowCaption = False
    TabOrder = 1
    ExplicitTop = 61
  end
  object Panel3: TPanel
    Left = 0
    Top = 376
    Width = 664
    Height = 17
    Align = alBottom
    Caption = 'Zmiana g'#322'o'#347'no'#347'ci w oknie odtwarzacza muzyki'
    TabOrder = 2
  end
  object OpenDialog1: TOpenDialog
    Left = 608
    Top = 74
  end
end
