/**

	Kyle George
	PASS 3
	CSCI 1010

**/

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
	string name;

	int weight, badmitton, running, walking, weights;

	const double badmittonRate = .044;
	const double runningRate = .087;
	const double walkingRate = .036;
	const double weightsRate = .042;

	double caloriesBurned;
	int hours, minutes, badHour, badMin, runHour, runMin, walkHour, walkMin, weightHour, weightMin;
	// 

	cout << "Welcome to Kyle's Kalorie Kounter!" << endl; // THIS IS A JOKE, PLEASE DON'T THINK THIS IS SUPPOSED TO BE RACIST
	cout << endl;

	cout << "Enter your name: ";
	getline(cin, name);



	cout << "Enter your weight in pounds (lbs): ";
	cin >> weight;
	
	cout << "Enter the amount of time you spent playing Badmittion: ";
	cin >> badmitton;

	cout << "Enter the amount of time you spent Running: ";
	cin >> running;

	cout << "Enter the amount of time you spent Walking: ";
	cin >> walking;

	cout << "Enter the amount of time you spent Lifing Weights: ";
	cin >> weights;

	caloriesBurned = ((weight * badmittonRate) * badmitton) + ((weight * runningRate) * running) + ((weight * walkingRate) * walking) + ((weight * weights) * weightsRate);

	hours = (badmitton + running + walking + weights) / 60;
	minutes = (badmitton + running + walking + weights) % 60;

	badHour = badmitton / 60;
	badMin = badmitton % 60;

	runHour = running / 60;
	runMin = running % 60;

	walkHour = walking / 60;
	walkMin = walking % 60;

	weightHour = weight / 60;
	weightMin = weight % 60;

	// cout << "You burned a total of " << caloriesBurned << " calories over\n" << hours << " hours and " << minutes << " minutes of exercise\n\n";

	cout << "Activity Log for " << name << endl;

	cout << "Activity" << setw(10) << "Time" << setw(10) << "Calories" << endl;

	cout << setw(20) << "----------------------------" << endl;
	cout << "Badminton" << setw(6);
	cout << badHour << ":" << setw(2) << setfill('0') << badMin << setfill(' ');
	cout << setw(8) << (weight * badmittonRate) * badmitton << endl;

	cout << "Running" << setw(8);
	cout << runHour << ":" << setw(2) << setfill('0') << runMin << setfill(' ');
	cout << setw(8) << (weight * runningRate) * running << endl;

	cout << "Walking" << setw(8);
	cout << walkHour << ":" << setw(2) << setfill('0') << walkMin << setfill(' ');
	cout << setw(8) << (weight * walkingRate) * walking << endl;

	cout << "Weights" << setw(8);
	cout << weightHour << ":" << setw(2) << setfill('0') << weightMin << setfill(' ');
	cout << setw(8) << (weight * weightsRate) * weights << endl;

	cout << setw(20) << "----------------------------" << endl;

	cout << "Totals" << setw(9) << hours << ":" << setw(2) << setfill('0') << minutes << setfill(' ');
	cout << setw(8) << caloriesBurned << endl << endl;

	system("pause");
	return 0;
}