/*
 * Alex Young
 * c++ Galbriath P6
 * Classes and Inheritance project
 * This program will create a database that includes video games, music, and movies.
 * Last updated: 10/30/2017
 */

#include <iostream>
#include <vector>
#include <cstring>
#include "media.h"

using namespace std;

// inside class dB I will include the media database and the methods to manipulate it
// It reads and processes commands in a loop
class dB {
private:
	vector <media *> dataBase;
public:
	void add();
	void search();
	void del();
	void print();
	bool processCommand();
};

void dB::add() {
	dataBase.push_back(new media);
}

void dB::search() {

}

void dB::del() {

}

void dB::print() {

}

bool dB::processCommand() {
	cout << "Choose if you want to ADD, SEARCH, DELETE, or QUIT." << endl;
	char command[10] = "";
	cin.get(command, sizeof(command));
	cin.get();

	if (strcmp(command, "ADD") == 0) {
		add();
	}

	else if (strcmp(command, "SEARCH") == 0) {
		search();
	}

	else if (strcmp(command, "DELETE") == 0) {
		del();
	}
       	
	// for personal use only
	else if (strcmp(command, "PRINT") == 0) {
		print();
	}
       	
	else if (strcmp(command, "QUIT") == 0) {
		return false;
	}

	else {
		cout << "Invalid command, try again." << endl;
	}
}

int main() {
	cout << "This is a media database. Store video games, music, and movies!" << endl;
	dB m;
	// while I am still processing commands
	while (m.processCommand()) {
	}
	// if I stop processing, it means i QUIT and I am done
	return 0;
}
