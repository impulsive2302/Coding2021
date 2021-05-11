#include<iostream>
using namespace std;

int main()
{
  int testcases;
  cin >> testcases;
  int x,a,b;

  while( testcases-- )
  {
    cin>>x>>a>>b;
    cout << ( a + ( 100 - x ) * b)*10<<endl;
  }
}
