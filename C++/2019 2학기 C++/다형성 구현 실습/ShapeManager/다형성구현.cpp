// 다형성구현.cpp
//
// 알아보고 익혀야 할 것
//		- 다형성(Ploymorphism)이란 무엇인가?
//		- C++ 언어에서는 어떻게 다형성을 구현하는가?

#include "point.h"
#include "triangle.h"
#include "circle.h"
#include "rectangle.h"
#include "line.h"
#include "ShapeManager.h"
using namespace std;

int main()
{
	ShapeManager sm( 100 );
	unsigned short choseMenu {};
	unsigned short num;

	while( choseMenu != 4 )
	{
		cout << endl;
		cout << "----------------------------------------------" << endl;
		cout << "Shape Manager - 원하는 작업을 선택해주세요." << endl;
		cout << "1. 원하는 도형 추가" << endl;
		cout << "2. 원하는 도형 제거" << endl;
		cout << "3. 전체 도형을 그리기" << endl;
		cout << "4. 프로그램 종료" << endl;
		cout << "----------------------------------------------" << endl << endl;

		cout << "번호를 입력하세요 : ";
		cin >> choseMenu;
		cout << endl << endl;

		switch( choseMenu )
		{
		case 1: // 도형 추가
		{
			cout << "----------------------------------------------" << endl;
			cout << "원하는 도형을 선택해주세요" << endl;
			cout << "1. 삼각형" << endl;
			cout << "2. 사각형" << endl;
			cout << "3. 원" << endl;
			cout << "4. 선" << endl;
			cout << "----------------------------------------------" << endl << endl;

			unsigned short shapeNum;

			cout << "번호를 입력하세요 : ";
			cin >> shapeNum;
			cout << endl;

			switch( shapeNum )	// 도형추가
			{
			case 1:	// 삼각형
			{
				double p1xT, p1yT, p2xT, p2yT, p3xT, p3yT;
				cout << "p1(x, y), p2(x, y), p3(x, y) 각각의 x, y를 입력해 주세요" << endl;
				cin >> p1xT >> p1yT >> p2xT >> p2yT >> p3xT >> p3yT;
				sm.insert( new Triangle( Point( p1xT, p1yT ), Point( p2xT, p2yT ), Point( p3xT, p3yT ) ) );
				break;
			}
			case 2: // 사각형
			{
				double p1xR, p1yR, p2xR, p2yR;
				cout << "p1(x, y), p2(x, y) 각각의 x, y를 입력해 주세요" << endl;
				cin >> p1xR >> p1yR >> p2xR >> p2yR;
				sm.insert( new Rectangle( Point( p1xR, p1yR ), Point( p2xR, p2yR ) ) );
				break;
			}
			case 3: // 원
			{
				double px, py, r;
				cout << "원의 중심 p(x, y)와 r을 입력해주세요" << endl;
				cout << "원의 중심 : ";
				cin >> px >> py;
				cout << "반지름 : ";
				cin >> r;
				sm.insert( new Circle( Point( px, py ), r ) );
				break;
			}
			case 4: // 선
			{
				double p1x, p1y, p2x, p2y;
				cout << "시작점 p1(x, y)과 끝점 p2(x, y)을 입력해주세요" << endl;
				cout << "시작점 : ";
				cin >> p1x >> p1y;
				cout << "끝점 : ";
				cin >> p2x >> p2y;
				sm.insert( new Line( Point( p1x, p1y ), Point( p2x, p2y ) ) );
				break;
			}
			default:
			{
				for( int i = 0; i < 100; ++i )
					sm.insert( new Rectangle( Point( i, i + 1 ), Point( i * 2, i * 3 ) ) );
				break;
			}
				break;
			}
			break;
		}

		case 2: // 도형 제거
		{
			cout << "----------------------------------------------" << endl;
			cout << "원하는 방법을 선택해주세요" << endl;
			cout << "1. 번호로 제거" << endl;
			cout << "2. 종류로 제거" << endl;
			cout << "----------------------------------------------" << endl << endl;

			unsigned short removeNum;

			cout << "번호를 입력하세요 : ";
			cin >> removeNum;
			cout << endl << endl;

			switch( removeNum )
			{
			case 1:
			{
				cout << "제거할 도형의 번호를 입력해주세요 : ";
				cin >> num;

				sm.removeNum( num );
				break;
			}

			case 2:
			{
				cout << "----------------------------------------------" << endl;
				cout << "원하는 도형을 선택해주세요" << endl;
				cout << "1. 삼각형" << endl;
				cout << "2. 사각형" << endl;
				cout << "3. 원" << endl;
				cout << "4. 선" << endl;
				cout << "----------------------------------------------" << endl << endl;

				cout << "번호를 입력하세요 : ";
				cin >> num;
				cout << endl << endl;

				unsigned short tmp;
				tmp = 0;

				if( num == 1 )
				{
					for( int i = 0; i < sm.return_nShape(); ++i )
					{
						if( dynamic_cast< Triangle* >( sm.return_shapes( i ) ) )
						{
							sm.removeNum( i );
							++tmp;
						}
					}
					cout << "----------------------------------------------" << endl;
					cout << "삼각형이 " << tmp << "개만큼 삭제되었습니다." << endl;
					cout << "----------------------------------------------" << endl << endl;
				}
				if( num == 2 )
				{
					for( int i = 0; i < sm.return_nShape(); ++i )
					{
						if( dynamic_cast< Rectangle* >( sm.return_shapes( i ) ) )
						{
							sm.removeNum( i );
							++tmp;
						}
					}
					cout << "----------------------------------------------" << endl;
					cout << "사각형이 " << tmp << "개만큼 삭제되었습니다." << endl;
					cout << "----------------------------------------------" << endl << endl;
				}
				if( num == 3 )
				{
					for( int i = 0; i < sm.return_nShape(); ++i )
					{
						if( dynamic_cast< Circle* >( sm.return_shapes( i ) ) )
						{
							sm.removeNum( i );
							++tmp;
						}
					}
					cout << "----------------------------------------------" << endl;
					cout << "원이 " << tmp << "개만큼 삭제되었습니다." << endl;
					cout << "----------------------------------------------" << endl << endl;
				}
				if( num == 4 )
				{
					for( int i = 0; i < sm.return_nShape(); ++i )
					{
						if( dynamic_cast< Line* >( sm.return_shapes( i ) ) )
						{
							sm.removeNum( i );
							++tmp;
						}
					}
					cout << "----------------------------------------------" << endl;
					cout << "선이 " << tmp << "개만큼 삭제되었습니다." << endl;
					cout << "----------------------------------------------" << endl << endl;
				}
				break;
			}

			default:
			{
				cout << "번호 중에 선택해주세요" << endl;
				break;
			}
			}
			break;
		}

		case 3: sm.draw(); break;
		case 4: cout << "프로그램을 종료합니다." << endl; break;
		default: cout << "번호 중에 선택해주세요" << endl; break;
		}
	}
}

	// 1. 관리 클래스를 만듦
	//ShapeManager sm ( 100 );		// 최대 100개의 도형을 관리함

	// 2. 도형들을 관리 클래스에 삽입함
//	sm.insert ( new Triangle ( ) );
//	sm.insert ( new Triangle ( Point ( 0, 0 ), Point ( 1, 1 ), Point ( 2, 2 ) ) );
//	sm.insert ( new Circle ( Point ( 1.23, 4.56 ), 7.89 ) );

//	for ( int i = 0; i < 10; ++i )
//		sm.insert ( new Rectangle ( Point ( i, i + 1 ), Point ( i * 2, i * 3 ) ) );

	// 3. 관리하고 있는 모든 도형을 그림
//	sm.draw ( );

	// 이 프로그램에서 잘못된 점을 찾을 수 있는가?
