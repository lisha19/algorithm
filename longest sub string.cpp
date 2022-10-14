int removeElement(vector<int>& nums, int val) {
        #include<bits/stdc++.h>
 
using namespace std;
 
for(auto it =nums.begin();it!=nums.end();it++){
    if(*it==val){
        nums.erase(it);
        it--;
    }
}
return nums.size();


    }
