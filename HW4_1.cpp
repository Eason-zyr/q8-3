#include <iostream>
using namespace std;

void inputTime(int& hour, int& minute);                   //��J24�p�ɨ�
void convertTime(int& hour, char& period);                //�ഫ�p�ɨ�禡
void outputTime(int& hour, int& minute, char& period);    //��X12�p�ɨ���G

int main() {
	char choice;
	do {
		int hour, minute;
		char period;

		inputTime(hour, minute);
		convertTime(hour, period);
		outputTime(hour, minute, period);

		cout << "\Do you want to convert another time? (y/n): ";     //��ܬO�_�٭n�ഫ
		cin >> choice;
		cout << endl;
	} while (choice == 'y' || choice == 'Y');                        //��Jy or Y�h�~��

	return 0;
}

void inputTime(int& hour, int& minute) {
	cout << "Enter the time in 24-hour notation (HH MM): ";          //���ܨϥΪ̿�J24�p�ɨ�ɶ�
	cin >> hour >> minute;
}

void convertTime(int& hour, char& period) {
	if (hour >= 12) {           // >=12�p�ɬ�P.M.
		period = 'P';
		if (hour > 12)          // >12�p�ɼ�-12
			hour -= 12;
	}
	else {
		period = 'A';           // <12�p�ɬ�A.M.
		if (hour == 0)          // �p�ɼƬ�0�h�ഫ��12
			hour = 12;
	}
}

void outputTime(int& hour, int& minute, char& period) {     //��X�ഫ���G
	cout << "The time in 12-hour notation is: " << hour << ":" << minute << " " << period << ".M." << endl;
}