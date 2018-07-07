#include <iostream>

int main() {
	int grade;
	std::cout << "enter grade";
	std::cin >> grade;
	if (grade == 100) {
		std::cout << "perfect result";
	}
	else if (grade > 100) {
		std::cout << "Enter  valid points";
	}
	else if (grade < 0) {
		std::cout << "Enter  valid points";
	}
	else if (grade >= 90)
	{
		std::cout << "Student has A";
	}
	else if (grade >= 80) {
		std::cout << "Student has B";
		
	}

	else if (grade >= 70)
	{
		std::cout << "Student has C";
	}
	else if (grade >= 60)
	{
		std::cout << "Student has D";
	}
	else if (grade <=59)
	{
		std::cout << "Student has F ";
	}
	
}