
/**
 * deleteNode
 * @version 1.0
 * @since 1.0
 * <p>
 * Created by Murphy at 2020/11/24 23:46
 **/

#pragma once

#include "Learning.hpp"
#include "ListNode.hpp"

/**
 * 删除节点
 * @param node
 */
void deleteNode(ListNode* node)
{
    node->val = node->next->val;
    node->next = node->next->next;
    delete node->next;
}