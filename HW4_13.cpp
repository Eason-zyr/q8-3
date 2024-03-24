#include <iostream>
using namespace std;

double convertToMPH(int minutes, int seconds);                //�C�^���Ӯ��ഫ��mph
double convertToMPH(double kph);                              //kph�ഫ��mph

int main() {
	int minutes = 5;
	int seconds = 30;
	double speedInMPH = convertToMPH(minutes, seconds);
	cout << "Speed 5:30 mile in MPH(pace): " << speedInMPH << endl;     //��X�C�^���Ӯ��ഫ��mph�����G

	double kph = 10.0;
	speedInMPH = convertToMPH(kph);
	cout << "Speed 10 KPH in MPH (kph): " << speedInMPH << endl;        //��Xkph�ഫ��mph�����G

	return 0;
}

double convertToMPH(int minutes, int seconds) {
	double totalMinutes = minutes + seconds / 60.0;           //�o���`�@�h�֤���
	return 60.0 / totalMinutes;
}

double convertToMPH(double kph) {
	return kph / 1.61;                                        //1�^��������1.61����
}