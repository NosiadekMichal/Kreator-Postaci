object KreatorPostaci: TKreatorPostaci
  Left = 1161
  Top = 323
  BorderStyle = bsSingle
  Caption = 'KreatorPostaci'
  ClientHeight = 758
  ClientWidth = 467
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 112
    Top = 8
    Width = 259
    Height = 36
    Caption = 'Tworzenie postaci'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Label2: TLabel
    Left = 8
    Top = 56
    Width = 59
    Height = 36
    Caption = 'Imie'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -31
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
  end
  object Image1: TImage
    Left = 328
    Top = 72
    Width = 113
    Height = 129
    Proportional = True
  end
  object Label23: TLabel
    Left = 8
    Top = 112
    Width = 42
    Height = 24
    Caption = 'Plec'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ParentFont = False
    OnClick = Label23Click
  end
  object Edit1: TEdit
    Left = 88
    Top = 64
    Width = 121
    Height = 32
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -19
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 0
  end
  object Button15: TButton
    Left = 383
    Top = 728
    Width = 75
    Height = 25
    Caption = 'Zakoncz'
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    ParentFont = False
    TabOrder = 1
    OnClick = Button15Click
  end
  object Memo1: TMemo
    Left = 304
    Top = 224
    Width = 161
    Height = 281
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Lines.Strings = (
      'Memo1')
    ParentFont = False
    ReadOnly = True
    ScrollBars = ssVertical
    TabOrder = 2
  end
  object RadioGroup3: TRadioGroup
    Left = 8
    Top = 144
    Width = 185
    Height = 33
    Columns = 2
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Items.Strings = (
      'Mezczyzna'
      'Kobieta')
    ParentFont = False
    TabOrder = 3
    OnClick = RadioGroup3Click
  end
  object Panel1: TPanel
    Left = 8
    Top = 200
    Width = 113
    Height = 137
    BevelOuter = bvNone
    TabOrder = 4
    Visible = False
    object Label24: TLabel
      Left = 0
      Top = 1
      Width = 47
      Height = 24
      Caption = 'Rasa'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label24Click
    end
    object RadioGroup1: TRadioGroup
      Left = 0
      Top = 24
      Width = 113
      Height = 113
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Items.Strings = (
        'Czlowiek'
        'Elf'
        'Polelf'
        'Krasnolud'
        'Gnom'
        'Niziolek')
      ParentFont = False
      TabOrder = 0
      OnClick = RadioGroup1Click
    end
  end
  object Panel2: TPanel
    Left = 128
    Top = 200
    Width = 113
    Height = 137
    BevelOuter = bvNone
    TabOrder = 5
    Visible = False
    object Label19: TLabel
      Left = 0
      Top = 1
      Width = 47
      Height = 24
      Caption = 'Rasa'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label24Click
    end
    object RadioGroup2: TRadioGroup
      Left = 0
      Top = 24
      Width = 113
      Height = 113
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Items.Strings = (
        'Czlowiek'
        'Elf'
        'Polelf'
        'Krasnolud'
        'Gnom'
        'Niziolek')
      ParentFont = False
      TabOrder = 0
      OnClick = RadioGroup2Click
    end
  end
  object Panel3: TPanel
    Left = 8
    Top = 368
    Width = 257
    Height = 25
    BevelOuter = bvNone
    TabOrder = 6
    Visible = False
    object Label21: TLabel
      Left = 0
      Top = 1
      Width = 51
      Height = 24
      Caption = 'Klasa'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label21Click
    end
    object Klasa: TComboBox
      Left = 112
      Top = 4
      Width = 145
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 16
      ParentFont = False
      TabOrder = 0
      Text = 'Klasa'
      OnChange = KlasaChange
      Items.Strings = (
        'Wojownik'
        'Lowca'
        'Kaplan'
        'Mag'
        'Zlodziej'
        'Czarownik')
    end
  end
  object Panel4: TPanel
    Left = 8
    Top = 400
    Width = 257
    Height = 25
    BevelOuter = bvNone
    TabOrder = 7
    Visible = False
    object Label22: TLabel
      Left = 0
      Top = 1
      Width = 90
      Height = 24
      Caption = 'Charakter'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label22Click
    end
    object Charakter: TComboBox
      Left = 112
      Top = 4
      Width = 145
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ItemHeight = 16
      ParentFont = False
      TabOrder = 0
      Text = 'Charakter'
      OnChange = CharakterChange
      Items.Strings = (
        'Dobry'
        'Neutralny'
        'Zly')
    end
  end
  object Panel5: TPanel
    Left = 8
    Top = 520
    Width = 272
    Height = 232
    AutoSize = True
    BevelOuter = bvNone
    TabOrder = 8
    Visible = False
    object Label9: TLabel
      Left = 160
      Top = 64
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label4: TLabel
      Left = 0
      Top = 0
      Width = 35
      Height = 24
      Caption = 'Sila'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label4Click
    end
    object Label5: TLabel
      Left = 160
      Top = 0
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label6: TLabel
      Left = 0
      Top = 32
      Width = 99
      Height = 24
      Caption = 'Zrecznosc'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label6Click
    end
    object Label7: TLabel
      Left = 160
      Top = 32
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label8: TLabel
      Left = 0
      Top = 64
      Width = 87
      Height = 24
      Caption = 'Kondycja'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label8Click
    end
    object Label10: TLabel
      Left = 0
      Top = 96
      Width = 108
      Height = 24
      Caption = 'Inteligencja'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label10Click
    end
    object Label11: TLabel
      Left = 160
      Top = 96
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label12: TLabel
      Left = 0
      Top = 128
      Width = 81
      Height = 24
      Caption = 'Madrosc'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label12Click
    end
    object Label13: TLabel
      Left = 160
      Top = 128
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label14: TLabel
      Left = 0
      Top = 160
      Width = 93
      Height = 24
      Caption = 'Charyzma'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      OnClick = Label14Click
    end
    object Label17: TLabel
      Left = 160
      Top = 160
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label15: TLabel
      Left = 0
      Top = 208
      Width = 128
      Height = 24
      Caption = 'Calkowity rzut'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label16: TLabel
      Left = 160
      Top = 208
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Label18: TLabel
      Left = 240
      Top = 208
      Width = 7
      Height = 24
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
    end
    object Button4: TButton
      Left = 223
      Top = 66
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 0
      OnClick = Button4Click
    end
    object Button5: TButton
      Left = 247
      Top = 66
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 1
      OnClick = Button5Click
    end
    object Button6: TButton
      Left = 223
      Top = 98
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 2
      OnClick = Button6Click
    end
    object Button7: TButton
      Left = 247
      Top = 98
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 3
      OnClick = Button7Click
    end
    object Button8: TButton
      Left = 223
      Top = 130
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 4
      OnClick = Button8Click
    end
    object Button9: TButton
      Left = 247
      Top = 130
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 5
      OnClick = Button9Click
    end
    object Button10: TButton
      Left = 223
      Top = 162
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 6
      OnClick = Button10Click
    end
    object Button11: TButton
      Left = 247
      Top = 162
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 7
      OnClick = Button11Click
    end
    object Button1: TButton
      Left = 223
      Top = 34
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 8
      OnClick = Button1Click
    end
    object Button2: TButton
      Left = 247
      Top = 34
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 9
      OnClick = Button2Click
    end
    object Button3: TButton
      Left = 223
      Top = 2
      Width = 25
      Height = 25
      Caption = '+'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 10
      OnClick = Button3Click
    end
    object Button16: TButton
      Left = 247
      Top = 2
      Width = 25
      Height = 25
      Caption = '-'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -19
      Font.Name = 'MS Sans Serif'
      Font.Style = [fsBold]
      ParentFont = False
      TabOrder = 11
      OnClick = Button16Click
    end
  end
  object Panel6: TPanel
    Left = 24
    Top = 440
    Width = 241
    Height = 65
    BevelOuter = bvNone
    TabOrder = 9
    Visible = False
    object Button12: TButton
      Left = 65
      Top = 1
      Width = 105
      Height = 25
      Caption = 'Losuj statystyki'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      OnClick = Button12Click
    end
    object Button13: TButton
      Left = 17
      Top = 33
      Width = 105
      Height = 25
      Caption = 'Zapami'#281'taj '
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      Visible = False
      OnClick = Button13Click
    end
    object Button14: TButton
      Left = 121
      Top = 33
      Width = 105
      Height = 25
      Caption = 'Odtworz'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      Visible = False
      OnClick = Button14Click
    end
  end
  object Panel7: TPanel
    Left = 304
    Top = 520
    Width = 153
    Height = 169
    BevelOuter = bvNone
    TabOrder = 10
    Visible = False
    object Memo2: TMemo
      Left = 0
      Top = 80
      Width = 145
      Height = 73
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      Lines.Strings = (
        'Memo2')
      ParentFont = False
      TabOrder = 0
    end
    object Button17: TButton
      Left = 24
      Top = 24
      Width = 97
      Height = 33
      Caption = 'Zapisz postac'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      OnClick = Button17Click
    end
  end
  object MainMenu1: TMainMenu
    Left = 256
    Top = 240
    object Postac1: TMenuItem
      Caption = 'Postac'
      object Otwrz1: TMenuItem
        Caption = 'Otw'#243'rz'
        OnClick = Otwrz1Click
      end
      object Zapiszjako1: TMenuItem
        Caption = 'Zapisz jako'
        OnClick = Zapiszjako1Click
      end
      object N2: TMenuItem
        Caption = '-'
      end
      object Zakocz1: TMenuItem
        Caption = 'Zako'#324'cz'
        OnClick = Zakocz1Click
      end
    end
  end
  object OpenDialog1: TOpenDialog
    Filter = 'Pliki tekstowe(TXT)|*.txt|Wszystkie pliki|*.*'
    Left = 256
    Top = 200
  end
  object SaveDialog1: TSaveDialog
    Filter = 'Plik tekstowy(TXT)|*.txt|Dowolny plik|*.*'
    Left = 256
    Top = 280
  end
end
