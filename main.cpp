#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    double x;
    cout << "Enter a double: ";
    cin >> x;

    cout << "Rounded value: " << round(x * 100.0)/100.0 << endl;

    srand(time(NULL));

    int secret = rand() % 10 + 1;

    cout << "Random Number: " << secret << endl;

    return 0;
}