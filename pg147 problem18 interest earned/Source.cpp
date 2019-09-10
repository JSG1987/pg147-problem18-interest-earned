// This program will calculate the interest earned using the interest formula
#include<iostream>
#include<iomanip>
#include<cmath>


using namespace std;

int main()
{
	float principal;// the initial ammount in savings 
	float rate;// the percentage of interest
	int compound;// how the interest is compounded Ex. quaterly or bi yearly, etc. 
	int n;// time in years 
	float ammount;// total interets calculated. 
	float conversion; // will turn the rate to a percentage

	cout << "Please enter the principal ammount\n";
	cin >> principal;
	cout << "Please enter the rate \n";
	cin >> rate;
	cout << "How is it compounded?\n";
	cin >> compound;
	cout << "How long will you leave it?\n";
	cin >> n;
	conversion = rate * 100;

	ammount = principal * pow((1 + (rate / compound)), n);
	cout << fixed << setprecision(2) << setw(5);
	cout << "You will have $" << ammount << "after " << n << " years.\n";
	//cout << "Interest rate: " << conversion << endl;
	//cout << "Times compounded:" << compound << endl;
	//cout << "Principal:" << principal << endl;
	//cout << ""

	system("PAUSE");
	return 0; 
}