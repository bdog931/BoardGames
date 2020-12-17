#include "Executive.h"

Executive::Executive(std::string& argument)
{
	m_fileName = argument;
}

void Executive::run()
{
	int userChoice = 0;
	int size = 0;
	bool inGame = true;

	m_inFile.open(m_fileName);

	m_inFile >> size;
	Game* gamePtr = nullptr;
	gamePtr = new Game[size];

	for (int i = 0; i < size; i++)
	{
		m_inFile >> Game[i].m_name >> Game[i].m_gibbonsRating >> Game[i]m_publicsRating >> Game[i].m_year >> Game[i].m_minPlayers >> Game[i]minPlaytime;
	}

	do
	{
		std::cout << "Here are your six options: " << '\n';
		std::cout << "1. Print all the games. " << '\n';
		std::cout << "2. Print all of the games from a given year. " << '\n';
		std::cout << "3. Display all games of a given ranking range " << '\n';
		std::cout << "4. Display games based on disparate ratings " << '\n';
		std::cout << "5. Display all games of a given playtime or lower" << '\n';
		std::cout << "6. Exit the program. " << '\n';
		std::cout << "What option do you choose?";
		std::cin >> userChoice;

		if (userChoice == 1)
		{
			printGames();
		}
		else if (userChoice == 2)
		{
			printYear();
		}
		else if (userChoice == 3)
		{
			printRange();
		}
		else if (userChoice == 4)
		{
			printDispute();
		}
		else if (userChoice == 5)
		{
			printForTime();
		}
		else if (userChoice == 6)
		{
			exit();
			inGame = false;
		}
		else
		{
			std::cout << "Try again. Enter a number 1 - 6." << std::endl;
		}
	} while (inGame == true);
}


void Executive::printGames()
{

}

void Executive::printYear()
{
	if (1 > 0)
	{
		printGames();
	}
}

void Executive::printRange()
{
	if (1 > 0)
	{
		printGames();
	}
}

void Executive::printDispute()
{
	if (1 > 0)
	{
		printGames();
	}
}

void Executive::printForTime()
{
	if (1 > 0)
	{
		printGames();
	}
}

void Executive::exit()
{
	delete[] Game();
	//Goes through and deletes all of the games.
	std::cout << "Thank you for using the program. '\n'";
}
/*
int size = 0;
	int userTime = 0;
	int userYear = 0;
	int lowerBound = 0;
	int upperBound = 0;
	int userDif = 0;
	std::string* names = nullptr;
	double* gibbonsRatings = nullptr;
	double* publicsRatings = nullptr;
	int* years = nullptr;
	int* minPlayers = nullptr;
	int* minPlaytimes = nullptr;
	int userOption = 0;
	bool inGame = true;
if(myInFile.is_open())
		{
			std::cout << "Your File has been opened." << std::endl;
			myInFile >> size;
			std::cout << "The number of games in your file is " << size << "." << std::endl;
			names = new std::string[size];
			gibbonsRatings = new double[size];
			publicsRatings = new double[size];
			years = new int[size];
			minPlayers = new int[size];
			minPlaytimes = new int[size];
			for(int i = 0; i<size; i++)
			{
				myInFile >> names[i] >> gibbonsRatings[i] >> publicsRatings[i] >> years[i] >> minPlayers[i] >> minPlaytimes[i];
				std::cout << names[i];
			}
			do
			{
				std::cout << "Here are your six options: " << '\n';
				std::cout << "1. Print all the games. " << '\n';
				std::cout << "2. Print all of the games from a given year. " << '\n';
				std::cout << "3. Display all games of a given ranking range " << '\n';
				std::cout << "4. Display games based on disparate ratings " << '\n';
				std::cout << "5. Display all games of a given playtime or lower" <<  '\n';
				std::cout << "6. Exit the program. " << '\n';
				std::cout << "What option do you choose?" << '\n';
				std::cin >> userOption;
				if(userOption == 1)
				{
					for(int i=0;i<size;i++)
					{
						std::cout << names[i] << " (" << years[i] << ") " << "[GR=" << gibbonsRatings[i];
						std::cout << ", PR=" << publicsRatings[i] <<  ",MP=" << minPlayers[i] << ",MT=" << minPlaytimes[i] << "] " << std::endl;
					}
				}
				if(userOption == 2)
				{
					std::cout << "What year do you choose? ";
					std::cin >> userYear;
					for(int i =0;i<size;i++)
					{
						if(years[i] == userYear)
						{
							std::cout << names[i] << " (" << years[i] << ") " << "[GR=" << gibbonsRatings[i];
							std::cout << ", PR=" << publicsRatings[i] <<  ",MP=" << minPlayers[i] << ",MT=" << minPlaytimes[i] << "] " << std::endl;
						}
					}
				}
				if(userOption == 3)
				{
					std::cout << "What is the lower bound for your ranking range? ";
					std::cin >> lowerBound;
					std::cout << "What is the upper bound for your ranking range? ";
					std::cin >> upperBound;
					for(int i =0;i<size;i++)
					{
						if(lowerBound <= gibbonsRatings[i] && gibbonsRatings[i] <= upperBound)
						{
							std::cout << names[i] << " (" << years[i] << ") " << "[GR=" << gibbonsRatings[i];
							std::cout << ", PR=" << publicsRatings[i] <<  ",MP=" << minPlayers[i] << ",MT=" << minPlaytimes[i] << "] " << std::endl;
						}
					}
				}
				if(userOption == 4)
				{
					std::cout << "What amount of difference in ratings would you like displayed? ";
					std::cin >> userDif;
					for(int i=0;i<=size;i++)
					{
						if(gibbonsRatings[i] - publicsRatings[i] >= userDif || publicsRatings[i] - gibbonsRatings[i] >= userDif)
						{
							std::cout << names[i] << " (" << years[i] << ") " << "[GR=" << gibbonsRatings[i];
							std::cout << ", PR=" << publicsRatings[i] <<  ",MP=" << minPlayers[i] << ",MT=" << minPlaytimes[i] << "] " << std::endl;
						}
					}

				}
				if(userOption == 5)
				{
					std::cout << "What is your maximum minumum playtime? ";
					std:: cin >> userTime;
					for(int i =0;i<size;i++)
					{
						if(minPlaytimes[i] <= userTime)
						{
							std::cout << names[i] << " (" << years[i] << ") " << "[GR=" << gibbonsRatings[i];
							std::cout << ", PR=" << publicsRatings[i] <<  ",MP=" << minPlayers[i] << ",MT=" << minPlaytimes[i] << "] " << std::endl;
						}
					}
				}
				if(userOption == 6)
				{
					std::cout << "Thank you for using the program. " << std::endl;
					inGame = false;
				}
			} while(inGame == true);
			delete[] names;
			delete[] publicsRatings;
			delete[] years;
			delete[] minPlayers;
			delete[] minPlaytimes;
		}
		*/