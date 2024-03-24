#include <iostream>

using namespace std;

const int NUM_GRADES = 6;                //�Ҹզ��Z��0~5

void inputGrades(int grades[], int& numStudents);               //��J�U�Ӿǥͪ����Z
void generateHistogram(const int grades[], int numStudents);    //���ͦU���Z���p�Ƶ��G

int main() {
    int grades[100];
    int numStudents;

    inputGrades(grades, numStudents);
    generateHistogram(grades, numStudents);

    return 0;
}

void inputGrades(int grades[], int& numStudents) {
    cout << "Enter the number of students: ";           //��J�ǥͤH��
    cin >> numStudents;

    cout << "Enter grades (separated by spaces): ";     //��J�ӧO���Z
    for (int i = 0; i < numStudents; ++i) {
        cin >> grades[i];
    }
}

void generateHistogram(const int grades[], int numStudents) {
    int histogram[NUM_GRADES] = { 0 };

    for (int i = 0; i < numStudents; ++i) {             //�p��U���Z�H��
        histogram[grades[i]]++;
    }

    for (int i = 0; i < NUM_GRADES; ++i) {              //��ܵ��G
        cout << histogram[i] << " grade(s) of " << i << endl;
    }
}