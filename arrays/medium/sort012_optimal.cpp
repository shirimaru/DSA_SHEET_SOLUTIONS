//sorting an array of 0s, 1s and 2s
//using Dutch national flag algorithm
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    void srt(vector<int>& a){
        //take three pointers low, mid and high
        //0s are stored from 0 to low-1
        //1s are stored from low to mid-1
        //2s are stored from high+1 to a.size()-1   
        int low = 0, mid = 0, high = a.size()-1;
        while(mid<=high){
            //if element is zero swap with the low index and increment both low and mid
            if(a[mid] == 0){
                swap(a[low], a[mid]);
                low++;
                mid++;
            //if one is encountered just increment mid    
            }else if(a[mid]==1){
                mid++;
            //if two is encountered swap with high index and decrement high    
            }else{
                swap(a[high], a[mid]);
                high--;
            }
        }
        for(auto x:a){
        cout<<x<<" ";
    }
    cout<<endl;
    }
};
int main(){
    Solution obj;
    vector<int> a = {1, 0, 2, 1, 0};
    obj.srt(a);
    return 0;
}