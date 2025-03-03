//This branch of the program is designed to help the user calculate the amount of money they will get from interest in a year
#include <iostream>
using namespace std;
int main()
{
    float principal; //initial investment
    float interestRate; //account's interest rate
    float compoundTime; //number of times it compounds per year
    //The next six lines get the user to input data
    cout << "Enter your initial investment";
        cin >> principal;
    cout << "Enter your interest rate";
        cin >> interestRate;
    cout << "Enter the amount of times your account compounds in a year";
        cin >> compoundTime;
    //The next two lines calulate how much interest is generated and how much money is in the account
    float interestGained = pow((1 + (interestRate / compoundTime)), compoundTime);
    float overallAmount = principal+interestGained;
    //The next five lines display the report of information
    cout << "Principal: " << principal << endl;
    cout << "Interest rate: " << interestRate << endl;
    cout << "Compounds per year: " << compoundTime << endl;
    cout << "Interest gained: " << interestGained << endl;
    cout << "Overall money in your account: " << overallAmount << endl;
    return 0;
}