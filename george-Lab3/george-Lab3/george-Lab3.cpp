/** 

	Kyle George
	Simple Program to calculate the value of a deposit after a year of earning interest

	CSCI 1010 Lab3

**/

#include <iostream>
using namespace std;

int main(){
	double balance, balanceTwo; // Variable naming for balances
	const double apr = 0.059; // Constant for APR
	double percent = apr * 100; // variable for percent

	cout << "Welcome to Kyle's interest calculator" << endl;
	cout << endl;

	cout << "Please enter your inital amount: ";
	cin >> balance;

	balance = balance + (balance * apr);
	cout << "With a " << percent << "% APR, your deposit will be worth $" << balance << " in one year." << endl;

	balanceTwo = balance + (balance * apr);
	cout << "With a " << percent << " APR, your deposit will be worth $" << balanceTwo << " in two years" << endl;

	system("pause");
	return 0;
}