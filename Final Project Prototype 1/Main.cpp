#include <iostream>
#include <iomanip>
#include <string>
#include "Header.h"
#include <cctype>

using namespace std;
string name;
string answer;
char choice = 'C';
int main()
{
	opening();
	cin >> choice;
	do {

		if (choice == 'L')
		{
			leftPath();
			leftPathSkeleton();
			skeletonVictory();
			battle(90, 100, randomCreatures(), 70, 50);
			if (choice == 'N')
				return 0;

			randomRooms();
			battle(90, 100, randomCreatures(), 70, 50);
			if (choice == 'N')
				return 0;

			dragon();
			dragonBattle();
			dragonVictory();
			cin >> choice;
			if (choice == 'A')
			{
				necromancer();
				necromancerVictory();
				cin >> choice;
				if (choice == 'Y')
				{
					restart();
					cin >> choice;
				}
				else 
					endProgram();
			}
			else
			{
				openChest();
				necromancer();
				necromancerVictory();
				cin >> choice;
				if (choice == 'Y')
				{
					restart();
					cin >> choice;
				}
				else {
					endProgram();
					break;
				}
				
			}

		}
		else if (choice == 'R')
		{
			rightPath();
			cin >> choice;
			if (choice == 'A')
			{
				sneak();
				cin >> choice;

				if (choice == 'Y')
				{
					restart();
					cin >> choice;
				}
				else
					break;
			}
			else if (choice == 'B')
			{
				goAround();
				//find a way to put a barrier so if the user says no, the program does not continue on (for every battle)
				cyclopsVictory();
				centaurs();
				cin >> choice;

				if (choice == 'A')
				{
					reason();
					reasonHouse();
					battle(90, 100, randomCreatures(), 70, 50);
					if (choice == 'N')
						return 0;

					randomRooms();
					Griffin();
					victoryGriffin();
					cin >> choice;
					if (choice == 'A')
						BOSS();
					else
					{
						towerFunctions();
						BOSS();
						
					}
				}
			else if (choice == 'B')
			{
				fight();
				victoryCentaurs();
				fightHouse();

				battle(90, 80, randomCreatures(), 70, 50);
				if (choice == 'N')
					return 0;

				randomRooms();
				Griffin();
				victoryGriffin();
				cin >> choice;
				if (choice == 'A')
					BOSS();
				else
				{
					towerFunctions();
					BOSS();
				}
			}
			else if (choice == 'C')
			{
				attack();
				cin >> choice;
				if (choice == 'Y') {
					restart();
					cin >> choice;
				}

				else
					break;
			}
		}
	}
		if (choice == 'B')
		{
			back();
			cin >> choice;
			if (choice == 'Y')
			{
				restart();
				cin >> choice;
			}
		}
	} while (choice != 'B');

	return 0;
}