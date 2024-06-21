class Solution {
public:

    unsigned long long binomialCoefficient(int n, int k) {
        if (k < 0 || k > n) {
            return 0;
        }
        if (k == 0 || k == n) {
            return 1;
        }

        // Take advantage of symmetry property C(n, k) = C(n, n-k)
        if (k > n - k) {
            k = n - k;
        }

        unsigned long long result = 1;
        for (int i = 0; i < k; ++i) {
            result *= (n - i);
            result /= (i + 1);
        }

        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> gen1;
        vector<int> gen2;
        int j;
        for(int i=0;i<numRows;i++){
            gen2={};
            j=0;
            while(j<=i){
                gen2.push_back(binomialCoefficient(i,j));
                j++;

            }
            gen1.push_back(gen2);
        }

        return gen1;

        
    }
};