# Question 5: Undirected Graph Using Adjacency Matrix with BFS and DFS

## Introduction

Graphs are non-linear data structures used to represent relationships between entities. One common way to represent a graph is through an adjacency matrix. Graph traversal algorithms such as Breadth-First Search (BFS) and Depth-First Search (DFS) are fundamental techniques used to explore graph structures.

This program implements an undirected graph using an adjacency matrix and demonstrates BFS and DFS traversal methods.

---

## Problem Statement

The objective of this program is to represent an undirected graph using an adjacency matrix and implement both Breadth-First Search (BFS) and Depth-First Search (DFS) traversal techniques. The program must demonstrate graph traversal starting from a chosen vertex.
 
 ---

## Data Structure Used
We used an **undirected graph** represented by an **adjacency matrix**.

- `adjMatrix[i][j] = 1` → there is an edge between vertex `i` and `j`
- `adjMatrix[i][j] = 0` → no edge between `i` and `j`
- The graph is **undirected**, so for every edge `i-j`, both `adjMatrix[i][j]` and `adjMatrix[j][i]` are set to 1
- BFS uses a **queue** to keep track of vertices to visit
- DFS uses **recursion** and a visited array

---

## Functions Description

1. `void initGraph()`  
   - Initializes all elements of the adjacency matrix to 0  
   - Prepares the graph for edge insertion

2. `void enqueue(int v)`  
   - Adds a vertex `v` to the BFS queue

3. `int dequeue()`  
   - Removes and returns the front vertex from the BFS queue

4. `void BFS(int start)`  
   - Performs **Breadth-First Search** starting from vertex `start`  
   - Visits vertices level by level using a queue  
   - Marks visited vertices to avoid revisiting

5. `void DFS(int v)`  
   - Performs **Depth-First Search** starting from vertex `v`  
   - Uses recursion to go as deep as possible before backtracking  
   - Marks visited vertices to avoid cycles

---

## Main Function Overview

1. Initializes the adjacency matrix using `initGraph()`  
2. Prompts the user to input:
   - Number of vertices `n`
   - Number of edges
   - Edge pairs `(u v)` using 0-based indexing
3. Sets `adjMatrix[u][v] = 1` and `adjMatrix[v][u] = 1` for each edge  
4. Calls DFS starting from vertex 0 and prints traversal  
5. Calls BFS starting from vertex 0 and prints traversal

This demonstrates **both DFS and BFS** clearly on an undirected graph.

---

## Sample Input

Enter number of vertices: 5
Enter the number edges:6
Enter edges(u v) with 0-based indexing:  
0 1
0 2
1 2
1 3
2 4
3 4

---
## Sample Output
DFS traversal starting from vertex 0: 0 1 2 4 3  
BFS traversal starting from vertex 0: 0 1 2 3 4  


**Note:** DFS output may vary depending on the order edges were added.

---

## Notes and Observations

- DFS is **not unique**: it depends on **neighbor order** in adjacency matrix  
- BFS output is determined by **queue order**  
- Using an adjacency matrix is simple for **dense graphs** but uses O(n²) memory  
- The `visited` array prevents visiting the same vertex multiple times  
- 0-based indexing is used consistently for vertices  
- Maximum vertices supported is **100** (`MAX = 100`)




