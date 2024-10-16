#include "loopCheck.h"
#include "textStep.h"
#include <iostream>
#include <string>
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

static void choice(int userChoice, int* x, int* y, int* z, int* c) {

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
        if (*var == 1) {
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
        if (*var == 1) {
            *x = *x - (1 + rand() % 5);
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
        if (*var == 1) {
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
        if (*var == 1) {
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
        if (*var == 1) {
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
        if (*var == 1) {
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

            if (*two == 1) {
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

int main () {
    //Variables:
    string Restart;
    int x, y, z, c, firstFour, decision = 0;
    int counter = 20;

    bool check = true;
    int* dec = &decision;

    loopCheck loopCheck;

    bool* check = &check, int* counter = &counter, int* xPtr = &x, int* yPtr = &y, int* zPtr = &z, int* cPtr = &c;
    int* Four = &firstFour;

    loopCheck.Check3(Four);

    // Switch cases for user options of int firstFour
    while (check) {
        switch (*Four) {
        case 1:
            *xPtr = 2;
            *yPtr = 2;
            *zPtr = 2;
            *cPtr = 2;
            cout << "Your starting numbers are: 0, 0, 1, 1" << endl;
            counter--;
            check = false;
            break;
        case 2:
            *xPtr = 1;
            *yPtr = 2;
            *zPtr = 3;
            *cPtr = 4;
            cout << "Your starting numbers are: 1, 2, 3, 4" << endl;
            counter = counter - 2;
            check = false;
            break;
        case 3:
            *xPtr = 1;
            *yPtr = 1;
            *zPtr = 1;
            *cPtr = 1;
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
            choice(1, &x, &y, &z, &c);
            counter = counter - 3;

            textStepV("Choice Tokens left: ", counter);
            //cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 2) {
            choice(2, &x, &y, &z, &c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 3) {
            choice(3, &x, &y, &z, &c);

            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
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
            choice(11, &x, &y, &z, &c);
            counter = counter - 2;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 2) {
            choice(12, &x, &y, &z, &c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 3) {
            cout << "Hint is to be added later" << endl;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
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
            choice(1, &x, &y, &z, &c);
            counter = counter - 3;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 2) {
            choice(13, &x, &y, &z, &c);
            counter--;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        else if (decision == 3) {
            choice(10, &x, &y, &z, &c);
            counter = counter - 2;

            //system("cls");
            cout << "Choice Tokens left: " << counter << endl;
            cout << x << ", " << y << ", " << z << ", " << c << endl;
        }
        break;
    default:
        cout << "Please input 1, 2, or 3" << endl;
    }
}