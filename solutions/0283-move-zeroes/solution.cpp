#include <utility>
#include <vector>

using namespace std;

// Reviewed version of the learner's Week 4 submission.
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int insert_pos = 0;

        for (int index = 0; index < static_cast<int>(nums.size()); ++index) {
            if (nums[index] != 0) {
                swap(nums[insert_pos], nums[index]);
                ++insert_pos;
            }
        }
    }
};
