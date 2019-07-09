#include<iostream>
using namespace std;
int main()
{
	int C,F;
	cout << "Enter Celsius temperature : ";
	cin >> C;
	cout << "Fahrenheit = " << C * 1.8 + 32 <<  endl ;
	F = C * 1.8 + 32;
	cout << "Now weather in Thailand is  ";
	cout << ((F < 70) == 0 ? "Hot" : "Cool");
	return(0);
}