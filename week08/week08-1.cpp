//week08-1.cpp
class Solution {
public:
    int smallestNumber(int n) {
        /*int ans = 1;
        while(n>0){
            ans *= 2;
            n /= 2;
        }
        return ans-1;*/

        int N = 0;
        while(n>0){
            n /= 2;
            N++;
        }
        cout << "�{�b�o�{ n�O(�G�i��)�X��ƩO?" << N << "���\n";
        int ans = 0;
        for (int i=0; i<N; i++){
            ans = ans*2+1;
        }
        return ans;
    }
};
