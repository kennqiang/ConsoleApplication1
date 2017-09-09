// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


int main()
{
	ifstream in;
	in.open("examplefile.txt");
	if (in) {
		while (!in.eof()) {
			char c;
			in.read(&c,1);
			cout << c;
		}
	}
	in.close();
	cout << "hello world!";
	getchar();
    return 0;
}

