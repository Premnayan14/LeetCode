// 7.6mb 
class Solution {
public:
    // Small, inline-able helper
    int sumOfSquares(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = sumOfSquares(n); // one step ahead

        while (fast != 1 && slow != fast) {
            slow = sumOfSquares(slow);             // move 1 step
            fast = sumOfSquares(sumOfSquares(fast)); // move 2 steps
        }
        return fast == 1;
    }
};

/* 7.7 mb
class Solution {
public:
    int getnext(int x){
        int s=0;
        while(x>0){
            int d=x%10;
            s+=d*d;
            x/=10;
        }
        return s;
    }
    bool isHappy(int n) {
        int slow=n;
        int fast=getnext(n);
       while(fast!=1 && fast!=slow){
        slow=getnext(slow);
        fast=getnext(getnext(fast));
       }return fast==1;
    }
}; 

7.8 mb
class Solution {
public:
int sumofsq(int n){
     int sum=0;
        while(n>0){
            int digit=n%10;
            sum+=digit*digit;
            n/=10;
        }
        return sum;
}
    bool isHappy(int n) {
        int pointer1=n;
        int pointer2=sumofsq(n);
        while(pointer2!=1 && pointer1!=pointer2){
            pointer1=sumofsq(pointer1);
            pointer2=sumofsq(sumofsq(pointer2));
        }
       
        return pointer2==1;
    }
};*/ 
