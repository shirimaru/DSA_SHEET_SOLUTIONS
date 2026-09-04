//array stores the price of the stock on the ith day
#include<bits/stdc++.h>
using namespace std;
class Solution{
    public:
    int max_profit(vector<int>& price){
        int profit, min_price;
        profit = 0;
        for(int i=0;i<price.size()-1;i++){
            min_price = price[i];
            for(int j=i+1;j<price.size();j++){
                //check if current profit is more than the last
                if(price[j]-min_price > profit){
                    profit = price[j]-min_price;
                }
            }
        }
        return profit;
    }
};
int main(){
    Solution obj;
    vector<int> a = {7, 1, 5, 3, 6, 4};
    cout<<obj.max_profit(a)<<endl;
    return 0;
}