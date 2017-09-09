// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	int num = 0;
	char c;
	bool flag1 = false;
	bool flag2 = false;
	bool flag = false;
	ifstream in;
	in.open("examplefile.txt");
	if (in) {
		while (!in.eof()) {
			c = in.get();
			if(in.fail())
			{
				break;
			}
			if (c >= 'a'&&c <= 'z' || c >= 'A'&&c <= 'Z') {
				flag2 = flag1;
				flag1 = true;
			}
			else if (c == ' ') {
				flag2 = flag1;
				flag1 = false;
			}
			else {
				cout << "file error";
				return 0;
			}
			if (flag2 == false && flag1 == true) {
				flag = true;
			}
			if (flag) {
				num++;
				flag = false;
			}
		}
	}
	in.close();
	cout << num;
	getchar();
    return 0;
}

