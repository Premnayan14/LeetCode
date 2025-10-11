class Solution {
private:
    vector<int>nextsmallele(vector<int>arr,int n){
        stack <int> s;
        s.push(-1);
        vector <int>ans(n);
        for(int i=n-1;i>=0;i--){
            int cur=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=cur){
                s.pop();
            }
            // answer is top of stack
            ans[i]=s.top();
            s.push(i);
        }return ans;
    }
    vector<int>prevsmallele(vector<int>arr,int n){
        stack <int> s;
        s.push(-1);
        vector <int>ans(n);
        for(int i=0;i<n;i++){
            int cur=arr[i];
            while(s.top()!=-1 && arr[s.top()]>=cur){
                s.pop();
            }
            // answer is top of stack
            ans[i]=s.top();
            s.push(i);
        }return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {

        int n = heights.size();
        vector<int> st;
        st.reserve(n + 1);
        st.push_back(-1);
        
        int maxArea = 0;
        
        for (int i = 0; i <= n; i++) {
            int h = (i == n) ? 0 : heights[i];
            
            while (st.back() != -1 && heights[st.back()] > h) {
                int height = heights[st.back()];
                st.pop_back();
                int width = i - st.back() - 1;
                int area = height * width;
                if (area > maxArea) maxArea = area;
            }
            
            st.push_back(i);
        }
        
        return maxArea;

        // int n=heights.size();

        // vector<int>next(n);
        // next=nextsmallele(heights,n);
        
        // vector<int>prev(n);
        // prev=prevsmallele(heights,n);
        // int area=INT_MIN;

        // for(int i=0;i<n;i++){
        //     int l=heights[i];
        //     if(next[i]==-1){
        //         next[i]=n;
        //     }
        //     int b=next[i]-prev[i]-1;

        //     int newarea=l*b;
        //     area=max(area,newarea);
        // }
        // return area;
    }
};