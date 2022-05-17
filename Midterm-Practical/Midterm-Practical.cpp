

#include <iostream>
#include "Helper.h"

int main()
{
	char menu[2][32] = { "Get a question!","Exit" };
	char questions[4][36] = { "What is 4 + 5?","What is 3 * 5?", "What is 9 + 3?","What is 8 - 4?" };


	char Question1[4][32] = { "7","10","9","8" };
	char Question2[4][32] = { "15","12","8","24" };
	char Question3[4][32] = { "13","15","12","10" };
	char Question4[4][32] = { "2","5","7","4" };
	int range = 5;
	int randy = 15 + rand() % (20 - 15 + 1);
	int UserAnswer;

	while (true)
	{
		int UserChoice = MainMenu(2, menu);
		system("cls");

		switch (UserChoice)
		{
		case 1:
			randy = 1 + rand() % ((int)(4 - 1 + 1));
			std::cout << questions[randy - 1] << std::endl << std::endl;
			switch (randy)
			{
			case 1:
				UserAnswer = MainMenu(4, Question1);
				if (UserAnswer == 3)
					std::cout << "Correct!\n\n";
				else
					std::cout << "Unfortunately that is wrong \n\n";

				break;
			case 2:
				UserAnswer = MainMenu(4, Question2);
				if (UserAnswer == 1)
					std::cout << "Correct!\n\n";
				else
					std::cout << "Unfortunately that is wrong\n\n";
				break;
			case 3:
				UserAnswer = MainMenu(4, Question3);
				if (UserAnswer == 3)
					std::cout << "Correct!\n\n";
				else
					std::cout << "Unfortunately that is wrong\n\n";
				break;
			case 4:
				UserAnswer = MainMenu(4, Question4);
				if (UserAnswer == 4)
					std::cout << "Correct!\n\n";
				else
					std::cout << "Unfortunately that is wrong\n\n";

				break;

			default:
				break;

			}
			system("pause");
			system("cls");
			break;
		case 2:
			exit(0);
			break;
		default:
			break;
		}
	}

}


