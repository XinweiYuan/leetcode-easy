class Solution {
public:
    string toLowerCase(string str) {
        for (auto &s : str) {
            if (s>='A' && s <= 'Z')
                s += 32;
        }
        return str;
    }
};
