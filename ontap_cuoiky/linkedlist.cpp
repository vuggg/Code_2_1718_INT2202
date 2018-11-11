Node* addNode(Node* head, int index, int value)
{
    Node *p = new Node;
    p = head;
    for(int i=0;i<index;i++)
    {
        p = p->nextNode;
    }
    p->value = value;
    return head;
}

Node* deleteNode(Node* head, int index)
{
    Node *pre = new Node;
    pre = head;
    if(index == 0)
    {
        head = pre->nextNode;
        delete pre;
        return head;
    }
    for(int i=0;i<index-1;i++)
    {
        pre = pre->nextNode;
    }
    Node *idx = new Node;
    idx = pre->nextNode;
    pre->nextNode = idx->nextNode;
    delete idx;
    return head;
}
