/*
 * Alex Young
 * c++ Galbriath P6
 * Classes and Inheritance project
 * This program will create a database that includes video games, music, and movies.
 * Last updated: 11/2/2017
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
	// vector that holds pointers to my classes
	vector <media *> dataBase;
public:
	// prototypes for functions that will be called when processing commands
	void add();
	void search();
	// delete
	void del();
	void print();
	// processes a single command from the user
	bool processCommand();
};

void dB::add() {
	// add a new media object to my database
	dataBase.push_back(media::create());
}

// search for a file and print
void dB::search() {
	// ask them how they want to search
	cout << "Search by YEAR or TITLE? ";
	char choice[26];
	cin.get(choice, sizeof(choice));
	cin.get();
	// if choose by year
	if (strcmp(choice, "YEAR") == 0) {
		// get the year
		cout << "Enter year: ";
		int year;
		cin >> year;
		cin.get();
		cout << endl;
		// run through the data base in a for loop, looking for the same years
		for (std::vector<media *>::iterator it = dataBase.begin(); it !=dataBase.end(); ++it) {
			// m will point to where the iterator is pointing
			// my father showed me how to do this instead of dereferencing the iterator
			media * m = *it;
			// check if m is still there and not deleted
			if (m != NULL) {
				if (year == m->getYear()) {
					// if the year matches, print
					m->print();
					cout << endl;
				}
			}
		}
	}
	
	// if they use title it is the exact same as searching for year except I use a char array
	if (strcmp(choice, "TITLE") == 0) {
		cout << "Enter title: ";
		char title[26];
		cin.get(title, sizeof(title));
		cin.get();
		cout << endl;
		for (std::vector<media *>::iterator it = dataBase.begin(); it !=dataBase.end(); ++it) {
			media * m = *it;
			if (m != NULL) {
				if (strcmp(title, m->getTitle()) == 0) {
					m->print();
					cout << endl;
				}
			}
		}
	}
}

// delete a chosen file from a chosen media type
// this code is the exact same as the code for search, except for when you actually match the years
void dB::del() {
	cout << "Delete by YEAR or TITLE? ";
	char choice[26];
	cin.get(choice, sizeof(choice));
	cin.get();
	if (strcmp(choice, "YEAR") == 0) {
		cout << "Enter year: ";
		int year;
		cin >> year;
		cin.get();
		cout << endl;
		for (std::vector<media *>::iterator it = dataBase.begin(); it !=dataBase.end(); ++it) {
			media * m = *it;
			if (m != NULL) {
				if (year == m->getYear()) {
					m->print();
					cout << endl;
					cout <<  "Delete? (y or n): ";
					char confirm[26];
					cin.get(confirm, sizeof(confirm));
					cin.get();
					cout << endl;
					// if years are same, erase and delete
					if (strcmp(confirm, "y") == 0) {
						// std::vector<media *>::iterator temp = it;
						// --it;
						// Here I found that it-- is the same as doing the code above and erasing temp
						dataBase.erase(it--);
						delete m;
					}
				}
			}
		}
	}
	
	// title is same as year, but char array
	if (strcmp(choice, "TITLE") == 0) {
		cout << "Enter title: ";
		char title[26];
		cin.get(title, sizeof(title));
		cin.get();
		cout << endl;
		for (std::vector<media *>::iterator it = dataBase.begin(); it !=dataBase.end(); ++it) {
			media * m = *it;
			if (m != NULL) {
				if (strcmp(title, m->getTitle()) == 0) {
					m->print();
					cout << endl;
					cout <<  "Delete? (y or n): ";
					char confirm[26];
					cin.get(confirm, sizeof(confirm));
					cin.get();
					cout << endl;
					if (strcmp(confirm, "y") == 0) {
						// std::vector<media *>::iterator temp = it;
						// --it;
						dataBase.erase(it--);
						delete m;
					}
				}
			}
		}
	}
}

// I print from my database all the media files - this was not requrired but I added it for debugging
void dB::print() {
	// run through database and print everything
	for (std::vector<media *>::iterator it = dataBase.begin(); it !=dataBase.end(); ++it) {
		// my dad showed me this
		media * m = *it;
		// if deleted could be null
		if (m != NULL) {
			m->print();
			cout << endl;
		}
	}
}

// process one command from the user to choose what they want to do
// bool because if user wants to quit just return false
bool dB::processCommand() {
	// ask and read command
	cout << "Choose if you want to ADD, SEARCH, DELETE, PRINT, or QUIT: ";
	char command[10] = "";
	cin.get(command, sizeof(command));
	cin.get();
	cout << endl;

	//if they type in a recognisable command, run the command
	if (strcmp(command, "ADD") == 0) {
		add();
	}

	else if (strcmp(command, "SEARCH") == 0) {
		search();
	}

	else if (strcmp(command, "DELETE") == 0) {
		del();
	}
       	
	else if (strcmp(command, "PRINT") == 0) {
		print();
	}
       	
	else if (strcmp(command, "QUIT") == 0) {
		return false;
	}

	// if they don't quit and they don't run an valid command, say so
	else {
		cout << "Invalid command, try again." << endl;
	}
	
	// this will be in a loop, so keep running until you quit
	return true;
}

int main() {
	cout << "This is a media database. Store video games, music, and movies!" << endl;
	// database named m
	dB m;
	// while I am still processing commands
	while (m.processCommand()) { }
	// if I stop processing, it means I QUIT and I am done
	return 0;
}
