/*
 * Alex Young
 * Header for media class
 * Last updated: 11/2/2017
 */

// header guards
#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>

using namespace std;

class media {
private:
	// all media classes have a title and year
	char title[26];
	int year;
public:
	// my dad showed me static media, this will be needed
	// because when I add in dB class, I need to call create
	// but I won't have a object to call it on, so I use static instead
	static media *create();
	media();
	// for printing I use virtual because otherwise it would only read media
        // the print is m->print() and m is a pointer to media
        // This needs to be virtual so it is called when print is called

	virtual void print();
	// functions to return the year and title
	int getYear() {
		return year;
	}
	char *getTitle() {
		return title;
	}
};

#endif
