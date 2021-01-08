

#include <iostream>
#include <fstream>
#include <clocale>
#include <string>
#include <stdlib.h>
#include <stdio.h>      
#include <time.h> 
#include <fstream>
#include "windows.h"

using namespace std;










void clearscreen() {
	int i;
	for (i = 0; i < 80; i++) {
		cout << endl;
	}
}


void clearscreen1() {
	Sleep(4000);
	int i;
	for (i = 0; i < 80; i++) {
		cout << endl;
	}
}

void pikachuhp(int hp1) {
	cout << "               " << hp1 << "HP" << endl;
}

void wigglyhp(int hp2) {
	cout << "               " << hp2 << "HP" << endl;

}

void pikachu(int hp1) {

	cout << endl << endl << endl;
	cout << "------------------------------------------ " << endl;
	cout << "              Pikachu               " << endl << endl;
	cout << "   |`\\    `,,,            ,,,'		" << endl;
	cout << "    |  `\\    \\ '.        .'.'		" << endl;
	cout << "     |    `\\   \\  '-""""-' /		" << endl;
	cout << "     `.     `\\ /          |`		" << endl;
	cout << "       `>    /,   _     _ \\ 		" << endl;
	cout << "        /   / |       .    ,		" << endl;
	cout << "       <  (` , \\ ()   ~~~(/ _		" << endl;
	cout << "        ',,\\  `,     __ _.-'` )	" << endl;
	cout << "          >,\\          `   _.'		" << endl;
	cout << "          `,,\\          \\-'		" << endl;
	cout << "            ,/           \\ _		" << endl;
	cout << "            |   ,"".     .` \\		" << endl;
	cout << "            |      _|   '   /		" << endl;
	cout << "             ,    / )     ., -,     " << endl;
	cout << "              \\    /  __   .-'		" << endl;
	cout << "               \\,_/- `  `-'		" << endl;
	cout << "------------------------------------------" << endl;
	pikachuhp(hp1);
	

}

void wigglytuff(int hp2) {

	cout << "------------------------------------------ " << endl;
	cout << "               Wigglytuff            " << endl << endl;
	cout << "                 .~~-.      _.    	" << endl;
	cout << "      .''..    (_~)  ) _.-'. ; 		" << endl;
	cout << "       '.'..'..-(_~ _-'*. .'.'  	" << endl;
	cout << "         ''.'.. _ ~~  _  ';'   		" << endl;
	cout << "          .''. (_)   (_)  '.      	" << endl;
	cout << "          ;       ...     '.     	" << endl;
	cout << "      .''.'.   .''`-'''.    '.''. 	" << endl;
	cout << "     '.  '   ;         ;    ;  ; 	" << endl;
	cout << "        '.   ;           ;   ' ;  	" << endl;
	cout << "         '.  ;           ;    ;   	" << endl;
	cout << "          '.  ;         ;   .'    	" << endl;
	cout << "          .'...:..___..:..':.     	" << endl;
	cout << "       .''     ..'    '...   ~)   	" << endl;
	cout << "      (.....'''           ''''    	" << endl;
	cout << "------------------------------------------ " << endl;
	wigglyhp(hp2);
	}

void pikachuspells(int hp1) {
	
	cout << "Choose your spell for this round:" << endl;
	
	pikachuhp(hp1);
	cout << " 1. Lighting attack" << endl;
	cout << " 2. Tail swipe" << endl;
	cout << " 3. Storm kick" << endl;
	cout << " 4. Fist punch" << endl;
	cout << " 5. Use heal potion" << endl;
}

void wigglyspells(int hp2) {
	
	cout << "Choose your spell for this round:" << endl;

	wigglyhp(hp2);
	cout << " 1. Hypnoblast" << endl;
	cout << " 2. Hocus pinkus" << endl;
	cout << " 3. Punishing slap" << endl;
	cout << " 4. Gather energy" << endl;
	cout << " 5. Use heal potion" << endl;

}








int main()
{
	

	string username;
	int hp1 = 100;
	int hp2 = 100;
	int utok;
	int randomcislo;
	int spell1 = 20;
	int spell2 = 10;
	int spell3 = 15;
	int spell4 = 5;
	int potion = 15;
	int charakter;
	bool stop = true;
	setlocale(LC_ALL, "");





	cout << "     Welcome to Pokémon" << endl;
	cout << " Enter your username:" << endl;
	cin >> username;
	cout << endl;

	ofstream file;
	file.open("pokemonhrac.txt");
	file << username << endl;
	file.close();


	cout << " Choose your character:" << endl;
	cout << "             1.)" << endl << endl << endl;
	pikachu(hp1);
	cout << endl << endl << endl;
	cout << "             2.)" << endl << endl << endl;
	wigglytuff(hp2);

	cin >> charakter;



	if (charakter == 1)    {
		clearscreen();
		cout << "You choose Pikachu as your Pokémon " << username << "!" << endl << endl;

		while (stop) {




			cout << endl;
			clearscreen1();
			pikachuspells(hp1);
			cout << endl;
			cin >> utok;
			
			
			
			
			
			switch (utok) {
			case 1: 
				
				cout << " You choose Lighting attack!" << endl << endl;
				hp2 = hp2 - spell1;
				cout << " Restt amount of Wigglytuff's HP is :" << hp2 << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 2: 
				
				cout << " You choose Tail swipe!" << endl << endl;
				hp2 = hp2 - spell2;
				cout << " Restt amount of Wigglytuff's HP is :" << hp2 << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 3: 
				
				cout << " You choose Storm kick!" << endl << endl;
				hp2 = hp2 - spell3;
				cout << " Restt amount of Wigglytuff's HP is :" << hp2 << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 4: 
				
				cout << " You choose Fist punch!" << endl << endl;
				hp2 = hp2 - spell4;
				cout << " Restt amount of Wigglytuff's HP is :" << hp2 << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 5: 
				
				cout << " You choose Healing potion, your health will be regenerated for 15HP " << endl << endl;
				hp1 = hp1 + potion;
				cout << " Restt amount of Pikachus hp is :" << hp1 << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			default: 
				
				cout << " You don't cast a spell!" << endl;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();

				break;
			}
			
			
			
			
			
			
			cout << " Now wigglytuff's turn:" << endl << endl<< endl;
			randomcislo = rand() % 5 + 1;
			








			switch (randomcislo) {
			
			
			case 1: cout << "Wigglytuff choose Hypnoblast !" << endl;
				hp1 = hp1 - spell1;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			
			case 2: cout << "Wigglytuff choose Hocus Pinkus !" << endl;
				hp1 = hp1 - spell2;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 3: cout << "Wigglytuff choose Punishing Slap !" << endl;
				hp1 = hp1 - spell3;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 4: cout << "Wigglytuff choose Gather Energy !" << endl;
				hp1 = hp1 - spell4;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			
			case 5: cout << "Wigglytuff choose Healing potion !" << endl;
				hp2 = hp2 + potion;
				pikachu(hp1);
				wigglytuff(hp2);
				clearscreen1();
				break;
			}



			
			if (hp1 < 1) {
					clearscreen1();
					cout << endl << endl << "    Wigglytuff wins this match " << username << "!" << endl << endl;
					cout << endl << endl << "    Thank you for playing my shitty game! " << endl << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					ifstream MyReadFile("pokemonhrac.txt");
					while (getline(MyReadFile, username)) {
						cout << " Game Over player  " << username << " with " << hp1 << " HP " << endl;
						cout << "Good luck next time!" << endl;
					}
					stop = false;
			}
			else if (hp2 < 1) {
					clearscreen1();
					cout << endl << endl << "    Pikachu wins this match " << username << "!" << endl << endl;
					cout << endl << endl << "    Thank you for playing my shitty game! " << endl << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					ifstream MyReadFile("pokemonhrac.txt");
					while (getline(MyReadFile, username)) {
						cout << " Game Over player  " << username << " with " << hp1 << " HP " << endl;
					}
					stop = false;

			}
			else {
					stop = true;
					continue;
			}
		}
	}
	








	else if (charakter == 2) {
		
			clearscreen();
			cout << "You choose Wigglytuff as your Pokémon " << username << "!" << endl << endl;

			while (stop) {



				cout << endl;
				clearscreen1();
				wigglyspells(hp2);
				cout << endl;
				cin >> utok;


				switch (utok) {
				case 1:

					cout << " You choose Hypnoblast!" << endl << endl;
					hp1 = hp1 - spell1;
					cout << " Restt amount of Pikachu's HP is :" << hp1 << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 2:

					cout << " You choose Hocus pinkus!" << endl << endl;
					hp1 = hp1 - spell2;
					cout << " Restt amount of Pikachu's HP is :" << hp1 << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 3:

					cout << " You choose Punishing slap!" << endl << endl;
					hp1 = hp1 - spell3;
					cout << " Restt amount of Pikachu's HP is :" << hp2 << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 4:

					cout << " You choose Gather energy!" << endl << endl;
					hp1 = hp1 - spell4;
					cout << " Restt amount of Pikachu's HP is :" << hp2 << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 5:

					cout << " You choose Healing potion, your health will be regenerated for 15HP " << endl << endl;
					hp2 = hp2 + potion;
					cout << " Restt amount of Wigglytuff's hp is :" << hp2 << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				default:

					cout << " You don't cast a spell!" << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();

					break;
				}








				cout << " Now Pikachu's turn:" << endl << endl << endl;
				randomcislo = rand() % 5 + 1;







				switch (randomcislo) {


				case 1: cout << "Pikachu choose Lighting attack !" << endl;
					hp2 = hp2 - spell1;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;


				case 2: cout << "Pikachu choose Tail swipe !" << endl;
					hp2 = hp2 - spell2;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 3: cout << "Pikachu choose Storm kick !" << endl;
					hp2 = hp2 - spell3;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 4: cout << "Pikachu choose Fist punch !" << endl;
					hp2 = hp2 - spell4;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;

				case 5: cout << "Pikachu choose Healing potion !" << endl;
					hp1 = hp1 + potion;
					pikachu(hp1);
					wigglytuff(hp2);
					clearscreen1();
					break;
				}




				if (hp1 < 1) {
					clearscreen1();
					cout << endl << endl << "    Wigglytuff wins this match " << username << "!" << endl << endl;
					cout << endl << endl << "    Thank you for playing my shitty game! " << endl << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					ifstream MyReadFile("pokemonhrac.txt");
					while (getline(MyReadFile, username)) {
						cout << " Game Over player  " << username << " with " << hp1 << " HP " << endl;
					}
					stop = false;
				}
				else if (hp2 < 1) {
					clearscreen1();
					cout << endl << endl << "    Pikachu wins this match " << username << "!" << endl << endl;
					cout << endl << endl << "    Thank you for playing my shitty game! " << endl << endl;
					pikachu(hp1);
					wigglytuff(hp2);
					ifstream MyReadFile("pokemonhrac.txt");
					while (getline(MyReadFile, username)) {
						cout << " Game Over player  " << username << " with " << hp1 << " HP " << endl;
						cout << "Good luck next time!" << endl;
					}
					stop = false;

				}
				else {
					stop = true;
					continue;
				}


		}
	}

	else {
	cout << " Try 1 or 2 next time Moron :/" << endl;
	
		

}
return 0;
}
		

