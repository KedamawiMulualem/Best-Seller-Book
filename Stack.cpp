#include "Stack.h"



Stack::Stack():top(nullptr)
{
}
bool Stack::isEmpty() const{
	if (top == nullptr)
		return true;
	else
		return false;

}
bool Stack::isFully()const { 
	try { Node * attempt = new Node;
	delete attempt;
	}
	catch(...)
	{return true;}
	return false;
}
void Stack::push(BestSellerbook book) {
	if (isFully()) FullStackException();
	Node*temp = new Node();
	temp->book = book;
	temp->next = top;
	top = temp;

}
BestSellerbook Stack::pop() {
	if (isEmpty())throw EmptyStackException();
	BestSellerbook obj;
	Node*temp = top;
	top = temp->next;
	obj = temp->book;
	delete temp;
	return obj;


}
Stack::~Stack()
{
	while (!isEmpty())pop();
}
