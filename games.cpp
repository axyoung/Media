/*
 * Alex Young
 * games
 * Last updated: 11/2/2017
 */

#include <iostream>
#include "games.h"

using namespace std;

// constructor
games::games() {
	// here I read in the publisher and rating for when user adds
	cout << "Publisher: ";
	cin.get(publisher, sizeof(publisher));
	cin.get();
	cout << "Rating: ";
	cin >> rating;
	cin.get();
}

// print games function
void games::print() {
	cout << "Type: Game" << endl;
	// this will print title and year
	media::print();
	cout << "Publisher: " << publisher << endl;
	cout << "Rating: " << rating << endl;
}
