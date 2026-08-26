#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    bool ts(vector<int> a, int target){ 
        int i, j, sum;
        for(int i = 0;i<a.size()-1;i++){
            for(int j = i+1;j<a.size();j++){
                sum = a[i]+a[j];
                if(sum==target){
                    return true;
                }
            }
        }
        return false;
    } 
};
int main(){
    Solution obj;
    int t;
    cout<<"Enter the target:";
    cin>>t;
    vector<int> a = {2,6,5,8,11};
    cout<<obj.ts(a, t);
    return 0;
}