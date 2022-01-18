class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
       int i;int one=0,f=0;
        if(flowerbed.size()==1)
           {
            if(flowerbed[0]==0)
                one++;
            return one>=n;
        }
        if(flowerbed[0]==1)
            i=1;
        else if(flowerbed[1]==1)
            i=2;
        else{
            one++; 
            i=1;
        }
        while(i<flowerbed.size()-2){
          if(flowerbed[i]==0&&flowerbed[i+1]==0&&flowerbed[i+2]==0)
          {
              i +=2;
              one++;
          }
        else
            i++;
        }
        if(i!=flowerbed.size()-1 && flowerbed[i]==0 && flowerbed[i+1]==0)
            one++;
       
        if(one>=n)
            return true;
        return false;
    }
};