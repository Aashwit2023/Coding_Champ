#include<bits/stdc++.h>
using namespace std;
vector<int> segment_tree;
void buildTree(vector<int> &nums, int i, int l, int r) {
    if (l == r) {
        segment_tree[i] = nums[l];
        return ;
    }
    int mid = l + (r - l) / 2;
    buildTree(nums, 2*i+1, l, mid);
    buildTree(nums, 2*i+2, mid + 1, r);
    segment_tree[i] = segment_tree[2 * i + 1] + segment_tree[2 * i + 2];
    return ;
}
void update_segTree(vector<int> &nums, int idx, int val, int i, int l, int r) {
    if (l == r) {
        segment_tree[i] = val;
        return ;
    }
    int mid = l + (r - l) / 2;
    if (idx <= mid) {
        update_segTree(nums, idx, val, 2 * i + 1, l, mid);
    } else {
        update_segTree(nums, idx, val, 2 * i + 2, mid + 1, r);
    }
    segment_tree[i] = segment_tree[2 * i + 1] + segment_tree[2 * i + 2];
    return ;
}
int findRange(int start, int end, int i, int l, int r) {
    if (l > end || r < start) return 0;
    if (l >= start && r <= end) return segment_tree[i];
    else {
        int mid = l + (r - l) / 2;
        return findRange(start, end, 2 * i + 1, 0, mid) + findRange(start, end, 2 * i + 2, mid + 1, r);
    }
}
int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin>>vec[i];
    segment_tree.resize(2 * n - 1);
    buildTree(vec, 0, 0, n - 1);
    for (auto &it: segment_tree) cout<<it<<" ";
    cout<<endl;
    update_segTree(vec, 2, 10, 0, 0, n - 1);
    for (auto &it: segment_tree) cout<<it<<" "; 
    cout<<endl;
    int start = 2, end = 4;
    cout<<findRange(start, end, 0, 0, n- 1);
    cout<<endl;
}