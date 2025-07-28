#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        int n;
        vector<int> vec;
        cin>>n;
        cin>> s;
        // for (int i = 0; i < n;) {
        //     if (s[i] == '.') {
        //         int j = i;
        //         while (j < n && s[j] == '.') j++;
        //         vec.push_back(j - i);
        //         i = j;
        //     } else {
        //         i++;
        //     }
        // }
        // int sum = 0;
        // bool flag = false;
        // for(int j=0;j<vec.size();j++){
        //     sum += vec[j];
        //     if(vec[j]>2){
        //         flag = true;
        //         break;
        //     }
        // }
        // if(flag == true){
        //     cout<<2<<endl;
        // } else {
        //     cout<<sum<<endl;
        // }
        


        int sum = 0, cnt = 0;
        bool flag = false;
        for(int i=0;i<n;i++){
            if(s[i] == '.') {
                cnt++;
                sum++;
            } else {
                if(cnt>2){
                    flag = true;
                    break;
                }
                cnt = 0;
            }
        }
        if(cnt>2){
            flag = true;1
        }
        if(flag == true){
            cout<<2<<endl;
        } else {
            cout<<sum<<endl;
        }
    }
    return 0;
}
