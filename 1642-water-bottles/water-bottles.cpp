class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        while (numBottles >= numExchange) {
            int newB = numBottles / numExchange;   
            int leftB = numBottles % numExchange;   
            total += newB;                       
            numBottles = newB + leftB;        
        }
        return total;
    }
};
