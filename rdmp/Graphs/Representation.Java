/*
1. Input:
- We will be given n(nodes) and m(edges). Assume that the first one is a node and the second one is an edge. (nxm)
- We will also be given if the graph is undirected or directed. 

After, this we will be given m lines that will represent edges like this: (Assume it will be given like a proper matrix) 
[1 2]
[1 3]
[2 4]
[3 4]
[2 5]
[4 5]

2. How to Store??

1. Matrix Way    2. List Way

1. Matrix Way: Use an adjacency matrix to sthore the graph.
   adj[n+1][n+1] (the graph is one indexed)
   So, lets say we want to strore the node 1->2 and 2->1. We will mark the points at 1,2 and 2,1 as 1. we will do the same for other nodes as well. The remaining points can be left
   as 0 or even empty.
   In this case the SC will be : O(n x n), which will be costly

2. List: We can use a Adjacency List: 
   We will use an array of size n+1, adj[n+1], this array will contain n+1 lists inside it. Every index will containing an empty list or vector(in C++). 
   Lets say, node 1 is connected to: node 3 and node 2. So, we will store 3 and 2 into 1st index into the empty list at index 1. Similarily, we will also store 1 in 2nd index and 1
   in 3rd index as well. We will go on like this and store all the adjacent relations. Here, the SC will be O(2E), as each edge will store 2 nodes.

   In case of a directed graph, we just need to add 2 into 1st index but not the other way around. Because, the edge is directed from 1 to 2 and not from 2 to 1. 
   SC here will be O(E).


In case of a Weighted Graph: 
1. In case of Matrix
We wont write the number of the node, instead we will write the weight of that particular edge. So, if we want to store an edge between 1 and 2 whose weight is 3, we will write
3 in the 1st index and 2nd index. 
adj[u][v] = weight;

2. In case of List 
In case of list, we will store pairs in it. for ex, the edge going from node 4 to node 2 has weight 1, node 4 to node 3 has weight 4 and node 4 to node 3 has weight 4. 
We will store it like this:
4: {(2,1),(3,4),(5,3)}
*/

