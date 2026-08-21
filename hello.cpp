#include <iostream>
#include <string>
using namespace std;

/*
https://www.youtube.com/watch?v=8jLOx1hD3_o&t=665s
timestamp: 4:16:44
*/

float SumNumb(float a, float b)
{
    return a + b;
}

int main()
{
    string Full_name;
    float FirstNumb{};
    float SecondNumb{};

    cout << "Enter Name: ";
    getline(cin, Full_name);
    cout << "Enter First Number: ";
    cin >> FirstNumb;
    cout << "Enter Second Number: ";
    cin >> SecondNumb;

    float result = SumNumb(FirstNumb, SecondNumb);
    cout << "Hey! " << Full_name << ". " << "Your total is: " << result << endl;

    return 0;
}