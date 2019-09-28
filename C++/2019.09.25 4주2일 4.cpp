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
#include <thread>
#include "save.h"
using namespace std;

// HEAP을 넘치게 하자 - 시스템이 더 이상 줄 수 있는 메모리가 없다고 함

int main()
{
	int i {};

	while( true )
	{
		int* p = new int[ 10'000'000 ];
		for( int i = 0; i < 10'000'000; ++i )
			p[ i ] = 123;

		delete[] p; // 해제
	}

	//save( "소스.cpp" );
}