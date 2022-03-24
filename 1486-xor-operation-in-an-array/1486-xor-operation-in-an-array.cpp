class Solution {
public:
    int xorOperation(int n, int start) 
    {
      int Xor=0;
        int count=0;
      while(count<n)
      {
         Xor=Xor^start;
          start+=2; 
          count++;
      }
        return Xor;
    }
};