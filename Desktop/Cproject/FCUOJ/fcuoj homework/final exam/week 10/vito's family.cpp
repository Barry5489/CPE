#include <iostream>
#include <algorithm>
using namespace std;
int postiveNumber(int num);

int main(){
    int testCases;//number of tests
    cin>>testCases;

    for(int i=0;i<testCases;i++){
        int relatives,midNumber,sum=0;
        cin>>relatives;
        int street[relatives];

        for(int j=0;j<relatives;j++){
            cin>>street[j]; 
        }
        stable_sort(street,street+relatives);
        //sort(street,street+relatives);
        if(relatives%2==0){
            midNumber = (street[relatives/2]+street[relatives/2-1])/2;
            for(int n=0;n<relatives;n++){
                if(midNumber-street[n]<0){
                    sum += postiveNumber(midNumber-street[n]);
                }else{
                    sum += midNumber-street[n];
                }
            }
            cout<<sum<<endl;
        }else{
            midNumber = street[(relatives+1)/2-1];
            for(int v=0;v<relatives;v++){
                if(midNumber-street[v]<0){
                    sum += postiveNumber(midNumber-street[v]);
                }else{
                    sum += midNumber-street[v];
                }
            }
            cout<<sum<<endl;
        }
    }
    return 0;
}
int postiveNumber(int num){
    return num*(-1);
}
