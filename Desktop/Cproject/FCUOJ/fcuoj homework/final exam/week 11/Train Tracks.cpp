#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); // 忽略換行

    for (int i = 0; i < T; ++i) {
        string line;
        getline(cin, line);

        int m_count = 0, f_count = 0;
        int piece_count = 0;

        for (size_t j = 0; j < line.length(); ) {
            // 跳過空白
            if (line[j] == ' ') {
                ++j;
                continue;
            }

            // 只要是連續的兩個非空白字元，就視為一塊軌道
            if (j + 1 < line.length()) {
                char a = line[j];
                char b = line[j + 1];

                if (a == 'M') m_count++;
                else if (a == 'F') f_count++;

                if (b == 'M') m_count++;
                else if (b == 'F') f_count++;

                piece_count++;
                j += 2; // 跳過這塊
            } else {
                // 若遇到奇數個字元（像單一 'M'）則無效，可以選擇忽略或處理
                ++j;
            }
        }

        if (m_count == f_count && piece_count >= 2) {
            cout << "LOOP" << endl;
        } else {
            cout << "NO LOOP" << endl;
        }
    }

    return 0;
}

/*#include <iostream>
#include <string>
using namespace std;
int main(){
    int num;
    cin>>num;
    for(int i=0;i<num;i++){
        string input;
        getline(cin,input);
        char A='0',B='1',C=input[0],D=input[input.length()-1];
        for(size_t j=0;j<input.length();j++){
            if(input[j] == ' '){
                if(input[j-1] != ' '){
                    A = input[j-1];
                }else{
                    continue;
                }
            }else if(input[j] != ' '){
                if(input[j-1] != ' '){
                    continue;
                }else{
                    B = input[j];
                }
            }
            if(A==B){
                break;
            }
        }
        if(C==D || A==B){
            cout<<"NO LOOP"<<endl;
        }else{
            cout<<"LOOP"<<endl;
        }

    }
}*/