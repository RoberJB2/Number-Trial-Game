#include <windows.h>
#include "loopCheck.h"
#include "dialogueStorage.h"
#include <cmath>
#include <random>
#include <cstdlib>
#include <stdlib.h>
#include <time.h>
#include "textStep.h"
using namespace std;

enum Choice {
    Double,
    AddThree,
    OneSubTwo,
    SubRand,
    AddRand,
    OneSubRand,
    OneMultRand,
    OneDivRand,
    OneAddRand,
    OneBig,
    TwoAddRand,
    OneAdd,
    FiveAdd,
    TenAdd
};

// Saved comments for textSteph.h functions
/*
// Allows direct input of sleep
static void textStepSleep(int sleep, string dial) {
    int i = 0;
    string text = dial;
    while (i < text.size()) {
        if (isalpha(text[i]) || isspace(text[i]) || isdigit(text[i]) || text[i] == ',' || text[i] == '=' || text[i] == '(' || text[i] == ')') {
            cout << text[i];
            Sleep(sleep);
        }
        i++;
    }
    cout << "\n";
};

// Allows the displaying of variable counter after text
static void textStepV(string dial, int counter) {
    int i = 0;
    string text = dial;
    while (i < text.size()) {
        if (isalpha(text[i]) || isspace(text[i]) || isdigit(text[i]) || text[i] == ',' || text[i] == '=' || text[i] == '(' || text[i] == ')') {
            cout << text[i];
            Sleep(1);
        }
        i++;
    }
    cout << counter;

    cout << "\n";
}

// Displays text, then the counter, then more text
static void textStepVT(string dial, int counter, string dial2) {
    int i = 0;
    string text = dial;
    while (i < text.size()) {
        if (isalpha(text[i]) || isspace(text[i]) || isdigit(text[i]) || text[i] == ',' || text[i] == '=' || text[i] == '(' || text[i] == ')') {
            cout << text[i];
            Sleep(1);
        }
        i++;
    }

    cout << counter;

    text = dial2;
    while (i < text.size()) {
        if (isalpha(text[i]) || isspace(text[i]) || isdigit(text[i]) || text[i] == ',' || text[i] == '=' || text[i] == '(' || text[i] == ')') {
            cout << text[i];
            Sleep(1);
        }
        i++;
    }
    cout << "\n";
}

// Basic text display
static void textStep(string dial) {
    textStepSleep(1, dial);
}
*/
///////////////////////////////////////////

