// Rectangle.cpp

#include <iostream>
#include "rectangle.h"

Rectangle::Rectangle ( ) :p1 ( ), p2 ( ) {
	std::cout << "Rectangle ����Ʈ ����" << std::endl;
};

Rectangle::Rectangle ( const Point& a, const Point& b ) : p1 ( a ), p2 ( b ) {
	std::cout << "Rectangle ����" << std::endl;
};

Rectangle::Rectangle ( const Rectangle& other ) : p1 ( other.p1 ), p2 ( other.p2 ) {
	std::cout << "Rectangle ���� ����" << std::endl;
};

Rectangle::~Rectangle ( ) {
	std::cout << "Rectangle �Ҹ�" << std::endl;
}

void Rectangle::draw ( ) const {
	std::cout << "�簢�� - (" << p1.x << ", " << p1.y << "), ("
			<< p2.x << ", " << p2.y << ")" << std::endl;
};