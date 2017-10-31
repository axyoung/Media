/*
 * Alex Young
 * Header for games
 * Last updated: 10/30/2017
 */

#ifndef GAMES_H
#define GAMES_H
#include <iostream>
#include "media.h"

using namespace std;

class games : public media {
private:
	char publisher[26];
	int rating;
public:
	games();
};

#endif
