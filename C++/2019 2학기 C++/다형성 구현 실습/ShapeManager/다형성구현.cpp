// ����������.cpp
//
// �˾ƺ��� ������ �� ��
//		- ������(Ploymorphism)�̶� �����ΰ�?
//		- C++ ������ ��� �������� �����ϴ°�?

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
		cout << "Shape Manager - ���ϴ� �۾��� �������ּ���." << endl;
		cout << "1. ���ϴ� ���� �߰�" << endl;
		cout << "2. ���ϴ� ���� ����" << endl;
		cout << "3. ��ü ������ �׸���" << endl;
		cout << "4. ���α׷� ����" << endl;
		cout << "----------------------------------------------" << endl << endl;

		cout << "��ȣ�� �Է��ϼ��� : ";
		cin >> choseMenu;
		cout << endl << endl;

		switch( choseMenu )
		{
		case 1: // ���� �߰�
		{
			cout << "----------------------------------------------" << endl;
			cout << "���ϴ� ������ �������ּ���" << endl;
			cout << "1. �ﰢ��" << endl;
			cout << "2. �簢��" << endl;
			cout << "3. ��" << endl;
			cout << "4. ��" << endl;
			cout << "----------------------------------------------" << endl << endl;

			unsigned short shapeNum;

			cout << "��ȣ�� �Է��ϼ��� : ";
			cin >> shapeNum;
			cout << endl;

			switch( shapeNum )	// �����߰�
			{
			case 1:	// �ﰢ��
			{
				double p1xT, p1yT, p2xT, p2yT, p3xT, p3yT;
				cout << "p1(x, y), p2(x, y), p3(x, y) ������ x, y�� �Է��� �ּ���" << endl;
				cin >> p1xT >> p1yT >> p2xT >> p2yT >> p3xT >> p3yT;
				sm.insert( new Triangle( Point( p1xT, p1yT ), Point( p2xT, p2yT ), Point( p3xT, p3yT ) ) );
				break;
			}
			case 2: // �簢��
			{
				double p1xR, p1yR, p2xR, p2yR;
				cout << "p1(x, y), p2(x, y) ������ x, y�� �Է��� �ּ���" << endl;
				cin >> p1xR >> p1yR >> p2xR >> p2yR;
				sm.insert( new Rectangle( Point( p1xR, p1yR ), Point( p2xR, p2yR ) ) );
				break;
			}
			case 3: // ��
			{
				double px, py, r;
				cout << "���� �߽� p(x, y)�� r�� �Է����ּ���" << endl;
				cout << "���� �߽� : ";
				cin >> px >> py;
				cout << "������ : ";
				cin >> r;
				sm.insert( new Circle( Point( px, py ), r ) );
				break;
			}
			case 4: // ��
			{
				double p1x, p1y, p2x, p2y;
				cout << "������ p1(x, y)�� ���� p2(x, y)�� �Է����ּ���" << endl;
				cout << "������ : ";
				cin >> p1x >> p1y;
				cout << "���� : ";
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

		case 2: // ���� ����
		{
			cout << "----------------------------------------------" << endl;
			cout << "���ϴ� ����� �������ּ���" << endl;
			cout << "1. ��ȣ�� ����" << endl;
			cout << "2. ������ ����" << endl;
			cout << "----------------------------------------------" << endl << endl;

			unsigned short removeNum;

			cout << "��ȣ�� �Է��ϼ��� : ";
			cin >> removeNum;
			cout << endl << endl;

			switch( removeNum )
			{
			case 1:
			{
				cout << "������ ������ ��ȣ�� �Է����ּ��� : ";
				cin >> num;

				sm.removeNum( num );
				break;
			}

			case 2:
			{
				cout << "----------------------------------------------" << endl;
				cout << "���ϴ� ������ �������ּ���" << endl;
				cout << "1. �ﰢ��" << endl;
				cout << "2. �簢��" << endl;
				cout << "3. ��" << endl;
				cout << "4. ��" << endl;
				cout << "----------------------------------------------" << endl << endl;

				cout << "��ȣ�� �Է��ϼ��� : ";
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
					cout << "�ﰢ���� " << tmp << "����ŭ �����Ǿ����ϴ�." << endl;
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
					cout << "�簢���� " << tmp << "����ŭ �����Ǿ����ϴ�." << endl;
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
					cout << "���� " << tmp << "����ŭ �����Ǿ����ϴ�." << endl;
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
					cout << "���� " << tmp << "����ŭ �����Ǿ����ϴ�." << endl;
					cout << "----------------------------------------------" << endl << endl;
				}
				break;
			}

			default:
			{
				cout << "��ȣ �߿� �������ּ���" << endl;
				break;
			}
			}
			break;
		}

		case 3: sm.draw(); break;
		case 4: cout << "���α׷��� �����մϴ�." << endl; break;
		default: cout << "��ȣ �߿� �������ּ���" << endl; break;
		}
	}
}

	// 1. ���� Ŭ������ ����
	//ShapeManager sm ( 100 );		// �ִ� 100���� ������ ������

	// 2. �������� ���� Ŭ������ ������
//	sm.insert ( new Triangle ( ) );
//	sm.insert ( new Triangle ( Point ( 0, 0 ), Point ( 1, 1 ), Point ( 2, 2 ) ) );
//	sm.insert ( new Circle ( Point ( 1.23, 4.56 ), 7.89 ) );

//	for ( int i = 0; i < 10; ++i )
//		sm.insert ( new Rectangle ( Point ( i, i + 1 ), Point ( i * 2, i * 3 ) ) );

	// 3. �����ϰ� �ִ� ��� ������ �׸�
//	sm.draw ( );

	// �� ���α׷����� �߸��� ���� ã�� �� �ִ°�?
