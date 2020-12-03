#include <iostream>
#include <queue>
using namespace std;

int main()
{
  
  //given array, find the Kth smallest element
  int n = 6, k = 5;
  int arr[n] = { 7, 10, 4, 3, 15, 20 };
  //we'll use priority queue. 
  
  priority_queue <int> maxh;
  
  for( int i = 0; i < n; i++ ){
    maxh.push( arr[i] );
    
    if( maxh.size() > k ){
      maxh.pop();
    }
  }
  
  cout<<"The Kth smallest element is "<<maxh.top()<<endl;
  
  return 0;
}
