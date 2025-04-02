//============================================================================
// Name        : FirstRPG.cpp
// Author      : Konstantin
// Version     :
// Copyright   : NOT Copyright free
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int gegnerLP;
int gegnerSchaden;
int coins = 0;
int intInput;
int playerLVL = 1;
int roll;
int waffeInfo;
int rolleSchaden;
int playerLP;
int playerLPmax;
int playerExp = 0;
bool isRoll = false;
bool death = false;
string rolle;
string waffe;
string input;
string name;
string gegner = "";

void clear(){
	for(int i = 0; i<200; i++){
		cout << endl;
	}
}

void kampf(){
	while(gegnerLP > 1){
		if(playerLP < 1){
			cout << "Du bist Gestorben..." << endl;
			system("pause");
			while(death == true){
				cout << "Verlasse das spiel!" << endl;
				cin >> input;
			}
		}
		system("pause");
		cout << "Du greifst an" << endl;
		gegnerLP = gegnerLP - waffeInfo - rolleSchaden;
		playerLP = playerLP - gegnerSchaden;
		system("pause");
		cout << "Die/Der/Das " << gegner << " hat " << gegnerSchaden << " Schaden gemacht." << endl;
		cout << "Dein LP: " << playerLP << ", Gegner LP:" << gegnerLP << endl;
	}
	cout << "Du hast denn Kampf überstanden" << endl;
}

