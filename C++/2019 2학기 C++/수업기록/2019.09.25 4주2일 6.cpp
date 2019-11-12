//-----------------------------------------------------------------------------
// 2019. 9. 28 수 C++                           월56수34          (4주 2일)
//
//
// FILE I/O
//
// 시험 1 - (5주 2일, 10월 2일 수요일)
//-----------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"
using namespace std;

// [문제] 사용자에게서 몇 개의 정수를 사용할 건지 입력받자
// 입력한 정수만큼 메모리를 확보하자.
// 확보한 메모리를 랜덤값(1 ~ 1'000'000)으로 채우자
// 제일 큰 값을 찾아 화면에 출력해 주자
// 이 과정을 반복하자 - 영원히

int main()
{
	default_random_engine dre;
	uniform_int_distribution<> uid( 1, 1'000'000 );

	int num;
	int max;
	while( true )
	{
		cout << "원하는 정수의 갯수 : ";
		cin >> num;

		int *p = new int[ sizeof( int )*num ];

		for( int i = 0; i < num; ++i )
		{
			p[ i ] = uid( dre );
			cout << p[ i ] <<  '\t';
		}
		
		cout << endl;

		max = 0;

		for( int i = 0; i < num; ++i )
		{
			if( max < p[ i ] )
				max = p[ i ];
		}
		cout << "가장 큰 값 : " << max << endl;

		delete[] p;
	}

	save( "소스.cpp" );
}