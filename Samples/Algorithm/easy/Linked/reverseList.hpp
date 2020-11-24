
/**
 * reverseList
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/20 上午8:24
 **/
#pragma once

#include "ListNode.hpp"

/**
 * 反转链表
 * @param head
 * @return
 */
ListNode* reverseList(ListNode* head) {
    ListNode* cur = nullptr, *pre = head;
    while (nullptr != pre)
    {
        ListNode* t = pre->next;
        pre->next = cur;
        cur = pre;
        pre = t;
    }
    return cur;
}
