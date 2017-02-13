// FahrenheitProgram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main()
{
	/*int fahr, celsius;
	int lower, upper, sted;

	lower = 0;
	upper = 300;
	sted = 20;

	fahr = lower;
	printf("Fahrenheit \t Celsius\n");
	while (fahr <= upper)
	{
		celsius = 5 * (fahr - 32) / 9;
		printf("%d\t\t%d\n", fahr, celsius);
		fahr = fahr + sted;
	}*/

	//string, readline and print test
	//printf("Type something\n");
	//std::string str;
	//std::getline(std::cin, str);
	//cout << str << "\n";

	printf("Type the Fahrenheit you want to convert to Celsius\n");
	string userInput;
	getline(cin, userInput);

	//convert str to int
	int value = atoi(userInput.c_str());
	
	//convert to Celsius
	int celsius = 5 * (value - 32) / 9;

	//print new value
	cout << celsius << "\n";

}

