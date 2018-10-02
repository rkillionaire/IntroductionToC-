/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .hpp file for the Jiayuguan space!
 This class contains messages, prompts, items and maps for this location.*/

#ifndef Jiayuguan6_hpp
#define Jiayuguan6_hpp

#include <stdio.h>

#include "Space.hpp"
#include "Menu.hpp"
#include "SecretBelt.hpp"


class Jiayuguan: public Space{
private:
public:
	Jiayuguan(int position);
	void message();
	void bottomLevel();
	void openMap();
	void goUpstairs();
	
	void mapJiaTop();
	void mapJiaBottom();
};


#endif /* Jiayuguan_hpp */
