/*
 * Alex Young
 * Header for music
 * Last updated: 10/27/2017
 */

#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include "media.h"

using namespace std;

class music : public media {
private:
	char artist[26];
	int duration;
	char publisher[26];
public:	
	music();
};

#endif
