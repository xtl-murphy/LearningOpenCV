
/**
 * Listnode
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/17 上午8:24
 **/

#pragma once

struct ListNode
{
    int val;

    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
