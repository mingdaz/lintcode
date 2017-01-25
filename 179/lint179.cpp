class Solution {
public:
    /**
     *@param n, m: Two integer
     *@param i, j: Two bit positions
     *return: An integer
     */
    int updateBits(int n, int m, int i, int j) {
        // write your code here
        int mask = ((-1<<j)<<1)|((1<<i)-1);
        n&=mask;
        return (m<<i)|n;
    }
};
