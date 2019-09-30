----------------------------------------------------------------------------
Mon Sep 16 13:52:06 2019
----------------------------------------------------------------------------


//-----------------------------------------------------------------------------
// 2019. 9. 16 �� C++                           ��56��34          (3�� 1��)
//
// ���� �ʱ�ȭ - uniform initializtion, RAII - �ʱ�ȭ�� �ڿ��� Ȯ���Ҷ� �Ͼ��.
// ����(reference) - ���� ��ü�� alias
//-----------------------------------------------------------------------------

#include <iostream>
#include <random>
#include "save.h"
using namespace std;

// *�� &�� ����ϴ� ���� - ���ݰ�ü�� �����ϱ� ����

int main()
{
	int a[100];

	// [����] a�� ������ ( 1, 10,000,000 ) ���������� ä����
	// ���� ���� ���� ū ���� ã�� ȭ�鿡 �������

	// O(n) N�� ����Ѵ�. - �����˰���

	default_random_engine dre;
	uniform_int_distribution<int> uni( 1, 10'000'000 );

	int max { 0 }, min { 10'000'000 };

	for( int& d : a )	// syntatic sugar�� ���� - �������� ���� ����
		d = uni( dre );

	for( int d : a )	// ��������� for (range-based for)
		cout << d << ' ';
	cout << endl;

	cout << max << ' ' << min << endl;
	
	// ū ���� ã��
	int dataMax = a[ 0 ];
	for( int d : a )
		if( dataMax < d )
			dataMax = d;

	cout << "���� ū ���� : " << dataMax << endl;

	save( "�ҽ�.cpp" );
}