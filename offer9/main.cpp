#include <iostream>
#include "Queue.h"

void Test (char actual, char expected)
{
    if(actual == expected)
        printf("Test passed.\n");
    else
        printf("Test failed.\n");
}

int main(int argc, char* argv[])
{
    CQueue<char> queue;
    queue.appendTail('a');
    queue.appendTail('b');
    queue.appendTail('c');


    char head = queue.deleteHead();

    Test(head, 'a');

    head = queue.deleteHead();
    Test(head, 'b');

    head = queue.deleteHead();
    Test(head, 'c');

    queue.appendTail('d');
    head = queue.deleteHead();
    Test(head, 'd');

    queue.appendTail('e');
    head = queue.deleteHead();
    Test(head, 'e');

    head = queue.deleteHead();
    Test(head, 'd');

    return 0;
}