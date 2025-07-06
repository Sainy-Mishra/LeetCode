class FindSumPairs {
public:
    vector<int> vect1;
    vector<int> vect2;
    unordered_map<int, int> freq;
    FindSumPairs(vector<int>& nums1, vector<int>& nums2) {
        vect1=nums1;
        vect2=nums2;
        for(int &x: vect2){
            freq[x]++;
        }
    }
    
    void add(int index, int val) {
        freq[vect2[index]]--;
        vect2[index]+=val;
        freq[vect2[index]]++;
    }
    
    int count(int tot) {
        int count=0;
        for(int &x: vect1){
            count+=freq[tot-x];
        }
        return count;
    }
};

/**
 * Your FindSumPairs object will be instantiated and called as such:
 * FindSumPairs* obj = new FindSumPairs(nums1, nums2);
 * obj->add(index,val);
 * int param_2 = obj->count(tot);
 */