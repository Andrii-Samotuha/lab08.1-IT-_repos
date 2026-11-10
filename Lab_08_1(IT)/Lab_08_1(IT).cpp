// Lab_08_1(IT).cpp

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>

int Count(char* str) {
    int k = 0;

    for (int i = 0; str[i+1] != '\0'; i++) {
        if (str[i] == ',' && str[i + 1] == '-') {
            k++;
        }
    }

    return k;
}

char* Change(char* str) {

    size_t len = strlen(str);
    char* tmp = new char[len + 1];

    size_t i = 0;
    size_t j = 0;

    while (i < len) {
        if (i + 1 < len && str[i] == ',' && str[i + 1] == '-') {
            tmp[j] = '*';
            j++;
            i += 2;
        }
        else {
            tmp[j] = str[i];
            i++;
            j++;
        }
    }
    tmp[j] = '\0';
    strcpy(str, tmp);
    return tmp;
}

using namespace std;

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);

    cout <<"Count = " << Count(str);

    char* dest = Change(str);

    cout << "Modified string (param): " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    delete[] dest;

    return 0;
}

