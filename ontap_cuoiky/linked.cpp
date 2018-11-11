Node* addNode(Node* head, int index, int value)
{
    if(index == 0)
    {
        head->value = value;
        return head;
    }
    else
    {
        Node *p;
        for(int i = 0;i<index ; i++)
        {
            p = head->nextNode;
        }
        p->value = value;
        return head;
    }
}

Node* deleteNode(Node* head, int index)
{
    if(index == 0)
    {
        Node* p;
        p = head;
        head = head->nextNode;
        delete p;
    }
    else
    {
        Node *preIndex;
        Node *Index;
        for(int i=0;i<index-1 ;i++)
        {
            preIndex = head->nextNode;
        }
        Index = preIndex->nextNode;
        preIndex->nextNode = Index->nextNode;
        delete Index;
    }
    return head;
}
