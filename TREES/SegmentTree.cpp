#include<bits/stdc++.h>
using namespace std;
vector<int> SegmentTree;
vector<int> Lazy;

void BuildST(vector<int> &nums, int i, int l, int r) {
    if (l == r) {
        SegmentTree[i] = nums[l];
        return;
    }
    int mid = l + (r - l) / 2;
    BuildST(nums, 2*i + 1, l, mid);
    BuildST(nums, 2*i + 2, mid + 1, r);

    SegmentTree[i] = SegmentTree[2*i + 1] + SegmentTree[2*i + 2];
}

void UpdateRange(int start, int end, int i, int l, int r, int val) {
    if (Lazy[i] != 0) {
        SegmentTree[i] += Lazy[i] * (r - l + 1);
        if (l != r) {
            Lazy[2*i + 1] += Lazy[i];
            Lazy[2*i + 2] += Lazy[i];
        }
        Lazy[i] = 0;
    }

    if (r < start || l > end || l > r) return ;
    if (l >= start && r <= end) {
        SegmentTree[i] += (r - l + 1) * val;
        if (l != r) {
            Lazy[2*i + 1] += val;
            Lazy[2*i + 2] += val;
        }
        return ;
    }
    int mid = l + (r - l) / 2;
    UpdateRange(start, end, 2 * i + 1, l, mid, val);
    UpdateRange(start, end, 2 * i + 2, mid + 1, r, val);

    SegmentTree[i] = SegmentTree[2 * i + 1] + SegmentTree[2 * i + 2];
    return;
}

int main() {
    int n;
    cin>>n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin>>vec[i];
    SegmentTree.resize(4 * n);
    Lazy.resize(4 * n, 0);

    BuildST(vec, 0, 0, n - 1);

    for (auto & it : SegmentTree) cout<<it<<" ";
    cout<<endl;
    int start = 2, end = 5, val = 2;
    UpdateRange(start, end, 0, 0, n - 1, val);
    for (auto & it : SegmentTree) cout<<it<<" ";
    

}