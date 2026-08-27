#include <vector>

using namespace std;

// Reviewed version of the learner's Week 1 submission.
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size());

        int runningSum = 0;
        for (int num : nums) {
            runningSum += num;
            result.push_back(runningSum);
        }

        return result;
    }
};
