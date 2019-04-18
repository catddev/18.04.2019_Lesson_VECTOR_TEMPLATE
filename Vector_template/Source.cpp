#include"Vector.h"
#include"Auto.h"
//#include "Vector.cpp"

//template<typename T>
//void add(T* &cc, T c) {
//	if (buffer_size == 0)
//	{
//		buffer_size = 4;
//		cc = new T[buffer_size];
//	}
//	else
//	{
//		if (current_size == buffer_size)
//		{
//			buffer_size *= 2;
//			T*tmp = new T[buffer_size];
//			for (int i = 0; i < current_size; i++)
//				tmp[i] = cc[i];
//			delete[] cc;
//			cc = tmp;
//		}
//	}
//	cc[current_size++] = c;
//}

int main() {

	//int tmp;
	//Vector<int> v;
	Vector<Auto> v = 0;
	Auto tmp;
	ifstream in_file("in.txt");
	/*while (!in_file.eof()) {
		in_file >> tmp;
		v.add(tmp);
	}*/

	/*for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;*/

	while (!in_file.eof()) {
		//tmp.enter();
		in_file >> tmp;
		cout << tmp;
		//v.add(tmp);
		v.add(tmp);
	}

	system("pause");
	return 0;
}