static void choice(int userChoice, int *x, int *y, int *z, int *c) {
    
    int variable = 0;
    int twoAddRand = 0;
    int* two = &twoAddRand;
    int* var = &variable;

    srand(time(0)); // Sets the seed of rand() to the current time, "randomizing" the value of rand().

    userChoice = userChoice - 1;
    loopCheck loopCheck;
    Choice object = Choice(userChoice);
    
    switch (object) {
    case Double:   // Double ALL                                                    1
        *x = *x * 2;
        *y = *y * 2;
        *z = *z * 2;
        *c = *c * 2;
        break;
    case AddThree: // Adds three to all values                                      2
        *x = *x + 3;
        *y = *y + 3;
        *z = *z + 3;
        *c = *c + 3;
        break;
    case OneSubTwo: // Subtracts two from one value                                 3
        // For the following code
        // Make a function that inputs "var" as an argument
        // Will be used multiple times
        // Maybe inside a class/h file
        *var = 0;
        loopCheck.Check4(&variable);

        // This will be a separate function/maybe used in the function above
        if      (*var == 1) {
            *x = *x - 2;
        }
        else if (*var == 2) {
            *y = *y - 2;
        }
        else if (*var == 3) {
            *z = *z - 2;
        }
        else if (*var == 4) {
            *c = *c - 2;
        }
        break;
    case SubRand: // Subtracts a random amount from all values (1-20)               4
        *x = *x - (1 + rand() % 5);
        *y = *y - (1 + rand() % 10);
        *z = *z - (1 + rand() % 15);
        *c = *c - (1 + rand() % 20);
        break;
    case AddRand: // Adds a random value to all values (1-20)                       5
        *x = *x + 1 + rand() % 5;
        *y = *y + 1 + rand() % 10;
        *z = *z + 1 + rand() % 15;
        *c = *c + 1 + rand() % 20;
    case OneSubRand: // Subtracts a random value from one value (1-20)              6
        *var = 0;
        loopCheck.Check4(&variable);
        if      (*var == 1) {
            *x = *x - (1 +  rand() % 5);
        }
        else if (*var == 2) {
            *y = *y - (1 + rand() % 10);
        }
        else if (*var == 3) {
            *z = *z - (1 + rand() % 15);
        }
        else if (*var == 4) {
            *c = *c - (1 + rand() % 20);
        }
        break;
    case OneAddRand: // Adds a random value to one value (1-20)                     7
        *var = 0;
        loopCheck.Check4(&variable);
        if      (*var == 1) {
            *x = *x + 1 + rand() % 5;
        }
        else if (*var == 2) {
            *y = *y + 1 + rand() % 10;
        }
        else if (*var == 3) {
            *z = *z + 1 + rand() % 15;
        }
        else if (*var == 4) {
            *c = *c + 1 + rand() % 20;
        }
        break;
    case OneMultRand: // Multiplies one random value (1-3)                          8
        *var = 0;
        loopCheck.Check4(&variable);
        if      (*var == 1) {
            *x = *x * (1 + rand() % 3);
        }
        else if (*var == 2) {
            *y = *y * (1 + rand() % 3);
        }
        else if (*var == 3) {
            *z = *z * (1 + rand() % 3);
        }
        else if (*var == 4) {
            *c = *c * (1 + rand() % 3);
        }
        break;
    case OneDivRand: // Divides one random value (1-2)                              9
        *var = 0;
        loopCheck.Check4(&variable);
        if      (*var == 1) {
            *x = *x / (1 + rand() % 2);
        }
        else if (*var == 2) {
            *y = *y / (1 + rand() % 2);
        }
        else if (*var == 3) {
            *z = *z / (1 + rand() % 2);
        }
        else if (*var == 4) {
            *c = *c / (1 + rand() % 2);
        }
        break;
    case OneBig: // Adds 25 to a chose value                                        10
        *var = 0;
        loopCheck.Check4(&variable);
        if      (*var == 1) {
            *x = *x + 25;
        }
        else if (*var == 2) {
            *y = *y + 25;
        }
        else if (*var == 3) {
            *z = *z + 25;
        }
        else if (*var == 4) {
            *c = *c + 25;
        }
        break;
    case TwoAddRand: // Adds (1-20) to two random values                            11
        for (int i = 0; i < 2; i++) {
            *two = 0;
            *two = 1 + rand() % 4;

            if      (*two == 1) {
                *x = *x + 1 + rand() % 5;
            }
            else if (*two == 2) {
                *y = *y + 1 + rand() % 10;
            }
            else if (*two == 3) {
                *z = *z + 1 + rand() % 15;
            }
            else if (*two == 4) {
                *c = *c + 1 + rand() % 20;
            }
        }
        break;
    case OneAdd: // Adds one to all                                                 12
        *x = *x + 1;
        *y = *y + 1;
        *z = *z + 1;
        *c = *c + 1;
        break;
    case FiveAdd: // Adds five to all                                               13
        *x = *x + 5;
        *y = *y + 5;
        *z = *z + 5;
        *c = *c + 5;
        break;
    case TenAdd: // Adds ten to all                                                 14
        *x = *x + 10;
        *y = *y + 10;
        *z = *z + 10;
        *c = *c + 10;
    default:
        cout << "Unknown Choice" << endl;
    }
}

static void playAgain(int counter, string Restart, int *x, int *y, int *z, int *c) {
    if (counter == 0) {
        if (*x == 31 && *y == 71 && *z == 87 && *c == 123) {
            cout << "Hello World" << endl;
        }
        else {
            cout << "Goodbye World" << endl;
            cout << "Restart?" << endl;
            cout << "Yes or No" << endl;
            cin >> Restart;
            if (Restart == "Yes") {

            }
            else if (Restart == "No") {

            }
            else {
                cout << "Please enter Yes, or No" << endl;
            }
        }
    }
}

