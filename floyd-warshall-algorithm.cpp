int networkDelayTime(vector<vector<int>>& times, int N, int K) {
        
  vector<vector<int>> g(N,vector<int>(N,600000));
  int ret=0;
        
  for(auto it : times)
      g[it[0]-1][it[1]-1] = it[2];
      for(int i=0; i<N; i++)
          for(int j=0; j<N;j++)
              if(i==j) g[i][j]=0;
        
      for(int k = 0; k< N; k++)
          for(int i=0; i<N; i++)
              for(int j=0; j<N;j++) 
                  if(g[i][j]>g[i][k]+g[k][j])
                      g[i][j] = g[i][k]+g[k][j];
        
        for(int i=0;i<N;i++){
            if(g[K-1][i]==600000) return -1;
            ret=max(ret,g[K-1][i]);
        }
  
    return ret;

}
