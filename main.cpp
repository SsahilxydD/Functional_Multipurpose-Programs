#include <iostream>
#include "info.h"
#include "isPrimeNumber.h"
#include "atm.h"
#include "recursion.h"
#include <Windows.h>

void print(const char* msg)
{
	std::cout << msg  << std::endl << "Enter Here : ";
}

int main()
{
	char op;

	std::cout << "Select An Option Form The Following Applications\n\n"
		<< "1. Info Identifier\n\n"
		<< "2. Prime Number Calculator\n\n"
		<< "3. Prime Number Counter (Customizable Range)\n\n"
		<< "4. ATM Machine\n\n"
		<< "5. Factorial Calculator (Recursion Method).\n\n"
		<< "6. Range Sum Calculator (Recursion Method).\n\n"
		<< "Enter here : ";
	std::cin >> op;
	system("cls");
	
	if (op == '1')
	{
		std::string name, city; int age;
		print("What is your name?");
		std::cin >> name;
		system("cls");
		print("Which city do you Live in?");
		std::cin >> city;
		system("cls");
		print("How Old Are You?");
		std::cin >> age;
		system("cls");
		info(name, city, (int)age);
	}
	else if (op == '2')
	{
		int number;
		print("Enter A Number");
		std::cin >> number;
		system("cls");

		bool isPrimeFlag = isPrimeNumber(number);

		if (isPrimeFlag)
		{
			std::cout << "Prime Number";
		}
		else
		{
			std::cout << "Not Prime";
		}
		std::cout << "\n\n"
			<< "Press any key to Close.";
		system("pause > 0");
		system("cls");
	}	
	else if (op == '3')
	{
		int number;
		std::cout << "Enter A Number\n\n"
			<< "enter here : ";
		std::cin >> number;
		system("cls");
		int counter = 0;

		for (int i = 1; i <= number; i++)
		{
			bool isPrime = isPrimeNumber(i);
			if (isPrime)
			{
				std::cout << i << " is a prime number.\n";
				counter++;
				std::cout << "Number of Prime Numbers : " << counter << "\n";
			}
		}
		std::cout << "\n\n"
			<< "Press any key to Close.";
		system("pause > 0");
		system("cls");
	}
	else if (op == '4')
	{
		int option;
		int money = 500;

		do{
		std::cout << "Select An Option\n\n" << std::endl;
		showMenu();
		std::cin >> option;
		system("cls");
		switch (option)
		{
		case 1: std::cout << "Your Balance is : " << money; std::cout << "\n\n"
			<< "Press any key to Close.";
			system("pause > 0");
			system("cls"); break;
		case 2: int depositAmount;
			std::cout << "Enter The Amount To Deposit : "; 
			std::cin >> depositAmount;
			money += depositAmount; std::cout << "\n\n"
				<< "Press any key to Close.";
			system("pause > 0");
			system("cls"); break;
		case 3:int withdrawAmount;
			std::cout << "Enter The Amount To Withdraw : ";
			std::cin >> withdrawAmount;
			if (withdrawAmount <= money)
			{
				money -= withdrawAmount;
			}
			else
			{
				std::cout << "Insufficient Funds.";
			}std::cout << "\n\n"
				<< "Press any key to Close.";
			system("pause > 0");
			system("cls"); break;
		}
		} while (option != 4);
	}
	else if (op == '5')
	{
		
		int m, n;
		do{
		do
		{
			std::cout << "Enter 1st Number : ";
			std::cin >> m;
			system("cls");

			std::cout << "Enter 2nd Number : ";
			std::cin >> n;
			system("cls");

			if (m > n)
			{
				std::cout << "Please Enter The 1st number smaller than the 2nd number.";
				Sleep(2000);
				system("cls");
			}
		} while (m > n);

		recursion(m, n);
		std::cout << recursion(m, n);
		std::cout << "\n\n"
			<< "Press 'q' to Close or ";
		system("pause > 0");
		system("cls");
		if ((GetAsyncKeyState('Q') & 0x8000))
		{
			break;
		}
		} while (m < n);
	}

	else if (op == '6')
	{
		
		int m, n;
		do{
		do
		{
			std::cout << "Enter 1st Number : ";
			std::cin >> m;
			system("cls");

			std::cout << "Enter 2nd Number : ";
			std::cin >> n;
			system("cls");

			if (m > n)
			{
				std::cout << "Please Enter The 1st number smaller than the 2nd number.";
				Sleep(2000);
				system("cls");
			}
		} while (m > n);

		recAdd(m, n);
		std::cout << recAdd(m, n);
		std::cout << "\n\n"
			<< "Press 'q' to Close or ";
		system("pause > 0");
		system("cls");
		if ((GetAsyncKeyState('Q') & 0x8000))
		{
			break;
		}
		} while (m < n);
	}


}