// date.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CDate
{
private:
	int month, day;
public:
	CDate()
	{
		month = 01;
		day = 01;
	}
	CDate(int m, int d)
	{
		month = m;
		day = d;
	}
	void setDate(int m, int d);
	CDate operator +();
	void display();
};
void CDate::setDate(int m, int d)
{
	month = m;
	day = d;
}
CDate CDate::operator+()
{
	if (month == 2)
	{
		if (day == 28)
		{
			month = month + 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else if(month==12)
	{
		if (day == 31)
		{
			month = 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else if ((month == 4) || (month == 6) || (month == 9) || (month == 11))
	{
		if (day == 30)
		{
			month = month + 1;
			day = 1;
		}
		else
		{
			month = month;
			day = day + 1;
		}
	}
	else if (day == 31)
	{
		month = month + 1;
		day = day + 1;
	}
	else
	{
		month = month;
		day = day + 1;
	}
	return *this;
}
void CDate::display()
{
	cout << month << "" << day << endl;
}
int mian()
{
	CDate ot;
	ot.setDate(6, 2);
	ot.operator+();
	ot.display();
	return 0;
}