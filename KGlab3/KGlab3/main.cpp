#include "MyForm.h"

using namespace KGlab3;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	// Create the main window and run it
	Application::Run(gcnew MyForm());
	return 0;
}

/*

�3 
���������� � ������������ ���������� ������������ �������� (���������� � �����)
��������� ��������� (���, ��������� ��������������, ��������� �������������,
��������� � ����������� �������������). 
��������� �� ����������� ����������.
�������� ��������� � �������� ����������; �������� ������� ������� ��������.
��������� ������� ������ ������ � ������� ������ �������, ��� �������� 
����������. 
������������ ������������ ����������� ������ ���� ������ � ����� ���� � 
����� ���������. 
��������� �������� �� ����������� ������.
��������� ���������� ������������� ��� ������� �������� (�������, 
������� ��� ������� ������) � �������� ����� ������� � ���� ����� ����.

������� ��� ������������
���������� �������� � �����. ����������� � ���������� ������. 
2.�������� ����������, ������������� � ���������� ���������� �������� � �����.
����� ���� ��������� ��������� ��� ���������� �������� � �����.
��������� �������� ���������� �������� � �����. 
�������� ��������� ����������������� �����������.
������� �������� ���������� ���������� ������� � �����. 
������� ������, ��������� ����������� ��� �� ����������, ���� ���������.
����� �������� ���������� ���������� ������� � �����.
6.�������� ���������� � ����������� �������������, �������� ����, 
����� �������������, ������ �������, ������.

*/