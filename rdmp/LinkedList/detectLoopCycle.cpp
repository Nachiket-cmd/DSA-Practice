/*Problem Statement:
You will be given a linked list. If you see an element repeat itself at least once in the linked list, it would mean that there is a cycle/loop in the linked list.
So our job is to figure out whether we have any loop/cycle in the LL*/

/*Naive Solution(My solution):
We can use a data structure, preferably a hash map which can store the entire node and its number of occurences. If any element repeats itself more than once, it means that
there is a cycle in the LL. return true else false.*/

Node* detectLoopCycle(Node* head)
{
    unordered_map<Node*,int>mp;
    Node* temp = head;
    while(temp!=NULL)
    {
        if(mp.find(temp)!=mp.end)
        {
            return true;
        }
        else{
            mp[temp]=1;
            temp = temp->next;
        }
    }
    return false;
}


/*Much better solution:
Using Floyd Tortoise and Hare algorithm
So as we know that in this algo the fast pointer moves twice as fast as the slow. So if there would be a cycle in the LL, we are sure that the slow and fast
pointers will meet with each other at one point or else there is no cycle.*/

Node* detectLoopCy(Node* head)
{
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL || fast!=NULL)
    {
        if(slow == fast) return true;
        slow = slow->next;
        fast = fast->next->next;
    }
    return false;
}
