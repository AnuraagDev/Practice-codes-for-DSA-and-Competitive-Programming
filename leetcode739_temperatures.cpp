class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
          int n=temperatures.size();
        vector<int> ans(n);
        stack<vector<int>> st;
      

        for(int i=n-1;i>=0;i--){
    
            while( !st.empty() && temperatures[i]>=st.top()[0] ){
                st.pop();
            }
            if(st.empty()){
                ans[i]=0;
            }
            else{
                ans[i]=st.top()[1]-i;


            }
               st.push({temperatures[i],i});
            
           
        }

   

       return ans;
    }
};
