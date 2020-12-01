
/**
 * intervalIntersection
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/12/1 10:45
 **/

#include "vector"

using namespace std;

/**
 * 区间的交集
 * @param A
 * @param B
 * @return
 */

vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B)
{
    vector<vector<int>> res;
    int N1 = A.size();
    int N2 = B.size();
    res.reserve(N1 + N2);

    int i = 0;
    int j = 0;
    while (i < N1 && j < N2)
    {
        int l = max(A[i][0], B[j][0]);
        int r = min(A[i][1], B[j][1]);
        if (l <= r)
        {
            res.push_back({l, r});
        }
        if (A[i][1] >= B[j][1])
        {
            ++j;
        }
        else
        {
            ++i;
        }
    }
    return res;
}


