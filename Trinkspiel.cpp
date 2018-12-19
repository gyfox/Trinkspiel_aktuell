#include<stdio.h>
#include<conio.h>
#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
#include<string>
#include<sstream>
#include<stdlib.h>
#include<cmath>
#include <windows.h>

using namespace std;



int main(){
	
	vector<string> Name_Spieler;
	string name;
	int anzahl_spieler = 0;
	int rande = 0;
	int rand_s = 0;
	int rand_v = 0;
	
	//Anzahl der Spieler wird eingelesen
	cout << "Wie viele Spieler spielen mit?: " << endl;
	cin >> anzahl_spieler;
	
	//Spielernamen werden eingegeben
	for(int i = 0; i < anzahl_spieler; i++ ){
		cout << "Gebe Name des Spielers " << i << " ein!" << endl;
		cin >> name;
		Name_Spieler.push_back(name);
	}
	
	//nun soll in zufälligen Zeitabständen ein Spieler bestimmt werden, bis das Spiel abgebrochen wird
	while(true){
		rande = rand() % anzahl_spieler;
		rand_s = rand() % 3 + 1;
		rand_v = rand() % 2;
		string verteilen = "Spieler " + Name_Spieler[rande] + " verteilt " + to_string(rand_s) + " Schlucke";
		string trinken = "Spieler " + Name_Spieler[rande] + " trinkt " + to_string(rand_s) + " Schlucke";
		char tab2[1024];
		strcpy(tab2, verteilen.c_str());
		char tab1[1024];
		strcpy(tab1, trinken.c_str());
		
		printf("\a");
		if(rand_v == 1){
			MessageBox( nullptr, TEXT( tab2 ), TEXT( "Message" ), MB_OK );
		}
		else{
			MessageBox( nullptr, TEXT( tab1 ), TEXT( "Message" ), MB_OK );
		}
		
		
		cout << "Pause" << endl;
		Sleep(rand() % 100 * 1000);
	}
	
	 
	
}
