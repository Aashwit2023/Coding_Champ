#include<bits/stdc++.h>
using namespace std;
int main(){
    int n, m;
    cin>>n>>m;
    vector<long long> dormetries(n), rooms(m);
    for(int i=0;i<n;i++)cin>>dormetries[i];
    for(int i=0;i<m;i++)cin>>rooms[i];
    vector<long long> temp;
    long long sum = 0;
    for(int i=0;i<n;i++){
        sum += dormetries[i];
        temp.push_back(sum);
    }
    for(int i=0;i<m;i++){
        long long r = 0;
        for(int j=0;j<n;j++){
            if(rooms[i] <= temp[j]){
                if(j == 0){
                    r = rooms[i];
                }else {
                    r = rooms[i] - temp[j-1];
                }
                cout<<j+1<<" "<<r;
                break;
            }
        }
        cout<<endl;
    }
    return 0;
}