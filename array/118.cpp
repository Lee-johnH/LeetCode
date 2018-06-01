#include <vector>
using namespace std;

/*
 * Q: Given a non-negative integer numRows, generate the first numRows of Pascal's triangle.
 *    In Pascal's triangle, each number is the sum of the two numbers directly above it.
 *
 */

class Solution {
    public:
        /*
         * 思路：除了第一列和最后一列的元素都是1，其余元素的值为上一层的该列元素与该列左边的元素之和
         *        并且每层的元素个数为当前的层数
         *
         */
        vector<vector<int>> generate(int numRows) {
            vector<vector<int> > ret;
            if(numRows == 0)
                return ret;

            for(int i = 0; i < numRows; i++) {
                vector<int> tmp(i+1, 1);    //每层的元素初始化为1
                for(int j = 0; j <= i; j++) {   //设置第一列到最后一列的元素的值
                    if(j>0 && j<i)
                        tmp[j] = ret[i-1][j] + ret[i-1][j-1];
                }
                ret.push_back(tmp);

            }

            return ret;

        }

};
