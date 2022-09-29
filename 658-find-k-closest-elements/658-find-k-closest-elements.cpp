class Solution {
public:
    
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         if(k == arr.size())
//             return arr;
//        vector<pair<int, int>>ans;
//        for(int i=0; i<arr.size(); i++){
//             int diff = abs(arr[i]-x);
//            ans.push_back({diff, arr[i]});
//        }
//         sort(ans.begin(), ans.end());
//         vector<int>final;
//         for(int i=0; i<k; i++)
//             final.push_back(ans[i].second);
        
//         sort(final.begin(), final.end());
//         return final;
//     }
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int s = 0;
        int e = arr.size()-1;
        while(e-s >= k){
            if(abs(arr[s]-x) <= abs(arr[e]-x))
                e--;
            else s++;
        }
        return vector<int>(arr.begin()+s, arr.begin()+e+1);
    }
};