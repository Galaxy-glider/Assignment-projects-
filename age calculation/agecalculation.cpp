#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    if (age > 15)
    {
        cout << "Age = " << age + 1;
    }

    else if (age <= 15)
    {
        cout << "Age = " << age;
    }

    return 0;
}