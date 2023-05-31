object Form6: TForm6
  Left = 0
  Top = 0
  Caption = 'Kalendarz'
  ClientHeight = 317
  ClientWidth = 529
  Color = clBtnFace
  Constraints.MinHeight = 280
  Constraints.MinWidth = 545
  UseDockManager = True
  DockSite = True
  DoubleBuffered = True
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OnCreate = FormCreate
  DesignSize = (
    529
    317)
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 529
    Height = 57
    Hint = 'Panel g'#243'rny'
    Align = alTop
    AutoSize = True
    DockSite = True
    DoubleBuffered = True
    FullRepaint = False
    ParentDoubleBuffered = False
    ParentShowHint = False
    ShowHint = True
    TabOrder = 0
    object Image2: TImage
      Left = 0
      Top = 1
      Width = 56
      Height = 55
      Center = True
      Picture.Data = {
        0954506E67496D61676589504E470D0A1A0A0000000D49484452000000300000
        003008060000005702F98700000006624B474400FF00FF00FFA0BDA793000002
        114944415478DA636418E28071A01D30EA0172346DDC77D4FB3F03E3644686FF
        FFFF33FCCF0D70B2D93650E690E5810DFB8E3E0252B250EEC300276B85813287
        5C0FFC47E6032D1E3073706AF8EE622CF7EF3F531F308AED815C1164B93DD5FD
        286A5D5A0BC9713F31E6BC61FCCF78E837C39F32817D67EF12ED816F6EA6B2FF
        FE325E003285D0E54041B617CD6267A0C5A4061D89E6BC63FACBA8CF75E0E413
        A23CF0D5C97CED7FC6FF41D8E41EBCF9C470A77F2E8A984A610A8382082F491E
        20D51C464686D5DC7B4E8511E5812FCE669F801456934EDE7DC1F079DE721431
        DEA44806736509923C4086391F79F69E1220D603FF719972F20ED0E2BEA90C0C
        8290D4C5F8F62D034F690EE91E20C31CA00730DC4BB2074051FF50568DE14F52
        1AB8F4669D378B41FEC91DB29210A9E650C50320898740CB5F7CFC06E64BF073
        31C88BF09195894935872A1E184830EA818106447BE0FC8D3B83D203861A2AA3
        1E18F5C0A0F0C0C1339750F8F6267A54151FF5C0A80706BB07060A8C7A000686
        7C121AF5C0A80728F4C04081510FC0C0904F42A31E18F500851E182830A23CF0
        1148F10DB483D1C047A007881BDC3D7FFDCE3AA04CE040BB18D5A1FFD71A68A8
        8610E5818B37EEA9FF63F8771CC8141C688743C17B867F8CE6865ACAB789F200
        089CB97A578E85F91F688AC98D01C75C011DC0A7FF8C0C7BFE31FD2F33515525
        7E8A692881510F0C3418F5C0408321EF0100A03EC440B09F6460000000004945
        4E44AE426082}
    end
    object Label10: TLabel
      Left = 52
      Top = 10
      Width = 112
      Height = 36
      Caption = 'Kalendarz'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = 36
      Font.Name = 'Segoe UI'
      Font.Style = []
      ParentFont = False
    end
  end
  object CCalendar1: TCCalendar
    Left = 0
    Top = 129
    Width = 529
    Height = 188
    Align = alBottom
    Anchors = [akLeft, akTop, akRight, akBottom]
    BorderStyle = bsNone
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    UseCurrentDate = False
  end
  object Panel2: TPanel
    Left = 0
    Top = 96
    Width = 529
    Height = 33
    Anchors = [akLeft, akTop, akRight]
    Caption = 'Data'
    FullRepaint = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = []
    ParentFont = False
    TabOrder = 2
  end
  object Button1: TButton
    Left = 0
    Top = 55
    Width = 264
    Height = 42
    Caption = 'Poprzedni miesi'#261'c'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 263
    Top = 55
    Width = 266
    Height = 42
    Anchors = [akTop, akRight]
    Caption = 'Nast'#281'pny miesi'#261'c'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = 20
    Font.Name = 'Segoe UI'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 4
    OnClick = Button2Click
  end
end
