/*
 * Alex Young
 * movies
 * Last updated: 11/2/2017
 */

#include <iostream>
#include "movie.h"

using namespace std;

// constructor
movie::movie() {
	// when user adds a movie to database it creates a new movie, these get called
	cout << "Director: ";
	cin.get(director, sizeof(director));
	cin.get();
	cout << "Duration: ";
	cin >> duration;
	cin.get();
	cout << "Rating: ";
	cin >> rating;
	cin.get();
}

// this prints out the movie the user chooses to call, with its info
void movie::print() {
        cout << "Type: Movie" << endl;
        media::print();
        cout << "Director: " << director << endl;
        cout << "Duration: " << duration << endl;
        cout << "Rating: " << rating << endl;
}

