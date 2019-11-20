// Triangle.h			 �� ������ �ﰢ���� ������ �� �ִ�.

#include "point.h"		// point�� triangle���� ���	
#include "shape.h"		// shape�� ��� ����

class Triangle : public Shape {
	Point p1, p2, p3;
public:
	Triangle();
	Triangle( const Point&, const Point&, const Point& );
	Triangle( const Triangle& );
	~Triangle();
	
	virtual void draw() const override;		// �����Լ� overriding
};