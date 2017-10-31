/*
 * Alex Young
 * Header for media
 * Last updated: 10/30/2017
 */

#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>

using namespace std;

class media {
	// media will be the parent file
private:
	char title[26];
	int year;
public:
	media * create();
	media();
};

#endif
