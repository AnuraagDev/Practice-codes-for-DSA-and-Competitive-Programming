class Solution {
public:
    int countPrimes(int n) {
        vector<bool>prime(n+1,true);
        int count=0;
        if(n==2)return 0;
        for(int i=2;i<=sqrt(n);i++){
            if(prime[i]==true){
                for(int p=i*i;p<=n;p+=i){
                    prime[p]=false;
                }
            }
            
        }
        for(int i=2;i<n;i++)if(prime[i])count++;
        return count;
    }
};
