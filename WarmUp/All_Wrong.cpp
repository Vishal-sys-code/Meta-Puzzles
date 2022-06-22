#include <bits/stdc++.h>
using namespace std;
// Write any include statements here

string getWrongAnswers(int N, string C) {
  // Write your code here
  N = C.length();
  string ans = "";
  for(int i=0;i<N;i++){
     if(C.at(i) == 'B'){
       ans += "A";
     }
    else{
      ans+="B";
    }
  }
  return ans;
}


int main(){
    int n; cin >> n;
    string S; cin >> S;
    cout << getWrongAnswers(n,S) << endl;
    return 0;
}