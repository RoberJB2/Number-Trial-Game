#include <iostream>
using namespace std;

class loopCheck {
private:
    int inputVar = 0;
public:
	loopCheck() {

	};
	loopCheck(int x) {
        inputVar = x;
	};
	int Check4(int *inputVar) {
        do {
            cout << "\nPick an integer between 1 and 4" << endl;
            cin >> *inputVar;
            if (*inputVar == 1 || *inputVar == 2 || *inputVar == 3 || *inputVar == 4) {
                break;
            }
            else {
                continue;
            }
        } while (*inputVar != 1 || *inputVar != 2 || *inputVar != 3 || *inputVar != 4);
        return *inputVar;
	}
    int Check3(int* inputVar) {
        do {
            cout << "\nPick an integer between 1 and 3" << endl;
            cin >> *inputVar;
            if (*inputVar == 1 || *inputVar == 2 || *inputVar == 3) {
                break;
            }
            else {
                continue;
            }
        } while (*inputVar != 1 || *inputVar != 2 || *inputVar != 3);
        return *inputVar;
    }
};
