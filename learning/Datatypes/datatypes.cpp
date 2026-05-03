#include <iostream>

using namespace std;


int main(){

    short int a {};
    char char1 {};
    long long b {};
    double c {};
    bool value {true};
    const double pi {3.1415926};

    cout << boolalpha;
    cout << a << char1 << b << c << value << pi << endl;

    c = static_cast<double> (a + 2)/3;
    cout << c << endl;
    

    return 0;
}