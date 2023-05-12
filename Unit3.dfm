object Form3: TForm3
  Left = 0
  Top = 0
  Caption = 'Odtwarzacz muzyki'
  ClientHeight = 516
  ClientWidth = 559
  Color = clBtnFace
  Constraints.MinHeight = 483
  Constraints.MinWidth = 571
  UseDockManager = True
  DockSite = True
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = 20
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnActivate = FormActivate
  OnCreate = FormCreate
  OnDestroy = FormDestroy
  OnShow = FormShow
  DesignSize = (
    559
    516)
  TextHeight = 20
  object Label1: TLabel
    Left = 8
    Top = 61
    Width = 42
    Height = 28
    Caption = 'Tytu'#322
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 29
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 127
    Width = 49
    Height = 21
    Caption = 'Post'#281'p:'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 22
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label3: TLabel
    Left = 8
    Top = 95
    Width = 59
    Height = 21
    Caption = 'D'#322'ugo'#347#263':'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 22
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
  end
  object Label4: TLabel
    Left = 196
    Top = 257
    Width = 147
    Height = 25
    Alignment = taCenter
    Anchors = [akTop]
    Caption = 'Lista odtwarzania'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 27
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    ExplicitLeft = 216
  end
  object Image3: TImage
    Left = 8
    Top = 442
    Width = 45
    Height = 43
    Hint = 'Wycisz '
    Anchors = [akLeft, akBottom]
    Center = True
    IncrementalDisplay = True
    ParentShowHint = False
    Picture.Data = {
      0954506E67496D61676589504E470D0A1A0A0000000D49484452000000300000
      003008060000005702F98700000006624B474400FF00FF00FFA0BDA793000002
      624944415478DAED98512B045114C7CFB1F655515EC803F645293E8095076FBC
      2129E581B6247643585FC02A6B10AB6D377941B6BCF804C207A07C02C917505E
      B4AEB3D72CD7EC9DBB2B8D3BB7E6D4ED9E993933F7FF9B3BE7CC9D4130DC50B7
      800040B7800040B700DF038C150AA1CEE797CD54627AD93880E4DE513363EF17
      C0209A4ACC78329667002B56AEAB0EF192DC4869DB2880552B3F8408A7E43694
      F71903B0BA9B8F238334B92171BFEF0162D96CB8E9B57E1F90C564C77D0D2026
      AB5B8C6F019CC96A14802C598D01704B565F008CC693C3C0708FDC76B713231D
      1DBF1A4806C0FAA0076FE15E755EB51829C0C8FCFA233D1A6DAA0BFF15804561
      9BBA04B539BC8143A9F828CC527740CDA298A59A014617D65935417F01A0BBBA
      45239705311984201EEDA834CD44C57AEADF01D800744311EEE067EE1449C914
      5EC3892D7E92BAE38A9810F4E2153C6805B0058E5077462D2CDE746A73B6FF7D
      E73FED8DDA04CDD285F3BA5A00AA403875B98AD70AA080104D295E3B8000710E
      95EF9322B5719578BF00FCAC36C2215094585F0028C4D70CA1338965E28B762F
      3E4E4A085D6554269E27ACED4B4BAC0C227891FD16800BEC83451A396D6F4A4B
      A5A4C42E528CE5BCAE1BC01375AD5E017081FDB41662B0018A3AFF058190A4D9
      49CB6254CBE92CB92D5E0170815E2DA76BB1B59D1CAD267113FCF84153338475
      3408F85E20B7D148000EB19D8F401D943EEABB8C04E010994C23BC850B943783
      460294CCFE0B4D9F896CC14880B2ADEDE6623413FBE058221B03C02124C96D14
      00877024B771001C42486E23014A564EEE54623A6E2480D71600E8B60040B719
      0FF001F0B92040DF597C270000000049454E44AE426082}
    ShowHint = True
    OnClick = Image3Click
  end
  object Image4: TImage
    Left = 510
    Top = 442
    Width = 41
    Height = 43
    Hint = 'Maksymalna g'#322'o'#347'no'#347#263
    Anchors = [akRight, akBottom]
    Center = True
    IncrementalDisplay = True
    ParentShowHint = False
    Picture.Data = {
      0954506E67496D61676589504E470D0A1A0A0000000D49484452000000300000
      003008060000005702F98700000006624B474400FF00FF00FFA0BDA793000004
      C34944415478DAED996D4C5B5518C7CFB9DCB6B480C97C4B9CF1C3185370B045
      BFF8B6568DCD423207DB18B044139780641F74E066C6CB077AD9D4B0E8062C64
      0B814D8DC68DE2900E8CC1190DB09860624C0C252AFAC1B7453717A37450B8ED
      7DFC9FB28395145A26D036E1499A3EE7B9A7F73EBF73CEFFDC734E394B72E3F1
      4E601520DE09AC02C43B8184072876BB53D65F1E3FDA5855F672D201D49E3873
      0791719E11B3375695879ED530323D8CF2305368985473BF761FFF2321010E35
      B5E7289C5F809B25CA61001456CD8FC239C560ADF59BCC5F260C407553C736CE
      D97B706F913109A079F57C46C6230AE35B90FC130829224E9CBD6B564C557539
      FC5A5C01AA5B3A2A39B1637053C2E31220DC34AF3F8B33E5050CA97214D3F0F9
      9D4829D7F2D4BE1507A8686B33DD3AA1B6324E1591AE470290F6EA28DD153002
      A7D00F852CD419EC407DAEB979C500C2C53A5F1D09503034D18B1EFA1475DFF7
      3C6EFB595E27227E6424504B9C5E9909B0975C79E6966507982BD66800854393
      52C43A9ABA53D5A9B6FB49DB2FB25E8377EA19F4C15B4C0C414E3B5D1B2D9E65
      038824D668003B0627F712E7DBD0C43B505491C29F9C8CE77B1CB6F3B2EEE111
      FD10313A0AF70AA9FA035A76DAE52507984FACD100A46D1F985CA7281CBFA79D
      281A68888A9E2DD6D3E29A06252BDEE90F89F17CA4D8E5CA35952C0A607765ED
      D3E8C61370D7CDF7C3ACCCCC4501CF276268E20067FC0DB86490B2ABD7313364
      42C226FD0768C1420A6DD6EEB78CC40C50F462DD4F68917B164AE86601D473E3
      0D01859F6225E9BFCD81388664AF0555DADCF7A8ED57116FF04E37235649C4DC
      5A9EB934F61ED85F472C8ADD2C404AA74FDC7B1CD34E59704F4697BCBE63C8EF
      C6B82FC6B07CBBC761DD2B62DA37D7D7F280E947B846AA6ABABD3A9B8FC71FC0
      EDFB04ADFA94480A107B2444D1903F33C0E85B26265083D6CB29F6F0C8F467E2
      8D8D69B648CBB374C71D409818469889EAE1FE15E42C5B0E27D90B48ABD2634F
      151AC430D26B01FA1AB0DAF05ED8971000377AA21F496DE58C1A02A5199A8815
      0C4E3E0BEDBD0388BE0B76DB7611D3467507376800EE17AE5CF3430903A076FA
      9C78C845BCCCBE324AD21F0C017C8EB55190C65071ACC76EBD57C48E8CFA3718
      86F21D32BDEADA68BE33610058F7DFB7A5E88AD80B5C0F96A6A78BD0D67E4AB3
      DAFC3EB83E8FDD9A11EA012FA573D28578A7D1039664069802406AC200A86E5F
      3EE6F78F220D2168E37B8FC3BA6106003152C6126E08E17D70115FCEA4147152
      4FA38B7D91610F7D095F8FA17A812B37B537FE00919612D8CC145EF27F0CCF89
      4F1B041C6AE9FFB394101B8CBB97036065167333CBE936B86B971A60AE2DCB72
      3A16AB696E3F889F8B5D53E26D686286683AE364DC70C35D132B40E1E0C46ECC
      40C528EC62A12D25BB02887D1EBBED03597745B694B310C73BB298C2C4A63E27
      26807F37F55348FCB499825A9723E3AAAC8769F32044FD3ADC2037B8B37E9369
      60A1FB2EC9B14ACDC9936B986E724337CE6800F25825A832B714ABB0B81DAB48
      BB710A7D1C4FDEBF104024D3BE9ECAE69CBF896C1E4651C73D9E73E55ACEC6F2
      DC253F5AAC6969AF404FB4C235450348A8A3C5FF40441077D21CEECE42CC1177
      521DAFCF4284893BE9FEE09026C5DD585556B91CF75FFD932FDEB60A106F5B05
      88B7FD0392F4F14FDE186F960000000049454E44AE426082}
    ShowHint = True
    OnClick = Image4Click
    ExplicitLeft = 553
  end
  object MediaPlayer1: TMediaPlayer
    Left = 334
    Top = 8
    Width = 29
    Height = 30
    ColoredButtons = []
    Enabled = False
    VisibleButtons = []
    DoubleBuffered = True
    Visible = False
    ParentDoubleBuffered = False
    TabOrder = 6
  end
  object Panel1: TPanel
    Left = -46
    Top = -3
    Width = 605
    Height = 58
    Hint = 'Panel g'#243'rny'
    Anchors = [akLeft, akTop, akRight]
    DockSite = True
    FullRepaint = False
    ParentShowHint = False
    ShowCaption = False
    ShowHint = True
    TabOrder = 0
    ExplicitWidth = 601
    DesignSize = (
      605
      58)
    object Label10: TLabel
      Left = 111
      Top = 10
      Width = 213
      Height = 35
      Caption = 'Odtwarzacz muzyki'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 35
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
    object Image1: TImage
      Left = 49
      Top = 0
      Width = 56
      Height = 55
      Center = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000300000
        003008060000005702F98700000006624B474400FF00FF00FFA0BDA793000002
        1F4944415478DAEDD8CF4B1B411407F0791BAAA8A5D6A2AE60B2050F8216A127
        AD823FC0A43979E8A1A517A176B542FF8AFE17A224F1AA78A8E72404C156BC79
        12144A4B368A469B5C22B478D8D7EF4A409B43437723938179B0ECEC32CB7B1F
        F6253BBB24140F925D8006C82E40036417D0F480A2651FB2E02C5265436DBCD3
        739CAAA806E03B872EB6036C0071F6DAAD7C8D9C6CFD5209501BBF51C2170286
        7087BA9DF001894FAE4A80DA2861CB79ED869B95359DD477D5007F85E924EBD6
        A7011AA01A80598C60172343BC142CA6306E570A70B72816AF433FADCEE778D0
        45595014673C508B3280DA3837E73BA8F5C1B8B8C18839CC7DA614C04F688006
        688006280C284696E22CDC37446212874FAAA7CB78DAEE628DBF691652E9A604
        9C590BC3061B495CFDE2DF33790F29269A0A70195E98760D631BC3C77E124A05
        5CF62F0DBA21771FC32EBF09A501D0C87461D95EF1A341124A0314ADC51818E9
        A0092502EC75ECDEA90B786A1FA38F06D50558B6F745EDA1CA802BEC3A02E6AB
        00F0480EA0012D8457C7A33E2735240760BD5FC5F40F01B3AD98F9E4474980E0
        7FA34C34DB974FE4A400AA880CCA88FACC9546FFC71B59FC7F03022C25CAE48A
        B1DE93E437A9002F2E22F61493F82C6E97CFF5A2444CAF7A0B89DD4617EF0BE0
        057ED003B8740DC3D93A5333E8FB65F4FD8FFB28DE37E016B21863E6B778A199
        C1617FF5F4295E68768868C3741299FB2ABC218066080D901D1A203B9407FC01
        F449EF3162848C830000000049454E44AE426082}
    end
    object Button2: TButton
      Left = 393
      Top = 3
      Width = 212
      Height = 54
      Anchors = [akTop, akRight]
      Caption = 'Wczytaj utw'#243'r'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 24
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button2Click
      ExplicitLeft = 389
    end
  end
  object ProgressBar1: TProgressBar
    Left = 61
    Top = 127
    Width = 490
    Height = 27
    Anchors = [akLeft, akTop, akRight]
    DoubleBuffered = True
    ParentDoubleBuffered = False
    Smooth = True
    SmoothReverse = True
    TabOrder = 1
    ExplicitWidth = 486
  end
  object ListBox1: TListBox
    Left = 8
    Top = 288
    Width = 543
    Height = 88
    Hint = 'Kliknij plik dwa razy, aby go odtworzy'#263
    Align = alCustom
    Anchors = [akLeft, akTop, akRight, akBottom]
    DoubleBuffered = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 21
    Font.Name = 'Segoe UI'
    Font.Style = []
    IntegralHeight = True
    ItemHeight = 21
    ParentDoubleBuffered = False
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 2
    OnDblClick = ListBox1DblClick
  end
  object Button1: TButton
    Left = 8
    Top = 403
    Width = 543
    Height = 33
    Hint = 'Usu'#324' wszystkie pliki z listy odtwarzania'
    Anchors = [akLeft, akRight, akBottom]
    Caption = 'Wyczy'#347#263' list'#281' odtwarzania'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 3
    OnClick = Button1Click
    ExplicitTop = 402
    ExplicitWidth = 539
  end
  object TrackBar1: TTrackBar
    Left = 59
    Top = 450
    Width = 445
    Height = 31
    Hint = 'Ustaw g'#322'o'#347'no'#347#263' d'#378'wi'#281'ku'
    Anchors = [akLeft, akRight, akBottom]
    Max = 65535
    ParentShowHint = False
    Position = 13000
    ShowHint = True
    TabOrder = 4
    OnChange = TrackBar1Change
    ExplicitTop = 449
    ExplicitWidth = 441
  end
  object Panel2: TPanel
    Left = 0
    Top = 495
    Width = 559
    Height = 21
    Align = alBottom
    Caption = 'Kliknij dwa razy plik na li'#347'cie odtwarzania, aby go odtworzy'#263' '
    DockSite = True
    FullRepaint = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 15
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 5
    ExplicitTop = 494
    ExplicitWidth = 555
  end
  object Panel3: TPanel
    Left = 10
    Top = 168
    Width = 540
    Height = 83
    Anchors = [akTop]
    BevelOuter = bvNone
    DockSite = True
    ShowCaption = False
    TabOrder = 7
    ExplicitLeft = 8
    DesignSize = (
      540
      83)
    object Button3: TButton
      Left = 141
      Top = 1
      Width = 255
      Height = 35
      Hint = 'Pauza w odtwarzaniu'
      Align = alCustom
      Anchors = [akRight]
      Caption = 'Zatrzymaj'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 23
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 0
      OnClick = Button3Click
    end
    object Button4: TButton
      Left = 402
      Top = 1
      Width = 135
      Height = 35
      Hint = 'Przewi'#324' do pocz'#261'tku'
      Align = alCustom
      Anchors = [akRight]
      Caption = 'Zresetuj utw'#243'r'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 23
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 1
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 3
      Top = 1
      Width = 132
      Height = 35
      Hint = 'Kontynuuj odtwarzanie zatrzymanego pliku'
      Anchors = [akRight]
      Caption = 'Wzn'#243'w'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 23
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 2
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 3
      Top = 40
      Width = 260
      Height = 35
      Hint = 'Odtw'#243'rz poprzedni plik z listy'
      Anchors = [akLeft]
      Caption = 'Poprzedni plik'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 23
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 3
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 269
      Top = 40
      Width = 268
      Height = 35
      Hint = 'Odtw'#243'rz nast'#281'pny plik z listy'
      Anchors = [akRight]
      Caption = 'Nast'#281'pny plik'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 23
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
      ParentShowHint = False
      ShowHint = True
      TabOrder = 4
      OnClick = Button7Click
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Wszystkie pliki|*.*|Plik MP4|*.mp4|Plik WAV|*.wav|Plik MP3|*.mp3'
    Title = 'Wczytywanie muzyki'
    Left = 450
    Top = 66
  end
  object Timer2: TTimer
    Enabled = False
    OnTimer = Timer2Timer
    Left = 512
    Top = 64
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 112
    Top = 64
  end
  object TrayIcon1: TTrayIcon
    Left = 376
    Top = 64
  end
  object max_volume_timer: TTimer
    Enabled = False
    Interval = 10
    OnTimer = max_volume_timerTimer
    Left = 208
    Top = 64
  end
  object alert_volume_timer: TTimer
    Enabled = False
    Interval = 10
    OnTimer = alert_volume_timerTimer
    Left = 280
    Top = 64
  end
end
