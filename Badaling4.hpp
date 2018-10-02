/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .hpp file for the Badaling space!
 This class contains messages, prompts, items and maps for this location.*/

#ifndef Badaling4_hpp
#define Badaling4_hpp

#include <stdio.h>
#include "Space.hpp"
#include "Menu.hpp"
#include "SecretBelt.hpp"
class Badaling: public Space{
private:
	
public:
	Badaling(int position);
	void message();
	void bottomLevel();
	void openMap();
	void goUpstairs();
	
	void mapBaTop();
	void mapBaBottom();
};
#endif /* Badaling_hpp */
