#include<iostream>
#include <cstring>
using namespace std;

struct node 
{
	int info;
	node *next;
} *top, *newptr, *save, *ptr;

node *create_new_node(int);
void push(node *);
void pop();
void display(node *);

int main() 
{
	int inf;
	char ch = 'y';
	top = NULL;
	while(ch=='y' || ch=='Y') 
	{
		cout<<"Masukkan elemen: ";
		cin >> inf;
		newptr = create_new_node(inf);
		if(newptr == NULL) 
		{
			cout<<"Maaf, tidak bisa membuat node..Keluar program..!!";
			return 0;
		}
		cout << "Elemen dimasukkan..." << endl;
		push(newptr);
		cout << "Elemen berhasil dimasukkan..." << endl;
		cout << "Stack: ";
		display(top);
		cout << "Mau menambahkan elemen ? (y/n) ";
		cin >> ch;
	}
	do 
	{
		cout << "Stack: \n";
		display(top);
		cout << "Mau mengeluarkan elemen? (y/n) ";
		cin >> ch;
		if(ch == 'y' || ch == 'Y') 
		{
			cout << "Elemen yang dikeluarkan: " << top->info << endl;
			pop();
		}
		cout<< endl;
	} while(ch =='y' || ch == 'Y');
	return 0;
}
node *create_new_node(int x) 
{
	ptr = new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
}
void push(node *n) 
{
	if(top==NULL) 
	{
		top=n;
	} 
	else 
	{
		save = top;
		top = n;
		n->next = save;
	}
}
void pop() 
{
	if(top==NULL) 
	{
		cout<<"Underflow..!!..Keluar dari program...";
		exit(1);
	} 
	else 
	{
		ptr = top;
		top = top->next;
	}
}
void display(node *n) 
{
	while(n != NULL) 
	{
		cout<<n->info<<" -> ";
		n = n->next;
	}
	cout<<"!!\n";
}