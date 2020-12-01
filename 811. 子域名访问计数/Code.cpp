class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        vector<string> rlt;
        unordered_map<string, int> hashMap;
        for (auto str : cpdomains) {
            int count = stoi(str.substr(0, str.find(' ')));
            string domain = str.substr(str.find(' ')+1);
            hashMap[domain] += count;
            while (domain.find('.') != domain.npos) {
                domain = domain.substr(domain.find('.')+1);
                hashMap[domain] += count;
            }
        }
        for (auto item : hashMap) {
            rlt.push_back(to_string(item.second) + ' ' + item.first);
        }
        return rlt;
    }
};
