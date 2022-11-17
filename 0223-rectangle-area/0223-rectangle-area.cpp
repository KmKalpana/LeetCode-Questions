class Solution {
public:
   int computeArea(int A, int B, int C, int D, int E, int F, int G, int H) 
    {
        int area1 = (C-A)*(D-B);
        int area2 = (G-E)*(H-F);
       int overLappedArea=max(min(C,G)-max(A,E),0)*max(min(D,H)-max(B,F),0);
       return area1+area2-overLappedArea;
       
    }
};