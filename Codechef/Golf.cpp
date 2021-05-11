#include <iostream>
using namespace std;

int main() {
    int testcases;
    scanf("%d", &testcases );
    int n,x,k;
    while( testcases-- )
    {
      scanf("%d %d %d", &n, &x, &k);
      string result = x%k == (n+1)%k ? "YES" : "NO";
      printf("%s\n", result.c_str() );
    }
    return 0;
}
