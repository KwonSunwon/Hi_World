// ShapeManager.cpp 도형을 관리하는 클래스

#include <iostream>
#include "ShapeManager.h"
using namespace std;

ShapeManager::ShapeManager ( int n ) {
	nShape = 0;							// 처음 만들어질 때는 관리하는 도형 갯수가 0임
	capacity = n;						// 최대 n개의 도형을 담을 수 있음
	shapes = new Shape*[capacity];
	removeShapeNum = 0;
}

ShapeManager::~ShapeManager ( ) {
	cout << "ShapeManager 소멸자 호출" << endl;
	// 모든 객체가 정확하게 삭제되는지 반드시 확인하여야 한다.
	for( int i = 0; i < capacity; ++i )	// 이 과정에서 이중포인터로 형성된 데이터의 안쪽의 데이터를 지우고 온다
		delete shapes[ i ];				//  - 각각의 도형의 소멸자를 호출한다
	delete[] shapes;					// 도형관리자가 관리하는 도형의 소멸자를 호출함
};

void ShapeManager::insert ( Shape* a ) {
	shapes[nShape] = a;
	nShape++;
};

void ShapeManager::draw ( ) const {
	cout << "----------------------------------------------" << endl;
	cout << "관리하는 모든 도형을 그립니다" << endl;
	cout << "최대 " << capacity << "개의 도형을 담을 수 있습니다." << endl;
	cout << "모두 " << nShape - removeShapeNum << "개의 도형이 있습니다." << endl;
	cout << "삭제된 도형은 " << removeShapeNum << "개 입니다." << endl;
	cout << "----------------------------------------------" << endl << endl;

	for ( int i = 0; i < nShape; ++i )
	{
		cout << "[" << i << "] ";
		if( shapes[ i ] )
			shapes[ i ]->draw();
		else
			cout << "삭제됨" << endl;
	}
	cout << endl;

	cout << "----------------------------------------------" << endl;
	cout << "그리기를 마칩니다" << endl;
	cout << "----------------------------------------------" << endl << endl;
};

void ShapeManager::removeNum( int num )
{
	delete shapes[ num ];
	shapes[ num ] = nullptr;

	cout << "----------------------------------------------" << endl;
	cout << num << "번째 도형을 제거했습니다." << endl;
	cout << "지금까지 " << ++removeShapeNum << "개의 도형을 제거했습니다." << endl;
	cout << "----------------------------------------------" << endl << endl;
}

int ShapeManager::return_nShape()
{
	return nShape;
}

Shape* ShapeManager::return_shapes( int num )
{
	return shapes[ num ];
}