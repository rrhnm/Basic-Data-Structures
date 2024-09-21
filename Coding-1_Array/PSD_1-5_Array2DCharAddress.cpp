#include <iostream>
using namespace std;
int main() 
{
char a[3][5];
     for (int i=0; i<3; i++) {
          cout << &a[i] << " BARIS I\n\n";
          for (int j=0; j<5; j++) {
               cout << &a[i][j] << " KOLOM J\n\n";
          }
     }
     cout << &a << " FULL\n\n";
return 0;
}