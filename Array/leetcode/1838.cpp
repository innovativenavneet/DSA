#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int max = 0;
        int re = max
        for (int i = 0; i < k; i++) {
            int result = nums[i+1] - nums[i];

            nums[i] = nums[i] + result;
            if (nums[i] == nums[i + 1]) {
                max = max + 1;
            }
        }
        return max;
        
    }
};

int main() {
    vector<int> nums = {1,4,8,13};
    int k = 5;

    Solution solution;
    int result = solution.maxFrequency(nums, k);
    cout << "Maximum frequency: " << result << endl;

    return 0;
}
