#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double quiz, lab, project, exam;

    cout << "Enter quiz score: ";
    cin >> quiz;

    cout << "Enter laboratory score: ";
    cin >> lab;

    cout << "Enter project score: ";
    cin >> project;

    cout << "Enter examination score: ";
    cin >> exam;

    double weightedGrade = (quiz * 0.20) +
                           (lab * 0.25) +
                           (project * 0.25) +
                           (exam * 0.30);

    int roundedGrade = round(weightedGrade);
    int truncatedGrade = (int)weightedGrade;

    cout << fixed << setprecision(2);

    cout << "\nWeighted grade: " << weightedGrade << endl;
    cout << "Rounded grade: " << roundedGrade << endl;
    cout << "Cast to int: " << truncatedGrade << endl;

    return 0;
}