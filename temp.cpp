// unordered_map::emplace
#include <iostream>
#include <string>
#include <unordered_map>
#include<vector>
using namespace std;
int main ()
{
  unordered_map<int, vector< int > > mymap;


  mymap[1].push_back( 3 );
  mymap[1].push_back( 4 );
  mymap[1].push_back( 5 );

  //mymap.emplace ("NCC-1701-D", "J.L. Picard");``
  //mymap.emplace ("NCC-74656", "K. Janeway");
  auto x = mymap[1];

  for( auto i : x )
    cout<<i<<" ";
  cout<<endl;

  std::cout << std::endl;
  return 0;
}
