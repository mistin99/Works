#include <iostream>

int main() {
	int number;
	int counts = 0;
	int askedTimes=0;
	for (;;) {
		askedTimes = askedTimes + 1;
		std::cout << "Please Enter a number but not " << askedTimes << std::endl;
		
		std::cin >> number;
		counts = counts + 1;
		if (number == 5) {
			std::cout << "you werent supposed to enter 5";
			break;
		}
		if (counts == 10) {
			std::cout << "I don`t wanna play anymore";
			break;
		}
		if (number == askedTimes) {
			std::cout << "I said don`t enter it baka" << std::endl;;
			break;
		}
	}
}