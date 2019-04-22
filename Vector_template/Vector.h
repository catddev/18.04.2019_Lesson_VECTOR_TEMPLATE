#pragma once
#include<iostream>
#include <iomanip>
#include<Windows.h>
#include<ctime>
#include<cstring>
#include<string>
#include<fstream>
#include<cstdlib>
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


//inline означает что метод встраеваемый
template <typename T>
inline Vector<T>::Vector()
{
	els = NULL;
	buf_size = cur_size = 0;
}
template <typename T>
inline Vector<T>::Vector(int size)
{
	cur_size = 0;
	buf_size = size;
	els = new T[buf_size];
}
template <typename T>
inline Vector<T>::Vector(const Vector<T> & obj)
{
	this->cur_size = obj.cur_size;
	this->buf_size = obj.cur_size;
	this->els = new T[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
}
template <typename T>
inline int Vector<T>::size()
{
	return cur_size/sizeof(T);//здесь обязательно делить на кол-во занимаемых передаваемым объектом байтов, иначе возвращает не кол-во элементов в векторе, а заполненную память
}
template <typename T>
inline void Vector<T>::add(T obj)
{
	if (buf_size == 0) {
		buf_size = sizeof(obj) * 4;//размер памяти, отталкиваясь от того, сколько места занимает один объект передаваемого класса
		els = new T[buf_size];
	}
	else
	{
		if (cur_size == buf_size) {
			buf_size *= 2;
			T* tmp = new T[buf_size];
			for (int i = 0; i < size(); i++)
				tmp[i] = els[i];

			delete[] els;
			els = tmp;
		}
	}
	els[size()] = obj;
	cur_size += sizeof(obj);
}
template <typename T>
inline T & Vector<T>::operator[](int index)
{
	return els[index];
}
template <typename T>
inline void Vector<T>::print()
{
	for (int i = 0; i < cur_size / sizeof(els[0]); i++)//вместо T obj берем els[0] размер
		cout << els[i] << endl;
	cout << endl;
}
template <typename T>
inline Vector<T> Vector<T>::operator=(const Vector<T>& obj)
{
	this->cur_size = obj.cur_size;
	this->buf_size = obj.cur_size;
	this->els = new T[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
	return *this;
}
//template<typename T>
//inline int Vector<T>::class_size(T obj)
//{
//	return sizeof(obj);
//}
template <typename T>
inline Vector<T>::~Vector()
{
	delete[] els;
}
//template<typename T>
//istream & operator>>(istream & is, T&obj)
//{
//	is >> obj;
//	return is;
//}
//template<typename T>
//ostream & operator<<(ostream & os, T obj)
//{
//	os << obj << endl;
//	return os;
//}


