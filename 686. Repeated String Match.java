class Solution {
    public int repeatedStringMatch(String a, String b) {
        // if(Objects.equals(a,b))return 1;
        StringBuilder repeatA = new StringBuilder(a);
        int count = 1;
        if (repeatA.toString().contains(b)) return count;

        while (repeatA.length() < b.length()) {
            repeatA.append(a);
            count++;
            if (repeatA.toString().contains(b)) return count;
        }

        // Check with one more repetition
        repeatA.append(a);
        count++;
        if (repeatA.toString().contains(b)) return count;

        return -1;
    }
}