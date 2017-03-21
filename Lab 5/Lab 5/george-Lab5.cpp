// Isn't this just a modified FizzBuzz? I'm going to treat it as such

#include <iostream>

using namespace std;

int main(){
	int count;
	cout << "Enter a number: ";
	cin >> count;
	cout << endl;

	if (count % 3 == 0) { // if it has a remainder of 0, it's a multiple of the number
		if (count % 2 == 0){ // Simplifying the amount of code needed
			cout << "The number is a multiple of 2 and 3\n";
		}
		else {
			cout << "The number is a multiple of 3\n";
		}
	}
	else if (count % 2 == 0){
		cout << "The number is a multiple of 2\n";
	}
	else {
		cout << "The number is neither a multiple of 2 or 3\n";
	}

	system("pause");
	return 0;
}