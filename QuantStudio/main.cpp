#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <IO.h>
#include <Description.h>
#include <File.h>

using teatime::TeaFile;

#include <time.h>

#include <exception>
#include <functional>
#include <iostream>
#include <memory>
#include <thread>




struct Tick
{
	int a;
	int b;
	int c;
};


int main()
{
	/*std::ifstream file("test.csv");
	std::string line;

	auto tf = TeaFile<Tick>::Create("test.tea");
	
	while (std::getline(file, line))
	{
		std::stringstream linestream(line);
		std::string a, b, c;

		std::getline(linestream, a, ',');
		std::getline(linestream, b, ',');
		std::getline(linestream, c, ',');
		Tick t;
		t.a = std::strtol(a.c_str(), nullptr, 10);
		t.b = std::strtol(b.c_str(), nullptr, 10);
		t.c = std::strtol(c.c_str(), nullptr, 10);

		tf->Write(t);
	}


	auto rtf = TeaFile<Tick>::OpenRead("test.tea");
	auto items = rtf->OpenReadableMapping();

	for (Tick *t = items->begin(); t != items->end(); ++t)
		std::cout << t->a << std::endl;*/


}
