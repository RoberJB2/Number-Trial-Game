#include <string>
#include <iostream>
using namespace std;

class Dialogue {
private:
	// Change into a stack to dynamically allocate each string
	int DialIndex, DialCounter;
public:
	string myArray[50] = {
		// Goal
		"Your goal is to get 31, 71, 83, and 123 to win.",													// 1

		// Count
		"Inputs left: ",																					// 2
		"Choice Tokens left: ",																				// 3

		// Pick an intger between __ and __
		"Pick an integer between 1 and 3",																	// 4
		"Pick an integer between 1 and 4",																	// 5
		"Please pick an intger between 1-3",																// 6

		// Starting numbers:
		"Your starting numbers are: 1, 2, 3, 4",															// 7
		"Your starting numbers are: 0, 0, 1, 1",															// 8
		"Your starting numbers are: 1, 1, 1, 1",															// 9

		// Double
		"DOUBLE all values. (3)",																			// 10

		// Add
		"Add THREE to all values. (1)",																		// 11
		"ADD a random amount (1-20) to two values. (2)",													// 12
		"Add ONE to all values. (1)",																		// 13
		"Add FIVE to all values. (1)",																		// 14
		"Choose a value to add TWENTY FIVE to. (2)",														// 15

		// Subtract
		"Choose a value to SUBTRACT 2 from. (1)",															// 16

		// Division
		"Divide all numbers by 1-2",																		// 17

		// Delete
		"Choose one integer to set to zero",																// 18

		// Choices
		"There are three options: \n",																		// 19

		// Hints:
		"Hint: ",																							// 20
		"Hint. (0)",																						// 21
		"Hint: The values of the four numbers are respective to the goal.",									// 22
		"Hint is to be added later",																		// 23

		// Formating
		"\n",																								// 24

	};
	Dialogue() {
		DialIndex = 0;
		DialCounter = 0;
	};
	Dialogue(int index, int counter) {
		DialIndex = index;
		DialCounter = counter;
	};
	void DialoguePrint(int index, int counter) const {
		index--;


		if (index == 1 || index == 2) {
			cout << myArray[index] << counter << endl;
		}
		else {
			cout << myArray[index] << endl;
		}
	};
};
