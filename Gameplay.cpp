/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is GamePlay.cpp file for the Final Project Great Wall game!
 This class initiates new objects for each space derivative and allocates their positions as well. The gameplay is initiated as a loop until the player either wins or dies.*/

#include "Gameplay.hpp"


GamePlay::GamePlay(){
	Jiayuguan *J1 = new Jiayuguan(1); //Jiayuguan bottom
	Jiayuguan *J2 = new Jiayuguan(2); //Jiayuguan top
	Yinchuan *Y1 = new Yinchuan(3); //Yinchuan bottom
	Yinchuan *Y2 = new Yinchuan(4); //Yinchuan top
	Badaling *B1 = new Badaling(5); //Badaling bottom
	Badaling *B2 = new Badaling(6); //Badaling top
	Mutianyu *M1 = new Mutianyu(7); //Mutianyu bottom
	Mutianyu *M2 = new Mutianyu(8); //Mutianyu top
	Huangyaguan *H1 = new Huangyaguan(9); //Huangyaguan bottom
	Huangyaguan *H2 = new Huangyaguan(10); //Huangyaguan top
	Shanhaiguan *S1 = new Shanhaiguan(11); //Shanhaiguan bottom
	Shanhaiguan *S2 = new Shanhaiguan(12); //Shanhaiguan top
	
	//the adjacent positions for the directions of West, East, Up and Down are intialized here
	J1->setOrient(NULL, NULL, J2, NULL);
	J2->setOrient(NULL, Y2, NULL, J1);
	Y1->setOrient(NULL, NULL, Y2, NULL);
	Y2->setOrient(J2, B2, NULL, Y1);
	B1->setOrient(NULL, NULL, B2, NULL);
	B2->setOrient(Y2, M2, NULL, B1);
	M1->setOrient(NULL, NULL, M2, NULL);
	M2->setOrient(B2, H2, NULL, M1);
	H1->setOrient(NULL, NULL, H2, NULL);
	H2->setOrient(M2, S2, NULL, H1);
	S1->setOrient(NULL, NULL, S2, NULL);
	S2->setOrient(H2, NULL, NULL, S1);
	
	WuSangui = J2; //WuSangui starts at the Jiayuguan top position
}

//The first task of the game is displayed here
void GamePlay::FirstTask(){
	int selection;
	isDead = false;
	std::cout << "You start here at Jiayuguan Pass in the deserts of Gansu, China" << std::endl;
	std::cout << "You are on the top floor of the Great Wall." << std::endl;
	std::cout << "This is the Westernmost point of the Great Wall and you are still very far away from China Proper" << std::endl;
	std::cout << "You see a ladder on the ground. " << std::endl;
	std::cout << "This might come in handy later. Would you like to pick it up?" << std::endl;
	std::cout << "Enter 1 to pick it up. Enter 2 to leave it on the ground." << std::endl;
	selection = intVal(1,2);
	while(selection!=1){
		std::cout << "You should pick up the ladder." << std::endl;
		std::cout << "Otherwise you will lack mobility" << std::endl;
		std::cout << "Enter 1 to pick it up. Enter 2 to leave it on the ground." << std::endl;
	}
	if(selection=1){
		std::cout << "You now own a portable ladder." << std::endl;
		std::cout << "You can now go between the top and bottom levels of the wall." << std::endl;
		GameStart();
	}}

