----------------------------------------------------------------------------
Mon Sep  9 14:56:18 2019
----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// 2019. 9. 9 월 C++                           월56수34          (2주 1일)
//
// 변수
// 랜덤 넘버 생성 방법
//-----------------------------------------------------------------------------

#include <iostream>
#include <limits>
#include "save.h"
using namespace std;

// int d; 라는 문장에서
// 앞의 'int'는 'data type'이라고 한다.
// 대부분의 언어에서는 미리 정한 메모리 크기를 data type으로 제공한다.
// 크기는 1, 2, 4, 8 바이트이다.
// --- 미리 정해진 타입은 'POD(Plain Old Date) type'이라고 부른다.
// 그 이상의 메모리는 사용자가 date type을 직접 정할 수 있다.

int main()
{
	// [문제] int의 최댓값과 최솟값을 출력하라.
	
	cout << "최솟값 " << numeric_limits<int>::min() << endl;
	cout << "최댓값 " << numeric_limits<int>::max() << endl;

	int i = 0x7FFFFFFF;		// 01111111 11111111 11111111 11111111
	cout << i << endl;		// 0x80000000;

	save( "소스.cpp" );
}