#include "Games.h"
#include "Executive.h"
#include <iostream>

int main(int argc, char* argv[])
{
	std::string argument = "";
	if (argc < 2)
	{
		std::cout << "Incorrect number of parameters!\n";
	}
	else
	{
		argument = argv[1];
		Executive exec(argument);
		exec.run();
	}
	return(0);
}



