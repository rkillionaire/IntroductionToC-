/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is GamePlay.cpp file for the Final Project Great Wall game!
 This class initiates new objects for each space derivative and allocates their positions as well. The gameplay is initiated as a loop until the player either wins or dies.*/

#ifndef Gameplay_hpp
#define Gameplay_hpp

#include <stdio.h>

#include "Menu.hpp"
#include "Space.hpp"
#include "SecretBelt.hpp"
#include "Shanhaiguan1.hpp"
#include "Huangyaguan2.hpp"
#include "Mutianyu3.hpp"
#include "Badaling4.hpp"
#include "Yinchuan5.hpp"
#include "Jiayuguan6.hpp"

class GamePlay
{
private:
	
	void setOrient(Space *pWest, Space *East,Space *pUp, Space *pDown);
	int steps = 1;
	bool gateOpened;
	bool isDead;
	Space *WuSangui;
public:
	GamePlay();
	SecretBelt *belt;
	void FirstTask();
	void GameStart();
	void Victory();
	~GamePlay();
	
};
#endif /* Gameplay_hpp */
