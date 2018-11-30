#ifndef VIDEO_H
#define VIDEO_H

#include <iostream>
#include <string>
using namespace std;

class Video {
public:
	Video();
	Video(string song_name,
		string genre,
		int duration,
		float user_rating,
		string rating,
		int year);
	string getSongName();
	string getGenre();
	int getDuration();
	float getUserRating();
	string getRating();
	int getYear();
	void PrintVideo();
private:
	string song_name_;
	string genre_;
	int duration_;
	float user_rating_;
	string rating_;
	int year_;
};

#endif VIDEO_H
