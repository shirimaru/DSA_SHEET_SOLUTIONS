//to find the sub-array with largest sum
//simple approach to find the sum of each sub-array and compare 
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void pk(vector<int> a){
        int begin, end, sum, run_sum;
        run_sum = 0;
        sum = INT_MIN;
        for(begin = 0;begin<a.size();begin++){//control the beginning of the sub array
            for(end = a.size()-1;end>=begin;end--){//control the ending of the sub array
                for(int i = begin;i<=end;i++){//once the sub array is selcted, sum the elements in it
                    run_sum =  run_sum + a[i];
                }
                if(run_sum > sum){//verify the sum with the given value
                    sum = run_sum;
                }
                run_sum = 0;
                }
            }
                cout<<"The sum of the sub-array is:"<<sum;
                return;
        }
};
int main(){
    Solution obj;
    vector<int> a = {-2, -3, -7, -2, -10, -4};
    obj.pk(a);
    cout<<endl;
    return 0;
}