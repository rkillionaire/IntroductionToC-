/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .cpp file for the Shanhaiguan space!
 This class contains messages, prompts, items and maps for this location.*/

#include "Shanhaiguan1.hpp"
Shanhaiguan::Shanhaiguan(int position):Space(position){
	this->position = position;
}
void Shanhaiguan::message(){
	//top floor message
	if ((GetPosition()==12)){
		
		std::cout << "You are in Shanhaiguan, the point where the Great Wall touches the ocean." << std::endl;
		std::cout << "This is the Easternmost point of the Great Wall." << std::endl;
		std::cout << "You are on the top floor of the Great Wall. Enjoy the view of the pristine forests of Hebei." << std::endl;
		mapShanTop();
	}
	
	//bottom floor message
	else if ((GetPosition()==11)){
		std::cout << "You are in Shanhaiguan, the point where the Great Wall touches the ocean." << std::endl;
		std::cout << "This is the Easternmost point of the Great Wall." << std::endl;
		std::cout << "You are on the bottom floor." << std::endl;
		mapShanBottom();
		std::cout << "You see a massive, bolted door..." << std::endl;
		std::cout << "You see several locks and bolts...." << std::endl;
		std::cout << "Would you like to try and open it?." << std::endl;
		int choice;
		while(choice!=3){
			std::cout << "Enter 1 to attempt to open it with your keys. Enter 2 to try and smash it. Enter 3 to leave." << std::endl;
			choice = intVal(1,3);
			switch(choice){
				case 1:
					if (getSmallKey() && getMediumKey() && getMap()){
					std::cout << "You successfully open the door." << std::endl;
					setGateOpened();
					}
					else{
						std::cout << "You are missing several items. Quickly go and find them!" << std::endl;
					}
					break;
				case 2:
					std::cout << "The door is made of stone and steel.'" << std::endl;
					std::cout << "There is no way you are strong enough to break it.'" << std::endl;
					break;
			}
		}
	}
}
//Shanhaiguan map with 'you are here' marked as X
void Shanhaiguan::mapShanTop(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **  **			**   **			**   **			**   **			**   **			** X ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}
//Shanhaiguan map with 'you are here' marked as X
void Shanhaiguan::mapShanBottom(){
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **   **			**   **			**   **			**   **			**   **			**   ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " *********************************************************************************** X ** "<< std::endl;
	std::cout << " **************************************************************************************** "<< std::endl;
	std::cout << " Jiayuguan		Yinchuan		Badaling		Mutianyu		Huangyaguan		Shanhaiguan"<< std::endl;
	std::cout << "   6					5				4				3				2				1	" << std::endl;
	std::cout << " <---West 																			East___>" << std::endl;
}
