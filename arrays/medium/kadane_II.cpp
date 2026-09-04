#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void max_sum(vector<int>& a){
        int run_sum = 0;
        int sum = INT_MIN;
        //variables to keep track of the index of the sub-array with max sum
        int start = 0, ansstart = -1, ansend = -1;
        for(int i=0;i<a.size();i++){
            //keep on adding each element
            run_sum = run_sum + a[i];
            //check whether the current sum is greater than the last one or not
            //if it is, the start of the sub-array will become start and end will be the current index
            if(run_sum>sum){
                sum = run_sum;
                ansstart = start;
                ansend = i;
            }
            //if current sum get -ve then make it zero
            //make start the next index to start a new sub-array
            //this is because adding a negative will ultimately result in a smaller number
            if(run_sum<0){
                run_sum = 0;
                start = i+1;
            }
        }
        cout<<sum<<endl;
        for(int m = ansstart;m<=ansend;m++){
            cout<<a[m]<<" ";
        }
        return;
    }
};
int main(){
    Solution obj;
    vector<int> a = {11, 2, 3, -110, 4, 5, 6};
    obj.max_sum(a);
    cout<<endl;
    return 0;
}