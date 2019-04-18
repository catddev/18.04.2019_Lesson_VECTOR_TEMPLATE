#pragma once
#include"Vector.h"

class Auto {
private:
	string company;
	string salon;
	string station;
public:
	Auto();
	Auto(string co, string s, string st);

	void setCompany(string company);
	void setSalon(string salon);
	void setStation(string station);

	string getCompany();
	string getSalon();
	string getStation();

	void enter();
	friend istream& operator>>(istream& is, Auto &obj);
	friend ostream& operator<<(ostream& os, Auto obj);
};
istream& operator>>(istream& is, Auto &obj);
ostream& operator<<(ostream& os, Auto obj);