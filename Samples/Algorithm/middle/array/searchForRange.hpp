
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

int binarySearch(vector<int>& nums, int low, int high, int target)
{
    while (low <= high)
    {
        int mid = low + (high - low) * 0.5;
        if (nums[mid] == target)
        {
            return mid;
        }

        if (target > nums[mid])
        {
            low = mid + 1;
        }
        if (target < nums[mid])
        {
            high = mid - 1;
        }
    }
    return -1;
}

vector<int> searchForRange(vector<int>& nums, int target)
{

    int n = nums.size();
    int pos = binarySearch(nums, 0, n - 1, target);

    vector<int> result;
    int low = -1, high = -1;
    if (pos >= 0)
    {
        low = pos;
        int l = low;
        while (l >= 0)
        {
            low = l;
            l = binarySearch(nums, 0, low - 1, target);
        }

        high = pos;
        int h = high;
        while (h >= 0)
        {
            high = h;
            h = binarySearch(nums, high + 1, n - 1, target);
        }
    }

    result.push_back(low);
    result.push_back(high);
    return result;
}

vector<int> searchForRange2(vector<int>& nums, int target)
{

    int n = nums.size();
    int pos = binarySearch(nums, 0, n - 1, target);

    vector<int> result;
    int low = -1, high = -1;

    if (pos >= 0)
    {

    }


    result.push_back(low);
    result.push_back(high);
    return result;
}


