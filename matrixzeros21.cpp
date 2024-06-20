#include <bits/stdc++.h>

using namespace std;


class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        vector<int> v1;
        vector<int> v2;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==0){
                    v1.push_back(i);
                    v2.push_back(j);
                }
            }
        }


        for(int i=0;i<v1.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                matrix[i][j]=0;
            }
        }
        for(int i=0;i<v2.size();i++){
            for(int j=0;j<matrix.size();j++){
                matrix[j][i]=0;
            }
        }
    }
};

int main()
{
    Solution s1;
    vector<vector<int>> matrix1;
    
    
    matrix1={{1,1,1},{1,0,1},{1,1,1}};
    
    s1.setZeroes(matrix1);
    
    
    
    for(int i=0;i<matrix1.size();i++){
        for(int j=0;j<matrix1[0].size();j++){
            cout<<matrix1[i][j];
        }
        cout<<"\n";
    }

    return 0;
}