#include <iostream>
#include <vector>

using namespace std;

// Function to merge nums2 into nums1 in a sorted order
void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    int i = m - 1; // Pointer for nums1's valid elements
    int j = n - 1; // Pointer for nums2's elements
    int k = m + n - 1; // Pointer for the end of merged array in nums1

    // Merge from the back to the front
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k--] = nums1[i--];
        } else {
            nums1[k--] = nums2[j--];
        }
    }

    // If any remaining elements from nums2, copy them into nums1
    while (j >= 0) {
        nums1[k--] = nums2[j--];
    }
}

int main() {
    // Example input arrays
    vector<int> nums1 = {1, 2, 3, 0, 0, 0}; // nums1 has extra space for merging
    int m = 3; // Number of valid elements in nums1
    vector<int> nums2 = {2, 5, 6}; // nums2 to be merged into nums1
    int n = 3; // Number of elements in nums2

    // Merging nums2 into nums1
    merge(nums1, m, nums2, n);

    // Output the merged array
    cout << "Merged array: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
