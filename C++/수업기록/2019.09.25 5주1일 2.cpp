----------------------------------------------------------------------------
Mon Sep 30 13:56:46 2019
----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// 2019. 9. 30 월 C++                           월56수34          (5주 1일)
//
//
// FILE I/O - 자료는 실행되는 프로그램 밖 어디라도 있을 수 있다
//
// 시험 1 - (5주 2일, 10월 2일 수요일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include "save.h"
using namespace std;

// [문제] "정수 100개.txt"에 정수 100개가 기록되어있다.
// 값을 읽어서 화면에 출력하라

int main()
{
	ifstream in( "정수 100개.txt" );

	int d;

	for( int i = 0; i < 100; ++i )
	{
		in >> d;
		cout << d << " ";
	}

	save( "소스.cpp" );
}