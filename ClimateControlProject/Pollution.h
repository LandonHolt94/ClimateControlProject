#pragma once
#pragma once

#include <iostream>
#include <string>

using namespace std;

class Pollution {
private:
	string city;
	int mean;
	string rating;
public:
	Pollution() {
		city = "-1";
		mean = -1;
		rating = "-1";
	}
	void setName(string city) {
		this->city = city;
	}
	void setMean(int mean) {
		this->mean = mean;
	}
	void setRating() {
		if (mean >= 0 && mean <= 50) rating = "Good";
		else if (mean >= 51 && mean <= 100) rating = "Moderate";
		else if (mean >= 101 && mean <= 150) rating = "Unhealthy (for sensitive group of people)";
		else if (mean >= 151 && mean <= 200) rating = "Unhealthy";
		else if (mean >= 201 && mean <= 300) rating = "Very Unhealthy";
		else if (mean >= 301 && mean <= 500) rating = "Hazardous";
	}
	void Print() {
		cout << "You entered " << city << " and an 8-hour mean level of ";
		cout << mean << " micrograms/cubic meter" << endl;

		if (mean > 100) cout << city << " exceeds the 8-hour mean of 100 micrograms/cubic meter." << endl;

		cout << city << " has a rating of " << rating;

	}




};