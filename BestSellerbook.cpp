#include "BestSellerbook.h"



BestSellerbook::BestSellerbook() : isbn(0),title("unknown"),author("Uknown"),rating(0)
{
}

inline void BestSellerbook::setisbn(long isbn) { this->isbn = isbn; }
inline void BestSellerbook::setauthor(string author) { this->author = author; }
inline void BestSellerbook::settitle(string title) { this->title = title; }
inline void BestSellerbook::setrating(double rating) { this->rating = rating; }

inline long BestSellerbook::getisbn() { return  isbn; }
inline string BestSellerbook::getauthor() { return author ; }
inline string BestSellerbook::gettitle() { return title ; }
inline double BestSellerbook::getrating() { return rating; }
BestSellerbook::~BestSellerbook()
{
}

ostream & operator<<(ostream &out,  const BestSellerbook & obj) {
	cout << "ISBN:"; out << obj.isbn << endl;
	cout << "Title:"; out << obj.title << endl;
	cout << "Author:"; out << obj.author << endl;
	cout << "Rating:"; out << obj.rating << endl;

	return out;
}
istream & operator >> (istream &in, BestSellerbook & obj) {

	cout << "Enter isbn: ";
	in >> obj.isbn;
	in.ignore();


	cout << "Enter title:";
	getline(in, obj.title);

	cout << "Enter author:";
	getline(in, obj.author);

	cout << "Enter rating: ";
	in >> obj.rating;
	in.ignore();

	return in;


}
bool BestSellerbook::operator<(const BestSellerbook & a)const {
	if (this->title < a.title)
		return true;
	return false;


}

bool BestSellerbook::operator==(const BestSellerbook & a) const {
	if (this->title != a.title)return false;
	if (this->isbn!= a.isbn)return false;
	if (this->author != a.author)return false;
	if (this->rating != a.rating)return false;
	return true;;


}