#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int>vec(n);
    for(int i=0;i<n;i++)cin>>vec[i];
    priority_queue<pair<int, int>> pq;
    priority_queue<int, vector<int>, greater<int>> p;

    for(int i=0;i<n;i++){
        pq.push({vec[i], i});
    }
    int cnt = 0, sum = 0;
    while(cnt < k){
        auto pr = pq.top();
        pq.pop();
        p.push(pr.second);
        // temp.push_back(pr.second+1);
        sum += pr.first;
        cnt++;
    }
    cout<<sum<<endl;
    vector<int> idx;
    while(!p.empty()){
        idx.push_back(p.top());
        p.pop();
    }

    vector<int> temp;
    int su = 0;
    int prev = -1;
    for(int i = 0; i < k; i++){
        if(i == k - 1){
            temp.push_back(n - su);
        } else {
            su += idx[i] - prev;
            temp.push_back(idx[i] - prev);
        }
        prev = idx[i];
    }
    for(auto &it: temp){
        cout<<it<<" ";
    }

}