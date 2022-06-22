class Solution {
public:
//     int partioning(vector<int> &nums, int p, int r)
//     {
//         int x = nums[r];
//         int i = p-1;
//         for(int j = p; j<r; j++)
//         {
//             if(nums[j] <= x){
//                 i++;
//                 swap(nums[i], nums[j]);
//             }
//         }
//          swap(nums[i+1], nums[r]);
//         return i+1;
//     }
//     int quickSelect(vector<int>& nums, int p, int r, int k)
//     {
//         if(p == r)
//             return nums[p];
        
//        int q = partioning(nums, p, r);   
//         if(q == k) return nums[q];
//         else if(k < q)
//             return quickSelect(nums, p, q-1, k);
//         else 
//             return quickSelect(nums, q+1, r, k);
        
//     }
    
    int findKthLargest(vector<int>& nums, int k) {
        
       
       // return quickSelect(nums, 0, nums.size()-1, nums.size()-k);
        
        priority_queue<int, vector<int>, greater<int>>pq;
        for(int i=0; i<k; i++)
            pq.push(nums[i]);
        for(int i=k; i<nums.size(); i++)
        {
            if(nums[i] > pq.top())
            {
                pq.pop();
                pq.push(nums[i]);
            }
        }
        return pq.top();
        
    }
};