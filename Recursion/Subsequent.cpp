#include<bits/stdc++.h>
using namespace std;
class Subsequent {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        subseq(nums, 0, nums.size(), ans, temp);
        return ans;
    }
    
private:
    void subseq(vector<int>& arr, int index, int n, vector<vector<int>>& ans, vector<int>& temp) {
        if (index == n) {
            ans.push_back(temp);
            return;
        }
        
        subseq(arr, index + 1, n, ans, temp);
        
        temp.push_back(arr[index]);
        subseq(arr, index + 1, n, ans, temp);
        temp.pop_back(); 
    }
};
int main(){
    Subsequent obj;
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> subsets = obj.subsets(nums);
    
    for (auto subset : subsets) {
        cout << "{ ";
        for (auto num : subset) {
            cout << num << " ";
        }
        cout << "}  " << endl;
    }
return 0;
}