#include <iostream>

using namespace std;

int main() {

	float lowest = 999999999.0; // Initialize Variables
	float cNumber;
	int endNum = 1;

	while (endNum != -1) { // While loop that runs through the code until -1 is entered
		cout << "Please enter a number (-1 to exit): ";
		cin >> cNumber;
		cout << "\n";

		if (lowest == NULL){
			lowest = cNumber;
		}
		else if (cNumber != -1 && cNumber < lowest){
			lowest = cNumber;
		}
		else if (cNumber == -1) {
			endNum = -1;
		}
	}

	cout << "The lowest number in the set was " << lowest << endl; // Outputs the lowest number

	system("pause");
	return 0;
}