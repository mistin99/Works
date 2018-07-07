
#include<iostream>
using namespace std;

int main() {

	int pancake[100];
	int person;
	std::cout << "how many people had breakfast?";
	std::cin >> person;
	int i;
	int z;
	int max = 1;
	int min = 1;
	int max_person = 1;
	int min_person = 1;



	for (i = 1; i < person+1; i++) {
		cout << "how many pancakes did the " << i << " person eat?" << endl;
		cin >> pancake[i];
	}

	for (z = 0; z < person; z++) {

		for (i = 1; i < person; i++)
		{
			if (pancake[z] < pancake[i]) {
				max = pancake[i];
				max_person = i;
			}

			else if (pancake[z] > pancake[i]) {

				min = pancake[i];
				min_person = i;
			}

		}
	}




	cout << max << " is the most pancake eaten by person " << max_person << endl;

	cout << min << " is the least pancake eaten by person " << min_person << endl;




}
