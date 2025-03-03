//This branch of the program is designed to help the user adjust the amount of ingredients when changing the amount of a recipe.
#include <iostream>
using namespace std;
int main()
{
    float initialAmount = 48.0;
    float initialSugar = 1.5;
    float initialButter = 1.0;
    float initialFlour = 2.75;
    //The initial amounts given by the recipe, in cookies or cups.
    int newAmount;
    cout << "How many cookies would you like to make?";
    cin >> newAmount;
    cout << "To make " << newAmount << " cookies, you need " << initialSugar * (newAmount / initialAmount) << " cups of sugar, " << initialButter * (newAmount / initialAmount) << " cups of butter, and " << initialFlour * (newAmount / initialAmount) << " cups of flour.";
    return 0;
}