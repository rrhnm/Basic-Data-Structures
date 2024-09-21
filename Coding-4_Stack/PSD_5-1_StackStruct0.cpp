#include<iostream>
#include <cstring>
using namespace std;
#define MAX_STACK 10

struct STACK {
	int top;
	char data[10][10];
};
STACK tumpuk;

void inisialisasi();
int isFull();
int isEmpty();
void push(char d[10]);
void pop();
void clear();
void tampilStack();

int main() {
	int pil;
	inisialisasi();
	char dt[10];
	do {
		cout << "1. push" << endl;
		cout << "2. pop" << endl;
		cout << "3. print" << endl;
		cout << "4. clear" << endl;
		cout << "5. exit" << endl;
		cout << "Pilihan : ";
		cin >> pil;
		switch(pil) {
			case 1:
				if(isFull() != 1) {
					cout << "Data = ";
					cin >> dt;
					push(dt);
				} else
					cout << "Sudah penuh!" << endl;
				break;
			case 2:
				if(isEmpty() != 1)
					pop();
				else
					cout << "Masih kosong!" << endl;
				break;
			case 3:
				if(isEmpty() != 1)
					tampilStack();
				else
					cout << "Masih kosong!" << endl;
				break;
			case 4:
				clear();
				cout << "Sudah kosong!" << endl;
				break;
		}
	} while(pil != 5);
	return 0;
}
void inisialisasi() {
	tumpuk.top = -1;
}
int isFull() {
	if(tumpuk.top == MAX_STACK-1)
		return 1;
	else
		return 0;
}
int isEmpty() {
	if(tumpuk.top == -1)
		return 1;
	else
		return 0;
}
void push(char d[10]) {
	tumpuk.top++;
	strcpy(tumpuk.data[tumpuk.top],d);
}
void pop() {
	cout << "Data yang terambil = " << tumpuk.data[tumpuk.top] << endl;
	tumpuk.top--;
}
void clear() {
	tumpuk.top = -1;
}
void tampilStack() {
	for(int i = tumpuk.top; i>=0; i--) {
		cout << "Data : " << tumpuk.data[i] << endl;
	}
}