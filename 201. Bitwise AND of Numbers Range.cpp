// class Solution {
// public:
//     int rangeBitwiseAnd(int left, int right) {
//         int shift=0;
//         while(left<right){
//             left>>=1;  //shift right
//             right>>=1; //shift right
//             shift++;
//         }return left<<shift; //shift back to original place
//     }
// };
class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        while(left < right){
            right = right & right-1;
        }
        return right;
    }
};