//-----------------------------------------------------------------------------
// 강의 내용을 저장하기 위한 save 파일 선언
// 2019. 9. 4. 수요일                                          작성자:Sunwon
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

	// 저장하는 시점의 시간값을 얻어오자
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);
	std::cout << ctime(&time) << std::endl;

	std::stringstream ss;
	ss << std::put_time( std::localtime( &time ), "%Y.%m.%d %a" );

	std::ofstream out( ss.str() + ".txt", std::ios::app );

	out << "\n\n\n";
	out << "----------------------------------------------------------------------------" << std::endl;
	out << ctime(&time);	// 저장된 시간을 기록한다
	out << "----------------------------------------------------------------------------" << std::endl;
	out << "\n\n";

	int c;
	while ((c = in.get()) != EOF)
		out.put(c);
}