#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       
   } 
   int sum = arr[0]+arr[2]+arr[3]+arr[4];
   cout<<sum<<" ";
   cout<<arr[1];
   
   return 0;
}