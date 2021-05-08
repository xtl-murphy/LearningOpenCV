

/**
 * spiralOrder
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2021/5/8 17:06
 **/

#pragma once

#include "Learning.hpp"
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& matrix)
{
    if(matrix.empty()) return {};

    vector<int> res;
    int l = 0;                       //左边界
    int r = matrix[0].size() - 1;    //右边界
    int t = 0;                       //上边界
    int b = matrix.size() - 1;       //下边界
    while(true){
        //从左往右
        //列在变，列为循环值
        //从左往右的下一步是往下走，上边界内缩，故++t
        for(int i = l; i <= r; i++)
        {
            res.push_back(matrix[t][i]);
        }
        if(++t > b) break;
        //从上往下，行在变
        //从上往下的下一步是从右往左，右边界收缩，--r
        for(int j = t; j <= b; j++)
        {
            res.push_back(matrix[j][r]);
        }
        if(--r < l) break;
        //从右向左，列在变
        //从右往左的下一步是从下往上，下边界收缩，--b
        for(int i = r; i >= l; i--)
        {
            res.push_back(matrix[b][i]);
        }
        if(--b < t) break;
        //从下到上，行在变
        //从下到上的下一步是从左到右，左边界收缩，++l
        for(int i = b; i >= t; i--)
        {
            res.push_back(matrix[i][l]);
        }
        if(++l > r) break;
    }

    return res;
}
