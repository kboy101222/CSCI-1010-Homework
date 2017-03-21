#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

int main(){
	ifstream order;
	ofstream summary;
	string title, artist, strPrice;
	float tempPrice, price;
	int totalOrders;

	price = 0.0;
	totalOrders = 0;

	order.open("orders.txt");
	summary.open("summary.txt");

	cout << "Welcome to Kyle's Online Music Store" << endl;
	cout << "You have submitted the following order:" << endl;
	cout << setfill('*') << setw(70) << " " << setfill(' ') << endl << endl;
	 
	cout << setfill('-') << "--Title" << setw(40) << "Artist" << setw(16) << "Price" << setw(6) << " " << setfill(' ') << endl;
	
	while (getline(order, title)) {
		cout << "|" << setw(38) << title << "|";

		getline(order, artist);
		cout << setw(16) << artist << "|";

		getline(order, strPrice);
		cout << setw(9) << strPrice << "|" << endl;

		price += stof(strPrice);

		totalOrders += 1;
	}

	cout << setfill('-') << setw(69) << " " << setfill(' ') << endl << endl;

	cout << "Total Due: $" << price << endl;
	cout << setfill('*') << setw(70) << " " << setfill(' ') << endl;

	summary << "Downloads: " << totalOrders << endl;
	summary << "Total Due: $" << price << endl;

	order.close();
	system("pause");
}