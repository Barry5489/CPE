#include <iostream>
#include <vector>
using namespace std;
int main(){
    int N1,N2,counter=1;
    while(cin>>N1>>N2 && (N1!=0 && N2!=0)){
        int total=0;
        vector <int> tower1(N1),tower2(N2);
        for(int i=0;i<N1;i++){
            cin>>tower1[i];
        }
        for(int j=0;j<N2;j++){
            cin>>tower2[j];
        }
        int dp[N1+1][N2+1] = {};// 全部初始都設為 0
        for (int i = 1; i <= N1; i++) {
            for (int j = 1; j <= N2; j++) {
                if (tower1[i-1] == tower2[j-1]) {
                    dp[i][j] = dp[i-1][j-1] + 1;
                } else {
                    dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
                }
            }
        }
        total = dp[N1][N2];
        cout<<"Twin Towers #"<<counter<<endl;
        cout<<"Number of Tiles : "<<total<<endl;
        cout<<endl;
        counter++;
    }

}