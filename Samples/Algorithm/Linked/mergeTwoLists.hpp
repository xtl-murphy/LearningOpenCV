
/**
 * mergeTwoLists
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/16 上午8:24
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

ListNode* mergeTwoLists1(ListNode* l1, ListNode* l2)
{
    if (!l1)
    {
        return l2;
    }
    else if (!l2)
    {
        return l1;
    }
    else if (l1->val < l2->val)
    {
        l1->next = mergeTwoLists1(l1->next, l2);
        return l1;
    }
    else
    {
        l2->next = mergeTwoLists1(l1, l2->next);
        return l2;
    }
}