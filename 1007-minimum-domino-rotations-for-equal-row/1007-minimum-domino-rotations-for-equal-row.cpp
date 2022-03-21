class Solution {
public:
    int minDominoRotations(vector<int>& tops, vector<int>& bottoms) {
       vector<int>top_occ(7, 0);
        vector<int>bottom_occ(7, 0);
        for(int i=0; i<tops.size(); i++)
        {
            top_occ[tops[i]]++;
            bottom_occ[bottoms[i]]++;
        }
        int t_ind =0, b_ind = 0;
        for(int i=0; i<top_occ.size(); i++){
            if(top_occ[i] > top_occ[t_ind])
                t_ind = i;
        }
           
         for(int i=0; i<bottom_occ.size(); i++){
            if(bottom_occ[i] > bottom_occ[b_ind])
                b_ind = i;
        }
        if(top_occ[t_ind] > bottom_occ[b_ind]){
            for(int i=0; i<tops.size(); i++)
                if(tops[i] != t_ind && bottoms[i] != t_ind)
                    return -1;
            return tops.size() - top_occ[t_ind];
           }
                
        else {
            for(int i=0; i<bottoms.size(); i++)
                if(bottoms[i] != b_ind && tops[i] != b_ind)
                    return -1;
              return tops.size() - bottom_occ[b_ind];
        }
        return -1;
    }
};