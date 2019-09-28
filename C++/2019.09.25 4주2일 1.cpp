//-----------------------------------------------------------------------------
// 2019. 9. 28 수 C++                           월56수34          (4주 2일)
//
// STACK - 지역변수, 함수의 인자전달, 리턴번지 저장, 예외
// DATA	 - 전역변수, static 변수
// CODE  - 함수가 기록되어 있다. 
// HEAP  - Free Storage, 동적메모리 할당(Dynamic Memory Alloocation)
//
// FILE I/O
//
// 시험 1 - (5주 2일, 10월 2일 수요일)
//-----------------------------------------------------------------------------

#include <iostream>
#include "save.h"
using namespace std;

// STACK을 넘치게 해서 프로그램이 터지게

void f( int );

int i { };

int main()
{
	while ( true )
		f( 1 );

	save( "소스.cpp" );
}

void f( int x )
{
	int a [ 100 ];
	for( int& d : a )
		d = 333;
	cout << "f - " << ++i << ' ' << x << "a의 주소 " << (void*)a << endl;
	f( 1 );
}