int main() {



	cout << "!!!DIESES SPIEL WIRD NICHT GESPEICHERT!!!" << endl; //=======================Start

	system("pause");

	cout << "Sam(Der Anführer): Hallo wie geht es euch?" << endl;
	cout << "Ich: Mir geht es " << flush;
	cin >> input;

	cout << "Sam: Wie lautet euer name?" << endl << "Ich: Ich bin " << flush;
	cin >> name;

	cout << "Sam: Okay " << name << endl;

	cout << "Sam: Welchen Stellung hattet ihr?" << endl;  //====================================Rolle
	system("pause");
	cout << "Wählen sie eine Rolle indem sie die Zahl ein geben." << endl;

	while(isRoll == false){
		cout << "1.Ritter:Sie machen mehr Schaden mit Schwertern und sie haben viel LP." << endl;
		cout << "2.Ninja:Sie machen mehr Schaden mit Dolchen und mit Wurfsternen und sie haben Normal viel LP." << endl;
		cout << "3.Bogenschütze:Sie machen mehr Schaden mit Bögen , Schleudern und mit Armbrüsten und sie haben Normal viel LP." << endl;
		cout << "4.Magier:Sie machen mehr Schaden mit Zaubersprüchen und sie haben wenig LP." << endl;
		cout << "5.Adliger:Sie machen mehr Schaden mit Helfern und sie haben Normal LP." << endl;
		cin >> roll;

		switch(roll){
		case 1:
			rolle = "Ritter";
			waffe = "Holz Schwert [2 Schaden]";
			waffeInfo = 2;
			rolleSchaden = 3;
			playerLP = 30;
			playerLPmax = 30;
			isRoll = true;
			break;
		case 2:
			rolle = "Ninja";
			waffe = "Holz Dolch [3 Schaden]";
			waffeInfo = 3;
			rolleSchaden = 3;
			playerLP = 20;
			playerLPmax = 20;
			isRoll = true;
			break;
		case 3:
			rolle = "Bogenschütze";
			waffe = "Holzschleuder [3 Schaden]";
			waffeInfo = 3;
			rolleSchaden = 3;
			playerLP = 20;
			playerLPmax = 20;
			isRoll = true;
			break;
		case 4:
			rolle = "Magier";
			waffe = "Mini Feuerball Zauber [4 Schaden]";
			waffeInfo = 4;
			rolleSchaden = 3;
			playerLP = 17;
			playerLPmax = 17;
			isRoll = true;
			break;
		case 5:
			rolle = "Adliger";
			waffe = "LVL 1 Horn der Sklaven [3 Schaden]";
			waffeInfo = 3;
			rolleSchaden = 3;
			playerLP = 20;
			playerLPmax = 20;
			isRoll = true;
			break;
		default:
			cout << "Bitte geben sie eine Richtige antwort ein." << endl;
			isRoll = false;
		}
	}
	cout << "Sam: Okay, ihr seit also ein " << rolle << "." << endl;
	cout << "Sam: Hier ist ein " << waffe << "." << endl;

	cout << "Sam: Ich habe eine Mission für euch" << endl; //===================ErstMission
	system("pause");
	cout << "Sam: Ihr müsst in die Krypta von Friedrich von Aschwede" << endl;
	cout << "Sam: Nimmt ihr diese Aufgabe an?(j/n)" << endl;

	bool isQuest = false;
	while(isQuest == false){
		cin >> input;
		if(input == "j"){
			cout << "Ich: Ja" << endl;
			cout << "Sam: Gut jetzt gehe ihr nach norden bis ihr eine Höle seht und betretet diese." << endl;
			isQuest = true;
			break;
		}
		else{
			if(input == "n"){
				cout << "Ich: Nein." << endl;
				cout << "Sam: Okey dann verpisst euch!!!" << endl;
				system("pause");
				clear();
				cout << "Du hörst ein Rauschen..." << endl;
				system("pause");
				cout << "Du wurdest zur Krypta von Friedrich von Aschwede entführt." << endl;
				isQuest = true;
				break;
			}
			else{
				cout << "Bitte antworten sie mit j oder n" << endl;
				isQuest = false;
			}
		}
	}

	cout << "Du triffst auf eine Horde Zombies" << endl << "Kampf!!!" << endl;//=======ErsterKampf
	string gegner = "Zombie Horde";
	int gegnerLP = 20;
	int gegnerSchaden = 4;
	kampf();

	playerExp = playerExp + 4;
	coins = coins +10;

	if(playerExp > 30){
		playerExp = playerExp -30;
		playerLPmax = playerLPmax + 3;
		playerLVL = playerLVL + 1;
		cout << "!!!Levle Up!!!" << endl << "Levle: " << playerLVL << endl << "Max LP ist jetzt " << playerLPmax << endl;
	}
	cout << "Du hast " << playerExp << " Exp" << endl;
	cout << "Du hast " << coins << " Münzen" << endl;
	playerLP = playerLPmax;
	system("pause");


	clear();

	cout << "Hier ist die Karte" << endl;
	cout << "Drücke 1 oder 2 um dort hinzugehen" << endl;

	cout << "__________________________________" << endl;
	cout << "I      ___      I                I" << endl;
	cout << "I     I_ _I     I   _________    I" << endl;
	cout << "I       I       I   I   _   I    I" << endl;
	cout << "I     l I l     I   I       I    I" << endl;
	cout << "I    l  I  l    I   I_______I    I" << endl;
	cout << "I       I       I                I" << endl;
	cout << "I       I       I                I" << endl;
	cout << "I      l l      I                I" << endl;
	cout << "I     l   l     I                I" << endl;
	cout << "I    l     l    I                I" << endl;
	cout << "I               I                I" << endl;
	cout << "I               I                I" << endl;
	cout << "I        1      I       2        I" << endl;
	cout << "I_______  ______I______   _______I" << endl;
	cout << "I                                I" << endl;
	cout << "I                                I" << endl;
	cout << "I               Du               I" << endl;
	cout << "I________________________________I" << endl;

	isQuest = false;
	while(isQuest == false){
		cin >> intInput;
		switch(intInput){
		case 1:
			cout << "Ein gigant ist auf dich getreten. . ." << endl;
			system("pause");
			cout << "Du bist gestorben. . ." << endl;
			while(death == true){
				cout << "Verlasse das spiel!" << endl;
				cin >> input;
				}
			break;
		case 2:
			coins = coins +15;
			cout << "Du hast " << coins << " Münzen" << endl;
			cout << "Du hast ein Zauberbuch mit einem Eisstachel Zauber [5 Schaden]" << endl;
			isQuest = true;
			break;
		default:
			cout << "Gebe 1 oder 2 ein" << endl;
		}
	}

	cout << "Nimmst du es?(j/n)" << "Deine alte Waffe: " << waffe << endl;
	cin >> input;
	if(input == "j"){
		switch(roll){
		case 1:
			waffe = "Eisstachel Zauber [5 Schaden]";
			waffeInfo = 5;
			rolleSchaden = 0;
			break;
		case 2:
			waffe = "Eisstachel Zauber [5 Schaden]";
			waffeInfo = 5;
			rolleSchaden = 0;
			break;
		case 3:
			waffe = "Eisstachel Zauber [5 Schaden]";
			waffeInfo = 5;
			rolleSchaden = 0;
			break;
		case 4:
			waffe = "Eisstachel Zauber [5 Schaden]";
			waffeInfo = 5;
			rolleSchaden = 3;
			break;
		case 5:
			waffe = "Eisstachel Zauber [5 Schaden]";
			waffeInfo = 5;
			rolleSchaden = 0;
			break;
		}
	}
	else{
		cout << "Dann eben nicht." << endl;
	}

	cout << "Du gehst nach süden zum Dorf." << endl;
	cout << "Sam: Hast du den Schatz gefunden, in der Krypta?" << endl;
	system("pause");
	cout << "Ich: Ja habe ich." << endl;
	cout <<"!!!-----QUEST ABGESCHLOSSEN-----!!!" << endl;
	cout << "Sam: Gehe jetzt zu Max, er arbeitet beim 'ALL ITEMS SHOP'" << endl;
	system("pause");

	clear();

	cout << "Max: Hallo " << name << ", dass sind meine Waren:" << endl;
	cout << "1.Kohle Schwert [5 Schaden][10 Münzen]" << endl;
	cout << "2.Kohle Dolch [5 Schaden][10 Münzen]" << endl;
	cout << "3.Kohleschleuder [5 Schaden][10 Münzen]" << endl;
	cout << "4.LVL 2 Horn der Sklaven [5 Schaden][10 Münzen]" << endl;
	cout << "Gebe die zahl ein um es zu kaufen und eine andere um nichts zu kaufen" << endl;
	cout << "Deine alte Waffe: " << waffe << endl;
	cin >> intInput;

	switch(intInput){
	case 1: //---------------------------------------------------- case 1
		if(coins >= 10){
			coins = coins - 10;
			switch(roll){
			case 1:
				waffe = "Kohle Schwert [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 3;
				break;
			case 2:
				waffe = "Kohle Schwert [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 3:
				waffe = "Kohle Schwert [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 4:
				waffe = "Kohle Schwert [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 5:
				waffe = "Kohle Schwert [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			}
		}
		else{
			cout << "---DU HAST NICHT GENUG GELD---" << endl;
		}
		break;
	case 2: //---------------------------------------------------- case 2
		if(coins >= 10){
			coins = coins - 10;
			switch(roll){
			case 1:
				waffe = "Kohle Dolch [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 2:
				waffe = "Kohle Dolch [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 3;
				break;
			case 3:
				waffe = "Kohle Dolch [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 4:
				waffe = "Kohle Dolch [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 5:
				waffe = "Kohle Dolch [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			}
		}
		else{
			cout << "---DU HAST NICHT GENUG GELD---" << endl;
		}
		break;
	case 3: //---------------------------------------------------- case 3
		if(coins >= 10){
			coins = coins - 10;
			switch(roll){
			case 1:
				waffe = "Kohleschleuder [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 2:
				waffe = "Kohleschleuder [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 3:
				waffe = "Kohleschleuder [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 3;
				break;
			case 4:
				waffe = "Kohleschleuder [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 5:
				waffe = "Kohleschleuder [5 Schaden]";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			}
		}
		else{
			cout << "---DU HAST NICHT GENUG GELD---" << endl;
		}
		break;
	case 4: //---------------------------------------------------- case 4
		if(coins >= 10){
			coins = coins - 10;
			switch(roll){
			case 1:
				waffe = "LVL 2 Horn der Sklaven";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 2:
				waffe = "LVL 2 Horn der Sklaven";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 3:
				waffe = "LVL 2 Horn der Sklaven";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 4:
				waffe = "LVL 2 Horn der Sklaven";
				waffeInfo = 5;
				rolleSchaden = 0;
				break;
			case 5:
				waffe = "LVL 2 Horn der Sklaven";
				waffeInfo = 5;
				rolleSchaden = 3;
				break;
			}
		}
		else{
			cout << "---DU HAST NICHT GENUG GELD---" << endl;
		}
		break;
	}

	cout << "Du hast noch " << coins << " Münzen" << endl;
	cout << "Max: Danke für euer einkauf." << endl;
	cout << "Max: Sam meinte ihr solltet nach Nord-West gehen bis zum Schloss" << endl;

	system("pause");

	clear();

	return 0;
}
