#include <iostream>
using namespace std;
struct node
{
	int info;
	node *next;
} *front, *newptr, *save, *ptr, *rear;
node *create_new_node(int);
void insert(node *);
void delete_node_queue();
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
	do
	{
		cout << "Queue (Depan...ke...Belakang):" << endl;
		display(front);
		if (count == 0)
		{
			cout << "Mau mengeluarkan elemen dari antrian? (y/n) ";
			count++;
		}
		else
		{
			cout << "Mau mengeluarkan elemen dari antrian lagi? (y/n) ";
		}
		cin >> ch;
		if (ch == 'y' || ch == 'Y')
		{
			delete_node_queue();
		}
		cout << endl;
	} while (ch == 'y' || ch == 'Y');
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
void delete_node_queue()
{
	if (front == NULL)
	{
		cout << "Overflow..!!..Keluar program.." << endl;
		exit(2);
	}
	else
	{
		ptr = front;
		front = front->next;
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
