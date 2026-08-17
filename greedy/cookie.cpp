 #include <vector>
#include <algorithm>
int findContentChildren(std::vector<int>& g,std::vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gs=g.size()-1,ss=s.size()-1,c=0;
        while(gs>=0 && ss>=0){
            if(g[gs]<=s[ss]){
                gs--;
                ss--;
                c++;
            }
            else{
                gs--;
            }
        }
        return c;
    }