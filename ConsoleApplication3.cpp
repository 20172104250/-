// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

class CFeet
{
private:
	int meters;
	int feet;
	double inches;
public:
	void init(int m, int f, double i)
	{
		m = meters;
		f = feet;
		i = inches;
	}
	void setmeters(int m)
	{
		inches = m*39.370;
		feet = inches / 12;
		inches = inches - 12.0*(int)(inches / 12);

	}
	void display()
	{
		cout << "feet" << feet << "inches" << inches << endl;
	}

};
int main()
{
	CFeet ot;
	ot.setmeters(10);
	ot.display();
	return 0;
}
