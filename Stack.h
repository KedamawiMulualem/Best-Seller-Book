#pragma once
#include "BestSellerbook.h"
class Stack
{
	class Node
	{
	public:
		BestSellerbook book;
		Node *next;

	};
private:
	Node * top;
public:
	BestSellerbook pop(void);
	void push(BestSellerbook book);
	bool isEmpty()const;
	bool isFully() const;
	class EmptyStackException {};
	class FullStackException {};
	Stack();
	~Stack();
};

