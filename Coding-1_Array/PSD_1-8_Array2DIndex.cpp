#include <iostream>
using namespace std;
int main() 
{
int a[2][3];
for (int i=0; i<2; i++) {
     for (int j=0; j<3; j++) {
          cin >> a[i][j];
     }
}

a[0][1] = a[1][2] + a[0][0];
a[1][1] = a[0][0] * 20;

for (int i=0; i<2; i++) {
     for (int j=0; j<3; j++) {
          cout << a[i][j] << endl;
     }
 }
return 0;
}