#pragma once

#include <string>
#include <ctime>

using namespace std;

class Tour
{
	int count_tourists;
	time_t startTour;
	time_t endTour;
	string type_tour; // group or individual
	string Route; // Route
	string place_of_rest; // Rest 
public:
	Tour();
	Tour(time_t starttour, time_t endtour, string type, string route, string rest, int count_tourists);
	Tour(const Tour& other);
	~Tour();
	void info() const;
	int get_count_tourists();
	void setTour(time_t starttour, time_t endtour, string type, string route, string rest, int count_tourists);
	Tour& operator++(int);
	Tour& operator--(int);
	Tour& operator--();
	Tour& operator++();
	friend ostream& operator<<(ostream &out, const Tour &count);
};
