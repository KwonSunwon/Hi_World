//Point.h		Point Class Declaration
//				2차원 좌표 (x,y)
//				CPP의 내용은 컴파일된 형태(obj)로 사용할 수 있다. (내용은 볼 수 없다.)

#include "point.h"

// 디폴트 생성자
Point::Point ( ) : x ( 0.0 ), y ( 0.0 ) {};

// 인자 두 개를 받는 생성자
Point::Point ( double a, double b ) : x ( a ), y ( b ) {};