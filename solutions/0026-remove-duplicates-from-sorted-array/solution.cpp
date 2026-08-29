#include <vector>

using namespace std;

// Reviewed version of the learner's Week 4 submission.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.empty()) {
            return 0;
        }

        int insert_pos = 1;

        for (int index = 1; index < static_cast<int>(nums.size()); ++index) {
            if (nums[index] != nums[index - 1]) {
                nums[insert_pos] = nums[index];
                ++insert_pos;
            }
        }

        return insert_pos;
    }
};
