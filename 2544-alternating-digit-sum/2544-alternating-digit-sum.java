class Solution {
    public int alternateDigitSum(int n) {
        if(n==0){
            return n;
        }
        String x=""+n;
        int a=x.length()-1,s=0;


        while(n!=0){
            int r=n%10;
            int h=(a--%2==0)?1:-1;
            s=s+(h*r);
            n=n/10;
        }
        return s;
    }
}