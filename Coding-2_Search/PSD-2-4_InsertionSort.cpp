#include <iostream>
using namespace std;

void tukar(int *a, int *b);

int main() 
{
     int n,i,j, temp;
     int arr[1005];
     
     cin >> n;
     for(i=0; i<n;i++)
          cin >> arr[i];
 
     for(i=1; i<n;i++)
     {
          temp = arr[i];
          j = i-1;
     while(arr[j]>temp && j>=0)
     {
          arr[j+1] = arr[j];
          j--;
     }
     arr[j+1] = temp;
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