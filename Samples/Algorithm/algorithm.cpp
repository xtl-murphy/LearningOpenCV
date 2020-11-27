
#include "easy/Linked/mergeTwoLists.hpp"
#include "middle/array/searchForRange.hpp"
#include "easy/Linked/reverseList.hpp"
#include "Learning.hpp"

int main()
{
    /**
     * ListNode
     */
    ListNode node1 = 1;
    ListNode node2 = 2;
    ListNode node3 = 3;
    ListNode node4 = 4;
    ListNode node5 = 5;
    ListNode node6 = 6;
    node1.next = &node3;
    node3.next = &node5;
    node2.next = &node4;
    node4.next = &node6;
//
//    ListNode *node = mergeTwoLists1(&node1, &node2);
//    while (node)
//    {
//        LOGE("Algorithm", "List node %d", node->val);
//        node = node->next;
//    }

    /**
     * reverseList
     **/
//    ListNode* node = &node1;
//    while (node)
//    {
//        LOGE("Algorithm", "List node %d", node->val);
//        node = node->next;
//    }
//
//    ListNode* reverseNode = reverseList(&node1);
//
//    while (reverseNode)
//    {
//        LOGE("Algorithm", "reverse List node %d", reverseNode->val);
//        reverseNode = reverseNode->next;
//    }


    /**
     * array
     */

    std::vector<int> list = {0, 1, 2, 3, 4, 4, 4, 8, 8, 9, 18};
    std::vector<int> newList = searchForRange(list, 4);

    for (int i = 0; i < newList.size(); ++i)
    {
        LOGNOMSG("Algorithm", "array node %d", newList[i]);
    }

    return 0;
}