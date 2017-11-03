/*
 * Alex Young
 * Header for games
 * Last updated: 11/2/2017
 */

// header guards
#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include "media.h"

using namespace std;

// child of media
class games : public media {
private:
	// games has title, year. publisher and rating
	char publisher[26];
	int rating;
public:
	// for adding
	games();
	// for printing I use virtual because otherwise it would only read media
	// the print is m->print() and m is a pointer to media
	// This needs to be virtual so it is called when print is called
	virtual void print();
};

#endif
