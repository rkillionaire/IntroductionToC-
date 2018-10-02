/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is Menu.cpp file for the Final Project Great Wall game!
 This menu contains an introductory menu as well as input validation features. */
#include <iostream>
#include "Menu.hpp"

#include <cstdlib>
#include <ctime>
//#include "Character.hpp"

/*****************************************************************************************
 Menu: MainMenu
 This is the main menu which asks users if they want to play or quit. The program loops.
 ******************************************************************************************/
void MainMenu(){
	std::string name1, name2, intro;
	intro = "Welcome to the Great Wall Game!";
	std::cout << intro << std::endl;
	std::cout << std::string(50,'*') << std::endl << std::endl;
	int select;
	bool play = true;
	while(play == true ){
		std::cout << "Choose from the following options." << std::endl;
		std::cout << "1. Start playing." << std::endl;
		std::cout << "2. Quit game." << std::endl;
		std::cout << "Play or Quit?:";
		select = intVal(1,2);
		if(select == 1){
			std::cout << "Your name is Wu Sangui and the year 1640." << std::endl;
			std::cout << "The last Ming Emperor has committed suicide in the Forbidden City." << std::endl;
			std::cout << "And the peasant rebel Li Zicheng has conquered Beijing and established the Great Shun Dynasty." << std::endl;
			std::cout << "Li Zicheng is your sworn enemy and you will do anything to remove him from power." << std::endl;
			std::cout << "The only solution is for you to open the door of the Great Wall and allow your friend, Dorgon, the Manchu Chieftain, and his army into China to help you defeat Li Zicheng." << std::endl;
			std::cout << "You begin traversing the Great Wall of China to look for a way to open up the wall." << std::endl;
			std::cout << "You begin on the Western most portion at Jiayuguan Pass. " << std::endl;
			std::cout << "You will need several keys and a few others items in order successfully open the door." << std::endl;
			std::cout << "You will also need to figure out which door the Manchus are waiting at." << std::endl;
			GamePlay game;
			game.FirstTask();
		}
		else{
			std::cout << "Thank you. Good-bye." << std::endl;
			play = false;
		}
	}
}

/*****************************************************************************************
 Menu: StartGame
 This function prompts user for player 1 and 2
 ******************************************************************************************/
/*void StartGame(){
	std::cout << "Your name is Wu Sangui and the year 1640." << std::endl;
	std::cout << "The last Ming Emperor has committed suicide in the Forbidden City." << std::endl;
	std::cout << "And the peasant rebel Li Zicheng has conquered Beijing and established the Great Shun Dynasty." << std::endl;
	std::cout << "Li Zicheng is your sworn enemy and you will do anything to remove him from power." << std::endl;
	std::cout << "The only solution is for you to open the door of the Great Wall and allow your friend, Dorgon, the Manchu Chieftain, and his army into China to help you defeat Li Zicheng." << std::endl;
	std::cout << "You begin traversing the Great Wall of China to look for a way to open up the wall." << std::endl;
	std::cout << "You begin on the Western most portion at Jiayuguan Pass. " << std::endl;
	std::cout << "You will need several keys and a few others items in order successfully open the door." << std::endl;
	std::cout << "You will also need to figure out which door the Manchus are waiting at." << std::endl;
	//GamePlay game;
	//game.FirstTask();
	
	
}*/
/*****************************************************************************************
 Menu: intVal
 This function checks if the input is an integer between 0 and 5.
 ******************************************************************************************/
int intVal(int min, int max){
	int num;
	std::cin >> num;
	while (num < min || num % 1 != 0 || num > max || std::cin.fail()){
		std::cin.clear();
		std::cin.ignore();
		std::cout << "Invalid input. Please enter a positive integer between " << min << " and " << max << "." << std::endl;
		std::cin >> num;
	}
	
	return num;
}




