#include <iostream>
#include <fstream>
#include <string>
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
		fisi <<  nume << endl;
		fisi << autor << endl;
		fisi << pagini << endl;
		
	}
	void consolePrint() {
		cout <<nume <<endl;
		cout <<autor <<endl;
		cout <<pagini <<endl;
	}
};






int main()
{
	
	ofstream fisier("cartsi.txt", std::ios::app);
	string nume, autor;
	int pgs;
	getline(cin,nume);
	getline(cin, autor);
	cin >> pgs;
	carte book;
	book.setBook(nume, autor, pgs);
	book.print(fisier);
	book.consolePrint();
	





	fisier.close();
	

}


