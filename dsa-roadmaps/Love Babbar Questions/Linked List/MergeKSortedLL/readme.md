Given K sorted linked lists of different sizes. The task is to merge them in such a way that after merging they will be a single sorted linked list.

Example 1:

        Input:
        K = 4
        value = {{1,2,3},{4 5},{5 6},{7,8}}
        Output: 1 2 3 4 5 5 6 7 8
        Explanation:
        The test case has 4 sorted linked 
        list of size 3, 2, 2, 2
        1st    list     1 -> 2-> 3
        2nd   list      4->5
        3rd    list      5->6
        4th    list      7->8
        The merged list will be
        1->2->3->4->5->5->6->7->8.

Example 2:

        Input:
        K = 3
        value = {{1,3},{4,5,6},{8}}
        Output: 1 3 4 5 6 8
        Explanation:
        The test case has 3 sorted linked
        list of size 2, 3, 1.
        1st list 1 -> 3
        2nd list 4 -> 5 -> 6
        3rd list 8
        The merged list will be
        1->3->4->5->6->8.