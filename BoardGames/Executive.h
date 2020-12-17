#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include "Games.h"

class Executive
{
private:
	std::ifstream m_inFile;
	std::string m_fileName;

public:
	Executive(std::string& argument);

	/**
	* @pre Ojbect by reference must be a string -- this should be the input file or else will be reading in from wrong file
	* @post assigned public member m_inFile to passed in file
	* @return value description NA
	**/

	void run();

	/**
	* @pre Executive object must exist
	* @post program is completed
	* @return value description NA
	**/
	void printGames();

	/**
	* @pre None
	* @post Games which have been called will have been printed
	* @return value description NA
	**/
	void printYear();

	/**
	* @pre The Game must exist and have a year variable
	* @post The Games made from a certain year will have been printed
	* @return value description NA
	**/

	void printRange();

	/**
	* @pre Games must exist
	* @post Games from a particular range of ratings will have been printed
	* @return value description NA
	**/

	void printDispute();

	/**
	* @pre Games must exist and have Gibbon and Public ratings
	* @post Games for which a particular size of disagreement have been printed
	* @return value description NA
	**/

	void printForTime();

	/**
	* @pre Games must exist and have a time variable
	* @post Games that have a particular minimum playtime or lower have been printed
	* @return value description NA
	**/

	void exit();

	/**
	* @pre None
	* @post Program has ended and heap objects have been deleted
	* @return value description NA
	**/
};