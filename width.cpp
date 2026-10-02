#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    double width, height, coverage;
    int coats;

    cout << "Enter wall width: ";
    cin >> width;

    cout << "Enter wall height: ";
    cin >> height;

    cout << "Enter number of coats: ";
    cin >> coats;

    cout << "Enter coverage per can: ";
    cin >> coverage;

    double wallArea = width * height;
    double totalPaintArea = wallArea * coats;
    double exactCans = totalPaintArea / coverage;
    int cansToBuy = ceil(exactCans);

    cout << fixed << setprecision(2);

    cout << "\nWall area: " << wallArea << endl;
    cout << "Total paint area: " << totalPaintArea << endl;
    cout << "Exact cans: " << exactCans << endl;
    cout << "Cans to buy: " << cansToBuy << endl;

    return 0;
}