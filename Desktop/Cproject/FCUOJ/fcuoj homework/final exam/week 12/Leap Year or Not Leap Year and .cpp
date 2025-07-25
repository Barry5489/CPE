#include <iostream>
using namespace std;
int main(){
    int year;
    while(cin>>year){
        if((year%4==0&&year%100!=0) || year%400==0){
            cout<<"This is leap year."<<endl;
            if(year%15==0){
                cout<<"This is huluculu festival year."<<endl;
            }
            if(year%55==0){
                cout<<"This is bulukulu festival year."<<endl;
            }
        }else if(year%15==0){
            cout<<"This is huluculu festival year."<<endl;
        }else{
            cout<<"This is an ordinary year."<<endl;
        }
        cout<<endl;
    }
}