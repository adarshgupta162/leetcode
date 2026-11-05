class Solution {
public:
    int addDigits(int num) {
        while(num>=10){
            int temp = log10(num);
            int sum=0;
            int tnum=num;
            for(int i=0; i<=temp;i++){
                sum += tnum%10 ;
                tnum /=10;
            }
            num =sum;
        }
        return num;
    }
};