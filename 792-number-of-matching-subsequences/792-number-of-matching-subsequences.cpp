class Solution {
public:
    int numMatchingSubseq(string s, vector<string>& words) 
    {
         int count=0,k=s.size();
      unordered_map<string,int>mp;
      for(int i=0;i<words.size();i++)
        mp[words[i]]++;
      for(auto x:mp)
      {
        int start1=0,start2=0;
        string p=x.first;
        int m=p.size();
        while(start1<k&&start2<m)
        {
          if(p[start2]==s[start1])
            start1++,start2++;
          else
            start1++;
        }if(start2==m)
          count+=x.second;
      }
        return count;
        /*int count=0;
        int n=s.size();
        for(int i=0; i<words.size(); i++)
        {
            int j=0, k=0;
            string w=words[i];
             int x=w.size();
             while(j<n && k<x)
             {
                 if(s[j]==w[k])
                 {
                     j++, k++;
                 }
                 else
                 j++;
             }
            if(k==x)
            {
                count++;
            }
        }
        return count;*/
    }

   /* vector<string> getSequence(string p, string str)
   {
	if (str.length() == 0)
	{
		vector<string> e;
		e.push_back(p);
		return e;
	}

	char ch = str[0];
	vector<string> left = getSequence(p+ch,str.substr(1));
	vector<string> right = getSequence(p,str.substr(1));
	for(int i=0; i<right.size(); i++)
	{
	    left.push_back(right[i]);
	}
	return left;
  }
    int numMatchingSubseq(string s, vector<string>& words) 
    {
        string p="";
    vector<string>st= getSequence(p,s);  
        int count=0;
        for(int i=0; i<words.size(); i++)
        {
           for(int j=0; j<st.size(); j++)
           {
               if(st[j]==words[i])
               {
                   count++;
                   break;
               }
           }
        }
        return count;
    }*/
};