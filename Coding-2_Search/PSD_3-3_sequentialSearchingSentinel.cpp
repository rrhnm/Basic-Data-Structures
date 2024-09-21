#include <iostream>
using namespace std;
int main() 
{
     int n = 10;
     int data[n] = {7, 5, 3, 8, 5, 9, 7, 4};
     int cari = 9;
     int i = 0;
     data[5] = cari;
     while(data[i] != cari) {
          i++;
     }
 
     if(i < 5)
          cout << "Ketemu" << endl;
     else
          cout << "Tidak ketemu" << endl;
     return 0;
}