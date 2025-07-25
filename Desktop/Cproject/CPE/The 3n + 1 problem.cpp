/*#include <iostream>
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
}*/
#include <iostream>
using namespace std;
int cycle_length_calculate(int a);
int main() {
    int i, j;
    while (cin >> i >> j) {
        int max_cycle = 0;
        int start = min(i, j);
        int end = max(i, j);
        for(int a = start; a <= end; a++){
            int length = cycle_length_calculate(a);
            if(length > max_cycle)
                max_cycle = length;
        }
        cout << i << ' ' << j << ' ' << max_cycle << endl;
    }
    return 0;
}
int cycle_length_calculate(int a){
    int count = 1;
    while (a != 1) {
        if (a % 2 == 0) a /= 2;
        else a = a * 3 + 1;
        count++;
    }
    return count;
}