// ShapeManager.h			도형을 관리하는 클래스
//
// Shape*(조상의 *)로 전체 도형을 관리하는 것이 핵심

#include "shape.h"

class ShapeManager {
	int nShape;				// 현재 보유한 도형의 갯수
	int capacity;			// 담을 수 있는 최대 도형의 갯수
	Shape** shapes;			// 도형의 포인터들을 담을 수 있는 메모리

	unsigned short removeShapeNum;

public:
	explicit ShapeManager( int n );			// 담을 수 있는 도형의 갯수가 인자인 생성자	
											// explicit - 의도하지 않은 형변환을 막기 위해 사용
	~ShapeManager();
	ShapeManager( const ShapeManager& ) = default;

	void insert ( Shape* );			// 도형을 추가하는 함수
	void draw() const;				// 전체 도형을 그리는 함수

	void removeNum( int );			// 번호로 제거
	void remove( int );				// 종류로 제거

	int return_nShape();
	Shape* return_shapes( int );
};