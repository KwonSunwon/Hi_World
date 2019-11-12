//-----------------------------------------------------------------------------
// ���� ������ �����ϱ� ���� save ���� ����
// 2019. 9. 4. ������                                          �ۼ���:Sunwon
//-----------------------------------------------------------------------------

#include <fstream>
#include <iostream>
#include <chrono>
#include <sstream>
#include <ctime>
#include <iomanip>
#include <string>
#pragma warning(disable:4996)

//-----------------------------------------------------------------------------
void save(char const* fname)
//-----------------------------------------------------------------------------
{
	std::ifstream in(fname);

	// �����ϴ� ������ �ð����� ������
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);
	std::cout << ctime(&time) << std::endl;

	std::stringstream ss;
	ss << std::put_time( std::localtime( &time ), "%Y.%m.%d %a" );

	std::ofstream out( ss.str() + ".txt", std::ios::app );

	out << "\n\n\n";
	out << "----------------------------------------------------------------------------" << std::endl;
	out << ctime(&time);	// ����� �ð��� ����Ѵ�
	out << "----------------------------------------------------------------------------" << std::endl;
	out << "\n\n";

	int c;
	while ((c = in.get()) != EOF)
		out.put(c);
}