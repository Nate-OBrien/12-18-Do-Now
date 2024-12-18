/*
* Name: Nate O'Brien
* Date: 12/18
* Program Name: 12/18 Do Now
*/
#include <iostream>
#include <cmath>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {
    //gets input
    double x;
    cout << "Enter a double: ";
    cin >> x;

    //prints rounded, with time
    cout << "Rounded value: " << round(x * 100.0)/100.0 << endl;

    //creates random seed
    srand(time(NULL));

    //gemerates rand number
    int secret = rand() % 10 + 1;

    cout << "Random Number: " << secret << endl;

    return 0;
}
