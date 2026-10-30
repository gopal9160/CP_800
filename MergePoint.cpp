    #include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x) : data(x) , next(nullptr) {};
};
int mergepoint(Node* head1,Node* head2){
    Node* a = head1;
    Node* b = head2;
    Node* a1 = head1;
    Node* b1 = head2;
    int len1 = 0;
    while(a1!=nullptr){
        len1++;
        a1 = a1->next;
    }
    int len2 = 0;
    while(b1!=nullptr){
        len2++;
        b1 = b1->next;
    }
    if(len1 >= len2){
        int diff = abs(len1-len2);
        while(diff--){
            a = a->next;
        }
    }else{
        int diff = abs(len2-len1);
        while(diff--){
            b = b->next;
        }
    }
    while(a && b){
        a = a->next;
        b = b->next;
        if(a==b){
            return a->data;
        }
    }
    return -1;
}
int main(){
   Node* common = new Node(7);
   common->next = new Node(8);
   common->next->next = new Node(9);

   //list1
   Node* head1 = new Node(1);
   head1->next = new Node(2);
   head1->next->next = new Node(3);
   head1->next->next->next = common;

   //list2
   Node* head2 = new Node(4);
   head2->next = new Node(5);
   head2->next->next = new Node(6);
   head2->next->next->next = common;

   int ans = mergepoint(head1,head2);

   cout << ans << endl;
    return 0;
}