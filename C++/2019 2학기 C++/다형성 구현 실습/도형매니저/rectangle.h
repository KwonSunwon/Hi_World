// Rectangle.h			�밢���� �ִ� �� 2���� �簢���� �����Ѵ�

#include "point.h"
#include "shape.h"

class Rectangle : public Shape {
	Point p1, p2;
	
public:
	Rectangle();
	Rectangle( const Point&, const Point& );
	Rectangle( const Rectangle& );
	~Rectangle();

	virtual void draw() const override;
};