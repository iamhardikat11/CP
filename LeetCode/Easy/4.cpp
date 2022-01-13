class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int i=0,j=0;
        int s1=nums1.size();
        int s2=nums2.size();
        vector<int> arr;
        int s3=0;

        while(i<s1 || j<s2)
        {
            if(i>=s1)
            {
                arr.push_back(nums2[j]);
                j++;
                s3++;
            }
            else if(j>=s2)
            {
                arr.push_back(nums1[i]);
                i++;
                s3++;
            }
            else if(nums1[i]<nums2[j])
            {
                arr.push_back(nums1[i]);
                i++;
                s3++;
            }
            else
            {
                arr.push_back(nums2[j]);
                j++;
                s3++;
            }
        }
        if(s3%2!=0)
        {
            return arr[s3/2];
        }
        else
        {
            return (0.0+double(arr[s3/2]+arr[s3/2-1]))/2.0;
        }
        
    }
};
