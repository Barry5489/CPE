#include <iostream>
#include <vector>
using namespace std;
void sortt(vector<int> train,int L);
bool comp(vector<int> train,int L);

int main(){
    int data_number;
    cin>>data_number;
    int L;
    for(int i=0;i<data_number;i++){
        cin>>L;
        vector <int> train(L);
        for(int j=0;j<L;j++){
            cin>>train[j];
        }
        sortt(train,L);
    }
}
void sortt(vector<int> train,int L){
    int temp,counter=0;
    while(comp(train,L)){
        for(int a=0;a<L-1;a++){
            if(train[a]>train[a+1]){
                temp = train[a+1];
                train[a+1] = train[a];
                train[a] = temp;
                counter++;
                break;
            }
        }
    }
    cout<<"Optimal train swapping takes "<<counter<<" swaps."<<endl;
}
bool comp(vector<int> train,int L){
    for(int c=0;c<L-1;c++){
        if(train[c]>train[c+1]) return true;
    }
    return false;
}