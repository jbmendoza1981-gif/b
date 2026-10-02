#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long bytes;

    cout << "Enter file size in bytes: ";
    cin >> bytes;

    double kilobytes = bytes / 1024.0;
    double megabytes = kilobytes / 1024.0;
    double gigabytes = megabytes / 1024.0;

    int wholeMB = (int)megabytes;

    cout << fixed;

    cout << setprecision(2);
    cout << "\nKB: " << kilobytes << endl;
    cout << "MB: " << megabytes << endl;

    cout << setprecision(4);
    cout << "GB: " << gigabytes << endl;

    cout << "Whole MB: " << wholeMB << endl;

    return 0;
}