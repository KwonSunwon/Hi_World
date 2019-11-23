#include <iostream>
#include "line.h"

Line::Line() : p1( 0, 0 ), p2( 0, 0 )
{
	std::cout << "Line 디폴트 생성" << std::endl;
}
Line::Line( const Point& p1, const Point& p2 ) : p1( p1 ), p2( p2 )
{
	std::cout << "Line 생성" << std::endl;
}
Line::Line( const Line& other ) : p1( other.p1 ), p2( other.p2 )
{
	std::cout << "Line 복사 생성" << std::endl;
}
Line::~Line()
{
	std::cout << "Line 소멸" << std::endl;
}

void Line::draw() const
{
	std::cout << "선 - 시작점 (" << p1.x << ", " << p1.y << ") 끝점 (" << p2.x << ", " << p2.y << ")" << std::endl;
}