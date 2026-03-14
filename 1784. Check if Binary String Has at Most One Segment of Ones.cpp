class Solution {
public:
    bool checkOnesSegment(string s) {
        int c=0;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]=='0' && s[i+1]=='1'){
                c++;
            }
            if(c>=1){
                return false;
            }
            
        }return true;
    }
};
// class Solution {
// public:
//     bool checkOnesSegment(string s) {
//         int c = 0;
//         for(int i = 0; i < s.size() - 1; i++) {
//             if (s[i] == '0' && s[i+1] == '1') {
//                 c++; // new segment of ones starts
//             }
//             if (c >= 1) { // only need one invalid segment
//                 return false;
//             }
//         }
//         return true;
//     }
// };   