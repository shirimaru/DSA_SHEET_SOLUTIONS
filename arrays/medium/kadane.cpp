#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void max_sum(vector<int>& a){
        int run_sum = 0;
        int sum = INT_MIN;
        for(int i=0;i<a.size();i++){
            //keep on adding each element
            run_sum = run_sum + a[i];
            //check whether the current sum is greater than the last one or not
            if(run_sum>sum){
                sum = run_sum;
            }
            //if current sum get -ve then make it zero
            //this is because adding a negative will ultimately result in a smaller number
            if(run_sum<0){
                run_sum = 0;
            }
        }
        cout<<sum;
        return;
    }
};
int main(){
    Solution obj;
    vector<int> a = {-1, -18, -11, -22, -33, -15, -115};
    obj.max_sum(a);
    cout<<endl;
    return 0;
}