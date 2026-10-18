class Solution {
    public int digitFrequencyScore(int n) {
        int s=0;
        while(n > 0){
            int r=n%10;
            s+=r;
            n/=10;
        }
        return s;

        // another way

        // int arr[]=new int[10];
        // int s=0;
        // while(n > 0){
        //     int r=n%10;
        //     arr[r]++;
        //      n/=10;
        // }
        // for(int i=0;i<10;i++){
        //     s+=i*arr[i];
        // }
        // return s;

    }
}