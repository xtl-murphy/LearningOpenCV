//
// Created by 61072 on 2021/1/18.
//

#pragma once

#include "vector"

using namespace std;

/**
 *
 * 对于非负整数 X 而言，X 的数组形式是每位数字按从左到右的顺序形成的数组。例如，如果 X = 1231，那么其数组形式为 [1,2,3,1]。

    给定非负整数 X 的数组形式 A，返回整数 X+K 的数组形式。
 * @param A
 * @param K
 * @return
 */

vector<int> addToArrayForm(vector<int>& A, int K)
{
    std::vector<int> result;
    int lastNum = K, i = A.size() - 1;
    while (i >= 0 || lastNum > 0)
    {
        if (i >= 0)
        {
            lastNum += A[i--];
        }
        result.push_back(lastNum%10);
        lastNum /= 10;
    }
    reverse(result.begin(), result.end());
    return result;
}
