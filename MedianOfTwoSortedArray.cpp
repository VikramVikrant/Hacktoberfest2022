class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size(), m = nums2.size();
        int  i = 0, j = 0;
        vector<double> merge;
        while(i < n && j < m){
            if(nums1[i] < nums2[j])
                merge.push_back(nums1[i++]);
            else
                merge.push_back(nums2[j++]);
        }
        while(i < n){
            merge.push_back(nums1[i++]);
        }
        while(j < m){
            merge.push_back(nums2[j++]);
        }
        
        int s = merge.size();
   
        
        if(s&1)
            return merge[s/2];
        else
            return (merge[s/2] + merge[(s/2-1)])/2.0;
            
    }
};
