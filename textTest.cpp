#include <iostream>
#include <windows.h>
using namespace std;


static void textStep (string mess) {
    int i = 0;
    char message = mess[i];

    while (i < mess.size()) {
        if (isalpha(mess[i]) || isspace(mess[i])) {
            cout << mess[i];
            Sleep(100);
        }
        i++;
    }
}


int main() {
    string intro = "How is Will going to live out there in the wilderness all by himself";
    textStep(intro);
    return 0;
}