// DZ - Git.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "User.h"

		int main(){
		User user;

		std::cout << "Select action: " << "1-sign up 2-sign in";

		int action;
		std::cin >> action;

		if (action == 1)
		{
			std::cout << "Enter email\n";
			char* email = new char[35];
			std::cin.getline(email, 35);

			string str(email);
			string subString("@gmail.com");
			if (str.find(subString) != std::string::npos) {
				cout << "erite correct email pls";
				return 0;
			}

			std::cout << "Enter password\n";
			char* password = new char[35];
			std::cin.getline(password, 35);
			if (len(password) <= 6) {
				cout << "Dolbaeb?";
				return 0;
			}

			std::cout << "Enter user name\n";
			char* user_name = new char[35];
			std::cin.getline(user_name, 35);
			if (len(user_name) <= 4) {
				cout << "Dolbaeb?";
				return 0;
			}


			user.set_email(email);
			user.set_password(password);
			user.set_user_name(user_name);
			user.SaveUser();

			system("cls");

			std::cout << "Your email is: " << user.get_email() << "\n";
			std::cout << "Your password is: " << user.get_password() << "\n";
			std::cout << "Your user name is: " << user.get_user_name() << "\n";
		}
		else if (action == 2)
		{

		}
		else
		{
			std::cout << "Incorrect action\n";

		}



	}
