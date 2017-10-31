/*
 * Alex Young
 * media
 * Last updated: 10/27/2017
 */

#include <iostream>
#include <cstring>
#include "media.h"
#include "games.h"
#include "music.h"
#include "movie.h"

using namespace std;

media::media() {
	cout << "Title: ";
	cin.get(title, sizeof(title));
	cin.get();
	cout << "Year: ";
	cin >> year;
	cin.get();
}

media * media::create() {
        while (true) {
		cout << "Enter media type. (games, movie, music)";
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
