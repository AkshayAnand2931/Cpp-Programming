#include <iostream>

int add_num(int a, int b);
double add_num(double a, double b);
void swap(int &a, int &b);
void print(int a, int b = 10,int c = 8);

int main(){

    int a {5};
    int b {10};
    double c {5.0};
    double d {10.0};

    int e { add_num(a,b) };
    double f { add_num(c,d) };

    swap(a,b);
    print(100);
    std::cout << a << " " << b << std::endl;

    return 0;
}

int add_num( int a, int b){
    
    return a + b;
}

double add_num( double a, double b){

    return a + b;
}

void swap(int &a, int &b){

    int temp {a};
    a = b;
    b = temp;
}

void print(int a, int b, int c){

    std::cout << a << " " << b << " " << c << std::endl;
}