//game begins as part of a while loop that continues until either the player runs out of steps, gets themselves killed
// or wins by opening the gate for the Manchu
void GamePlay::GameStart(){
	while((steps<=30) && (WuSangui->getGateOpened()==false) && (isDead==false)){
		belt = new SecretBelt();
		std::cout << "Would you like to move West(1), East(2), Upstairs(3), or Downstairs(4)" << std::endl;
		int direction = intVal(1, 4);
		switch(direction){
			case 1:
				if(WuSangui->getWest() == NULL){
					if(WuSangui->getUp() == NULL){
					std::cout << "This is the edge of Chinese territory." << std::endl;
					std::cout << "Further West lives the dangerou Xiongnu." << std::endl;
					std::cout << "Continue at your own peril." << std::endl;
					std::cout << "Would you like to continue?. Enter 1 to stay safe. Enter 2 to continue into the danger zone." << std::endl;
					int continueOn = intVal(1,2);
					if(continueOn == 2){
						std::cout << "You have gotten yourself killed by Barbarians!" << std::endl;
						std::cout << "Game Over!" << std::endl;
						isDead = true;
						steps += 30;
					}
					}
					else{
						std::cout << "You cannot go through the wall. Please go upstairs first." << std::endl;
					}}
				else{
					WuSangui = WuSangui->getWest();
					WuSangui->message();
				}
				
				break;
			case 2:
				if(WuSangui->getEast() == NULL){
					if(WuSangui->getUp() == NULL){
					std::cout << "This is the edge of the Asian continent." << std::endl;
					std::cout << "Further East lies the treacherous waters of the Bohai Sea." << std::endl;
					std::cout << "Continue at your own peril." << std::endl;
					std::cout << "Would you like to continue?. Enter 1 to stay safe. Enter 2 to continue into the danger zone." << std::endl;
					int continueOn = intVal(1,2);
					if(continueOn == 2){
						std::cout << "You have gotten yourself killed by Japanese pirates!" << std::endl;
						std::cout << "Game Over!" << std::endl;
						isDead = true;
						//steps += 30;
					}
					}
					else
						std::cout << "You cannot go through the wall.Please go upstairs first." << std::endl;
					}
				else{
					WuSangui = WuSangui->getEast();
					WuSangui->message();
						}
				break;

			case 3:
				if(WuSangui->getUp() == NULL){
					std::cout << "You cannot go any higher." << std::endl;
					std::cout << "Further up is the infinite expanse of the universe." << std::endl;
					std::cout << "You cannot go even if you wished." << std::endl;
					std::cout << "Would you like to continue?. Enter 1 to stay safe. Enter 2 to continue into the danger zone." << std::endl;
				}
				else{
					WuSangui = WuSangui->getUp();
					WuSangui->message();
					}
				
				break;
			case 4:{
				if(WuSangui->getDown() == NULL){
					std::cout << "You cannot go any lower." << std::endl;
					std::cout << "Further down is the molten core of the Earth's interior." << std::endl;
					std::cout << "You cannot go even if you wished." << std::endl;
				}
				else{
					WuSangui = WuSangui->getDown();
					WuSangui->message();
				}
				break;
				}
				
		}
		steps+=1;
	}
		if (WuSangui->getGateOpened() == true){
			Victory();
		}
		else {
			std::cout << "Game is over!" << std::endl;
			std::cout << "You have run out of steps. You have been assassinated by a Manchu archer and Li Zicheng has secured his power in the Forbidden City." << std::endl;
		}
	
	
}
void GamePlay::Victory(){
	//std::cout << "You have won!" << std::endl;
	std::cout << "You have opened the gate and allowed Chief Dorgon and his Manchu army to enter China!" << std::endl;
	std::cout << "The Manchu army will now go on to defeat the peasant rebels of Li Zicheng and restore the rightful ruler of China!" << std::endl;
	std::cout << "However, there is some concern that the Manchus may want to establish their own dynasty...." << std::endl;
	std::cout << "Do not worry about that for now though. Take your well-deserved rest...to be continued" << std::endl;
	std::cout << "Congratulations! You have won the game!" << std::endl;
}

//This is the destructor
GamePlay::~GamePlay()
{
	while(WuSangui->getWest() != NULL)
	{
		WuSangui = WuSangui->getWest();
	}
	while(WuSangui->getDown() != NULL)
	{
		WuSangui = WuSangui->getWest();
	}
	/*while(WuSangui->getUp() != NULL)
	 {
	 WuSangui = WuSangui->getWest();
	 }*/
	while(WuSangui->getEast() != NULL)
	{
		Space *del = WuSangui;
		WuSangui = WuSangui->getEast();
		delete del;
	}
	delete WuSangui;
}

