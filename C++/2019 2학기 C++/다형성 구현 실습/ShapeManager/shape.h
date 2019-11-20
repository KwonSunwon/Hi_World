// Shape.h			Shape Class - Virtual Base Class
//					이 클래스는 추상 클래스(abstract class)이다.

#include <iostream>

#ifndef _Shape		// _Shape가 한번도 정의된적이 없다면
#define _Shape		// _Shape을 정의한다

class Shape {
public:
	Shape ( ) {
		std::cout << "Shape 생성" << std::endl;
	};
	virtual ~Shape()
	{
		std::cout << "Shape 소멸" << std::endl;
	};		// 여기 virtual이 없으면 실행 X

	virtual void draw() const = 0;		// pure virtual function
};
#endif // _Shape
