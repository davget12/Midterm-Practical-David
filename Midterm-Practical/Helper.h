#pragma once
#include <iostream>
#include <vector>

int GetValidatedInt(const char* strMessage, int min = 0, int max = 0)
{
	bool notNum = false;
	int num;
	do {

		int length = strlen(strMessage) + 1;
		char* message = new char[length];
		strcpy_s(message, length, strMessage);
		std::cout << message;
		delete[] message;
		std::cin >> num;
		if (min == 0 && max == 0)
		{
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');

			}
			else
			{

				notNum = true;
			}
		}
		else {
			if (std::cin.fail() || num > max || num < min)
			{
				std::cin.clear();
				std::cin.ignore(INT_MAX, '\n');

			}

			else
			{

				notNum = true;
			}
		}


	} while (notNum == false);

	std::cin.clear();
	std::cin.ignore(INT_MAX, '\n');

	return num;
}

int MainMenu(int Amount, char strMessege[][32])
{
	for (int x = 0; x < Amount; x++)
	{
		std::cout << x + 1 << ". " << strMessege[x] << std::endl;
	}
	int choice = GetValidatedInt("Your answer:", 1, Amount);
	return choice;

}
int randomRange(int min, int max)
{
	return min + rand() % max;
}