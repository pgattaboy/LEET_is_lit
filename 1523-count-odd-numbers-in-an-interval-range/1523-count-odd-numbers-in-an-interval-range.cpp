class Solution {
public:
    int countOdds(int low, int high) {
        if(high%2)
            high++;
        if(low%2)
            low--;
        return (high/2)-(low/2);
    }
};