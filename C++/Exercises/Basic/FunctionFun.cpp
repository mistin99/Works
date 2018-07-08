#include <iostream>
void Hello();
int multiply();
int half();
int main() {
	Hello();
	int a, b;
	
	int c = multiply();
	std::cout << c << std::endl;;

	 half();
	
	
}

void Hello() {
	std::cout << "Hello World" << std::endl;
}

int multiply()
{
	int a;
	int b;
	std::cout << "Enter first value" << std::endl;
	std::cin >> a;
	std::cout << "Enter second value" << std::endl;
	std::cin >> b;
	std::cout << "Result is" << std::endl;
	int c = a * b;
	return c;
}

int half() {
	int d;
	std::cout << "Enter a value to be divided" << std::endl;
	std::cin >> d;
	int result = d;;
	
	do {
		result = result/2;
		
		std::cout << result << std::endl;
	} while (result > 1 );
	{
		std::getchar();
	}
	return d;
}