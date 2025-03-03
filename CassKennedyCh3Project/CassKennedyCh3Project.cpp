//This branch of the program is designed to help the user practice simple math problems.
#include <iostream>
#include <random>
using namespace std;
int main()
{
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dist(1, 9999); //These three lines set the framework for generating 1-4 digit numbers
    int addendOne = dist(gen); //Generates the two numbers
    int addendTwo = dist(gen);
    cout << addendOne << "+" << addendTwo; //Displays the problem
    cin.get();
    cout << addendOne + addendTwo; //Displays the answer
    return 0;
}