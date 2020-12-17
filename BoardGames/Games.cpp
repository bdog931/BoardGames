#include "Games.h"

Game::Game()
{
	std::string m_name = "";
	double m_gibbonsRating = 0;
	double m_publicsRating = 0;
	int m_year = 0;
	int m_minPlayers = 0;
	int m_minPlaytime = 0;
}
void Game::gamePrint()
{
	std::cout << m_name << " (" << m_year << ") " << "[GR=" << m_gibbonsRating;
	std::cout << ", PR=" << m_publicsRating << ",MP=" << m_minPlayers << ",MT=" << m_minPlaytime << "] " << std::endl;
}
int Game::gameYear()
{
	return(m_year);
}
double Game::gameGR()
{
	return(m_gibbonsRating);
}
double Game::gamePR()
{
	return(m_publicsRating);
}
int Game::gameTime()
{
	return(m_minPlaytime);
}