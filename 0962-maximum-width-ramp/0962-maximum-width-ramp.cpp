class Solution {
public:
    int maxWidthRamp(vector<int>& nums) {
        int n=nums.size();
        vector<int>max_vec;
        int j=n-1;
        int maxi=nums[j];
        
        // max_vec.push_back(nums[n-1]);
        while(j>=0){
            if(nums[j]>maxi){
                maxi= nums[j];
            }
            max_vec.push_back(maxi);
            j--;
        }
        reverse(max_vec.begin(),max_vec.end());
        int l=0;
        int r=1;
        int width,max_width=0;
        
        while(r<n){
            if(nums[l]>max_vec[r]){
                l++;
            }
            else{
                r++;
            }
            width=r-l;
            max_width=max(max_width,width);
            
        }
        
        return max_width-1;
        
        
//         int n=nums.size();
//         vector<int>max_vec;
//         int j=n-2;
//         int i=n-1;
        
//         max_vec.push_back(nums[n-1]);
//         while(j>=0){
//             if(nums[j]>nums[i]){
//                 max_vec.push_back(j);
//                 i--;
//             }
//             else{
//                 max_vec.push_back(i);
//             }
//             j--;
//         }
//         for(int i=0;i<max_vec.size();i++){
//             cout<<max_vec[i];
//         }
//         return n;
        
        
        
        
        
        // stack<int>st;
        // int n=nums.size();
        // int max_width=0;
        
        // for(int i=0 ; i<n ;i++){
        //     if(st.size() == 0){
        //         max_width=0;
        //     }
        //     else if(nums[i]>=nums[st.top()]){
        //         int width = st.top()-i;
        //         max_width=max(max_width,width);
        //     }
        //     else if(st.size()>0 && nums[st.top()]>=nums[i] ){
        //         while(st.size()>0 && nums[st.top()]>=nums[i] ){
        //             st.pop();
        //         }
        //         if(st.size() == 0){
        //             max_width=0;
        //         }
        //         else if(nums[st.top()]<=nums[i]){
        //             int width = st.top()-i;
        //             max_width=max(max_width,width);
        //         }
        //     }
        //     st.push(i);
        // }
        // return max_width;
        
        // for(int i=n-1 ; i>=0 ;i--){
        //     if(st.size() == 0){
        //         max_width=0;
        //     }
        //     else if(nums[i]<=nums[st.top()]){
        //         int width = st.top()-i;
        //         max_width=max(max_width,width);
        //     }
        //     else if(st.size()>0 && nums[st.top()]<=nums[i] ){
        //         while(st.size()>0 && nums[st.top()]<=nums[i] ){
        //             st.pop();
        //         }
        //         if(st.size() == 0){
        //             max_width=0;
        //         }
        //         else if(nums[st.top()]>=nums[i]){
        //             int width = st.top()-i;
        //             max_width=max(max_width,width);
        //         }
        //     }
        //     st.push(i);
        // }
        // return max_width;

        // BRUTE FORCE APPROCH
   //      int width=0;
   //      int max_width = 0;
   //      for(int i=0 ; i<nums.size() ; i++){
   //          for(int j=i+1 ; j<nums.size() ;j++){
   //              if(nums[i]<=nums[j]){
   //                  width = j-i ;
   //                  max_width=max(max_width,width);
   //              }
   //          }
   //      }
   //      return max_width;
   }
};