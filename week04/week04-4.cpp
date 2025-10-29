//week04-4.cpp
//只有增加or只有減少的陣列 不可又增又減
class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
      int up=0, down=0; //如果增加 up變1 ,減少 down變1
      for (int i=1; i<nums.size(); i++){
        if (nums[i-1] < nums[i]) up = 1; //左小 右大 增加
        if (nums[i-1] > nums[i]) down = 1; //左大 右小 減少
      }
      if (up==1 && down==1) return false;
      return true;
    }
};
