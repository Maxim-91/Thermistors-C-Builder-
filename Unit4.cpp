//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit4.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm4 *Form4;
//---------------------------------------------------------------------------
__fastcall TForm4::TForm4(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm4::Edit1KeyPress(TObject *Sender, char &Key)
{
 {
  if ((Key >= '0') && (Key <= '9') || Key == VK_BACK || Key =='-') {}  // ����� � 'Key == '-'' - �� ������ ������ ��� ������������� �����, �� ���������� ����� ������.
  else if (Key == ',') // �������
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // ���� ������� ��� ����
                Key = 0;
        else // ���� ��� ��� �������
                Key = DecimalSeparator;
        }

  else if (Key == '.') // �������
        {
        if (((TEdit*)Sender)->Text.Pos(DecimalSeparator)!=0) // ���� ������� ��� ����
                Key = 0;
        else // ���� ��� ��� �������
                Key = DecimalSeparator;
        }

  else Key = 0; // �� �����
  if (Key==0) ShowMessage("�� ����� �� ����� ������! ����� ������� ���� ����� �� 0 �� 9, ������ ' , ' (���� �� ������� ������) �� ' - ' (���� ��'����)");
 }         
}
//---------------------------------------------------------------------------

void __fastcall TForm4::BitBtn1Click(TObject *Sender)
{
 int TKO,j;
 if (Edit1->Text=="")
 ShowMessage("������ �������� �������������� ����������� �����!");
 else
 {
  j=ComboBox1->ItemIndex;
  if (j==0)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002349816.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==1)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==2)
  {
   if (StrToFloat(Edit1->Text)>=2.33588&&StrToFloat(Edit1->Text)<=2.3359)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002335881.");
   else if (StrToFloat(Edit1->Text)>=-2.3359&&StrToFloat(Edit1->Text)<=-2.3358)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==3)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==4)
  {
   if (StrToFloat(Edit1->Text)>=2.3541&&StrToFloat(Edit1->Text)<=2.3542)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002354174.");
   else if (StrToFloat(Edit1->Text)>=-2.3542&&StrToFloat(Edit1->Text)<=-2.3541)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==5)
  {
   if (StrToFloat(Edit1->Text)>=2.3382&&StrToFloat(Edit1->Text)<=2.3384)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002338299.");
   else if (StrToFloat(Edit1->Text)>=-2.3384&&StrToFloat(Edit1->Text)<=-2.3382)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==6)
  {
   if (StrToFloat(Edit1->Text)>=2.3363&&StrToFloat(Edit1->Text)<=2.3365)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002336399.");
   else if (StrToFloat(Edit1->Text)>=-2.3365&&StrToFloat(Edit1->Text)<=-2.3363)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==7)
  {
   if (StrToFloat(Edit1->Text)>=2.3497&&StrToFloat(Edit1->Text)<=2.3498)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002349758.");
   else if (StrToFloat(Edit1->Text)>=-2.3498&&StrToFloat(Edit1->Text)<=-2.3497)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==8)
  {
   if (StrToFloat(Edit1->Text)>=2.31659&&StrToFloat(Edit1->Text)<=2.3167)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002316638.");
   else if (StrToFloat(Edit1->Text)>=-2.3167&&StrToFloat(Edit1->Text)<=-2.31659)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
  else if (j==9)
  {
   if (StrToFloat(Edit1->Text)>=2.31659&&StrToFloat(Edit1->Text)<=2.3167)
   ShowMessage("��������� �������� �������������� ����������� ����� ������� ���� ��'�����. ³��� �������: -0.002316638.");
   else if (StrToFloat(Edit1->Text)>=-2.3167&&StrToFloat(Edit1->Text)<=-2.31659)
   ShowMessage("�������� �������������� ����������� ����� ��������� ����!");
   else ShowMessage("�������� �������������� ����������� ����� ��������� �� ����!");
  }
 }
}
//---------------------------------------------------------------------------
