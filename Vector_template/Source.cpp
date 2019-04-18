#include"Vector.h"
#include"Vector.cpp"


int main() {

	Auto tmp;
	//int tmp;
	Vector<Auto> v;
	ifstream in_file("in.txt");
	/*while (!in_file.eof()) {
		in_file >> tmp;
		v.add(tmp);
	}*/

	for (int i = 0; i < 3; i++) {
		//tmp.enter();
		in_file >> tmp;
		v.add(tmp);
	}

	for (int i = 0; i < v.size(); i++)
		cout << v[i] << endl;

	system("pause");
	return 0;
}