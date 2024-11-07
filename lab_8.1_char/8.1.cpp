#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

int CountSymbols(char* s) {
    int plusCount = 0, minusCount = 0, equalCount = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == '+') plusCount++;
        if (s[i] == '-') minusCount++;
        if (s[i] == '=') equalCount++;
    }
    cout << "Count of '+': " << plusCount << endl;
    cout << "Count of '-': " << minusCount << endl;
    cout << "Count of '=': " << equalCount << endl;
    return plusCount + minusCount + equalCount;
}

char* ReplacePairs(char* s) {
    char* t = new char[strlen(s) * 2]; // Виділення пам'яті з запасом
    int pos1 = 0;
    t[0] = '\0';

    while (s[pos1] != '\0') {
        if ((s[pos1] == '+' && s[pos1 + 1] == '+') ||
            (s[pos1] == '-' && s[pos1 + 1] == '-') ||
            (s[pos1] == '=' && s[pos1 + 1] == '=')) {
            strcat_s(t, strlen(s) * 2, "****");
            pos1 += 2;
        }
        else {
            strncat_s(t, strlen(s) * 2, &s[pos1], 1);
            pos1++;
        }
    }

    strcpy_s(s, strlen(t) + 1, t);
    return t;
}

int main() {
    char str[101];
    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    // Підрахунок символів
    CountSymbols(str);

    // Замінити пари символів
    char* modifiedStr = ReplacePairs(str);

    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << modifiedStr << endl;

    delete[] modifiedStr;
    return 0;
}
