/*
Raphael Fonseca
May 4th 2016
CPP/ PRG-410
Proffessor R. BRADLEY ANDREWS

This program is intended to ask the users name, then ask weither the user would like to
add another user to the program(no database support). This program will show knowledge
in input and output statements as well as a simple if/else statement, as well as the
proper user of objects.

*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int main()
{
	// Declarations
	//fix this
	string userName;		// This holds the new users name
	char userAnswer;		// This holds the user's Y or N answer

	//Greet the user
	label:
	std::cout << "What is your name?";
	std::cin >> userName;	// This gathers user names and holds it in memory
	std::cout << "Hello " << userName << " my name is ProgramOne" << std::endl;
	
	// Ask if the user would like to close the application or return to the beginning
	std::cout << "Would you like to enter another name?" << endl;
	std::cout << "Type Y for yes or N for no" << endl;
	std::cin >> userAnswer;

	// If statement intended to check userAnswer for validity
	if (userAnswer == 'Y' || userAnswer == 'y')
		goto label;			// Jumps to the beginning of the program
	else if (userAnswer == 'N' || userAnswer == 'n')
		exit;				// Exits the program
	else
	{
		std::cout << "You did not enter a valid response. " << endl;
		goto label;			// Jumps to the beginning of the program
	}
    return 0;
}

