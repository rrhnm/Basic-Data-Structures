#include <iostream>
using namespace std;
int main() 
{
     int n = 100;
     int data[n];
     int cari = 28;
     int counter = 0;
     int flag = 0;
     for(int i=0; i < n; i++) {
          data[i] = rand() % 100 + 1;
          cout << data[i] << " ";
     }
     cout << endl;
     for(int i=0; i < n; i++) {
          if(data[i] == cari) {
               counter++;
               flag = 1;
          }
     }
 
     if(flag == 1)
          cout << "Ketemu, sebanyak " << counter << endl;
     else
          cout << "tidak ketemu" << endl;
     return 0;
}