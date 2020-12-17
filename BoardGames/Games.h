#pragma once
#ifndef GAMES_H
#define GAMES_H

#include <string>
#include <iostream>

class Game
{
public:
	std::string m_name;
	double m_gibbonsRating;
	double m_publicsRating;
	int m_year;
	int m_minPlayers;
	int m_minPlaytime;

	Game();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description NA
	**/

	void gamePrint();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description NA
	**/

	int gameYear();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description -- returns an integer which is the year which that particular game came out.
	**/

	double gameGR();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description -- returns a double which is the rating which Gibbons assigned to that particular game.
	**/
	double gamePR();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description returns a double which is the rating which some public forum assigned to that particular game.
	**/

	int gameTime();

	/**
	* @pre None
	* @post entry is added to top of the stack
	* @return value description -- returns an integer which is the minimum amount of time which it takes to play that game.
	**/
};

#endif