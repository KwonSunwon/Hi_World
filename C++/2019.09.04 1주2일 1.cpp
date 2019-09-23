//-----------------------------------------------------------------------------
// 2019. 9. 4 월 C++                           월56수34          (1주 2일)
//
// Save 기능 만들기
//	- save를 함수로 만들기
//	- save한 시간을 기록하기 ---> 시간을 한글로 적을 수 있겠니? (추가)
//	- save 파일을 분리하기
//
// 과제 
//	- C++함수 공부하기
//-----------------------------------------------------------------------------
#include <fstream>
#include <iostream>
#include <chrono>
#pragma warning(disable:4996)

void save( char const* fname )		// 함수의 선언문 (Function Declaration)
{
	std::ifstream in(fname);
	std::ofstream out("2019 C++ 수업록.txt", std::ios::app);

	// 저장하는 시점의 시간값을 얻어오자
	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);
	std::cout << ctime(&time) << std::endl;



	out << "\n\n\n";
	out << "----------------------------------------------------------------------------" << std::endl;
	out << ctime(&time);	// 저장된 시간을 기록한다
	out << "----------------------------------------------------------------------------" << std::endl;
	out << "\n\n\n";

	int c;
	while ((c = in.get()) != EOF)
		out.put(c);
}

int main ()
{
	save("소스.cpp");
}
