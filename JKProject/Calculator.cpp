/*
 * Calculator.cpp
 *
 *  Created on: 2022. 9. 30.
 *      Author: keunholee
 */

#include <iostream>
#include "time.h"
#include "Calculator.h"
#include <sstream>

std::string TimeStamp()
{
	std::string timeStr = "시간";
	time_t rawTime  =  time(0);
	struct tm* pTimeInfo;

	pTimeInfo = localtime(&rawTime);

	int year = pTimeInfo->tm_year + 1900;
	std::stringstream ssYear;
	ssYear << year;

	int month = pTimeInfo->tm_mon +1;
	std::stringstream ssMonth;
	ssMonth << month;

	int day = pTimeInfo->tm_mday;
	std::stringstream ssDay;
	ssDay << day;

	int hour = pTimeInfo->tm_hour;
	std::stringstream ssHour;
	ssHour << hour;

	int min = pTimeInfo->tm_min;
	std::stringstream ssMin;
	ssMin << min;

	int sec = pTimeInfo->tm_sec;
	std::stringstream ssSec;
	ssSec << sec;


	timeStr.append(" "+ssYear.str() +" "+ssMonth.str() +" "+ssDay.str() +" "+ssHour.str() +" "+ssMin.str() +" "+ssMonth.str());
	return timeStr;
}
	
Calculator ::Calculator()
{
	a= 0;
	b= 0;
	result= 0;
	timeS = TimeStamp();
	std::cout <<  "계산기 생성 - "<< timeS << std::endl;
}


void Calculator::Add(int x, int y)
{
	a = x;
	b = y;
	result = a+b;
}

void Calculator::Substract(int x, int y)
{	
	a = x;
	b = y;
	result = a-b;
}

void Calculator::ShowResult()
{
	std::cout << "result : " << result << std::endl;
}



Calculator::~Calculator() 
{
	// TODO Auto-generated destructor stub
}

