#include <iostream>

int main(){

    int *int_ptr {nullptr};
    int_ptr = new int;
    *int_ptr  = 100;
    std::cout << *int_ptr << std::endl;
    delete int_ptr;

    size_t size {0};
    double* temp_ptr {nullptr};
    std::cout << "How many numbers do you want? " << std::endl;
    std::cin >> size;
    temp_ptr = new double[size];
    delete [] temp_ptr;

    return 0;

}