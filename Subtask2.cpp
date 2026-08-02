#include <iostream>
using namespace std;

int main()
{
    int choice, num, decimal = 0;
    string binary;

    cout << "1. Decimal to Binary" << endl;
    cout << "2. Binary to Decimal" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter a decimal number: ";
        cin >> num;

        while (num > 0)
        {
            binary = char((num % 2) + '0') + binary;
            num = num / 2;
        }

        cout << "Binary = " << binary << endl;
    }
    else if (choice == 2)
    {
        cout << "Enter a binary number: ";
        cin >> binary;

        for (int i = 0; i < binary.length(); i++)
        {
            decimal = decimal * 2 + (binary[i] - '0');
        }

        cout << "Decimal = " << decimal << endl;
    }
    else
    {
        cout << "Invalid choice!";
    }

    return 0;
}







