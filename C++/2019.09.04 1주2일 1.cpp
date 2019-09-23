//-----------------------------------------------------------------------------
// 2019. 9. 4 �� C++                           ��56��34          (1�� 2��)
//
// Save ��� �����
//	- save�� �Լ��� �����
//	- save�� �ð��� ����ϱ� ---> �ð��� �ѱ۷� ���� �� �ְڴ�? (�߰�)
//	- save ������ �и��ϱ�
//
// ���� 
//	- C++�Լ� �����ϱ�
//-----------------------------------------------------------------------------
#include <fstream>
#include <iostream>
#include <chrono>
#pragma warning(disable:4996)

void save( char const* fname )		// �Լ��� ���� (Function Declaration)
{
	std::ifstream in(fname);
	std::ofstream out("2019 C++ ������.txt", std::ios::app);

	// �����ϴ� ������ �ð����� ������
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);
	std::cout << ctime(&time) << std::endl;



	out << "\n\n\n";
	out << "----------------------------------------------------------------------------" << std::endl;
	out << ctime(&time);	// ����� �ð��� ����Ѵ�
	out << "----------------------------------------------------------------------------" << std::endl;
	out << "\n\n\n";

	int c;
	while ((c = in.get()) != EOF)
		out.put(c);
}

int main ()
{
	save("�ҽ�.cpp");
}
