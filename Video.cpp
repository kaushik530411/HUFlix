#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

#include "Video.h"

Video::Video() {
	song_name_ = "";
	genre_ = "";
	duration_ = 0;
	user_rating_ = 0.0;
	rating_ = "";
	year_ = 0;
}

Video::Video(string song_name,
	string genre,
	int duration,
	float user_rating,
	string rating,
	int year) {
	song_name_ = song_name;
	genre_ = genre;
	duration_ = duration;
	user_rating_ = user_rating;
	rating_ = rating;
	year_ = year;

}

string Video::getSongName() {
	return this->song_name_;
}
string Video::getGenre() {
	return this->genre_;
}
int Video::getDuration() {
	return this->duration_;
}
float Video::getUserRating() {
	return this->user_rating_;
}
string Video::getRating() {
	return this->rating_;
}
int Video::getYear() {
	return this->year_;
}

void Video::PrintVideo() {
	cout << left << setw(41) << this->song_name_;
	cout << setw(7) << this->genre_;
	cout << setw(10) << this->duration_;
	cout << setw(12) << this->user_rating_;
	cout << setw(7) << this->rating_;
	cout << this->year_;
	cout << endl;
}