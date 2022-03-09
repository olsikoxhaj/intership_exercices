int maxSquare(int n, int m, vector<vector<int>> mat){
       int his[n][m];
       for(int j = 0; j < m; j++)
           his[0][j] = mat[0][j];
       
       for(int i = 1; i < n; i++){
           for(int j = 0; j < m; j++){
               if(mat[i][j] == 0)
                   his[i][j] = 0;
               else
                   his[i][j] = his[i-1][j] + 1;
           }
       }
       
       int maxSize = 0;
       for(int i = 0; i < n; i++){
           stack<int> s;
           int nsel[m];
           
           for(int j = 0; j < m; j++){
               while(!s.empty() && his[i][j] <= his[i][s.top()])
                   s.pop();
               
               if(s.empty())
                   nsel[j] = -1;
               else
                   nsel[j] = s.top();
               s.push(j);
           }
           
           while(!s.empty())
               s.pop();
           
           int nser[m];
           
           for(int j = m-1; j >= 0; j--){
               while(!s.empty() && his[i][j] <= his[i][s.top()])
                   s.pop();
               
               if(s.empty())
                   nser[j] = m;
               else
                   nser[j] = s.top();
               s.push(j);
           }
           
           for(int j = 0; j < m; j++){
               int l = nsel[j] + 1;
               int r = nser[j] - 1;
               maxSize = max(maxSize,min(his[i][j],r-l+1));
           }
       }
       
       return (maxSize);
   }
