// Exercise1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "UserAccount.h"

using namespace std;

UserAccount::UserAccount(int id, const std::string& name, const std::string& pw) : ID(id), userName(name), password(pw) 
{ 
}

bool UserAccount::Login(const std::string& enteredUserName, const std::string& enteredPassword) const
{
    return ( enteredUserName == userName && enteredPassword == password); //since this function is of bool type, it should return true if these conditions hold up
}; //if not true, we can use this case to keep looping until the login bool returns true.



int main()
{
    bool loggedIn = false;
    int id;
    string name;
    string pw;
    string enteredUserName;
    string enteredPassword;
    //to get account info to create the UserAccount const
    cout << "Please create an account to proceed\n";
    //to get the ID 
    cout << "Enter an account ID: ";
    cin >> id;
    cin.ignore(); //will ignore the extra spaces 
    //to get the userName
    cout << "Enter a username: ";
    getline(cin,name); //getline will read the line including spaces (unlike cin >>) so you can enter smtg like "James VA"
    //to get the password
    cout << "Enter a password: ";
    getline(cin,pw);
    
    UserAccount account(id, name, pw);
    //END OF ACCOUNT CREATION

    //START OF LOGIN PROCESS
    while (loggedIn == false)
    {
        cout << "Please enter your account info to login.\n";
        cout << "Enter your username: ";
        getline(cin, enteredUserName);
        cout << "Enter your password: ";
        getline(cin, enteredPassword);
        //END of getting login info

        //COMPARE: ACCOUNT DATA vs LOGIN DATA
        if (account.Login(enteredUserName, enteredPassword) == true)
        {
            
            loggedIn = true;
        }

        else //if (account.Login(name, pw) == false)
        {
            cout << "Login unsuccessful...Invalid username or password (Please try again).\n";
        }
        
    }
    cout << "\nLogin successful! Welcome back user " << id;
            cin.get();
    return 0;
    
    
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
