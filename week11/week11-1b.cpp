//week11-1b.cpp
//HashMap or Hashset 可快速找有沒有這個數
class Solution {
public:
    int findFinalValue(vector<int>& nums, int original) {
        set<int> numsSet;
        for (int num : nums) numsSet.insert(num); //C++進階迴圈
        while (numsSet.find(original) != numsSet.end()){
            original *= 2;
        }
        return original;
    }
};
