#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int>& nums, vector<int> output, int index, vector<vector<int>>& ans) {
    if (index >= nums.size()) {
        ans.push_back(output);
        return;
    }

    // Recursive case: Exclude the current element
    solve(nums, output, index + 1, ans);

    // Include the current element
    output.push_back(nums[index]);
    solve(nums, output, index + 1, ans);
}

vector<vector<int>> subset(vector<int>& nums) {
    vector<vector<int>> ans;
    vector<int> output;
    int index = 0;
    solve(nums, output, index, ans);
    return ans;
}

int main() {
    vector<int> num = {1, 2, 3};
    vector<vector<int>> ans = subset(num);

    // Print the subsets
    for (const auto& subset : ans) {
        cout << "{ ";
        for (int num : subset) {
            cout << num << " ";
        }
        cout << "}" << endl;
    }

    return 0;
}
