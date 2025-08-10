class Solution {
public:
    long long findmax(const vector<int>& piles, long long n) {
        long long maxi = LLONG_MIN;
        for (long long i = 0; i < n; i++) {
            maxi = max(maxi, (long long)piles[i]);
        }
        return maxi;
    }

    bool caneat(const vector<int>& piles, long long mid, long long h) {
        long long actualhr = 0;
        for (long long num : piles) {
            actualhr += num / mid;
            if (num % mid != 0) {
                actualhr++;
            }
        }
        return actualhr <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        long long n = piles.size();
        long long start = 1;
        long long end = findmax(piles, n);

        while (start <= end) {
            long long mid = start + (end - start) / 2;
            if (caneat(piles, mid, h)) {
                end = mid - 1;
            } else {
                start = mid + 1;
            }
        }
        return (int)start;
    }
};