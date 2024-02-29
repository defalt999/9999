#include <iostream>
#include <fstream>
using namespace std;

class carte {
private:
	string nume;
	string autor;
	int pagini;




public:

	void setBook(string unnume, string unautor, int unpgs) {
		nume = unnume;
		autor = unautor;
		pagini = unpgs;

	}
	void print(ofstream& fisi) {
		fisi << "Titlu: " << nume << endl;
		fisi << "Autor: " << autor << endl;
		fisi << "Nr pagini: " << pagini << endl;
		
	}
};






int main()
{
	ofstream fisier("cartsi.txt", std::ios::app);
	string nume, autor;
	int pgs;
	carte book;
	cin >> nume >> autor >> pgs;
	book.setBook(nume, autor, pgs);
	book.print(fisier);





	fisier.close();
	

}


