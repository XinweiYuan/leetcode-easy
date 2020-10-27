class Solution {
public:
    int calculateTime(string keyboard, string word) {
        int re = 0;
        int len = word.length();
        int tmp[len];
        for (int i = 0; i < len; ++i) {
            tmp[i] = keyboard.find(word[i]);
        }
        re = tmp[0];
        for (int i = 1; i < len; ++i) {
            if (tmp[i] >= tmp[i-1]) {
                re += tmp[i] - tmp[i-1];
            }else{
                re += tmp[i-1] - tmp[i];
            }
        }

        return re;

    }
};

//结果
//执行结果：通过  
//执行用时：4 ms  在所有 C++ 提交中击败了99.36%的用户  
//内存消耗：7.1 MB  在所有 C++ 提交中击败了14.69%的用户  
