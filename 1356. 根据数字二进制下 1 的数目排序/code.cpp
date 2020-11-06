class Solution {
public:
    static bool cmp(vector<int> a, vector<int> b) {
        if(a[1]==b[1]) {
            if (a[0] < b[0]) {
                return true;
            }else{
                return false;
            }
        }else if(a[1] < b[1]){
            return true;
        }
        return false;
    }
    vector<int> sortByBits(vector<int>& arr) {
        vector<vector<int> > arr1;
        for(auto i : arr) {
            int num = i;
            vector<int> tmp;
            int none = 0;
            while (i != 0) {
                if ( (i&1) == 1) {
                    ++none;
                }
                i = (i>>1);
            }
            tmp.push_back(num);
            tmp.push_back(none);
            arr1.push_back(tmp);
        }
        sort(arr1.begin(), arr1.end(),cmp);
        for (int i = 0; i < arr1.size(); ++i) {
            arr[i] = arr1[i][0];
        }
        return arr;



    }
};
//写的着实拉胯，时间和空间复杂度都比较高，有时间改进一下
