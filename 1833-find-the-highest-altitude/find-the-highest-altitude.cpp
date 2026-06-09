class Solution {
public:
    int largestAltitude(vector<int>& gain) {
      int curr = 0;
      int maxal = 0;
      for (int i=0; i<gain.size(); i++)
     {
         curr += gain[i];
      maxal = max(curr, maxal);
    }
    return maxal;

    }
};