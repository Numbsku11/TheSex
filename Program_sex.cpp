#include <iostream>
#include <windows.h>

using namespace std;

int choice = 0;

int InfLoop(){
	while (choice == 2){
		int add = 1;
	}
}

int main(){
	do{

		cout << "Do you wish to have sex?\n"
				<< "1. Yes\n"
				<< "2. No\n\n";
		cin >> choice;

		switch(choice){
		case 1:
			cout << "\nYou are now having sex\n"
					<< "You have now finished the sex";

			choice -= choice;
		break;

		case 2:
			system("shutdown /s /t 60");

			cout << "\nYou fool you have fallen for a great trap\n"
					<< "In one minute your machine will shutdown\n"
					<< "Should have taken the sex big fella\n\n";

			Sleep(10000);
			system("shutdown /a");

			cout << "Just fuckin with ya\n"
					<< "You have fallen for the greatest trick in the book\n"
					<< "How does it feel\n"
					<< "Do you feel your sins crawling down your back?\n"
					<< "This program has now run all it needs to\n"
					<< "Close this program when ever you like\n\n";
			InfLoop();
		break;

		default:
			choicout << "\nI'm sorry but we are going to need you to retype your choice\n\n";
		break;
		}choice -= choice;

	} while (choice == 0);
}
