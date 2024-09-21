#include <iostream>
using namespace std;
int main() 
{
     int n = 8;
     int data[n] = {3, 6, 3, 8, 5, 9, 1, 4};
     int cari = 5;
     int i = 0;
     int flag = 0;
     while(i<n) {
          if(data[i] == cari) {
               flag = 1;
               break;
          }
          i++;
     }
     if(flag == 1)
          cout << "ketemu" << endl;
     else
          cout << "tidak ketemu" << endl;
 return 0;
}