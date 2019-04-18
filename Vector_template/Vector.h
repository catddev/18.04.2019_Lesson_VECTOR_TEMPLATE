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
	Vector(const Vector<T>&obj);
	Vector operator=(const Vector<T>&obj);
	int size();
	void add(T obj);
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




