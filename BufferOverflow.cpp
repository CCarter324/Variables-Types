// BufferOverflow.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using std::cin; using std::cout; using std::endl;
#include <string>
using std::string;

int main()
{
	const int MAX_SIZE = 16;
	//char username[MAX_SIZE]; char password[MAX_SIZE];
	string username; string password;
	int authentication;

	cout << "Enter your username: " << endl;
	cin >> username;
	cout << "Enter your password: " << endl;
	cin >> password;

	authentication = 0;
	if (strcmp(username.c_str(), "admin") == 0 && strcmp(password.c_str(), "adminpass") == 0)
	{
		authentication = 1;
	}
	if (authentication != 0)
	{
		cout << "Access granted." << endl;
	}
	else
	{
		cout << "Wrong username and password." << endl;
	}
}

