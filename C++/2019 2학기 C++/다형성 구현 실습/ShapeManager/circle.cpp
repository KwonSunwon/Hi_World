// Circle.cpp

#include <iostream>
#include "circle.h"

Circle::Circle() : center(), rad( 0.0 )
{
	std::cout << "Circle ����Ʈ ����" << std::endl;
}

Circle::Circle ( const Point& c, int r ) : center ( c ), rad ( r ) {
	std::cout << "Circle ����" << std::endl;
}

// ��������ڸ� ���α׷��� ������ �ִٸ� ��������� ���� �����ؾ��Ѵ�.
// ��������ڸ� ���α׷��ϸ鼭 �ƹ��͵� ���� ������ ��������� ������� �ʴ´�.
Circle::Circle ( const Circle& other ) : center ( other.center ), rad ( other.rad ) {
	std::cout << "Circle ���� ����" << std::endl;
}

Circle::~Circle ( ) {
	std::cout << "Circle �Ҹ�" << std::endl;
}

void Circle::draw ( ) const {
	std::cout << "�� - �߽���(" << center.x << ", " << center.y << ") ������ " << rad << std::endl;
}