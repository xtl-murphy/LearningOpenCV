
/**
 * mergeTwoLists
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by murphy at 2020/11/16 上午8:24
 **/

#pragma once

#include "ListNode.hpp"


/**
 *
 * 将两个升序链表合并为一个新的 升序 链表并返回。新链表是通过拼接给定的两个链表的所有节点组成的。 
    示例：

    输入：1->2->4, 1->3->4
    输出：1->1->2->3->4->4
 *
 * @param l1
 * @param l2
 * @return
 */
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