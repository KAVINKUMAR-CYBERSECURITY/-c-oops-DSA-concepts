/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int sum=0;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
       sum= sum+arr[i];
   }
   
       cout<<sum<<" ";
   
   return 0;
}