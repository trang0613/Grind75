class Solution {
public:
    bool isAnagram(string s, string t) {
        
        //instead of going through every character in the strings, we remove           characters a-z in each string, if at a point the lengths differ, we return false
        for(int ascii = 97; ascii<=122; ascii++){ 
            if(s.length()!=t.length()){
                return false;
            }
            char ch = char(ascii) ;
            s.erase(remove(s.begin(), s.end(), ch), s.end());
            t.erase(remove(t.begin(), t.end(), ch), t.end());
            //cout << s << " " << t << "\n";
        }

        return true;
        
    }
};
