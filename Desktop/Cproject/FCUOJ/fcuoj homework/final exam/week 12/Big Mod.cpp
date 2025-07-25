#include <iostream>
using namespace std;
int main() {
    int B,P,M;
    while (cin>>B>>P>>M){
        long long result = 1;
        for (int i = 0; i < P; i++) {
            result = (result * B) % M;
        }
        cout << result << endl;
    }
    return 0;
}

/*#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double R;
    int B,P,M;
    while(cin>>B>>P>>M){
        R = pow(B,P)%M;
        cout<<R<<endl;
    }
}*/
