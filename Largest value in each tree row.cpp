 vector<int> largestValues(TreeNode* root) {
       
        
        vector<int> res;  // Answer array
        
        if(!root)
            return res;
        
        queue<TreeNode*> q; // Use this to store levels. 
        q.push(root); 
        int maxx;
        while(!q.empty()){
            int size = q.size(); // Get # of items in queue
            
    maxx=INT_MIN; // Use this to store level. 
            for(int i = 0; i < size; i++){ // Empty out the current level, adding each node's child(ren)
                TreeNode* n = q.front();
                q.pop(); 
                maxx=max(maxx,n->val); 
                
                if(n->left)
                    q.push(n->left);
                if(n->right)
                    q.push(n->right);
            }
            
            res.push_back(maxx); // Append level to answer array
        }
        
        return res;
    
    }
