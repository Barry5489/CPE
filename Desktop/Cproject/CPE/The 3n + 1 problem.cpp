#include <iostream>
#include <vector>
int cycle_length_calculate(int a);
using namespace std;
int main(){
    int i,j;
    while(cin>>i>>j){
        int biggst_cycle_length=0;
        if(i<j){
            for(int a=i+1;a<j;a++){
                if(cycle_length_calculate(a)>biggst_cycle_length)
                    biggst_cycle_length = cycle_length_calculate(a);
            }
        }else if(i>j){
            for(int a=j+1;a<i;a++){
                if(cycle_length_calculate(a)>biggst_cycle_length)
                    biggst_cycle_length = cycle_length_calculate(a);
            }
        }else if(i==j){
            biggst_cycle_length = cycle_length_calculate(i);
        }else{
            biggst_cycle_length = 0;
        }
        cout<<i<<' '<<j<<' '<<biggst_cycle_length<<endl;
    }
}
int cycle_length_calculate(int a){
    vector <int> v;
    v.push_back(a);
    while(a != 1){
        if(a%2==0) a/=2;
        else a = a*3+1;
        v.push_back(a);
    }
    return v.size();
}