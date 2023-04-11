object Form1: TForm1
  Left = 437
  Top = 103
  Width = 870
  Height = 502
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object AdvancedBar1: TAdvancedBar
    Left = 108
    Top = 336
    Width = 681
    Height = 77
    BorderKind = bRaised
    BorderSize = bDouble
    TextBackColor = clHighlight
    ParentFont = False
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -24
    Font.Name = 'MS Sans Serif'
    Font.Style = [fsBold]
    ShowText = True
    TextSuffix = 'kB'
    TextAlignment = taLeftJustify
    Max = 1000
  end
  object BarGraph1: TBarGraph
    Left = 124
    Top = 28
    Width = 629
    Height = 285
    Color = clBlack
    GridColor = clGreen
    BarScale = 1000
  end
  object Button1: TButton
    Left = 20
    Top = 28
    Width = 75
    Height = 33
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object ScrollBar1: TScrollBar
    Left = 108
    Top = 428
    Width = 681
    Height = 32
    Max = 1000
    PageSize = 0
    TabOrder = 1
    OnChange = ScrollBar1Change
  end
  object ProgressBar1: TProgressBar
    Left = 808
    Top = 16
    Width = 38
    Height = 445
    Min = 0
    Max = 1000
    Orientation = pbVertical
    TabOrder = 2
  end
  object Timer1: TTimer
    Interval = 100
    Left = 72
    Top = 56
  end
end
