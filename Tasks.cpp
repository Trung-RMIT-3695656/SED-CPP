/*
RMIT University Vietnam
Course: EEET2482   Software Engineering Design
Semester: 1/2021
Author: Nguyen Phuoc Duy Trung
s-number: 3695656
Create date: 19/03/2021
Acknowledgement: Stackoverflow, Learncpp.com 
*/


//#include "pch.h"
#include <iostream>

int checkCharacter(int a, char* b[]) {
	int hasDigit{}, hasLowerCase{}, hasUpperCase{},
		hasSpecialChar{}, totalChar{};

	//check each character in the input
	for (int i = 1; i < a; i++) {

		for (int j = 0; j < strlen(b[i]); j++) {
			totalChar++;

			// exit the program if the input is less than 2 or more than 50
			if (a < 2) {
				std::cout << "You type too little!!!\n";
				return 1;
			}
			
			if (totalChar > 50) {
				std::cout << "You type too much!!!\n";
				return 1;
			}

			// if the input has digits
			if (b[i][j] >= '0' && b[i][j] <= '9') {
				hasDigit++;
			}
			// if the input has character with lower case
			else if (b[i][j] >= 'a' && b[i][j] <= 'z') {
				hasLowerCase++;
			}
			// if the input has character with upper case
			else if (b[i][j] >= 'A' && b[i][j] <= 'Z') {
				hasUpperCase++;
			}
			// if the input has special character
			else {
				hasSpecialChar++;
			}
		}
		
	}
	std::cout << "You had input: \n";
	std::cout << hasLowerCase << " lowercase character\n";
	std::cout << hasUpperCase << " uppercase character\n";
	std::cout << hasDigit << " digit character\n";
	std::cout << hasSpecialChar << " other character\n";
	std::cout << "Total characters that you type: " << totalChar;
	
}

int main(int argc, char* argv[])
{
	//call the function and run
	checkCharacter(argc, argv);
    return 0;

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
