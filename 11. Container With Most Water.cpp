class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0, right=height.size()-1, maxarea=0;
        while(left<right){
            int h=min(height[left],height[right]);
            int b=right-left;
            int area=h*b;
            maxarea=max(maxarea,area);
            // move the pointer with the smaller height
            if(height[left]<height[right]){
                left++;
            }
            else{
                right--;
            }
        }return maxarea;
    }
};