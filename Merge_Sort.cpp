// Shajal
// Merge Sort:  time complexity - O(nlogn)    ;     Sapce complexity - O(n)
#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0); // cin.tie(0); cout.tie(0);

void combine(vector<int>& v, int left, int mid, int right, vector<int>& temp) {
    int i = left, j = mid + 1, x = left;

    // Merge two sorted halves
    while (i <= mid && j <= right) {
        if (v[i] <= v[j]) {
            temp[x++] = v[i++];
        } else {
            temp[x++] = v[j++];
        }
    }

    // Copy remaining elements
    while (i <= mid) temp[x++] = v[i++];
    while (j <= right) temp[x++] = v[j++];

    // Copy back to original array
    copy(temp.begin() + left, temp.begin() + right + 1, v.begin() + left);
}

void merge_sort(vector<int>& v, int left, int right, vector<int>& temp) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    merge_sort(v, left, mid, temp);
    merge_sort(v, mid + 1, right, temp);
    combine(v, left, mid, right, temp);
}

void solve() {
    vector<int> v = {3, 4, 2, 1, -1, 4, 4, 4, 5, 2, 4, 999, 837, -1, 22, 3, 8};
    int n = v.size();

    vector<int> temp(n);  // Temporary vector (instead of global array)
    merge_sort(v, 0, n - 1, temp);

    for (auto x : v) cout << x << " ";
}

int main() {
    optimize();
    solve();
    return 0;
}
