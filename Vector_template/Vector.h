#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<string>
#include<fstream>
using namespace std;

template <typename T>
class Vector
{
private:
	T *els;
	int cur_size;
	int buf_size;
public:
	Vector();
	Vector(int size);
	Vector(const Vector&obj);
	Vector operator=(const Vector&obj);
	int size();
	void add(T el);
	T & operator[](int index);
	void print();
	~Vector();

	//friend istream& operator>>(istream& is, T&obj);
	//friend ostream& operator<<(ostream& os, T obj);
};
//template<typename T>
//istream& operator>>(istream& is,  T&obj);
//template<typename T>
//ostream& operator<<(ostream& os, T obj);


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