#include"Vector.h"
#include"Auto.h"

// Для шаблонного класса ВСЕ ПРОПИСЫВАТЬ в файле .h, включая реализацию а не .cpp

int main() {

	//int tmp;
	//Vector<int> v;
	Auto tmp;
	Vector<class Auto> v;

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
		//cout << tmp;
		v.add(tmp);
	}

	//через метод
	v.print();

	//через индексы
	/*for (int i = 0; i < v.size()/sizeof(tmp); i++)
		cout << v[i] << endl << endl;*/

	system("pause");
	return 0;
}