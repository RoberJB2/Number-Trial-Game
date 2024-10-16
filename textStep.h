#include <windows.h>
#include <string>
#include <iostream>
using namespace std;

static void textPrint(string dial) {
    int i = 0;
    string text = dial;
    while (i < text.size()) {
        if (isalpha(text[i]) || isspace(text[i]) || isdigit(text[i]) || text[i] == ',' || text[i] == '=' || text[i] == '(' || text[i] == ')') {
            cout << text[i];
            Sleep(1);
        }
        i++;
    }
}

// Allows manual input of sleep, no variable counter
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
    textPrint(dial);
    cout << counter;

    cout << "\n";
}

// Displays text, then the counter (or integer), then more text
static void textStepVT(string dial, int counter, string dial2) {

    textPrint(dial);
    cout << counter;
    textPrint(dial2);

    cout << "\n";
}

// Basic text display
static void textStep(string dial) {
    textStepSleep(1, dial);
}