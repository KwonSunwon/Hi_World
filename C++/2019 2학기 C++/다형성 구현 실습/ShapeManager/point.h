//Point.h		Point Class Declaration - ��� ������ ������ �����Ǿ�� �Ѵ�
//				2���� ��ǥ (x,y)�� ��Ÿ����

#ifndef _Point		// �� ���� include �� �� �ֵ��� ��
#define _Point		// ���Ǻ� ������

struct Point		// struct - ��� ����� public���� �ϰڴٴ� ��
{
	double x, y;

	Point();
	Point( double, double );
	Point( const Point& ) = default;	// ��������� - ����ڰ� ���� �ʿ� ���ٴ� �ǹ�
};

#endif // !_Point
