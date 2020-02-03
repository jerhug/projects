/*
191
Practice 3
Jeremy Hug, Ariel Benney
*/
#include <iostream>
using namespace std;

int numCount;
int input;
int total;
int maxNum;
int minNum = INT_MAX;


int main()
{
	cout << "PLease input an integer: ";
	cin >> input;
	maxNum = input;
	total = input;
	numCount = 1;
	while (input != 0 && total < 100) {
		cout << "Please input an integer: ";

		cin >> input;
		if (input > maxNum) {
			maxNum = input;
		}
		else if (input < minNum && input != 0) {
			minNum = input;
		}
		total += input;
		numCount += 1;
	}
	cout << "Max Number: " << maxNum;
	cout << "Min Number: " << minNum;
	cout << "Average: " << total / numCount;


}
