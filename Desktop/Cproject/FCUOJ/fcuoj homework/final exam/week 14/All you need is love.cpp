/*#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    for(int i=0;i<N*2;i++){
        string str1,str2;
        cin>>str1>>str2;
        int num1 = stoi(str1,nullptr,2);
        int num2 = stoi(str2,nullptr,2);
        int a=2,counter=1;
        bool result=false;
        while(a<500){
            if(num1%a==0 && num2%a==0){
                result = true;
                break;
            }
            a++;
        }
        if(result){
            cout<<"Pair #"<<counter<<": All you need is love!"<<endl;
        }else{
            cout<<"Pair #"<<counter<<": Love is not all you need!"<<endl;
        }

    }
    return 0;
}*/
#include <iostream>
#include <bitset>
using namespace std;

int gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(){
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        string str1, str2;
        cin >> str1 >> str2;

        // 使用 bitset 將二進制字串轉成 long long
        bitset<64> b1(str1);
        bitset<64> b2(str2);
        long long num1 = b1.to_ullong();
        long long num2 = b2.to_ullong();

        if (gcd(num1, num2) > 1) {
            cout << "Pair #" << i << ": All you need is love!" << endl;
        } else {
            cout << "Pair #" << i << ": Love is not all you need!" << endl;
        }
    }
    return 0;
}
