#pragma once
#include <iostream>
#include <string>
#include <vector>
using namespace std;

/Music class
private :
	string title;
	string artist;
	string album;
public:
	//»ı¼ºÀÚ
	Music(sting title, string artist, string album, int year) {
		this->title = title;
		this->artist = artist;
		this->album = album;
		this->year = year;
	}
	//Getters
	string getTitle() { return title; }
	string gerArtist() { return artist; }
	string gerAlbum() { return album; }
	int getYear() { return year; }
	}
	//Ge


