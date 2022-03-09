#include <bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* link;
};

node* top;

// Menambah Data Di Awal
void push(int data)
{
	// Membuat Node Baru
	node* temp = new node();

	if (!temp)
	{
		cout <<"\nStack Overflow";
		exit(1);
	}

	// Inisialisasi Data
	temp -> data = data;
	temp -> link = top;
	top = temp;
}

int isEmpty()
{
	return top == NULL;
}

int peek()
{
	if (!isEmpty())
		return top -> data;
	else
		exit(1);
}

void pop()
{
	node* temp;

	if (top == NULL)
	{
		cout <<"\nStack Underflow"<< endl;
		exit(1);
	}
	else
	{
		temp = top;
		top = top -> link;
		free(temp);
	}
}

void display()
{
	node* temp;
	
	if (top == NULL)
	{
		cout <<"\nStack Underflow";
		exit(1);
	}
	else
	{
		temp = top;
		while (temp != NULL)
		{
			// Print node data
			cout <<temp -> data<< " -> ";
			temp = temp -> link;
		}
	}
}

int main()
{
	// Push elemen
	push(11);
	push(22);
	push(33);
	push(44);

	// Menaampilkan stack elemen
	display();

	// Print top elemen
	cout <<"\n\nTop element is "<< peek() << endl;

	// Menghapus top elemen
	pop();
	pop();
	
	cout<<endl;

	// Menampilkan stack elemen
	display();

	// Print top elemen
	cout <<"\n\nTop element is "<< peek() << endl;
		
	return 0;
}