static void FourInit(int *firstFour, int decision, int counter, int* x, int* y, int* z, int* c) {
    bool check = true;
    int *Four = firstFour;
    loopCheck loopCheck;
    loopCheck.Check3(Four);

    // Switch cases for user options of int firstFour
    while (check) {
        switch (*Four) {
        case 1:
            *x = 2;
            *y = 2;
            *z = 2;
            *c = 2;
            cout << "Your starting numbers are: 2, 2, 2, 2" << endl;
            counter--;
            check = false;
            break;
        case 2:
            *x = 1;
            *y = 2;
            *z = 3;
            *c = 4;
            cout << "Your starting numbers are: 1, 2, 3, 4" << endl;
            counter = counter - 2;
            check = false;
            break;
        case 3:
            *x = 1;
            *y = 1;
            *z = 1;
            *c = 1;
            cout << "Your starting numbers are: 1, 1, 1, 1" << endl;
            cout << "Hint:" << endl;
            cout << "Integer one wants 31. Integer two wants 71. Integer three wanst 83. Integer four wants 123" << endl;
            counter = counter - 0;
            check = false;
            break;
        default: cout << "Please pick an intger between 1-3" << endl;
        }
    }

    //These three options are randomly output via number gen
    //Switch case then chooses based on the three ranomly generated numbers
    //Text is output and once the user has chosen, only then will the option occur
    switch (*Four) {
    case 1:
        cout << "You have " << counter << " inputs left" << endl;
        cout << "There are three options: \n" << endl;

        cout << "DOUBLE all values. (3)" << endl;
        cout << "Add THREE to all values. (1)" << endl;
        cout << "Choose a value to SUBTRACT 2 from. (0)" << endl;

        cout << "Choose One: " << endl;
        loopCheck.Check3(&decision);

        if (decision == 1) {
            choice(1, x, y, z, c);
            counter = counter - 3;

            textStepV("Choice Tokens left: ", counter);
            //cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 2) {
            choice(2, x, y, z, c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 3) {
            choice(3, x, y, z, c);

            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        break;
    case 2:
        cout << "You have " << counter << " inputs left" << endl;
        cout << "There are three options: \n" << endl;

        cout << "ADD a random amount (1-20) to two values. (2)" << endl;
        cout << "Add ONE to all values. (1)" << endl;
        cout << "Hint. (0)" << endl;

        cout << "Choose One: " << endl;
        loopCheck.Check3(&decision);

        if (decision == 1) {
            choice(11, x, y, z, c);
            counter = counter - 2;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 2) {
            choice(12, x, y, z, c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 3) {
            cout << "Hint is to be added later" << endl;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        break;
    case 3:
        cout << "You have " << counter << " inputs left" << endl;
        cout << "There are three options: \n" << endl;

        cout << "DOUBLE all values. (3)" << endl;
        cout << "Add FIVE to all values. (1)" << endl;
        cout << "Choose a value to add TWENTY FIVE to. (2)" << endl;

        cout << "Choose One: " << endl;
        loopCheck.Check3(&decision);

        if (decision == 1) {
            choice(1, x, y, z, c);
            counter = counter - 3;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 2) {
            choice(13, x, y, z, c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        else if (decision == 3) {
            choice(10, x, y, z, c);
            counter = counter - 2;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << *x << ", " << *y << ", " << *z << ", " << *c << endl;
        }
        break;
    default:
        cout << "Please input 1, 2, or 3" << endl;
    }
}

static void goalInit(int* num1, int* num2, int* num3, int* num4) {
    // Sets the Goal Numbers
    *num1 = 31 + rand() % 20;
    *num2 = 52 + rand() % 25;
    *num3 = 82 + rand() % 25;
    *num4 = 110 + rand() % 20;

    // Prints the Goal
    textStep("Your goal is to get");
    cout << *num1 << ', ' << *num2 << ', ' << *num3 << ', ' << *num4 << endl;
    textStep("Numbers within (n) are the cost of the option in 'Choice Tokens'. \nYou have 20 to start.");
}

int main() {
    // Variables
    string restart; //Checks for Yes or No
    int x, y, z, c, firstFour, decision = 0; // 4 Goal 
    int counter = 20;
    // Goal Numbers
    int num1 = 0, num2 = 0, num3 = 0, num4 = 0;
    
    loopCheck loopCheck;

    // Basic start messages
    goalInit(&num1, &num2, &num3, &num4);
    
    FourInit(&firstFour, decision, counter, &x, &y, &z, &c);
    
   
    return 0;
}