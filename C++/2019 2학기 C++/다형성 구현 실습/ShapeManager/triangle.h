// Triangle.h			 세 점으로 삼각형을 정의할 수 있다.

#include "point.h"		// point를 triangle에서 사용	
#include "shape.h"		// shape을 상속 받음

class Triangle : public Shape {
	Point p1, p2, p3;
public:
	Triangle();
	Triangle( const Point&, const Point&, const Point& );
	Triangle( const Triangle& );
	~Triangle();
	
	virtual void draw() const override;		// 가상함수 overriding
};