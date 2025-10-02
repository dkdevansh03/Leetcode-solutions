class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
        int BottlesDrunk = numBottles;
        int EmptyBottles = numBottles;
        while(EmptyBottles>=numExchange){
                EmptyBottles = EmptyBottles - numExchange;
                numExchange++;
                BottlesDrunk++;
                EmptyBottles++;
        }
        return BottlesDrunk;
    }
};