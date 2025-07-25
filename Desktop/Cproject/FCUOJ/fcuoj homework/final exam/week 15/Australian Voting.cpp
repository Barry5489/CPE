#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;
int eliminate(vector <vector<int>> vote);
int main(){
    int case_number;
    cin>>case_number;
    while(case_number>0){
        int candidate_number;
        cin>>candidate_number;
        vector <string> candidate(candidate_number);
        for(int i=0;i<candidate_number;i++){
            getline(cin,candidate[i]);
        }
        vector <vector<int>> vote;
        string line;
        while(getline(cin,line)){
            if(line.empty()) break;
            stringstream ss(line);
            vector <int> ballot;
            int x;
            while(ss>>x){
                ballot.push_back(x-1);
            }
            vote.push_back(ballot);
        }
    }
}
int eliminate(vector <vector<int>> vote){
    int biggest=0,lowest=0;
    for(int i=0;i<vote.size();i++){
        
    }
}