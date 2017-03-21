#include <iostream>
#include <fstream>

using namespace std;

int main() {
	ofstream results;
	ifstream data;
	int a, numData, total;
	float average;

	numData = 0;
	total = 0;
	average = 0.0;

	results.open("output.txt");
	data.open("data.txt");

	while (data >> a){
		cout << a << endl;
		
		numData += 1;
		total += a;
	}

	results << "Number of Values: " << numData << endl;
	results << "Total: " << total << endl;

	average = total / numData;
	results << "Average: " << average << endl;

	results.close();
	data.close();
}