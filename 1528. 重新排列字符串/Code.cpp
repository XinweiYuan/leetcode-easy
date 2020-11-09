struct node{
    char ch;
    int index;
};
class Solution {
public:
    static bool cmp(node &a, node &b){
        if (a.index < b.index){
            return true;
        }
        return false;
    }
    string restoreString(string s, vector<int>& indices) {
        vector<node> tmp;
        node nod;
        for (int i = 0; i < s.size(); ++i) {
            nod.ch = s[i];
            nod.index = indices[i];
            tmp.push_back(nod);
        }
        sort(tmp.begin(), tmp.end(), cmp);
        string rlt;
        for (auto i : tmp){
            rlt += i.ch;
        }
        return rlt;
    }
};
