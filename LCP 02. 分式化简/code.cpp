class Solution {
public:
    vector<int> fraction(vector<int>& cont) {  
        int n(cont.size());
        if (n == 1)
            return {cont[0], 1};
        int a(1);
        int b(cont[n-1]);
        for (int i = n-2; i >= 0; --i) {
            a = a + cont[i] * b;
            swap(a, b);
        }
        swap(a,b);
        int j = min(a, b);
        for (int i = 1; i <= j; ++i) {
            if (a%i==0 && b%i==0) {
                a /= i;
                b /= i;
                //j = b;
            }
        }
        return {a, b};

    }
};
