#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double t1, t2, t3;

    cout << "Enter temperature 1: ";
    cin >> t1;

    cout << "Enter temperature 2: ";
    cin >> t2;

    cout << "Enter temperature 3: ";
    cin >> t3;

    double average = (t1 + t2 + t3) / 3;
    double difference = fabs(t1 - t3);

    int floorValue = floor(average);
    int ceilValue = ceil(average);
    int truncValue = trunc(average);
    int roundValue = round(average);

    cout << fixed << setprecision(3);

    cout << "\nAverage: " << average << endl;
    cout << "|T1 - T3|: " << difference << endl;

    cout << "Floor: " << floorValue << endl;
    cout << "Ceil: " << ceilValue << endl;
    cout << "Trunc: " << truncValue << endl;
    cout << "Round: " << roundValue << endl;

    return 0;
}