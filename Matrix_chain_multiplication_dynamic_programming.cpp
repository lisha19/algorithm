int dp[100+1][100+1];
   
int solve(int arr[],int i,int j ){
       if(i>=j){
           return 0;
       }
       
       if(dp[i][j]!=-1){
           return dp[i][j];
       }
       
       int ans=INT_MAX;
       
       for(int k=i;k<=j-1;k++){
           int temp=solve(arr,i,k)+solve(arr,k+1,j)+arr[i-1]*arr[k]*arr[j];
           ans=min(ans,temp);
       }
       
       return dp[i][j] = ans;
   }
   
    int matrixMultiplication(int N, int arr[])
    {
        // code here
        for(int i=0;i<101;i++){
            for(int j=0;j<101;j++){
                dp[i][j]=-1;
            }
        }
        
        return solve(arr,1,N-1);
    }
