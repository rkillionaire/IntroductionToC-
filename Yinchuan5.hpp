/*Name: Ross Killion
 Date: August 16, 2018
 Description: This is .hpp file for the Yinchuan space!
 This class contains messages, prompts, items and maps for this location.*/

#ifndef Yinchuan5_hpp
#define Yinchuan5_hpp

#include <stdio.h>
#include "Space.hpp"
#include "Menu.hpp"
#include "SecretBelt.hpp"
class Yinchuan: public Space{
private:
	
public:
	Yinchuan(int position);
	void message();
	void bottomLevel();
	void openMap();
	void goUpstairs();
	
	void mapYinTop();
	void mapYinBottom();
};
#endif /* Yinchuan_hpp */
