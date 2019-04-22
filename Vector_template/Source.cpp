#include"Vector.h"
#include"Auto.h"

// Для шаблонного класса ВСЕ ПРОПИСЫВАТЬ в файле .h, включая реализацию а не .cpp

int main() {

	Vector<double> v1;
	v1.add(2.7);
	v1.add(6.3);
	v1.add(7.0);
	//cout << "size test" << v1.size() << "!!!!!!" << endl; //
	//v1.print();

	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << endl;
	cout << endl;

	//class
	ifstream in_file("in.txt");
	Auto tmp;
	Vector<class Auto> v;

	while (!in_file.eof()) {
		//tmp.enter();
		in_file >> tmp;
		//cout << tmp;
		v.add(tmp);
	}

	//через метод
	v.print();

	//через индексы
	//for (int i = 0; i < v.size(); i++)
		//cout << v[i] << endl << endl;

	system("pause");
	return 0;
}