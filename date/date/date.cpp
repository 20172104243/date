// date.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CDate
{
private:
	int year;
	int month;
	int day;
public:
    void setDate(int y,int m, int d);
	void display();
};
void CDate::setDate(int y,int m, int d)
{
	year = y;
	month = m;
	day = d;
	cout << year << "年" << month << "月" << day << "日" << endl;
	if (month == 2)
	{
		if (year % 400 == 0 || year % 100 != 0 && year % 4 == 0)
		{
			if (day == 29)
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
		else
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
	else if (month == 12 && day == 31)
	{
		year = year + 1;
		month = 1;
		day = 1;
	}
	else if(month == 12 && day == 30)
	{
		year = year + 1;
		month = 1;
		day = 1;
	}
}
void CDate::display()
{
	cout <<"后一天"<< year << "年" << month << "月" << day << "日" << endl;
}
int main()
{
	CDate ot;
	ot.setDate(2017,12,30);
	ot.display();
	return 0;
}