// ExAtmApp.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;


void Display()
{
    cout << "___________MENU___________" << endl;
    cout << "1.CheckBalance" << endl;
    cout << "2.Deposit" << endl;
    cout << "3.WithDrawal" << endl;
    cout << "4.Exit" << endl << endl;
    cout << "Option  : ";
    
}

int main()
{
    double CheckBalance=0;
    double Deposit=0;
    double WIthDrawal=0;
    int Option=0;

    do
    { 


    Display();
    cin >> Option;

    system("cls");



    switch (Option)
    {
    case 1:cout << "CheckBalance   =  " << CheckBalance<<endl; break;

    case 2:cout << "Deposit Amount   =   "; cin >> Deposit; CheckBalance = Deposit + CheckBalance; break;

    case 3:cout << "WithDrawal   =  "; cin >> WIthDrawal;

        if (WIthDrawal <= CheckBalance)
        {
            CheckBalance = WIthDrawal - CheckBalance;

        }
        else
        {
            cout << "Not Enough Money" << endl;
        }

        break;
    }



    }
    while (Option != 4);



   
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
