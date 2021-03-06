
/**
 * hasCycle
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/18 上午8:26
 **/

#pragma once

#include "ListNode.hpp"
#include <unordered_set>

/**
 * 环形链表
 * @param head
 * @return
 */
bool hasCycle(ListNode *head)
{
    std::unordered_set<ListNode*> seen;
    while (nullptr != head)
    {
        if (seen.count(head))
        {
            return true;
        }
        seen.insert(head);
        head = head->next;
    }
    return false;
}
