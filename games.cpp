/*
 * Alex Young
 * games
 * Last updated: 10/30/2017
 */

#include <iostream>
#include "games.h"

using namespace std;

games::games() {
	cout << "Publisher: ";
	cin.get(publisher, sizeof(publisher));
	cin.get();
	cout << "Rating: ";
	cin >> rating;
}
