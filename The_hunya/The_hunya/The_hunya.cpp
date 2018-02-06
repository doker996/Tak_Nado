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
		string text = "10-34-56-78-vf"; //здесь будет мак записываться
		ofstream fout;
		fout.open("mac.dat");	//запись должна быть в папку с ядром
		fout << text;
		fout.close();
	}
	else //сюда тоже вставить проверку мак адреса, если не совпадает с тем, что в файле, то... как вариант можно попробовать через goto
	{
		string mac = "";
		fin >> mac;
		fin.close();
		cout << mac << endl;
		//как то намутить вывод мак адреса в переменную
	}
	system("pause");
}

