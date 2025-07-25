/*#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main(){
    int n,counter=1;
    while(cin>>n){
        if(n==0){
            return 0;
        }
        int x[n],y[n];
        for(int i=0;i<n;i++){
            cin>>x[i]>>y[i];
        }
        double least_value=1000.0,temp;
        int x_distance=0,y_distance=0;
        //for(int j=1;j<n;j++){
            temp = (x[j]-x[0])*(x[j]-x[0])+(y[j]-y[0])*(y[j]-y[0]);
            temp = sqrt((double)temp);
            if(temp<least_value){
                least_value = temp;
            }
        }//
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                temp = (x[j]-x[i])*(x[j]-x[i])+(y[j]-y[i])*(y[j]-y[i]);
                temp = sqrt((double)temp);
                if(temp<least_value){
                    least_value = temp;
                }
            }
        }
        cout<<"Scenario #"<<counter<<endl;
        cout<<"Frog Distance = "<<fixed<<setprecision(3)<<least_value<<endl;
        cout<<endl;
        counter++;
        }
    }
    */
#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>
#include <limits>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int caseNo = 1;
    while (cin >> n && n > 0) {
        vector<pair<double, double>> stones(n);
        for (int i = 0; i < n; i++) {
            cin >> stones[i].first >> stones[i].second;
        }
        
        // 初始化距離矩陣
        vector<vector<double>> dist(n, vector<double>(n, 0.0));
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                double dx = stones[i].first - stones[j].first;
                double dy = stones[i].second - stones[j].second;
                double d = sqrt(dx * dx + dy * dy);
                dist[i][j] = dist[j][i] = d;
            }
        }

        // Floyd-Warshall 最小化最大跳躍距離
        for (int k = 0; k < n; k++) {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    double viaK = max(dist[i][k], dist[k][j]);
                    if (viaK < dist[i][j]) {
                        dist[i][j] = viaK;
                    }
                }
            }
        }

        // 輸出結果: 石頭 1 到 2 的 Frog Distance
        cout << "Scenario #" << caseNo++ << "\n";
        cout << "Frog Distance = " << fixed << setprecision(3)
             << dist[0][1] << "\n\n";
    }
    return 0;
}
