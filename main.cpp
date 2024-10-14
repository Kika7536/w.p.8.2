#include<iostream>
using namespace std;


void main() {
	setlocale(LC_ALL, "rus");

	cout << "Задание 2. Длинное вещественное число." << endl;
	cout << "----------------------------------------------" << endl << endl;

	string number;
	bool good = true;
	int counter = 0, number_count = 0;


	cout << "Enter a number: ";
	cin >> number;

	for (int i = 0; i < number.length(); i++) {

		good = number_count > 0;

		if (number[i] >= '0' && number[i] <= '9') {
			number_count++;
			continue;
		}
		else if (number[i] == '-' && i == 0) {
			continue;
		}
		else if (number[i] == '.') {
			counter++;
			if (counter > 1) {
				good = false;
				break;
			}
		}
		else {
			good = false;
			break;
		}

	}


	
	cout << (good ? "Yes" : "No") << endl;

	//main();
	//По крайней мере у меня все работает как надо :)
}