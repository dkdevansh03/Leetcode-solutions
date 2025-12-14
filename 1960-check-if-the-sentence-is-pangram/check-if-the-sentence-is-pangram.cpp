class Solution {
public:
    bool checkIfPangram(string sentence) {
        if(sentence.size()<26) return false;
        int freqarr[26] = {0};
        for(auto it : sentence){
            freqarr[it-'a']++;
        }
        for(int i = 0 ; i<26 ; i++){
            if(freqarr[i]==0)
                return false;
        }
        return true;
    }
};