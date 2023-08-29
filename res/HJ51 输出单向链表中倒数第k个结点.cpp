#include <iostream>
#include <vector>
#include <iostream>
#include <iostream>
#include <cstdio>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <deque>
#include <vector>
#include <queue>
#include <string>
#include <cstring>
#include <map>
#include <stack>
#include <set>
#include <unordered_set>
#include <unordered_map>
#include <numeric>
#include <array>
#include <bitset>
#include <regex>

using namespace std;

struct ListNode{
    int m_nKey;
    ListNode* m_pNext;
    ListNode():m_nKey(0),m_pNext(nullptr){};
    ListNode(int x):m_nKey(x),m_pNext(nullptr){};
};

ListNode* getNode(ListNode* node, int& node_num){
    if(node==NULL) return NULL;
    ListNode* head=getNode(node->m_pNext,node_num);
    if(--node_num==0) return node;
    else return head;
}

int main(){
    int node_num,node;
    while(cin>>node_num){
        ListNode* head=new ListNode();//正序构建链表
        ListNode* pre_head=head;
        while(node_num--){
            cin>>node;
            ListNode* next=new ListNode(node);
            head->m_pNext=next;
            head=next;
        }
        cin>>node_num;
        ListNode* rec=getNode(pre_head->m_pNext,node_num);//忘记链表长度，递归找到指定节点
        if(rec!=NULL) cout<<rec->m_nKey<<endl;
        else cout<<"0"<<endl;
    }
    return 0;
}