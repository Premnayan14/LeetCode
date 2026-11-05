class Solution {
    // public long square(int arr[]){
    //     if arr[0]==0; return 0;

    // }
    // public long good(int n,int s){
    //     long a=0; int b=0;
    //     // while(n>0)
    //     while(n>0){
    //         b+=n%10;
    //         a+=((n%10)*(n%10));
    //         n/=10;
    //         if(b>s)return 0;
    //     }
    //     if(b==s){
    //         return a;
    //     }else{ 
    //     return 0;
    //     }
         
    // }
    public String maxSumOfSquares(int num, int sum) {

        if(sum > num * 9)return "";
        int n = sum/9;
        int r= sum%9;

        StringBuilder ans = new StringBuilder();
        while(n>0){
            ans.append('9');
            n--;
        }
        if(r>0)ans.append(r);
        while(ans.length()<num){
            ans.append('0');
        }
        return ans.toString();
        // int s=(int)Math.pow(10,num-1);
        // int e=(int)Math.pow(10,num);
        // int arr[]= new int[e-s];
        // long sq[]= new long[e-s];
        // int j=0;

        // for(int i=s; i<e; i++){ 
        //     long a=good(i,sum);
        //     if(a!=0){
        //         arr[j]=i;
        //         sq[j]=a;
        //         j++;
        //     }
        // }

        // if(arr[0]==0)return "";
        // long k=sq[sq.length-1]; e=sq.length-1;
        // for(int i=sq.length-2; i>=0; i--){
        //     if(sq[i]>k){
        //         k=sq[i]; e=i;
        //     }
        // }
        // // int b=arr[e];
        // String ans=Integer.toString(arr[e]);
        // return ans;

    }
}