class Solution {
public:
    bool isValid(string s) {
        stack<char> openBracks;
        queue<char> closeBracks;

        for(int i = 0; i < s.size(); i++){
            if(s[i]=='('|| s[i]=='{' || s[i]=='['){
                openBracks.push(s[i]);
            }
            else{
                closeBracks.push(s[i]);
            }

            if(closeBracks.size()>openBracks.size()){
                break;
            }

            if(!openBracks.empty() && !closeBracks.empty()){
                if(openBracks.top()=='{' && closeBracks.front()=='}'){
                    openBracks.pop();
                    closeBracks.pop();
                }
                else if(openBracks.top()=='(' && closeBracks.front()==')'){
                    openBracks.pop();
                    closeBracks.pop();
                }
                else if(openBracks.top()=='[' && closeBracks.front()==']'){
                    openBracks.pop();
                    closeBracks.pop();
                }
                else{
                    break;
                }

            }
        }

        if(openBracks.empty() && closeBracks.empty()){
            return true;
        }
        else{
            return false;
        }

    }
};
