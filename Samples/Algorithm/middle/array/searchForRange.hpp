
/**
 * searchForRange
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/11/19 10:34
 **/

#pragma once

#include "vector"

using namespace std;

vector<int> searchForRange(vector<int>& array, int target)
{
    vector<int> list;
    int n = array.size();
    if (array.empty())
    {
        return {0};
    }
    else
    {
        int low = 0;
        int high = n - 1;

        while (low <= high)
        {
            int mid = low + (high - low) * 0.5;
            if (array[mid] >= target)
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }

        if (low < n && array[low] >= target)
        {
            list.push_back(array[low]);
        }
        else
        {
            return { 0 };
        }

        high = n - 1;
        while(low <= high)
        {
            int mid = low + (high - low) * 0.5;
            if(array[mid] <= target)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }

        list.push_back(array[high]);
        return list;
    }
}


