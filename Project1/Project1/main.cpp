#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

// this is a comment

int num1 = 10;
int num2 = 20;

int result = num1 + num2;

string Test = "Lukas 'the god one' Bek";

/*
JavaDoc hueh
*/
int main() {

	cout << "Test 1, under 18: " << endl;
	cout << ageCheck(15, 6, true) << endl;

	cout << "Test 2, tickets" << endl;
	cout << ageCheck(18, 6, false) << endl;

	cout << "Test 3, drunk" << endl;
	cout << ageCheck(25, 1, true) << endl;

	cin.get();





	return 0;
}


string ageCheck(int age, int ticket, bool isIntoxicated) {

	if (age < 17 || age > 100) {
		cout << "Not allowed to drive: old/young" << endl;
	}
	else if (ticket > 5 && age == 18) {
		cout << "Not allowed to drive: too many tickets" << endl;
	}
	else if (isIntoxicated) {
		cout << "Not allowed to drive: drunk driver" << endl;
	}
	else {
		cout << "Allowed to drive1" << endl;
	}
}