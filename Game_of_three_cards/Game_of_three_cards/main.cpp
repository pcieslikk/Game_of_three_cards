#include <iostream>
#include <random>
int main()

{
	std::srand(time(nullptr));
	size_t number_of_card;
	std::cout << "Choose:\n1.\n2.\n3.\n";
	std::cin >> number_of_card;
	int number_of_card_rand = rand() % 3 + 1;
	if (number_of_card_rand == 1)
	{
		std::cout << "The red winnig card have a number 1\n";
	}
	else if (number_of_card_rand == 2)
	{
		std::cout << "The red winnig card have a number 2\n";
	}
	else if (number_of_card_rand == 3)
	{
		std::cout << "The red winnig card have a number 3\n";
	}
	if (number_of_card == number_of_card_rand)
	{
		std::cout << "You Win!";
	}
	else
	{
		std::cout << "Game over!";
	}
	return 0;
}
