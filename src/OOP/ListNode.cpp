#include <iostream>

using namespace std;

struct ListNode
{
    int val;
    ListNode *next;

    ListNode() : val(), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

int main()
{
    ListNode dummy;
    ListNode first(0);
    ListNode second(2, &first);
    ListNode third = ListNode(3, &second);

    // 指针
    // ListNode *p, p->next = &second; // 此时结构体指针 p 未初始化

    ListNode *p = new ListNode();

    ListNode *q = p;
    cout << q->val << endl;

    return 0;
}