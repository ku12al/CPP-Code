#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void print(priority_queue<int> pq){
    while(!pq.empty()){
        cout << pq.top() <<" ";
        pq.pop();
    }
    cout<<endl;
}
void displayLeaderBoard(map<string, int>& leaderBoard){
    cout<<"...";
    for(auto it:leaderBoard){
        string teamname = it.first;
        int teamscore = it.second;
    }
    cout<<"....":
}

int main(){
    vector<string> teams = {"A", "B", "C",};
    vector<int> teamScore = {0,0,0};

    int q;
    cin>>q;
    map<string, int> leaderBoard;
    leaderBoard["A"] =0;
    leaderBoard["B"] =0;
    leaderBoard["C"] =0;
    
    while(q--){
        string teamName;
        cin>> teamName;
        int score;
        cin>>score;

        leaderBoard[teamName] 

        display(leaderBoard);
        return 0;

    }
}