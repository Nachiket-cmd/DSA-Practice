/* Hashing is basically pre storing/ fetching. 
How can we hash alphabets? 
we can use the ASCII value of the alphabets. 
Lets say that all the alphabets in the array are lowercase. We can simple do 'd'-'a' and get the index value of these numbers and make it right.


The best way to store this is using map.
the map will store the key and value. It can store the frequency of any integer, character or anthing as key values. Also, it stores this dynamically and sorts it as well. (log N) TC in all cases.
But, in map the worst case can be logN.

So, unordered map is the way to go. In this, the elements are not sorted and the time complexity to fetch anything in unordered_map will be 0(1).


Hashing is done by : 
Divison Method Mid Square Method and Folding Method.

Division Method: In the division method, we use chaining method to manage this. So, first of all we trim the numbers by doing modulo with 10. Then we will store the number in the index after doing % . Now, in this case we have the 
risk of collision. To avoid collision, we chain the elements with each other using linked list and put them in sorted order in the same index as before.

COLLISIONS: When the indexes referencing to two elements is same while hashing. It leads to a phenomenon known as collision.

*/
