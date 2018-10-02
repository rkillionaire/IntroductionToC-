/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .hpp file for the Shanhaiguan space!
 This class contains messages, prompts, items and maps for this location.*/

#ifndef Shanhaiguan1_hpp
#define Shanhaiguan1_hpp

#include <stdio.h>
#include "Menu.hpp"
#include "Space.hpp"
#include "SecretBelt.hpp"
class Shanhaiguan: public Space{
private:
	int floor;
public:
	Shanhaiguan(int position);
	void message();
	void bottomLevel();
	void openMap();
	void goUpstairs();
	
	void mapShanTop();
	void mapShanBottom();
	
};
#endif /* Shanhaiguan_hpp */
