/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .hpp file for the Mutianyu space!
 This class contains messages, prompts, items and maps for this location.*/

#ifndef Mutianyu3_hpp
#define Mutianyu3_hpp

#include <stdio.h>
#include "Menu.hpp"
#include "Space.hpp"
#include "SecretBelt.hpp"
class Mutianyu: public Space{
private:
	
public:
	Mutianyu(int position);
	void message();
	void bottomLevel();
	void openMap();
	void goUpstairs();
	
	void mapMuTop();
	void mapMuBottom();
};
#endif /* Mutianyu3_hpp */
