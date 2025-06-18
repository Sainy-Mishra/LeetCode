class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int cmax = 1, cmin = 1;
        int result = nums[0];

        for(int n : nums) {
            if(n == 0) {
                cmax = 1;
                cmin = 1;
                result = max(result, 0);
                continue;
            }

            int tempMax = cmax;
            cmax = max({n, cmax * n, cmin * n});
            cmin = min({n, tempMax * n, cmin * n});

            result = max(result, cmax);
        }

        return result;
    }
};
