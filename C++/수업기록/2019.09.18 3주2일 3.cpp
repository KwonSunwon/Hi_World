----------------------------------------------------------------------------
Wed Sep 18 12:29:31 2019
----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// 2019. 9. 18 월 C++                           월56수34          (3주 2일)
//
// 람다
// 알고리즘 sort
//-----------------------------------------------------------------------------

#include <iostream>
#include <string>
#include <algorithm>
#include "save.h"
using namespace std;

int main()
{
	string sample { "the quick brown fox jumps over the lazy dog"s };

	//[문제] sample을 오름차순으로 정렬하라

	sort( sample.begin(), sample.end());

	cout << sample << endl;

	save( "소스.cpp" );
}