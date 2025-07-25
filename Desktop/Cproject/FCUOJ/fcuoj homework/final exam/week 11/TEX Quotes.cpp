#include <iostream>
#include <string>
using namespace std;

int main() {
    string str1, str2;
    //接受輸入會換行的文字
    while (getline(cin, str1)) {
        str2 += str1 + '\n';
        int counter=0;
        size_t pos  = str2.find("\"");
        while(pos != std::string::npos){
            if(counter==0){
                str2.replace(pos,1,"``");
                counter = 1;
            }else if(counter==1){
                str2.replace(pos,1,"''");
                counter==0;
            }
            pos = str2.find("\"",+1);
        }
        cout<<str2<<endl;
    }
    return 0;
}
