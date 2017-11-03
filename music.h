/*
 * Alex Young
 * Header for music
 * Last updated: 11/2/2017
 */

// header guard
#ifndef MUSIC_H
#define MUSIC_H
#include <iostream>
#include "media.h"

using namespace std;

// child of media
class music : public media {
private:
	// music has a title, year, artist, duration and publisher
	char artist[26];
	int duration;
	char publisher[26];
public:	
	music();
        // for printing I use virtual because otherwise it would only read media
        // the print is m->print() and m is a pointer to media
        // This needs to be virtual so it is called when print is called
	virtual void print();
};

#endif
