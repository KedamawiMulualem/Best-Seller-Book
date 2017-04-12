#pragma once
#include<string>
#include<iostream>
#include<fstream>
using namespace std;
class BestSellerbook
{public:
	long  isbn;
	string title;
	string author;
	double rating;
	
public:
	void setisbn(long isbn);
	void settitle(string title);
	void setauthor(string author);
	void setrating(double rating );
	long  getisbn();
	string gettitle();
	string getauthor();
	double getrating();
	BestSellerbook();
	~BestSellerbook();
	bool operator<(const BestSellerbook  & that) const;
	bool operator==(const BestSellerbook  & that)const;
	friend ostream &operator<<(ostream &out, const BestSellerbook & obj);
	friend istream &operator >> (istream &in, BestSellerbook & obj);
};