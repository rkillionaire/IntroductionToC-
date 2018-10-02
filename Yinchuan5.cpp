/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .cpp file for the Yinchuan space!
 This class contains messages, prompts, items and maps for this location.*/

#include "Yinchuan5.hpp"
Yinchuan::Yinchuan(int position): Space(position){
	this->position = position;
}
void Yinchuan::message(){
	//top floor message
	if ((GetPosition()==4)){
		
		std::cout << "You are now in the Yinchuan Pass in Ningxia Autonomous Region." << std::endl;
		std::cout << "You are no longer near Beijing or the Eastern Coasts." << std::endl;
		std::cout << "This is a remote outpost defending against Northwestern Barbarians." << std::endl;
		std::cout << "You are on the top floor. Enjoy the view of the Asian Steppes." << std::endl;
		mapYinTop();
	}
	
	//bottom floor message
	else if ((GetPosition()==3)){
		std::cout << "You are now in the Yinchuan Pass in Ningxia Autonomous Region." << std::endl;
		std::cout << "You are no longer near Beijing or the Eastern Coasts." << std::endl;
		std::cout << "This is a remote outpost defending against Northwestern Barbarians." << std::endl;
		std::cout << "You are on the bottom floor." << std::endl;
		mapYinBottom();
		std::cout << "You see a rusty old cabinet in the corner." << std::endl;
		std::cout << "You walk up to get closer...." << std::endl;
		std::cout << "Would you like to open the top drawer?." << std::endl;
		int choice;
		while(choice!=3){
		std::cout << "Enter 1 to open the top drawer. Enter 2 to open the bottom drawer. Enter 3 to leave." << std::endl;
		choice = intVal(1,3);
		switch(choice){
			case 1:
				std::cout << "You see some rusty nails and a broken mirror." << std::endl;
				std::cout << "Nothing important here." << std::endl;
				break;
			case 2:
				std::cout << "You see a sturdy hammer that could be used to break open a door." << std::endl;
				std::cout << "You pick it up and place it in your secret belt." << std::endl;
				setHammer();
				break;
	}
}
	}
}

//Yinchuan map with 'you are here' marked as X
void Yinchuan::mapYinTop(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			** X **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}

//Yinchuan map with 'you are here' marked as X
void Yinchuan::mapYinBottom(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " ******************* X ****************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}
