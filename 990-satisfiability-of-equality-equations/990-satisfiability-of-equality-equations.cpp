class Solution {
public:
    int find(int x, int parent[])
    {
        if(parent[x]==x)
            return x;
        return find(parent[x],parent);
    }
    bool equationsPossible(vector<string>& equations) 
    {
        int uf[26];
        for(int i=0; i<26; i++)
        {
            uf[i]=i;
        }
        for(auto it: equations)
        {
            if(it[1]=='=')
            {
               uf[find(it[0]-'a',uf)]=find(it[3]-'a',uf); 
            }
        }
        for(auto it: equations)
        {
            if(it[1]=='!' && uf[find(it[0]-'a',uf)]==uf[find(it[3]-'a',uf)])
                return false;
        }
        return true;
    }
};