#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    vector<int> srt(vector<int>& a){
        int count0 = 0, count1 = 0, count2 = 0;
        //count the number of occurences of each element
        for(int i = 0;i<a.size();i++){
            if(a[i]==0){
                count0++;
            }else if(a[i]==1){
                count1++;
            }else{
                count2++;
            }
        }
        //place each element in order
        for(int i = 0;i<a.size();i++){
            if(count0!=0){
                a[i] = 0;
                count0--;
            }else if(count1!=0){
                a[i] = 1;
                count1--;
            }else{
                a[i] = 2;
                count2--;
            }
        }
        return a;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 0, 2, 1, 0};
    a = obj.srt(a);
    for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}