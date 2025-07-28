// // // #include<bits/stdc++.h>
// // // using namespace std;
// // // int main(){
// // //     int array[5];

// // //     // for(int i=0;i<6;i++){
// // //     //     cin>>array[i];
// // //     // }
// // //     // // // int size = sizeof(array)/sizeof(array[0]);

// // //     // array[0]=5;
// // //     // array[1]=10;
// // //     // array[2]=20;
// // //     // array[3]=40;
// // //     // array[4]=20;

// // //     // array[5]=40;

// // //     // for(int i=0;i<5;i++){
// // //     //     cout<<array[i]<<endl;
// // //     // }

// // //     //syntax vector
// // //     int n;

// // //     vector<int>vec;

// // //     for(int i=0;i<25;i++){
// // //         vec.push_back(i);
// // //         cout<<vec[i]<<endl;
// // //     }

// // // }
// // #include <bits/stdc++.h>
// // using namespace std;

// // int main()
// // {
// //     vector<int> vec;
// //     int n;
// //     cin >> n;
// //     for (int i = 0; i < n; i++)
// //     {
// //         vec.push_back(i);
// //         cout << vec[i] <<endl;
// //     }

// //     vec.clear();

// // }
// // Online C++ compiler to run C++ program online
// #include <bits/stdc++.h>
// using namespace std;

// int main()
// {
//     // Write C++ code here
//     // Insertion in array
//     //     int arr[5]={5,1,2,3,5};
//     //   // arr[0,0,0,0,0];

//     //   // second way of insertion
//     //   int newArr[5];
//     //   newArr[0]=4;
//     //   newArr[1]=5;
//     //   newArr[2]=2;
//     //   newArr[3]=8;
//     //   newArr[4]=6;
//     // using loop
//     // static memory or dynamic memory
//     int Uarr[5]; // array declaration ,size=10;

//     for (int i = 0; i < 7; i++)
//     {
//         cin >> Uarr[i]; // Taking array input from users
//     }
//     //   Uarr[6]=10;
//     //   cout<<Uarr[6];
//     for (int i = 0; i < 7; i++)
//     {
//         cout << Uarr[i] << " ";
//     }
//     return 0;
// }
#include <bits/stdc++.h>
#include<cmath>
using namespace std;
int countdigit(int n)
{
    int count=0;
    while(n>0)
    {
        n=n/10;
        count++;
    }
    return count;
}
    bool Armstrong(int n,int count)
    {
    int ans=0,rem=0;
    int p=n;
    while(p>0)
    {
        rem=p%10;
        int s =pow(rem,count);
        ans+= s;
        cout<<ans<<endl;
        p=p/10;
    }

    if(ans==n)
    {
    return 1;
    }
    else
    {
    return 0;
    }
    }
    int main()
    {
        int n,count;
        cout<<"Enter a number = ";
        cin>>n;
         count = countdigit(n);
       cout<<Armstrong(n, count);

    }