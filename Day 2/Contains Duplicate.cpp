#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool containsDuplicate(vector<int>& nums) {
    
    unordered_set<int> s;

    for(int i = 0; i < nums.size(); i++) {
        
        if(s.find(nums[i]) != s.end()) {
            return true;
        }

        s.insert(nums[i]);
    }

    return false;
}

int main() {
    
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);

    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    if(containsDuplicate(nums))
        cout << "true";
    else
        cout << "false";

    return 0;
}