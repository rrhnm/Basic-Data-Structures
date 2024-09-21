#include <iostream>
using namespace std;
struct node
{
	int info;
	node *next;
} *front, *newptr, *save, *ptr, *rear;
node *create_new_node(int);
void insert(node *);
void display(node *);

int main()
{
	front = rear = NULL;
	int inf;
	int count = 0;
	char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		cout << "Masukkan data pada antrian= ";
		cin >> inf;
		newptr = create_new_node(inf);
		if (newptr == NULL)
		{
			cout << "Tidak dapat membuat node..!!..Keluar program.." << endl;
			exit(1);
		}
		insert(newptr);
		cout << "Antrian berhasil ditambahkan..." << endl;
		cout << "Queue (Depan...ke...Belakang):" << endl;
		display(front);
		cout << "Mau menambahkan antrian? (y/n) ";
		cin >> ch;
	}
	return 0;
}
node *create_new_node(int x)
{
	ptr = new node;
	ptr->info = x;
	ptr->next = NULL;
	return ptr;
}
void insert(node *n)
{
	if (front == NULL)
	{
		front = rear = n;
	}
	else
	{
		rear->next = n;
		rear = n;
	}
}
void display(node *n)
{
	while (n != NULL)
	{
		cout << n->info << " -> ";
		n = n->next;
	}
	cout << "!!\n";
}