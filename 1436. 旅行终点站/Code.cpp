class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        string rlt;
        map<string, int> cities;
        for(auto i : paths){
            if(cities.find(i[0]) == cities.end()){
                cities[i[0]] = 2;
            }else{
                ++cities[i[0]];
            }
            if(cities.find(i[1]) == cities.end()){
                cities[i[1]] = 1;
            }else{
                ++cities[i[1]];
            }
        }
        for(auto i : cities){
            if(i.second == 1){
                rlt = i.first;
                break;
            }
        }
        return rlt;
    }
};
