----------------------------------------------------------------------------
Mon Sep 16 13:52:06 2019
----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// 2019. 9. 16 월 C++                           월56수34          (3주 1일)
//
// 변수 초기화 - uniform initializtion, RAII - 초기화는 자원을 확보할때 일어난다.
// 참조(reference) - 원본 객체의 alias
//-----------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"
using namespace std;

// *와 &를 사용하는 이유 - 원격객체를 조작하기 위해

int main()
{
	int a[100];

	// [문제] a를 범위가 ( 1, 10,000,000 ) 랜덤값으로 채우자
	// 가장 작은 값과 큰 값을 찾아 화면에 출력하자

	// O(n) N에 비례한다. - 선형알고리즘

	default_random_engine dre;
	uniform_int_distribution<int> uni( 1, 10'000'000 );

	int max { 0 }, min { 10'000'000 };

	for( int& d : a )	// syntatic sugar의 일종 - 문법적인 편의 제공
		d = uni( dre );

	for( int d : a )	// 범위기반의 for (range-based for)
		cout << d << ' ';
	cout << endl;

	cout << max << ' ' << min << endl;
	
	// 큰 값을 찾기
	int dataMax = a[ 0 ];
	for( int d : a )
		if( dataMax < d )
			dataMax = d;

	cout << "가장 큰 값은 : " << dataMax << endl;

	save( "소스.cpp" );
}