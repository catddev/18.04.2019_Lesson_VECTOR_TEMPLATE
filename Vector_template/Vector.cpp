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
Vector<T>::Vector<T>(const Vector & obj)
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
void Vector<T>::add(T el)
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
	els[cur_size++] = el;
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
		els[i].print();
	cout << endl;
}
template <typename T>
Vector<T> Vector<T>::operator=(const Vector& obj)
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
