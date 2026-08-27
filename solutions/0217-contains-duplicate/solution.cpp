#include <unordered_set>
#include <vector>

using namespace std;

// Reviewed version of the learner's Week 2 submission.
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        seen.reserve(nums.size());

        for (int num : nums) {
            if (seen.find(num) != seen.end()) {
                return true;
            }
            seen.insert(num);
        }

        return false;
    }
};

