object Form1: TForm1
  Left = 276
  Top = 130
  Width = 704
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
    Width = 533
    Height = 77
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
    Left = 108
    Top = 24
    Width = 333
    Height = 297
    Color = clBlack
    GridColor = clGreen
    BarScale = 1000
  end
  object HintBox1: THintBox
    Left = 448
    Top = 24
    Width = 189
    Height = 297
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -11
    Font.Name = 'MS Sans Serif'
    Font.Style = []
    Lines.Strings = (
      'This is test of simple HTML hint box'
      '<b>Bold text</b> and'
      '<i>Italic text </i>'
      '<i>'
      '<b>Combined bold and italic</b>'
      '</i>'
      ''
      ''
      '')
  end
  object Button1: TButton
    Left = 20
    Top = 40
    Width = 75
    Height = 33
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object ScrollBar1: TScrollBar
    Left = 108
    Top = 428
    Width = 533
    Height = 32
    Max = 1000
    PageSize = 0
    TabOrder = 1
    OnChange = ScrollBar1Change
  end
  object ProgressBar1: TProgressBar
    Left = 648
    Top = 20
    Width = 38
    Height = 445
    Min = 0
    Max = 1000
    Orientation = pbVertical
    TabOrder = 2
  end
  object Timer1: TTimer
    Interval = 100
    Left = 20
    Top = 284
  end
  object SysTray1: TSysTray
    Hint = 'Some Hint'
    Left = 20
    Top = 248
  end
  object BrowseDialog1: TBrowseDialog
    Title = 'Select a directory...'
    Left = 20
    Top = 212
  end
  object ExeResource1: TExeResource
    Left = 20
    Top = 100
  end
  object ExeInformation1: TExeInformation
    CompanyName = 'Inprise Corporation'
    FileDescription = 'C++ Builder Development Environment'
    FileVersion = '5.0.12.34'
    InternalName = 'BCB'
    LegalCopyright = 'Copyright � 1996-2000 Inprise Corporation'
    LegalTrademarks = 'Copyright � 1996-2000 Inprise Corporation'
    OriginalFilename = 'BCB.EXE'
    ProductName = 'Standard'
    ProductVersion = '5.0'
    Comments = '5.0'
    MajorVersion = '5'
    MinorVersion = '0'
    Release = '12'
    Build = '34'
    Left = 20
    Top = 140
  end
  object ExeDialog1: TExeDialog
    Left = 20
    Top = 176
  end
end
