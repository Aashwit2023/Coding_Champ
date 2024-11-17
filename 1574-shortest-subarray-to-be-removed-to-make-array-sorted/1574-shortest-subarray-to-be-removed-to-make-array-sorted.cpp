class Solution {
public:
    int findLengthOfShortestSubarray(vector<int>& arr) {
        int n=arr.size();
        int i=0;
        int j=n-1;
        
        while(j>0 && arr[j]>=arr[j-1]){
            j--;
        }
        int shortest=j;
        while(i<j){
            if(j<n && arr[i]>arr[j]){
                j++;
            }
            shortest=min(shortest,j-i-1);
            i++;
            if(arr[i]<arr[i-1]){
                break;
            }
        }
        return shortest;
    }
};