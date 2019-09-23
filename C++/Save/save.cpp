#include <fstream>
#include <iostream>
#include <chrono>
#pragma warning(disable:4996)

void save(char const* fname)
{
	std::ifstream in(fname);
	std::ofstream out("2019 C++ 수업록.txt", std::ios::app);

	auto now = std::chrono::system_clock::now();
	auto time = std::chrono::system_clock::to_time_t(now);
	std::cout << ctime(&time) << std::endl;

	out << "\n\n\n";
	out << "----------------------------------------------------------------------------" << std::endl;
	out << ctime(&time);
	out << "----------------------------------------------------------------------------" << std::endl;
	out << "\n\n";

	int c;
	while ((c = in.get()) != EOF)
		out.put(c);
}
