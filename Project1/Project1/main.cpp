#include <iostream> //std::cout
#include <string>   //std::string, std::stoi
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

	string numberGuessed;
	int randomNumber = (rand() % 10) + 1;

	do {
		cout << "Gæt tal mellem 1 og 100" << endl;

		getline(cin, numberGuessed);
		int numberGuessed = stoi(numberGuessed);

		cout << numberGuessed << endl;
	} while (numberGuessed != randomNumber) {
		cout << "winner winner chicken dinner" << endl;
	}


	cin.get();

	return 0;
}


