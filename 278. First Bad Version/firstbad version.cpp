// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int left = 1, right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            if (isBadVersion(mid)) {
                right = mid; // mid might be the first bad version
            } else {
                left = mid + 1; // mid is not bad, so the first bad version must be after mid
            }
        }
        
        return left; // left is the first bad version when left == right
    }
};

