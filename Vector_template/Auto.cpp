#include"Auto.h"

istream & operator>>(istream & is, Auto & obj)
{
	is >> obj.company >> obj.salon >> obj.station;
	return is;
}

ostream & operator<<(ostream & os, Auto obj)
{
	os << "Company: " << obj.company << " Salon: " << obj.salon << " Station: " << obj.station << endl;
	return os;
}

Auto::Auto()
{
	company = "";
	salon = "";
	station = "";
}

Auto::Auto(string co, string s, string st)
{
	company = co;
	salon = s;
	station = st;
}

void Auto::setCompany(string company)
{
	this->company = company;
}

void Auto::setSalon(string salon)
{
	this->salon = salon;
}

void Auto::setStation(string station)
{
	this->station = station;
}

string Auto::getCompany()
{
	return company;
}

string Auto::getSalon()
{
	return salon;
}

string Auto::getStation()
{
	return station;
}

void Auto::enter()
{
	getline(cin, company, '\n');
	getline(cin, salon, '\n');
	getline(cin, station, '\n');
}