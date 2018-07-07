#include <iostream>
#include <cstdlib>
#include <ctime>

int randNum(int min, int max)
{
	return rand() % max + min;
}

int main()
{
	
	int rand = randNum(0, 100);
	int guess=0;
	int times=0;
	std::cout << "I thought about a number between 0 nad 100 can you guess it?" << std::endl;
	while (guess != rand) {
		std::cin >> guess;


		times++;

		if (guess == rand) {
			std::cout << "you did it" << std::endl;
			std::cout << "your atempts are " << times << std::endl;
		}
		else if (guess > rand) {
			std::cout << "aim lower" << std::endl;
		}
		else if (guess < rand) {
			std::cout << "aim higher" << std::endl;
		}

	}
	
}