#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main() 
{
     int n,i,j;
     int arr[1005];
     
     cin >> n;
     
     for(i=0; i<n;i++)
          cin >> arr[i];
 
     for(i=0; i<n;i++)
          for(j=n-1; j>=i;j--)
               if(arr[i]>arr[j])
                    tukar(&arr[i], &arr[j]);
 
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