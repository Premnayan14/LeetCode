class Solution {
    public int check(int n){
        // int c=0;
        int r=n; 
        // for(int)
        while(n >0){
            int d=n%10;
            // if(d==0)return -1;
            // if(n==1)return 1;
            if(d==0 || r%d!=0){
                return -1;
            }
            n/=10;
        }
        return 1;
    }
    public List<Integer> selfDividingNumbers(int left, int right) {
        List<Integer> ans=new ArrayList<>();
        while(left <= right){
            int a=check(left);
            if(a==1){
                ans.add(left);
            }
            left++;
        }
        return ans;
    }
}