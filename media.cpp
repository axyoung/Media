/*
 * Alex Young
 * media is the parent class for games, music and movie
 * Last updated: 11/2/2017
 */

#include <iostream>
// will need to read in char arrays
#include <cstring>
// this is the parent class
#include "media.h"
#include "games.h"
#include "music.h"
#include "movie.h"

using namespace std;

// constructor, all of the media files will include a title and year to read
media::media() {
	cout << "Title: ";
	cin.get(title, sizeof(title));
	cin.get();
	cout << "Year: ";
	cin >> year;
	cin.get();
}

media * media::create() {
	// when adding, create a new media pointer of the type they type in
        while (true) {
		cout << "Enter media type. (games, movie, music): ";
		char type[10] = "";
		cin.get(type, sizeof(type));
		cin.get();
		
		if (strcmp(type, "games") == 0) {
			return new games;
		}
		
		else if (strcmp(type, "music") == 0) {
			return new music;
		}
		
		else if (strcmp(type, "movie") == 0) {
			return new movie;
		}
	}
}

// print ou the title and year
void media::print() {
	cout << "Title: " << title << endl;
	cout << "Year: " << year << endl;
}
