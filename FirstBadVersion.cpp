//Topic: Binary Search

// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1;
        int r = n;
        int mid;

        while(l<r){
            mid = r+(l-r)/2;
            if(isBadVersion(mid)){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }

        if(isBadVersion(l)){
            return l;
        }
        else{
            return l+1;
        }
    }
};
