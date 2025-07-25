#include <iostream>
using namespace std;
int main(){
    int N;
    while(cin>>N){
        int P[N],temp=0,counter=0;
        for(int i=0;i<N;i++){
            cin>>P[i];
        }
        for(int a=0;a<N;a++){
            for(int b=0;b<N-1;b++){
                if(P[b+1]<P[b]){
                    temp = P[b];
                    P[b] = P[b+1];
                    P[b+1] = temp;
                    counter++;
                }
            }
        }
        string name;
        if (counter % 2 == 0) {
            name = "Carlos";  // 偶數次，Carlos 最後一步，Marcelo 輸
        } else {
            name = "Marcelo"; // 奇數次，Marcelo 最後一步，Carlos 輸
        }

        cout << name << ' '<< counter <<endl;
    }
}