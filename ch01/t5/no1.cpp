#include <iostream>
#include <stdio.h>

using namespace std;

int ones( int n)
{
  if(n<2)
    return n;
  return n%2 + ones(n/2);
}

int main(int argc, char *argv[])
{
  printf("Enter a number, Please:");
  int n;
  scanf("%d",&n);
  int number = ones(n);
  cout<<"The number of figure 1 in the binary expression of the given number is:"<<number<<endl;
  getchar();
  getchar();
  return 0;
}
