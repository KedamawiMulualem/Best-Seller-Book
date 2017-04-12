#include "BestSellerbook.h"
#include "Stack.h"
using namespace std;
void main() {
	Stack books;

	BestSellerbook myFirstBook;
	
	ifstream fin("book.txt");
	ofstream fout("bookbk.txt");
	while (fin >> myFirstBook) {
		books.push(myFirstBook);
		
	}
	books.pop();
	while (!books.isEmpty()) {
		fout << books.pop()<<endl;
	}
	system("pause");
}