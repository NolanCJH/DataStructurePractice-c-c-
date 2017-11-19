#include <iostream>
#include <vector>
#include <stdlib.h>

using namespace std;

void Sorting(vector<int>& a)
{
  int n = a.size();
  vector<int> ans;

  ans.insert(ans.begin(), a[0]);
  for (int i = 1; i < n; i++)
    {
      for (int j = 0; j < i; j++)
	{
	  if (a[i]>ans[j])
	    {
	      ans.insert(ans.begin()+j, a[i]);
	      break;
	    }
	  else if (j == i-1) ans.push_back(a[i]);
	}
    }

  for (int i = 0; i < n; i++)
    {
      a[i] = ans[i];
    } 
}

int main(int argc, char *argv[])
{
  cout<<"Enter a number, please:"<<endl;
  int N;
  cin>>N;
  vector<int> arr;
  for(int i = 0; i < N; i++)
    {
      arr.push_back(rand()%100);
    }

  Sorting(arr);
  int k = N/2;
  cout<<"The number k is :"<<arr[k]<<endl;

  return 0;
}
