#include <iostream>
#include <string>
#include <algorithm>
#include <map>
std::string name(std::string FName, std::string LName);
std::string Replace(std::string FName, std::string LName);
std::string Reverse(std::string FName, std::string LName);

int main() {
	std::string FName;
	std::string LName;
	std::cout << "Enter First name: ";
	std::cin >> FName;
	std::cout << "Enter Last Name: ";
	std::cin >> LName;
	std::cout << std::endl;
	std::cout << name(FName,LName);
	std::cout << "Replaced Name" << std::endl;
	std::cout << Replace(FName, LName);
	std::cout << "Reversed Name" << std::endl;
	std::cout << Reverse(FName, LName);
}


std::string name(std::string FName, std::string LName) {
	return FName + "\n" + LName + "\n";

	}

std::string Replace(std::string FName, std::string LName) {
	char r;
	std::map<char, char> rs = { { 'a' , 'z' },{ 'i' , 'z' },{ 'e' , 'z' },{ 'o' , 'z' },{ 'u' , 'z' },{ 'w' , 'z' } };
	std::replace_if(FName.begin(), FName.end(), [&](char c) { return r = rs[c]; }, r);
	std::replace_if(LName.begin(), LName.end(), [&](char c) { return r = rs[c]; }, r);
	return FName + "\n" + LName + "\n";
}

std::string Reverse(std::string FName, std::string LName) {
	for (int i = 0; i < FName.length() / 2; i++)
		std::swap(FName[i], FName[FName.length() - i - 1]);
	for (int i = 0; i < LName.length() / 2; i++)
		std::swap(LName[i], LName[LName.length() - i - 1]);
	return FName + "\n" + LName + "\n";
}