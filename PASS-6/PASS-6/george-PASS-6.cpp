/**
According to WebMD, the age of a dog can be calculated approximately using the following rules :

If the dog is one year old, the equivalent human age is 15.

If the dog is between two and five years old, the equivalent human age is four times the dog�s age plus 16.

If the dog is between six and sixteen years old, the equivalent human age depends on the weight of the dog :

If the dog weighs less than 20 lbs, the equivalent human age is four times the dog�s age plus 16.

If the dog weighs between 21 and 50 lbs, the equivalent human age is 4.5 times the dog�s age plus 15.

If the dog weighs more than 50 lbs, the equivalent human age is 7.5 times the dog�s age.

For this assignment you must use the rules above to calculate the age of a dog in human years given its weight
and its actual age.You must also display an error if the user enters a weight that is less than zero or an age that is not between 1 and 16.
**/

#include <iostream>
#include <string>

using namespace std;

int main(){
	double age, weight, dogYears;
	string goAgain = "Y";
	string dogName = "Fido";

	cout << "Welcome to Kyle George's Dog Years calculator!\n";

	cout << "Please enter the dog's name: ";

	getline (cin, dogName);

	while (goAgain == "Y"){

		string goAgain = "N";
		age = -1;
		weight = -1;
		dogYears = 0;

		while (age <= 0) {
			cout << "Please enter the dog's age (in dog years): ";
			cin >> age;

			if (age <= 0){
				cout << "\n\n<ERROR> Please enter an age above 0\n\n";
			}
		}

		while (weight <= 0){
			cout << "Please enter your dog's weight (in pounds): ";
			cin >> weight;

			if (weight <= 0){
				cout << "\n\n<ERROR> Please enter a weight above 0\n\n";
			}
		}

		if (age == 1){
			dogYears = 15;
		}
		else if (age >= 2 && age <= 5){
			dogYears = (age * 4) + 16;
		}
		else {
			if (weight <= 20){
				dogYears = (age * 4) + 16;
			}
			else if (weight >= 21 && weight <= 50){
				dogYears = (4.5 * age) + 15;
			}
			else {
				dogYears = 7.5 * age;
			}
		}

		cout << "\n\n" << dogName << "'s age in human years is " << dogYears << endl;

		cout << "Do you wish to calculate another dog's age (Y/N): ";
		cin >> goAgain;

		if (goAgain == "n" || goAgain == "N"){
			break;
		}
	}
	
	cout << "\n\nThanks for using the program!\n";
	system("pause");
	return 0;
}