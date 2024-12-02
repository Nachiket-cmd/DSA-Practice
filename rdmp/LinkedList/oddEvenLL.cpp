//Problem: You will be given a SLL and you have to move all the elements in odd places to the left and even ones to the right. 

//Brute Force Soln:
/* 
- We can take a temp node and move start it from head.
- We will move the temp node by two places so that we get access to each odd element.
- Put those elements into a new LL. This will take n/2 iterations. 
- After this, start temp from head->next, which will be 2 index.
- traverse through the even indexed elements the same way and go through the last of the LL.
- At Last, put all those elements back into the the original LL.*/