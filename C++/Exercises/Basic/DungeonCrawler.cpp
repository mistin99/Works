#include <iostream>
#include <array>
#define KEY_UP
#define KEY_DOWN
#define KEY_RIGHT
#define KEY_LEFT

int x = 7, y = 7;

int main() {
	

	for(;;) {
		char location;
		std::cin >> location;
		switch (location) {
		case 'w': x--;
			break;
		case 's': x++;
			break;
		case 'd': y++; 
			break;
		case 'a': y--;
			break;
		default:
			std::cout << "";
			break;

		}
		char player = '*';
		char  arena[10][10] = {
			{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' },
		{ '.','.','.','.','.','.','.','.','.','.' } };
		arena[x][y] = player;
		for (int row = 0; row <= 9; row++)
		{
			for (int col = 0; col <= 9; col++) {
				std::cout << arena[row][col];
				std::cout << "";
			}
			std::cout << std::endl;
		}
		std::cout << player;

	}
	
}




