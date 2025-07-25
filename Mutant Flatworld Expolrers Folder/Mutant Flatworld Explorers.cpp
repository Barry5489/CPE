#include <iostream>
#include <vector>
#include "Mutant Flatworld Explorers.h"
using namespace std;

int main(){
    int X,Y,x,y;
    cin>>X>>Y;
    char direction;
    string order;
    while(cin>>x>>y>>direction){
        cin.ignore();//忽略direction後的換行，因為getline會接收到後面的換行，導致沒有輸入字串內容
        getline(cin,order);
        int d = tranfer_to_number(direction);//將direction轉換成數字來表示
        for(int a=0;a<order.length();a++){
            if(order[a]=='F'){
                if(out_of_region(x,y,X,Y,d)){//判斷下一次前進是否超出邊界 
                    break;
                }else{
                    if(d==0||d==2){
                        if(d==0)
                            y++;
                        else
                            y--;
                    }else if(d==1||d==3){
                        if(d==1)
                            x++;
                        else
                            x--;
                    }
                }
                
            }else{
                d = change_direction(order[a],d);
            }
        }
        if(out_of_region(x,y,X,Y))
            cout<<' '<<x<<' '<<y<<' '<<transfer_to_directions(d)<<' '<<"LOST"<<endl;
        else
            cout<<' '<<x<<' '<<y<<' '<<transfer_to_directions(d)<<endl;
    }
}

