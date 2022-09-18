class Solution {
public:
    bool isValid(vector<vector<int>>& image,int sr, int sc, int key, int row, int column)
    {
        if(sr>=0 and sc>=0 and sr<row and sc<column and image[sr][sc]==key)
            return true;
        return false;
    }
    void helper(vector<vector<int>>& image,int sr, int sc, int key, int newColor, int row, int column)
    {
      if(sr<0 || sc<0 || sr>=row || sc>=column || image[sr][sc]!=key)
          return ;
        image[sr][sc]=newColor;
     //   if(isValid(image,sr+1,sc,key,row,column))   
       // {
            helper(image,sr+1,sc,key,newColor,row,column);
       // }
       //   if(isValid(image,sr-1,sc,key,row,column))   
        //{
            helper(image,sr-1,sc,key,newColor,row,column);
       // } 
       // if(isValid(image,sr,sc+1,key,row,column))   
       // {
            helper(image,sr,sc+1,key,newColor,row,column);
      //  }
        // if(isValid(image,sr,sc-1,key,row,column))   
       // {
            helper(image,sr,sc-1,key,newColor,row,column);
       // }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) 
    {
          if(image[sr][sc]==newColor)
            return image;
          int m=image.size();
          int n=image[0].size();
        vector<vector<int>> ans(m);
          int key=image[sr][sc];
         helper(image,sr,sc,key,newColor,m,n);
        return image;
    }
};