class Solution {
    public int setBits(int n) {
        // code here
        int cnt=0;
        while(n>0){
            n=n&(n-1);
            cnt++;
        }
        return cnt;
    }
}
