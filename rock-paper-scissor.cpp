
#include <cstdlib>
#include <iostream>
#include <time.h>
using namespace std;

int main()
{
	cout << " -----------------------------------" << endl;
	cout << "| Let's play Rock-Paper-Scissor !!! |" << endl;
	cout << " -----------------------------------" << endl;
	int choice_to_play;
	do {
		int comp_number;
		char players_choice, computers_choice;

		do{
			cout << "\n\nPress:\n'R' for Rock\n'P' for Paper\n'S' for Scissor\n\n";
		cin >> players_choice;
		cout << endl << endl;
		players_choice = toupper(players_choice);
		if (players_choice == 'R')
			cout << "Your choice: Rock\n";
		else if (players_choice == 'P')
			cout << "Your choice: Paper\n";
		else if (players_choice == 'S')
			cout << "Your choice: Scissor\n";
		} while (players_choice != 'R' && players_choice != 'P' && players_choice != 'S');

		

		srand(time(0));
		comp_number = rand() % 3;

		if (comp_number == 0) {
			computers_choice = 'R';
			cout << "Computer's choice: Rock" << endl;
		}

		else if (comp_number == 1) {
			computers_choice = 'P';
			cout << "Computer's choice: Paper" << endl;
		}

		else if (comp_number == 2) {
			computers_choice = 'S';
			cout << "Computer's choice: Scissor" << endl;
		}

		if (computers_choice == players_choice)
			cout << "It's a tie\n";

		else if ((players_choice == 'R' && computers_choice == 'S') ||
			(players_choice == 'P' && computers_choice == 'R') ||
			(players_choice == 'S' && computers_choice == 'P')) {
			cout << "You win. Congratulations!" << endl;
		}

		else {
			cout << "Computer wins!" << endl;
		}

		cout << "\n\nDo you want to play again? \n->Press 1 to play again\n->Press any other key to exit\n";
		cin >> choice_to_play;
	} while (choice_to_play == 1);


	return 0;
}
