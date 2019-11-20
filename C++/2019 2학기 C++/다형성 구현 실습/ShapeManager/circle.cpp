// Circle.cpp

#include <iostream>
#include "circle.h"

Circle::Circle() : center(), rad( 0.0 )
{
	std::cout << "Circle 디폴트 생성" << std::endl;
}

Circle::Circle ( const Point& c, int r ) : center ( c ), rad ( r ) {
	std::cout << "Circle 생성" << std::endl;
}

// 복사생성자를 프로그램할 이유가 있다면 멤버변수의 값을 복사해야한다.
// 복사생성자를 프로그램하면서 아무것도 하지 않으면 멤버벼누는 복사되지 않는다.
Circle::Circle ( const Circle& other ) : center ( other.center ), rad ( other.rad ) {
	std::cout << "Circle 복사 생성" << std::endl;
}

Circle::~Circle ( ) {
	std::cout << "Circle 소멸" << std::endl;
}

void Circle::draw ( ) const {
	std::cout << "원 - 중심점(" << center.x << ", " << center.y << ") 반지름 " << rad << std::endl;
}