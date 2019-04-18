#include"Vector.h"
#include"Auto.h"
//#include "Vector.cpp"

int main() {

	//int tmp;
	//Vector<int> v;
	Vector<Auto> v;
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
		v.add(tmp);
	}
	

	system("pause");
	return 0;
}