class Solution {
public:
    int maximum69Number (int num) {
       // if((num+1)%10==0) return num;//
       /* int r=0,n=num,c=0;
        while(n>0){
            r=r*10+n%10;
            n=n/10;
        } n=0;
        while(r>0){
            if (r%10!=9 && c==0){n=n*10+9;c++;}
            else{ n=r%10+n*10;}
            r/=10;
        }return n;*/

   /* int temp = num, pos = -1, i = 0;
    while (temp > 0) {
        if (temp % 10 == 6) pos = i;  // track last 6 (lowest significance)
        temp /= 10;
        i++;
    }
    if (pos != -1) num += 3 * pow(10, pos);
    return num;*/

    string s = to_string(num);
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '6') {
            s[i] = '9';
            break;  // only change the first 6
        }
    }
    return stoi(s);
    } 
};