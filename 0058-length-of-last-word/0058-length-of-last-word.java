class Solution {
    public int lengthOfLastWord(String s) {
        int n = s.length();
        int m = 0;
        for(int i =n-1;i>=0;i--){
            if(s.charAt(i) ==' ' && m ==0 )continue;
            if (s.charAt(i) == ' ')
                break;
            m++;
        }
        return m;
    }
}