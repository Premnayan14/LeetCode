class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
   /* sort(nums1.begin(), nums1.end());
    sort(nums2.begin(), nums2.end());
    
    int i = 0, j = 0;
    vector<int> result;
    
    while (i < nums1.size() && j < nums2.size()) {
        if (nums1[i] == nums2[j]) {
            // Avoid duplicates
            if (result.empty()||result.back() != nums1[i]) {
            result.push_back(nums1[i]);
            }
            i++;
            j++;
        } else if (nums1[i] < nums2[j]) {
            i++;
        } else {
            j++;
        }
    }
    return result;*/
    unordered_set<int> set1(nums1.begin(), nums1.end());
    unordered_set<int> result;
    
    for (int num : nums2) {
        if (set1.count(num)) {
            result.insert(num);
        }
    }
    return vector<int>(result.begin(), result.end());
        }
        
};