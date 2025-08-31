class Solution {
private:
    int reduceNum(int n){
        if(n%2==0) n/=2;
        else n-=1;
        return n;
    }
public:
    int numberOfSteps(int num) {
        int count = 0;
        while(num!=0){
            num = reduceNum(num);
            count++;
        }
        return count;
    }
};