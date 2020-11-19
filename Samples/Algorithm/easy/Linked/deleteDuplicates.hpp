
/**
 * deleteDuplicates
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/17 上午8:22
 **/

#pragma once

#include "ListNode.hpp"

ListNode* deleteDuplicates(ListNode* head)
{
    if (!head || !head->next)
    {
        return head;
    }

    ListNode* p = head;
    while (nullptr != p->next && nullptr != p)
    {
        if (p->val == p->next->val)
        {
            p->next = p->next->next;
        }
        else
        {
            p = p->next;
        }
    }
    return head;
}


