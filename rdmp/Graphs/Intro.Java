/*
  UNDIRECTED GRAPH: The graphs whose edges(lines) do not have direction.
  DIRECTED GRAPH: The graphs whose edges do have a direction are directed graphs. 
  The circles in the graphs are known as nodes/vertex just like in trees. We can number the nodes in any order. 
  - In directed graphs, we can also have bi directional directed edges. 4->1,1->4.

  CYCLES: If you are starting from a node, you are reaching back to that node. There can be multiple cycles in a graph. It is not a compulsion for a graph to contain a cycle.
  So, if there is atleast one cycle in a graph and is undirected, it is known as undirected cyclic graph. In case of a cyclic graph, it has to start from one node and end at that 
  node in the same direction we are given, then only it can be called as a directed cyclic graph. 
  If the graph is directed but there is no cycle in the graph, then it is known as a directed acyclic graph.

  PATH:It contains a lot of nodes and each of them are REACHABLE. Also, we cannot have a node appearing twice in a path. 
  Anything which has nodes and vertices is a graph. This is the minimal condition for a DS to be called a graph.

  DEGREES IN A GRAPH: 
  - It is equal to the number of edges that go inside or outside that particular edge in case of a directed graph.  
  - For an undirected graph, it is equal to the number of edges connected to that particular node.
  Total Degree of a graph is equal to the twice the number of edges. 
  Total Degree of a Graph= 2 X E(no of Edges)


  DIRECTED GRAPH: 
  1. InDegree(node)= no of incoming edges
  2. OutDegree(node)= no of outgoing edges
  
  Edge Weight: Every edge will have a weight. If the weights are not assigned, assume that the weight of that particular edge will be 1. 
 */