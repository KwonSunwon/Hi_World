// ShapeManager.h			������ �����ϴ� Ŭ����
//
// Shape*(������ *)�� ��ü ������ �����ϴ� ���� �ٽ�

#include "shape.h"

class ShapeManager {
	int nShape;				// ���� ������ ������ ����
	int capacity;			// ���� �� �ִ� �ִ� ������ ����
	Shape** shapes;			// ������ �����͵��� ���� �� �ִ� �޸�
public:
	explicit ShapeManager( int n );			// ���� �� �ִ� ������ ������ ������ ������	
											// explicit - �ǵ����� ���� ����ȯ�� ���� ���� ���
	~ShapeManager();
	ShapeManager( const ShapeManager& ) = default;

	void insert ( Shape* );			// ������ �߰��ϴ� �Լ�
	void draw() const;				// ��ü ������ �׸��� �Լ�
};