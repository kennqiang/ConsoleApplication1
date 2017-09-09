// ConsoleApplication1.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <fstream>
#include <iostream>
using namespace std;


int main()
{
	ofstream examplefile("examplefile.txt");
	if (examplefile.is_open) {
		examplefile << "line1\n";
		examplefile << "line2\n";
	}
	cout << "hello world!";
    return 0;
}

