#include <iostream>
using namespace std;
int main()
{
     char a[8];
     cout << &a << endl;
     for (int i=0; i<8; i++){
          cout << &a[i] << endl;
     } 
return 0;
}