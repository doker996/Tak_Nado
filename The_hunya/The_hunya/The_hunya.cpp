#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fin("mac.dat");
	if (!fin.is_open())
	{
		cout << "file not found" << endl;
		string text = "10-34-56-78-vf"; //����� ����� ��� ������������
		ofstream fout;
		fout.open("mac.dat");	//������ ������ ���� � ����� � �����
		fout << text;
		fout.close();
	}
	else //���� ���� �������� �������� ��� ������, ���� �� ��������� � ���, ��� � �����, ��... ��� ������� ����� ����������� ����� goto
	{
		string mac = "";
		fin >> mac;
		fin.close();
		cout << mac << endl;
		//��� �� �������� ����� ��� ������ � ����������
	}
	system("pause");
}

