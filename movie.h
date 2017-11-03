/*
 * Alex Young
 * Header for movies
 * Last updated: 11/2/2017
 */

// header guards
#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include "media.h"

using namespace std;

// child of media
class movie : public media {
private:
	// has a director, duration, rating and title/year which are in media
	char director[26];
	int duration;
	int rating;
public:
	movie();
        // for printing I use virtual because otherwise it would only read media
        // the print is m->print() and m is a pointer to media
        // This needs to be virtual so it is called when print is called
	virtual void print();
};

#endif
