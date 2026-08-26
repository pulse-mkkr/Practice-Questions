class Solution {
  public:
    bool checkKthBit(int n, int k) {
        return ((n>>k)%2==1);
    }
};
