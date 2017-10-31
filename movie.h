/*
 * Alex Young
 * Header for movies
 * Last updated: 10/30/2017
 */

#ifndef MOVIE_H
#define MOVIE_H
#include <iostream>
#include "media.h"

using namespace std;

class movie : public media {
private:
	char director[26];
	int duration;
	int rating;
public:
	movie();
};

#endif
