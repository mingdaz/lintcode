class Solution {
public:
    /**
     *@param a, b: Two integer
     *return: An integer
     */
    int bitSwapRequired(int a, int b) {
        // write your code here
        unsigned int c = a^b;
        int res = 0;
        while(c!=0){
            c&=(c-1);
            res++;
        }
        return res;
    }
};
