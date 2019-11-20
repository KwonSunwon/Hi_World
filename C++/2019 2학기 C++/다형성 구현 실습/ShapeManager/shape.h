// Shape.h			Shape Class - Virtual Base Class
//					�� Ŭ������ �߻� Ŭ����(abstract class)�̴�.

#include <iostream>

#ifndef _Shape		// _Shape�� �ѹ��� ���ǵ����� ���ٸ�
#define _Shape		// _Shape�� �����Ѵ�

class Shape {
public:
	Shape ( ) {
		std::cout << "Shape ����" << std::endl;
	};
	virtual ~Shape()
	{
		std::cout << "Shape �Ҹ�" << std::endl;
	};		// ���� virtual�� ������ ���� X

	virtual void draw() const = 0;		// pure virtual function
};
#endif // _Shape
