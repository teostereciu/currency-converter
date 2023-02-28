//  main.cpp

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {

    double fromVal, toVal;
    string fromCurr, toCurr;
    cout << "From value: ";
    cin >> fromVal;
    do {
        cout << "\nFrom currency (EUR, USD, RON): ";
        cin >> fromCurr;
    } while (fromCurr != "EUR" && fromCurr != "USD" && fromCurr != "RON");
    
    do {
        cout << "\nTo currency (EUR, USD, RON): ";
        cin >> toCurr;
    } while (fromCurr != "EUR" && fromCurr != "USD" && fromCurr != "RON");
    
    //double convRates[3][3] = {{1,1.06,4.93},{0.95,1,4.66},{0.2,0.21,1}};
    double convRates[3][3] = {{1,1.06,4.93},{0.95,1,4.66},{0.2,0.21,1}};
    int from=0, to=0;
    if (fromCurr == "EUR") {
        from = 0;
    } else if (fromCurr == "USD") {
        from = 1;
    } else {
        from = 2;
    }

    if (toCurr == "EUR") {
        from = 0;
    } else if (fromCurr == "USD") {
        from = 1;
    } else {
        from = 2;
    }
    
    toVal = fromVal * convRates[from][to];
    cout << fromVal << " " << fromCurr << " is " << toVal << " " << toCurr << ".\n";
    return 0;
}
