/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .cpp file for the Mutianyu space!
 This class contains messages, prompts, items and maps for this location.*/

#include "Mutianyu3.hpp"
Mutianyu::Mutianyu(int position): Space(position){
	this->position = position;
}
void Mutianyu::message(){
	//top floor message
	if ((GetPosition()==8)){
		
		std::cout << "You are in Mutianyu, approximately 70 kilometers north of Beijing." << std::endl;
		std::cout << "This section was very strongly reinforced in order to defend the Forbidden City, the Imperial Tombs and the capital of the empire." << std::endl;
		std::cout << "It is now one of the most well-preserved and popular sections of the wall." << std::endl;
		std::cout << "You are on the top floor of the Great Wall. Enjoy the view of the pristine forests of Hebei." << std::endl;
		mapMuTop();
	}
	
	//bottom floor message
	else if ((GetPosition()==7)){
		std::cout << "You are in Mutianyu, approximately 70 kilometers north of Beijing." << std::endl;
		std::cout << "This section was very strongly reinforced in order to defend the Forbidden City, the Imperial Tombs and the capital of the empire." << std::endl;
		std::cout << "It is now one of the most well-preserved and popular sections of the wall." << std::endl;
		std::cout << "You are on the bottom floor." << std::endl;
		mapMuBottom();
		std::cout << "You see a dead soldier on the ground..." << std::endl;
		std::cout << "Around his waist is a secret belt like yours with a medium sized key attached...." << std::endl;
		std::cout << "Would you like to pick up the key?." << std::endl;
		int choice;
		while(choice!=3){
			std::cout << "Enter 1 to open to open it. Enter 2 to cover his body with a tapestry. Enter 3 to leave." << std::endl;
			choice = intVal(1,3);
			switch(choice){
				case 1:
					std::cout << "You carefully remove the key from his belt and attach it to yours." << std::endl;
					setMediumKey();
					break;
				case 2:
					std::cout << "You take out beautiful tapestry with mantras written on it.'" << std::endl;
					std::cout << "You place it over his body to honor his sacrifice.'" << std::endl;
					break;
			}
		}
	}
	
}

//Mutianyu map with 'you are here' marked as X
void Mutianyu::mapMuTop(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			** X **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}

//Mutianyu map with 'you are here' marked as X
void Mutianyu::mapMuBottom(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " *************************************************** X ********************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}
