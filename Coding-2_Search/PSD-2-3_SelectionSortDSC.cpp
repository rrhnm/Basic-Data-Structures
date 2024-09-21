#include <iostream>
using namespace std;

void tukar(int *a, int *b);
int main() 
{
     int n,i,j, pos;
     int arr[1005];
     
     cin >> n;
     for(i=0; i<n;i++)
          cin >> arr[i];
 
     for(i=0; i<n-1;i++)
     {
          pos = i;
          for(j=i+1; j<n;j++)
               if(arr[j] > arr[pos])
                    pos = j;
          if(pos != i)
               tukar(&arr[pos], &arr[i]);
     }
     for(i=0; i<n;i++)
          cout << arr[i] << " ";
     return 0;
}

void tukar(int *a, int *b)
{
     int t=*a;
     *a=*b;
     *b=t;
}