// ShapeManager.cpp ������ �����ϴ� Ŭ����

#include <iostream>
#include "ShapeManager.h"
using namespace std;

ShapeManager::ShapeManager ( int n ) {
	nShape = 0;							// ó�� ������� ���� �����ϴ� ���� ������ 0��
	capacity = n;						// �ִ� n���� ������ ���� �� ����
	shapes = new Shape*[capacity];
}

ShapeManager::~ShapeManager ( ) {
	cout << "ShapeManager �Ҹ��� ȣ��" << endl;
	// ��� ��ü�� ��Ȯ�ϰ� �����Ǵ��� �ݵ�� Ȯ���Ͽ��� �Ѵ�.
	for( int i = 0; i < capacity; ++i )	// �� �������� ���������ͷ� ������ �������� ������ �����͸� ����� �´�
		delete shapes[ i ];				//  - ������ ������ �Ҹ��ڸ� ȣ���Ѵ�
	delete[] shapes;					// ���������ڰ� �����ϴ� ������ �Ҹ��ڸ� ȣ����
	cout << "ShapeManager �Ҹ��� ȣ��" << endl;
};

void ShapeManager::insert ( Shape* a ) {
	shapes[nShape] = a;
	nShape++;
};

void ShapeManager::draw ( ) const {
	cout << "----------------------------------------------" << endl;
	cout << "�����ϴ� ��� ������ �׸��ϴ�" << endl;
	cout << "�ִ� " << capacity << "���� ������ ���� �� �ֽ��ϴ�." << endl;
	cout << "��� " << nShape << "���� ������ �ֽ��ϴ�." << endl;
	cout << "----------------------------------------------" << endl << endl;

	for ( int i = 0; i < nShape; ++i ) {
		cout << "[" << i << "] ";
		shapes[i]->draw();
	}
	cout << endl;

	cout << "----------------------------------------------" << endl;
	cout << "�׸��⸦ ��Ĩ�ϴ�" << endl;
	cout << "----------------------------------------------" << endl << endl;
};