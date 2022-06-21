#include <bits/stdc++.h>
using namespace std;

int getSum(int A, int B, int C) {
  // Write your code here
  int sum = 0;
  sum = A+B+C;
  return sum;
}

int main(){
    int a,b,c; cin>>a>>b>>c;
    cout << getSum(a,b,c);
    return 0;
}