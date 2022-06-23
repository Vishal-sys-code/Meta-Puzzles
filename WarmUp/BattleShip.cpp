#include <bits/stdc++.h>
using namespace std;
// Write any include statements here
#define ll long long

double getHitProbability(int R, int C, vector<vector<int>> G) {
  // Write your code here
  int cnt_1 = 0;
    int cnt_0 = 0;
    double div = 0.00000000;
    double ans = 0.0;
    for(int i=0;i<R;++i){
      for(int j=0;j<C;++j){
        while(G[i][j] > 0){
          cnt_1 += (G[i][j] & 1);
          G[i][j] >>= 1;
        }
      }
    }
    ans = (R*C);
    return (cnt_1/ans);
}

int main(){
    int R,C; cin>>R>>C;
    int temp;
    vector<vector<int>> G;
    for(int i=0;i<R;++i){
        for(int j=0;j<C;++j){
            cin>>temp;
            G[i].push_back(temp);
        }
    }
    cout << getHitProbability(R,C,G) << endl;
    return 0;
}
