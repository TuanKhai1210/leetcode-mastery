// Reviewed version of the learner's Week 5 submission.
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0) {
            return 0;
        }

        int left = 1;
        int right = x;

        while (left <= right) {
            const int mid = left + (right - left) / 2;
            const int quotient = x / mid;

            if (quotient == mid) {
                return mid;
            }

            if (quotient > mid) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return right;
    }
};
