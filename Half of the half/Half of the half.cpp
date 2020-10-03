// Christmas tree.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
#include <string>

using namespace std;

void loadStrings(string *ptrArray, int size) {
    cin.ignore();
    for (int i = 0; i < size; i++) {
        getline(cin, *ptrArray);
        ptrArray++;
    }
}

void iterateStringArray(string* ptrArray, int size, void (*printHalf)(string caption)) {
    for (int i = 0; i < size; i++) {
        (*printHalf)(*ptrArray);
        ptrArray++;
    }
}

void printHalfStringFunc(string caption) {
    for (int i = 0; i < caption.length() / 2; i += 2) {
        cout << caption[i];
    }
    cout << endl;
}

int main()
{
    int tests;
    cin >> tests;
    string *captions = new string[tests];

    loadStrings(captions, tests);

    iterateStringArray(captions, tests, printHalfStringFunc);

    return 0;
}
