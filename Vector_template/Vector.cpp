#pragma once
#include"Vector.h"

template <typename T>
Vector<T>::Vector<T>()
{
	els = 0;
	buf_size = cur_size = 0;
}
template <typename T>
Vector<T>::Vector<T>(int size)
{
	cur_size = 0;
	buf_size = size;
	els = new T[buf_size];
}
template <typename T>
Vector<T>::Vector<T>(const Vector<T> & obj)
{
	this->cur_size = obj.cur_size;
	this->buf_size = obj.cur_size;
	this->els = new T[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
}
template <typename T>
int Vector<T>::size()
{
	return cur_size;
}
template <typename T>
void Vector<T>::add(T obj)
{
	if (buf_size == 0) {
		buf_size = 4;
		els = new T[buf_size];
	}
	else
	{
		if (cur_size == buf_size) {
			buf_size *= 2;
			T* tmp = new T[buf_size];
			for (int i = 0; i < cur_size; i++)
				tmp[i] = els[i];

			delete[] els;
			els = tmp;
		}
	}
	els[cur_size++] = obj;
}
template <typename T>
T & Vector<T>::operator[](int index)
{
	return els[index];
}
template <typename T>
void Vector<T>::print()
{
	for (int i = 0; i < cur_size; i++)
		//cout<<els[i];
	cout << endl;
}
template <typename T>
Vector<T> Vector<T>::operator=(const Vector<T>& obj)
{
	this->cur_size = obj.cur_size;
	this->buf_size = obj.cur_size;
	this->els = new T[buf_size];
	for (int i = 0; i < cur_size; i++) {
		els[i] = obj.els[i];
	}
	return *this;
}
template <typename T>
Vector<T>::~Vector()
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

