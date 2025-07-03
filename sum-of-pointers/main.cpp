#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cin>> a >>b;
   int *ptr1=&a;
  cout<< a <<*ptr1<<endl;
  int* ptr2=&b;
  cout<< b <<*ptr2<<endl;
  int c=*ptr1+*ptr2;
  cout<<c;
  return 0;
}