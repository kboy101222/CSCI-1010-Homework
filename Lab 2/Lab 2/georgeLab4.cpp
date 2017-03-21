#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

	int coordX, coordY, coordBX, coordBY; // Assigning the necesary variables
	double distance, slope; // Trying to remember how to spell necessary (neccesary?)

	cout << "Welcome to Kyle's distance calculator\n\n"; // Begin User Input Zone (dibs on the band name)
	cout << "Please enter the X coordinate of your first point: ";
	cin >> coordX;
	cout << "Please enter the Y coordinate of your first point: ";
	cin >> coordY;
	cout << "Please enter the X coordinate of your second point: ";
	cin >> coordBX;
	cout << "Please enter the Y coordinate of your second point: ";
	cin >> coordBY;

	cout << "Point 1" << setw(15) << "(" << coordX << " , " << coordY << ")\n"; // Display the points as formatted text
	cout << "Point 2" << setw(15) << "(" << coordBX << " , " << coordBY << ")\n";

	distance = sqrt(pow(coordBX - coordX, 2.0) + pow(coordBY - coordY, 2.0)); // calculate distance
	cout << "Distance" << setw(20) << distance << "\n"; // ... why does 15 align the first 2, but I have to have 20 to align the bottom 2???

	slope = (coordBY - coordY) / (coordBX - coordX); // calculate slope
	cout << "Slope" << setw(20) << slope << "\n\n"; // 15 puts it too far left, 20 makes it centered rather than left justified. I just can't win here.


	system("pause"); // pause. duh.
	return 0; // stupid, unecessary part of C++ rearing it's ugly head

}