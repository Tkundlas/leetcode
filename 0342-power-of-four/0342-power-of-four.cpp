class Solution {
public:
    bool isPowerOfFour(int n) {
                 if(n==0 || n<0) return false;
    bool onseen=false;
        int x=0;
        while(n>0)
        {
            x=n%4;
            if(x>1) return false;
            if(x==1){
                if(onseen==true){
                    return false;
                }
             onseen=true;   
            }
            n=n/4;
        }
        return true;
        
    }
};