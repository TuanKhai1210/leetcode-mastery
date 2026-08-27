#include <vector>

using namespace std;

// Reviewed version of the learner's Week 1 submission.
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> result;
        result.reserve(nums.size() * 2);

        result.insert(result.end(), nums.begin(), nums.end());
        result.insert(result.end(), nums.begin(), nums.end());

        return result;
    }
};
