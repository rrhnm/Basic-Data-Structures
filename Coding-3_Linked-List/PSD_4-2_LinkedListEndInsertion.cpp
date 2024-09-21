#include<iostream>
using namespace std;

struct node
{
     int info;
     node *next;
} *start, *newptr, *save, *ptr, *rear;

node *create_new_node(int);
void insert_in_end(node *);
void display(node *);

int main()
{
     start = rear = NULL;
     int inf;
     char ch='y';
     
     while(ch=='y' || ch=='Y')
     {
          cout<<"Masukkan nilai untuk node baru: ";
          cin>>inf;
          cout<<"Membuat node baru..." << endl;

          newptr = create_new_node(inf);
          if(newptr != NULL)
          {
               cout<<"Berhasil membuat node baru..." << endl;
          }
          else
          {
          cout<<"Maaf, tidak dapat membuat node baru";
          return 0;
          }
          cout<<"Memasukkan node pada bagian akhir list..." << endl;
          insert_in_end(newptr);
          cout<<"Node berhasil dimasukkan di bagian akhir list..." << endl;
          cout<<"List: ";
          display(start);
          cout<<"Mau membuat node baru? (y/n) ";
          cin>>ch;
     }
     return 0;
}

node *create_new_node(int n)
{
     ptr = new node;
     ptr->info = n;
     ptr->next = NULL;
     return ptr;
}

void insert_in_end(node *np)
{
     if(start==NULL)
     {
          start = rear = np;
     }
     else
     {
          rear -> next = np;
          rear = np;
     }
}

void display(node *np)
{
     while(np != NULL)
     {
          cout<<np->info<<" -> ";
          np = np->next;
     }
     cout<<"!!\n";
}