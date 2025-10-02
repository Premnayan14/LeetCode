class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) {
    //     int ans = numBottles;
    //     int empties = numBottles;
    //     int cost = numExchange;

    // while (empties >= cost) {
    // // perform one exchange
    // empties = empties - cost + 1; 
    //  // you spend `cost` empties, you get 1 full bottle, drink it, get 1 empty
    // cost += 1;              // next exchange is more expensive
    // ans += 1;
    //      }
    // return ans;
    
    // more optimized
    int ans=0;
    while(numExchange<=numBottles){
        ans+=numExchange;
        numBottles-=numExchange;
        numBottles++;
        numExchange++;
    }
    return ans+numBottles;    
    }
};