

#include <iostream>
#include <fstream>
#include <clocale>
#include <string>

using namespace std;

void clearscreen() {
	int i;
	for (i = 0; i < 58; i++) {
		cout << endl;
	}
}

void pikachuhp(int hp1) {
	cout << "               " << hp1 << "HP" << endl;
}

void wigglyhp(int hp2) {
	cout << "               " << hp2 << "HP" << endl;

}

void pikachu() {

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
	cout << "-------------------------------------------" << endl;
	

}

void wigglytuff() {

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
	}

void pikachuspells(int hp1) {

	cout << "Choose your spell:" << endl;
	
	pikachuhp(hp1);
	cout << " 1. Lighting attack" << endl;
	cout << " 2. Tail swipe" << endl;
	cout << " 3. Storm kick" << endl;
	cout << " 4. Fist punch" << endl;
}









int main()
{
	string username;
	int hp1= 100;
	int hp2= 100;
	int utok;
	int pspell1 = 20;
	int pspell2 = 10;
	int pspell3 = 15;
	int pspell4 = 5;
	char charakter;
	bool stop = true;
	setlocale(LC_ALL, "");

	
	


	cout << "     Welcome to Pokémon" << endl;
	cout << " Enter your username:" << endl;
	cin >> username ;
	cout << endl;

	ofstream file;
	file.open ("pokemonhrac.txt");
	file << username << endl;
	file.close();


	cout << " Choose your character:" << endl;
	cout << "             A" << endl << endl << endl;
	pikachu();
	cout << endl<< endl << endl;
	cout << "             B"<< endl << endl << endl;
	wigglytuff();

	cin >> charakter;

		

		if (charakter== 'A' or 'a') {
			clearscreen();
			cout << "You choose Pikachu as your Pokémon " << username << "!" << endl << endl;
				
				while (stop) {
					
				cout << endl;
				pikachuspells(hp1);
				cout << endl;
				cin >> utok;
					switch (utok) {
						case 1: {
							cout << " You choose Lighting attack!" << endl << endl;
							hp2 = hp2 - pspell1;
							cout << " Restt amount Wigglytuffs HP is :" << hp2 << endl;
						}
					}
				}
				
				

			

		}
	


	return 0;
}


