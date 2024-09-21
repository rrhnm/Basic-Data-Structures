#include <iostream>
using namespace std;
int main() 
{
     int n = 10;
     int data[n] = { 2, 5, 7, 8, 9, 12, 14, 24};
     int l, r, m;
     l = 0;
     r = n-1;
     int flag = 0;
     int cari = 12;

     while(l <= r && flag == 0) {
          m = (l+r)/2;
          cout << "data tengah: " << m << endl;
          if (data[m] == cari)
               flag = 1;
          else if (cari < data[m]) {
               cout << "cari di kiri" << endl;
               r = m-1;
     }
          else{
               cout << "cari di kanan" << endl;
               l = m+1;
          }
     }
     if(flag == 1)
          cout << "Ketemu" << endl;
     else
          cout << "Tidak ketemu" << endl;
     return 0;
}