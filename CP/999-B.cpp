#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    // int div = (int)s.size()/2;
    // int div = n/2;
    // while(div >= 1){
    //     reverse(s.begin(), s.begin() + div);
    //     div /= 2;
    // } 
    // reverse(s.begin(), s.end());

    for(int i=0; i<n; i++){
        int div = i+1;
        if(n % div == 0){
            reverse(s.begin(), s.begin()+div);
        }
    }
    // reverse(s.begin(), s.end());
    cout<<s;
    return 0;
}


//codefsecor
//codefroces
//codeforces
