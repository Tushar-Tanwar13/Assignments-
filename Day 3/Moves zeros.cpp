#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill remaining positions with zeros
    while (j < nums.size()) {
        nums[j] = 0;
        j++;
    }
}

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    moveZeroes(nums);

    cout << "Array after moving zeros to the end: ";
    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}