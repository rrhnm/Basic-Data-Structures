#include <iostream>
using namespace std;
int enqueue(int[], int);
void display(int[], int, int);
const int SIZE = 50;
int queue[SIZE];
int front = -1;
int rear = -1;

int main()
{
	int item, check;
	char ch = 'y';
	while (ch == 'y' || ch == 'Y')
	{
		cout << "Masukkan elemen pada antrian= ";
		cin >> item;
		check = enqueue(queue, item);
		if (check == -1)
		{
			cout << "Overflow..!!..Keluar program.." << endl;
			exit(1);
		}
		cout << "Antrian berhasil ditambahkan..." << endl;
		cout << "Queue (Depan...ke...Belakang):" << endl;
		display(queue, front, rear);
		cout << "Mau menambahkan antrian? (y/n) ";
		cin >> ch;
	}
	return 0;
}
int enqueue(int queue[], int elem)
{
	if (rear == SIZE - 1)
	{
		return -1;
	}
	else if (rear == -1)
	{
		front = rear = 0;
		queue[rear] = elem;
	}
	else
	{
		rear++;
		queue[rear] = elem;
	}
	return 0;
}
void display(int queue[], int front, int rear)
{
	if (front == -1)
	{
		return;
	}
	for (int i = front; i < rear; i++)
	{
		cout << queue[i] << " <- ";
	}
	cout << queue[rear] << endl;
}