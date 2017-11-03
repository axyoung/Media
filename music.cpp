/*
 * Alex Young
 * music
 * Last updated: 11/2/2017
 */

#include <iostream>
#include "music.h"

using namespace std;

// constructor
music::music() {
	// when user adds, they call create a new class, and read in info
	cout << "Artist: ";
	cin.get(artist, sizeof(artist));
	cin.get();
	cout << "Duration: ";
	cin >> duration;
	cin.get();
	cout << "Publisher: ";
	cin.get(publisher, sizeof(publisher));
	cin.get();
}

// printing function called when user prints a music file
void music::print() {
        cout << "Type: Music" << endl;
        media::print();
        cout << "Artist: " << artist << endl;
        cout << "Duration: " << duration << endl;
        cout << "Publisher: " << publisher << endl;
}

