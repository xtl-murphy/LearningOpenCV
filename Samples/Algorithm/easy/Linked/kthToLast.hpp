
/**
 * kthToLast
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/11/24 23:50
 **/

#pragma once

#include "Learning.hpp"
#include "ListNode.hpp"

/**
 *
 * 问题：实现一种算法，找出单向链表中倒数第 k 个节点。返回该节点的值。
 *
 * 这题要求链表的倒数第k个节点，
 * 最简单的方式就是使用两个指针，
 * 第一个指针先移动k步，然后第二个指针再从头开始，这个时候这两个指针同时移动，
 * 当第一个指针到链表的末尾的时候，返回第二个指针即可。
 * @param head
 * @param k
 * @return
 */

int kthToLast(ListNode* head, int k)
{
    ListNode *first = head;
    ListNode *second = head;

    while (k-- > 0)
    {
        first = first->next;
    }

    //然后两个指针在同时前进
    while (first)
    {
        first = first->next;
        second = second->next;
    }
    return second->val;
}

