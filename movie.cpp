/*
 * Alex Young
 * movies
 * Last updated: 10/27/2017
 */

#include <iostream>
#include "movie.h"

using namespace std;

movie::movie() {
	cout << "Director: ";
	cin.get(director, sizeof(director));
	cin.get();
	cout << "Duration: ";
	cin >> duration;
	cout << "Rating: ";
	cin >> rating;
}
