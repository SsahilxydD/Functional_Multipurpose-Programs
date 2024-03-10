#include <iostream>

void info(std::string name = "default", std::string city = "default", int age = 0)
{
	if (name != "default")
	{
		std::cout << "My Name Is " << name << "." << '\n';
	}
	if (city != "default")
	{
		std::cout << "I live in " << city << "." << '\n';
	}
	if (age != 0)
	{
		std::cout << "I am " << age << "yr old." << '\n';
	}
	std::cout << "\n\n"
		<< "Press any key to Close.";
	system("pause > 0");
	system("cls");

}