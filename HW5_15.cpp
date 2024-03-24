#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int PIN_LENGTH = 5;             //�K�X���׬�5

int main() {
    srand(time(nullptr));

    int  actualPIN[PIN_LENGTH] = { 1, 2, 3, 4, 5 },     //�K�X��12345
         randomNumbers[10],
         response[PIN_LENGTH];
    bool authenticated = true;

    for (int i = 0; i < 10; ++i) {
        randomNumbers[i] = rand() % 3 + 1;
    }

    cout << "PIN: ";                      //���PIN 0~9
    for (int i = 0; i < 10; ++i) {
        cout << i << " ";
    }
    cout << endl;

    cout << "NUM: ";                      //�H�����PIN�X�U�������Ʀr
    for (int i = 0; i < 10; ++i) {
        cout << randomNumbers[i] << " ";
    }
    cout << endl;

    cout << "Enter the response(separated by spaces): ";      //���ܿ�J�K�X
    for (int i = 0; i < PIN_LENGTH; ++i) {
        cin >> response[i];
    }

    for (int i = 0; i < PIN_LENGTH; ++i) {
        if (response[i] != randomNumbers[actualPIN[i]]) {
            authenticated = false;
            break;
        }
    }

    if (authenticated) {
        cout << "\nAuthentication successful!" << endl;     //�K�X�������\
    }
    else {
        cout << "\nAuthentication failed!" << endl;         //�K�X��������
    }

    return 0;
}