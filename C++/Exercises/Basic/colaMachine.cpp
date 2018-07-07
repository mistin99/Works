#include <iostream>

int main() {
	int i;
	std::cout << "choose a booze" << std::endl << 
		"1-beer" << std::endl << 
		"2-cola" << std::endl << 
		"3-sprite" << std::endl;
	std::cin >> i;
	switch(i) {
	case 1: std::cout << "you got a beer" << std::endl;
		case 3: std::cout << "you got a beer" << std::endl;
		case 2: std::cout << "you got a beer" << std::endl;
		default: std::cout << "Drink not found" << std::endl;
	}
}