//This branch of the program is designed to help the user adjust the amount of ingredients when changing the amount of a recipe.
#include <iostream>
using namespace std;
int main()
{
    //The next four lines give the initial amounts given by the recipe, in cookies or cups.
    float initialAmount = 48.0;
    float initialSugar = 1.5;
    float initialButter = 1.0;
    float initialFlour = 2.75;
    int newAmount; //The amount of cookies the user wants to make
    cout << "How many cookies would you like to make?";
    cin >> newAmount;
    float adjustmentProportion = newAmount / initialAmount; //The ratio by which the initial recipe needs to be adjusted
    cout << "To make " << newAmount << " cookies, you need " << initialSugar * (newAmount / initialAmount) << " cups of sugar, " << initialButter * (newAmount / initialAmount) << " cups of butter, and " << initialFlour * (newAmount / initialAmount) << " cups of flour.";
    //The display what someone needs for different amounts of cookies.
    return 0;
}