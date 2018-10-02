/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .cpp file for the Jiayuguan space!
 This class contains messages, prompts, items and maps for this location.*/
#include <iostream>

#include "Jiayuguan6.hpp"


Jiayuguan::Jiayuguan(int position): Space(position){
	this->position = position;
}

void Jiayuguan::message(){
	//top floor message
	if ((GetPosition()==2)){
	
		std::cout << "You are back at Jiayuguan Pass in the deserts of Gansu, China" << std::endl;
		std::cout << "This is the Westernmost point of the Great Wall and you are still very far away from China Proper" << std::endl;
		std::cout << "You are on the top floor of the Great Wall. Enjoy the view of the Taklamakan Desert." << std::endl;
	}
	
	//bottom floor message
	else if ((GetPosition()==1)){
		std::cout << "You are back at Jiayuguan Pass in the deserts of Gansu, China" << std::endl;
		std::cout << "This is the Westernmost point of the Great Wall and you are still very far away from China Proper" << std::endl;
		std::cout << "You are on the bottom floor of the Great Wall." << std::endl;
		bottomLevel();
	}
	}

//bottom floor event
void Jiayuguan::bottomLevel(){
		int light;
		std::cout << "You have walked down the long steep stairs of the great wall." << std::endl;
		std::cout << "You are now on the ground floor." << std::endl;
		std::cout << "It is very very dark down here." << std::endl;
		std::cout << "Please turn on the light. " << std::endl;
		std::cout << "Enter 1 to light the oil lamp." << std::endl;
		light  = intVal(1, 1);
		std::cout << "You can now see clearly." << std::endl;
		openMap();
}

void Jiayuguan::openMap(){
	int map;
	std::cout << "You see a rolled up map on the ground." << std::endl;
	std::cout << "It looks like it's been sitting on the ground collecting dust for a while." << std::endl;
	std::cout << "Would you like to pick it up?" << std::endl;
	std::cout << "Enter 1 to pick it up. Enter 2 to leave it on the ground." << std::endl;
	map = intVal(1,2);
	switch(map){
		case 1:
			std::cout << "You brush off the dust and unroll the map." << std::endl;
			std::cout << "You bring it closer to the oil lamp and you see a detailed map of the Great Wall of China." << std::endl;
			std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
			std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
			std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
			std::cout << " **************************************************************************************** "<< std::endl;
			std::cout << " **************************************************************************************** "<< std::endl;
			std::cout << " **************************************************************************************** "<< std::endl;
			std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
			std::cout << "   6					5				4				3				2				1	" << std::endl;
			std::cout << " <---West 																			East___>" << std::endl;
			std::cout << "From now on, the map will open each time you change your location." << std::endl;
			std::cout << "The Manchu Chieftain Dorgon is waiting for you at Shanhaiguan pass."<< std::endl;
			std::cout << "That is where you must open the door for him." << std::endl;
			std::cout << "You must hurry up, otherwise he will send his Manchu archers to assassinate you!" << std::endl;
			setMap();
			break;
		case 2:
			std::cout << "You decided to leave the map on the ground." << std::endl;
			
	}
	
}
/*void goUpstairs(){
	std::cout << "Would you like to go upstairs?" << std::endl;
	std::cout << "Enter 1 to go upstairs. Enter 2 to stay where you are." << std::endl;
	int selection = intVal(1,2);
	if((selection == 1) && (belt->ladder==true)){
		{
			std::cout << "You are now upstairs." << std::endl;
			StartGame();
		}
	}}*/

//Jiayuguan map with 'you are here' marked as X
void Jiayuguan::mapJiaTop(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " ** X **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
	std::cout << "The Manchu Chieftain Dorgon is waiting for you at Shanhaiguan pass."<< std::endl;
	std::cout << "That is where you must open the door for him." << std::endl;
	std::cout << "You must hurry up, otherwise he will send his Manchu archers to assassinate you!" << std::endl;
}

//Jiayuguan map with 'you are here' marked as X
void Jiayuguan::mapJiaBottom(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " ** X *********************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
	std::cout << "The Manchu Chieftain Dorgon is waiting for you at Shanhaiguan pass."<< std::endl;
	std::cout << "That is where you must open the door for him." << std::endl;
	std::cout << "You must hurry up, otherwise he will send his Manchu archers to assassinate you!" << std::endl;
}
