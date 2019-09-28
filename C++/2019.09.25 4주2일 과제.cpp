//-----------------------------------------------------------------------------
// 2019. 9. 28 수 C++                           월56수34          (4주 2일)
//
//
// FILE I/O
//
// 시험 1 - (5주 2일, 10월 2일 수요일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <fstream>
#include <random>
#include "save.h"
using namespace std;

// [문제] 파일의 "data.txt"에 정수 1억개가 저정되어 있다.
// 가장 큰 값을 찾아 화면에 출력하라.

void makeData();		// 1억개 정수를 파일에 기록

int main()
{
	makeData();

	int max { 0 };
	int data[100];

	ifstream in( "data.txt" );

	for( int i = 0; i < 100; ++i )
		in >> data[ i ];

	for( int i = 0; i < 100; ++i )
		if( max < data[ i ] )
			max = data[ i ];

	cout << "최대값 : " << max << endl;

	save( "소스.cpp" );
}

void makeData()
{
	default_random_engine dre;
	uniform_int_distribution<int> uid( 1, 100 );

	// 파일을 쓰기 용도로 연다.
	ofstream out( "data.txt" );

	// 파일에 정수 1억개를 쓴다.
	for( int i = 0; i < 100; ++i )
	{
		if( i % 10 == 0 && i != 0 )
			out << endl;
		out << uid( dre ) << "\t";
	}
}