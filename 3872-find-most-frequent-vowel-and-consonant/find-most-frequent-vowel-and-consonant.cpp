class Solution {
public:
    int maxFreqSum(string s) {
        int maxvowelF = 0;
        int maxconsonantF = 0;
        string vowels = "aeiou";
        vector<int>freq(26,0);
        for(char c : s){
            int ch = c - 'a';
            freq[ch]++;
            
            if(vowels.find(c)!=string::npos)
                maxvowelF = max(maxvowelF,freq[ch]);
            else
                maxconsonantF = max(maxconsonantF,freq[ch]);
        }
        return maxvowelF+maxconsonantF;
    }
};