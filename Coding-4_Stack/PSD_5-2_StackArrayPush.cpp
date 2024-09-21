#include<iostream>
#include <cstring>
using namespace std;
#define MAX_STACK 10

int push(int [], int &, int);
void display(int [], int);
const int SIZE = 50;

int main() 
{
	int stack[SIZE], item, top = -1, res;
	char ch = 'y';
	while(ch == 'y' || ch == 'Y') 
	{
		cout << "Masukkan elemen: ";
		cin >> item;
		res = push(stack, top, item);
		if(res == -1) 
		{
			cout << "Overflow..!!..Keluar program..!!";
			return 0;
		}
		cout << "Elemen berhasil dimasukkan" << endl;
		cout << "Stack: ";
		display(stack, top);
		cout <<"Mau menambahkan elemen ? (y/n) ";
		cin >> ch;
	}
	return 0;
}
int push(int stack[], int &top, int elem) 
{
	if(top == SIZE-1) 
	{
		return -1;
	} 
	else 
	{
		top++;
		stack[top] = elem;
	}
	return 0;
}
void display(int stack[], int top) {
	cout << stack[top] << " <-- " << "\n";
	for(int i = top-1; i >= 0; i--) 
	{
		cout << stack[i] << "\n";
	}
}