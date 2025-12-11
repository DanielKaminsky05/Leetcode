struct ListNode {
    int val;
    ListNode* next;
    ListNode() : val(0), next(nullptr) {}              // <= THIS
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode* next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy;
        ListNode* head3 = &dummy;

        while (list1 && list2) {
            if (list1->val < list2->val) {
                head3->next = list1;
                list1 = list1->next;
            }
            else {
                head3 ->next = list2;
                list2 = list2->next;
            }

            head3 = head3->next;
            
        }

        if (list1) {
            head3->next = list1;
        }

        else {
            head3->next = list2;
        }

        return dummy.next;
    };
};