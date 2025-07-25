#include <iostream>
#include <string>
using namespace std;
int main(){
    string str1,str2;
    bool DDD=true;
    while(getline(cin,str1)){
        str2 += str1+"\n";
        size_t pos = str2.find("\"");
        while(pos != std::string::npos){
            if(DDD){
                str2.replace(pos,1,"``");
            }else{
                str2.replace(pos,1,"''");
            }
            pos = str2.find("\"",pos+2);
            DDD = !DDD;
        }
    }
    cout<<str2<<endl;
}