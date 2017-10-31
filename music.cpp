/*
 * Alex Young
 * music
 * Last updated: 10/30/2017
 */

#include <iostream>
#include "music.h"

using namespace std;

music::music() {
	cout << "Artist: ";
	cin.get(artist, sizeof(artist));
	cin.get();
	cout << "Duration: ";
	cin >> duration;
	cout << "Publisher: ";
	cin.get(publisher, sizeof(publisher));
	cin.get();
}
