/*#include <iostream>
#include <vector>
using namespace std;
vector <int> The_Destructive_Process(vector<int> people,vector<int> prime_numbers);
int main(){
    int n; 
    while(1){
        cin>>n;
        if(n==0) break;
        vector <int> people(n),
        prime_numbers = {2,3,5,7,13,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};
        for(int i=0;i<n;i++){
            people[i] = i+1;
        }
        cout<<The_Destructive_Process(people,prime_numbers)<<endl;
    }
    return 0;
}
vector <int> The_Destructive_Process(vector<int> people,vector<int> prime_numbers){
    int index=0,pos=0;
    while (people.size()!=1 || index<prime_numbers.size()){
        pos = (pos+prime_numbers[index])%people.size();
        people.erase(people.begin()+pos);
    }
    return people;
}
#include <iostream>
#include <vector>
using namespace std;
int The_Destructive_Process(vector<int> people, vector<int> prime_numbers);
int main() {
    int n;
    while (1) {
        cin >> n;
        if (n == 0) break;
        vector<int> people(n);
        vector<int> prime_numbers = {
            2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,
            71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,
            149,151,157,163,167,173,179,181,191,193,197,199,211,223,
            227,229,233,239,241,251,257,263,269,271,277,281,283,293,
            307,311,313,317,331,337,347,349 // 至少 3500 個用這些夠了
        };
        for (int i = 0; i < n; i++) {
            people[i] = i + 1;
        }
        cout << The_Destructive_Process(people, prime_numbers) << endl;
    }
    return 0;
}

int The_Destructive_Process(vector<int> people, vector<int> prime_numbers) {
    int index = 0, pos = 0;
    while (people.size() > 1) {
        int step = prime_numbers[index];  // 目前要數幾步
        pos = (pos + step - 1) % people.size();  // 從現在的位置數 step-1 步
        people.erase(people.begin() + pos);  // 刪除該位置的人
        index++;//use next prime number
    }
    return people[0];//return the last one person
}*/
#include <iostream>
#include <vector>
using namespace std;
vector<int> generate_primes(int limit);
int The_Destructive_Process(vector<int> people, vector<int> prime_numbers);

int main() {
    int n;
    vector<int> prime_numbers = generate_primes(4000);
    while (cin>>n && n!=0) {
        vector<int> people(n);
        for (int i = 0; i < n; i++) {
            people[i] = i + 1;
        }
        cout << The_Destructive_Process(people, prime_numbers) << endl;
    }
    return 0;
}
vector<int> generate_primes(int limit){
    vector<int> primes;
    int num = 2;
    while (primes.size() < limit) {
        bool is_prime = true;
        for (int i=2;i*i<=num;++i) {
            if (num % i == 0) {
                is_prime = false;
                break;
            }
        }
        if (is_prime) primes.push_back(num);
            num++;
        }
    return primes;
}
int The_Destructive_Process(vector<int> people, vector<int> prime_numbers){
    int index = 0, pos = 0;
    while (people.size() > 1) {
        int step = prime_numbers[index];
        pos = (pos + step - 1) % people.size();
        people.erase(people.begin() + pos);
        index++;
    }
    return people[0];
}

