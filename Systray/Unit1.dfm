object Form1: TForm1
  Left = 221
  Top = 103
  Width = 696
  Height = 480
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
  object Button1: TButton
    Left = 44
    Top = 36
    Width = 75
    Height = 25
    Caption = 'Button1'
    TabOrder = 0
    OnClick = Button1Click
  end
  object PopupMenu1: TPopupMenu
    Left = 152
    Top = 60
    object Test11: TMenuItem
      Caption = 'Test 1'
    end
    object Test21: TMenuItem
      Caption = 'Test 2'
    end
  end
  object SysTray1: TSysTray
    Hint = 'Some Hint'
    Left = 240
    Top = 32
  end
end
