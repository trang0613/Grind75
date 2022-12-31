class Solution {
public:
    bool isPalindrome(string s) {

        //remove non-alphanumeric characters
        for(int i = 0; i < s.length(); i++){
            if(s[i]<48 || (s[i]>57&&s[i]<65) || (s[i]>90&&s[i]<97) || s[i]>122) s[i]='@';
        }
        s.erase(remove(s.begin(), s.end(), '@'), s.end());

        //convert uppercase letters into lowercase letters
        for(int i = 0; i < s.length(); i++){
            if(s[i]>=65 && s[i]<=90) s[i]+=32;
        }

        int l;
        if(s.length()%2 != 0){
            l = (s.length()-1)/2;
        }
        else{
            l = s.length()/2;
        }

        //compare first half to reversed second half
        for(int i = 0; i < l; i++){
            int j = s.length()-1-i;
            if(s[i]!=s[j]){
                return false; 
            }
        }

        return true;

    }
};
