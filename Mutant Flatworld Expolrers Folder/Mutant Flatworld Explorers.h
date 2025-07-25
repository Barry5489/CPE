#include <iostream>
using namespace std;

int tranfer_to_number(char directtion);
int change_direction(char dir,int d);
bool out_of_region(int x,int y,int X,int Y);
char transfer_to_directions(int d);

int tranfer_to_number(char directtion){
    int d=3;
    if(directtion=='N')
        d = 0;
    else if (directtion=='E')
        d = 1;
    else if(directtion=='S')
        d = 2;
    return d;
}
int change_direction(char dir,int d){
    if(dir=='R')
        d = (d+1) % 4;
    else
        d = (d-1+4) % 4;
    return d;
}
bool out_of_region(int x,int y,int X,int Y,int d){
    if((d==0 && y+1>Y) || (d==1 && x+1>X) || (d==2 && y-1<0) || (d==3 && x-1<0))
        return true;
    else
        return false;
}
char transfer_to_directions(int d){
    char dir='W';
    if(d==0)
        dir = 'N';
    else if(d==1)
        dir = 'E';
    else if(d==2)
        dir = 'S';
    return dir;
}