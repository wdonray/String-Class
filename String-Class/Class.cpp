#include <iostream>
#include "Header.h"

myString::myString(char * F)
{
	m_Word = F;
}
int myString::length() // Problem 1
{
	int x; //Set a variable that has the default initialization
	for (x = 0;;) //Inside of the loop just make it equal 0 and loop it
	{
		if (m_Word[x] == '\0') //Have it loop through my first word until it gets to the \0 which is the empty space after the word or the last letter
		{
			break; //Break it at that point so it does not loop forever 
		}
		x++; // Incriminate it so it goes through until it hits the \0 above
	}
	return x; //Return the x that is now equal to the number that is on \0
}

bool myString::index() // Problem 2
{
	int input; //Set a variable that has the default initialization
	std::cout << "Input a number to access that index \n \n";
	std::cin >> input; //Have the user input a number that will equal the variable
	while (!std::cin)
	{
		std::cout << "Not a valid index" << std::endl;
		std::cin.clear();
		std::cin.ignore();								//Used to avoid the code breaking when you enter a char
		std::cin >> input;
	}
	std::cout << "---------------------- \n";
	std::cout << m_Word[input] << "\n"; //Have console output the word that is equal to that interger
	std::cout << "---------------------- \n";
	return true; //Return as true if the number the user inputs is a number on the array
}

bool myString::compare(myString f, myString s) // Problem 3
{
	/*int equal = strcmp(m_first, m_second);
	if ((equal) == 0)
	{
		printf("They are the same \n \n");
	}
	else
	{
		printf("They are not the same \n \n");
	}
	if (strcmp(m_first, m_second) == 0)
	{
		printf("%s is equal %s \n \n", m_first, m_second);
	}
	else if (strcmp(m_first, m_second) == 1)
	{
		printf("%s is after %s \n \n", m_first, m_second);
	}
	else if (strcmp(m_first, m_second) == -1)
	{
		printf("%s is before %s \n \n", m_first, m_second);
	}
	return 1;*/
	// Above is a small example
	bool equal = true;
	for (int i = 0;; i++)
	{
		equal = (f.m_Word[i] == s.m_Word[i]) ? true : false;
		if (equal == false)
		{
			break;
		}
	}
	return equal;
}
