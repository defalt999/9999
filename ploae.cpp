#include <iostream>
using namespace std;

class carte {
private:
	string nume;
	string autor;
	int pagini;




public:
	void init(string numes) {
		carte numes;

	}

	void setNume(string unNume) {
		nume = unNume;

	}
	void setAutor(string unAutor) {
		autor = unAutor;
	}
	void setPg(int nrPagini) {
		pagini = nrPagini;
	}
	void print() {
		cout << "Titlu: " << nume << endl;
		cout << "Autor: " << autor << endl;
		cout << "Nr pagini: " << pagini << endl;
	}
};






int main()
{



}


