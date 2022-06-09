long long multiplyTwoLists(Node* first, Node* second)
{
  long long num1 = 0, num2 = 0;
    while (first || second) {
        if (first) {
            num1 = ((num1)*10) + first->data;
            first = first->next;
        }
        if (second) {
            num2 = ((num2)*10) + second->data;
            second = second->next;
        }
    }
    return ((num1) * (num2));
}
