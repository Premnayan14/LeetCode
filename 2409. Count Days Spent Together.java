class Solution {
    public int days(String s,int d[]){
        int a=0;
        int day=(s.charAt(3)-'0')*10+((s.charAt(4))-'0');
        int month=((s.charAt(0)-'0')*10)+(s.charAt(1)-'0');
        // a=day+d[month];
        a=day+d[month-1];
        return a;
    }
    public int countDaysTogether(String arriveAlice, String leaveAlice, String arriveBob, String leaveBob) {
        if(leaveAlice==arriveBob)return 1;
        // int d[]=new int[13];
        int d[]={0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334, 365};
        int aa=days(arriveAlice,d);
        int la=days(leaveAlice,d);
        int ab=days(arriveBob,d);
        int lb=days(leaveBob,d);

        if((aa > ab && aa > lb) || (ab > aa && ab > la))return 0;
        // if()
        
        int s=Math.min(la,lb)-Math.max(aa,ab);
        return s+1;
        // System.out.println(aa);
        // System.out.println(la);
        // System.out.println(ab);
        // System.out.println(lb);
        // return 0;
        // if(aa < ab && la < lb && ab > la)return 0;

        // if(ab < aa && lb < la && aa > lb)return 0;
        // if(aa < ab && la < lb && ab > la)return 0;

        // if(aa>lb)return 0;
        // if(aa<ab && la<ab)return 0;

        // if(lb<aa || la<ab   )return 0;
        // int s=Math.min(la,lb)-Math.max(aa,ab);
        // if(aa > ab && lb > la)return s;
        // if(aa > ab && la > lb)return s+2;
        // // if(aa < ab && la > lb)return lb-ab+2;
        // if(ab > aa && lb > la)return s+1;
        // if(ab > aa && la > lb)return s+2;
        // if(ab<la)return la-ab+1;
        // return 0;
        // if()
        // return 0;
        // if(int(leaveAlice.charAt(0)+leaveAlice.charAt(1)))

        // int la=days(leaveAlice,d);
        // int ab=days(arriveBob,d);
        // if(ab<la)return la-ab+1;
        // return 0;

        // if(int(leaveAlice.charAt(0)+leaveAlice.charAt(1)))

    }
}