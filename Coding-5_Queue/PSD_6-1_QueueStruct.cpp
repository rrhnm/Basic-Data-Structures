#include <iostream>
using namespace std;
#define MAX 8
typedef struct
{
	int data[MAX];
	int head;
	int tail;
} Queue;
Queue antrian;
void create();
int isEmpty();
int isFull();
void enqueue(int data);
int dequeue();
void clear();
void tampil();

int main()
{
	int pil;
	int data;
	create();
	do
	{
		cout << "1. Enqueue" << endl;
		cout << "2. Dequeue" << endl;
		cout << "3. Tampil" << endl;
		cout << "4. Clear" << endl;
		cout << "5. Exit" << endl;
		cout << "Pilihan = ";
		cin >> pil;
		switch (pil)
		{
		case 1:
			cout << "Data = ";
			cin >> data;
			enqueue(data);
			break;
		case 2:
			cout << "Elemen yang keluar : " << dequeue() << endl;
			break;
		case 3:
			tampil();
			break;
		case 4:
			clear();
			break;
		}
	} while (pil != 5);
	return 0;
}

void create()
{
	antrian.head = antrian.tail = -1;
}
int isEmpty()
{
	if (antrian.tail == -1)
		return 1;
	else
		return 0;
}
int isFull()
{
	if (antrian.tail == MAX - 1)
		return 1;
	else
		return 0;
}
void enqueue(int data)
{
	if (isEmpty() == 1)
	{
		antrian.head = antrian.tail = 0;
		antrian.data[antrian.tail] = data;
		cout << antrian.data[antrian.tail] << " masuk!" << endl;
	}
	else if (isFull() == 0)
	{
		antrian.tail++;
		antrian.data[antrian.tail] = data;
		cout << antrian.data[antrian.tail] << " masuk!" << endl;
	}
}
int dequeue()
{
	int i;
	int e = antrian.data[antrian.head];
	for (i = antrian.head; i <= antrian.tail - 1; i++)
	{
		antrian.data[i] = antrian.data[i + 1];
	}
	antrian.tail--;
	return e;
}
void clear()
{
	antrian.head = antrian.tail = -1;
	cout << "data clear" << endl;
}
void tampil()
{
	if (isEmpty() == 0)
	{
		for (int i = antrian.head; i <= antrian.tail; i++)
		{
			cout << antrian.data[i] << " ";
		}
		cout << endl;
	}
	else
		cout << "data kosong!" << endl;
}
