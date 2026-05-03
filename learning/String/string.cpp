#include <iostream>
#include <string>

using namespace std;

int main(){

    char fullname[50] {};

    cout << "Enter your fullname: " << endl;
    cin.getline(fullname,50);
    cout << "Your fullname is " << fullname << endl;

    string s1;
    string s2 {"Akshay"};
    string s3 {s2};
    string s4 {"Akshay",3};
    string s5 {s3,0,2};
    string s6 (3,'X');

    cout << s1 << " "<< s2 << " "<< s3 << " "<< s4 << " "<< s5 << " "<< s6 << endl;
    s3 = s2;

    string concat = s1 + s2 + s3;

    s2.at(2);
    s2 == s3;
    s2 >= s4;
    s3 == "Apple";

    s2.substr(2,5); //Beginning, How many characters
    s2.find("shay");
    s3.erase(0,3);
    s3.length();
    s3 += s2;

    getline(cin,s1);
    
    return 0;
}