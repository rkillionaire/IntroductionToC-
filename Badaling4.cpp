/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .cpp file for the Badaling space!
 This class contains messages, prompts, items and maps for this location.*/

#include "Badaling4.hpp"
Badaling::Badaling(int position): Space(position){
	this->position = position;
}
void Badaling::message(){
	//top floor message
	if ((GetPosition()==6)){
		
		std::cout << "You are in Badaling which is located within the city limites of Beijing" << std::endl;
		std::cout << "It is located high in elevation and served as a highly strategic outpost for the imperial armies." << std::endl;
		std::cout << "It is now the most visited section of the Great Wall" << std::endl;
		std::cout << "You are on the top floor. Enjoy the view of Beijing" << std::endl;
		mapBaTop();
	}
	
	//bottom floor message
	else if ((GetPosition()==5)){
		std::cout << "You are in Badaling which is located within the city limites of Beijing" << std::endl;
		std::cout << "It is located high in elevation and served as a highly strategic outpost for the imperial armies." << std::endl;
		std::cout << "It is now the most visited section of the Great Wall" << std::endl;
		std::cout << "You are on the bottom floor." << std::endl;
		mapBaBottom();
		std::cout << "You see an old wise man drinking tea." << std::endl;
		std::cout << "He is trying to give you a small envelope...." << std::endl;
		std::cout << "Would you like to accept his envelope and open it?." << std::endl;
		int choice;
		while(choice!=3){
			std::cout << "Enter 1 to open to open it. Enter 2 to hear him talk. Enter 3 to leave." << std::endl;
			choice = intVal(1,3);
			switch(choice){
				case 1:
					std::cout << "You open the envelope and see a small key." << std::endl;
					std::cout << "You place it deep inside your secret belt for safekeeping" << std::endl;
					setSmallKey();
					break;
				case 2:
					std::cout << "The old man says, 'Three keys of different sizes you will need.'" << std::endl;
					std::cout << "but other items you may need as well." << std::endl;
					std::cout << "Keep the key safe, young man. Now make haste!" << std::endl;
					break;
			}
		}
	}
}

//Badaling map with 'you are here' marked as X
void Badaling::mapBaTop(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			** X **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}

//Badaling map with 'you are here' marked as X
void Badaling::mapBaBottom(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " *********************************** X ************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}
