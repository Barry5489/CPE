#include <iostream>
#include <cmath>
using namespace std;
int divisor_counter(int L);
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N;i++){
        int L,U,num;
        cin>>L>>U;
        num = L;
        int P;//has the largest divisors
        int total=0;//store the value of divisor_counter
        while(L<=U){
            if(divisor_counter(L)>total) {
                total = divisor_counter(L);
                P = L;
            }
            L++;
        }
        cout<<"Between "<<num<<" and "<<U<<", "<<P<<" has a maximum of "
        <<total<<" divisors."<<endl;
    }
}
int divisor_counter(int L){
    int total=0;
    int root = sqrt(L);
    for(int a=1;a<=root;a++){
        if(L%a==0){
            total+=2;
            if(a*a == L) total--;
        }
    }
    return total;
}