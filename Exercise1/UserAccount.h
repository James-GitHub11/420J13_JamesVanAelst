#ifndef USERACCOUNT_H
#define USERACCOUNT_H

#include <string>
#include <iostream>

class UserAccount
{
private:
	int ID;
	std::string userName;
	std::string password;

public:
	UserAccount(int id, const std::string& name, const std::string& pw);// my public constructor

	//~UserAccount(); //deconstructor if we want to delete the account info

	bool Login(const std::string& enteredUserName, const std::string& enteredPassword) const; //my member function to verify login
};
#endif