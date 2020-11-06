class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
        for (auto p : pieces) { //遍历 pieces
            auto np = p.size(); //数组中元素个数
            int index(0);
            for (size_t i = 0; i < np; ++i) { //遍历 p 中每个元素
                auto pos = find(arr.begin(), arr.end(), p[i]); //在 arr 中寻找是否存在该元素
                if (pos == arr.end()) { // arr 中找不到
                    return false;
                }else{
                    auto tmp = pos-arr.begin(); //获得此元素在 arr 中的位置
                    if (i == 0){ //第一个元素只需记录其在 arr 中的位置
                        index = tmp;
                    }else{
                        if (tmp-index != 1){ //除了第 1 个元素，在找到位置的同时还要判断与前一个元素在 arr 中的位置是否相差1
                            return false;
                        }
                        index = tmp; //更新位置
                    }
                }
            }
        }
        return true;
    }
};
