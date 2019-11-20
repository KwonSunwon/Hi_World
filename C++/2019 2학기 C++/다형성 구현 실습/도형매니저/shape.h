// Shape.h			Shape Class - Virtual Base Class
//					�� Ŭ������ �߻� Ŭ����(abstract class)�̴�.

#ifndef _Shape		// _Shape�� �ѹ��� ���ǵ����� ���ٸ�
#define _Shape		// _Shape�� �����Ѵ�

class Shape {
public:
	Shape ( ) {};
	~Shape ( ) {};

	virtual void draw() const = 0;		// pure virtual function
};
#endif // _Shape
