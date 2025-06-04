#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int N,R;
    int * ptr_N = &N, *ptr_R = &R;
    while(cin>>*ptr_N>>*ptr_R){
        int arr[R];//倖存者編號
        int arr_all[N];//志願者編號
        int * ptr_arr = arr, *ptr_arr_all = arr_all;
        for(int j=0;j<*ptr_N;j++){
            *(ptr_arr_all+j) = j+1;
        }
        for(int i=0;i<*ptr_R;i++){
            cin >> *(ptr_arr+i);
        }
        sort(ptr_arr,ptr_arr+R);//將長度R的陣列排序
        int temp=0,result=1,all_live=1;
        for(int a=0;a<N;a++){//比對倖存者編號
            temp = *(ptr_arr_all+a);
            for(int b=0;b<R;b++){
                if(temp == *(ptr_arr+b)){
                    break;
                }else if(b==R-1){
                    result=all_live=0;
                }
            }
            if(result == 0){
                cout<<temp<<' ';
            }
            result=1;
        }
        if(all_live==1){
            cout<<"*";
        }
        cout<<endl;
    }
}