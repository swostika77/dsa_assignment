# Question 7: Dijkstra's Algorithm for Shortest Paths

## Data Structure Used
We used an **adjacency matrix** to represent a **weighted graph**:

- `graph[i][j]` stores the weight of the edge between vertex `i` and `j`
- `0` indicates **no edge** between two vertices
- Arrays used in the algorithm:
  - `dist[]` → Stores the shortest distance from the source to each vertex
  - `visited[]` → Tracks whether a vertex has been finalized

---

## Functions Description

1. `int minDistance(int dist[], int visited[])`  
   - Finds the **unvisited vertex** with the smallest current distance
   - Returns the index of that vertex

2. `void dijkstra(int src)`  
   - Implements **Dijkstra's algorithm** starting from source vertex `src`  
   - Steps:
     1. Initialize `dist[]` to infinity, except `dist[src] = 0`
     2. Select the unvisited vertex with the **minimum distance**
     3. Update distances of all its neighbors if a shorter path is found
     4. Mark the vertex as visited
     5. Repeat until all vertices are visited
   - Finally, prints distances from source to all vertices

---

## Main Function Overview

1. Takes number of vertices `n` from the user
2. Accepts the **adjacency matrix** for the graph
   - `0` indicates no edge
   - Non-zero integers indicate edge weights
3. Prompts the user for the **source vertex** (0-based indexing)
4. Calls `dijkstra(src)` to calculate and display shortest distances

---

## Sample Input  

Enter the number of vertices:5  
Enter adjacency matrix(0 if no edge):  
0 3 1 0 0  
3 0 7 5 1  
1 7 0 2 0  
0 5 2 0 7  
0 1 0 7 0  
Enter source vertex:0  

---
## Sample Output
Vertex  Distance from Source 0  
0       0  
1       3  
2       1  
3       3   
4       4  


---

## Notes and Observations

- Dijkstra **does not work with negative weights**
- Algorithm uses a **greedy approach** to select the shortest unvisited vertex
- Time complexity: **O(n²)** using adjacency matrix
- The output depends on **0-based indexing** of vertices
- The adjacency matrix approach is simple for **dense graphs**
- `dist[]` array keeps track of shortest distance from the source
- `visited[]` ensures that each vertex is processed **only once**
- The algorithm calculates **shortest paths from a single source** to all other vertices

