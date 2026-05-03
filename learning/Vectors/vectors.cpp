#include <iostream>
#include <vector>

using namespace std;

int main(){

    vector <char> vowels (5);
    vector <int> test_scores (10); //size
    vector <int> temp {1,2,3,4,5}; //elements
    vector <double> temps (10,5.0); //size and initialize

    //cout << temps[0] << temps.at(0) << endl;

    test_scores.push_back(80);
    test_scores.pop_back(); // pop

    //cout << test_scores.size() << endl;

    vector <vector <int>> twoDimensionalVector {
        {1,2,3},
        {4,5,6},
        {7,8,9,10}
    };

    //cout << twoDimensionalVector.at(2).at(3) << endl;

    vector <int> vector1 {10,20};
    vector <int> vector2 {30,40};
    vector <vector <int>> vector2d {};
    vector2d.push_back(vector1);
    vector2d.push_back(vector2);

    vector1.at(0) = 100;
    cout << vector1.at(0) << endl;
    cout << vector2d.at(0).at(0) << endl;

    return 0;
}