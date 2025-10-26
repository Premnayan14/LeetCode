class Solution {
public:
    int totalMoney(int n) {
       
        int w=1,ans=0,c=1;

        for(int i=1;i<=n;i++){
            
            ans+=c; c++;

            if(i%7==0){
                w+=1;
                c=w;
            }

        }
        return ans;

    }
};