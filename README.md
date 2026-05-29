# 📊 Graph Implementation — Directed & Weighted Directed

> **Course:** Data Structures and Problem Solving  
> **Assignment:** Q50 &nbsp;|&nbsp; **Author:** Youssef Amr Abdelrahman (ID: 23P0257)  
> **Language:** C++17 &nbsp;|&nbsp; **University:** Ain Shams University

---

## 📌 Problem Statement

Implement a **graph** data structure using an **adjacency list** (STL vectors) in two different forms:

1. **Directed Graph** — edges have direction, no weights
2. **Weighted Directed Graph** — edges have both direction and a weight value

Both implementations visualize the graph structure by printing the full adjacency list.

---

## 📂 Repository Structure

```
graph-implementation-cpp/
│
├── README.md
│
├── code/
│   ├── directed_graph.cpp           ← Directed graph using adjacency list
│   └── weighted_directed_graph.cpp  ← Weighted directed graph using adjacency list
│
└── report/
    └── Graph_Report.pdf             ← Full assignment report (problem + solution + analysis)
```

---

## 🧠 Implementations

### 1. Directed Graph

Each edge `{src, dest}` creates a **one-way connection** from `src` to `dest` only.

```
Edges: {0,2}, {0,3}, {1,3}, {1,4}, {2,5}, {3,5}, {4,5}, {4,6}
Total nodes: 7
```

```
0 ──► 2, 3
1 ──► 3, 4
2 ──► 5
3 ──► 5
4 ──► 5, 6
5 ──► (none)
6 ──► (none)
```

### 2. Weighted Directed Graph

Each edge `{src, dest, weight}` adds a **cost** to the directed connection.  
Stored as `vector<vector<pair<int,int>>>` — each pair holds `(destination, weight)`.

```
Edges: {0,2,9}, {0,3,2}, {1,3,4}, {1,4,7}, {2,5,8}, {3,5,6}, {4,5,5}, {4,6,3}
Total nodes: 7
```

```
(0 → 2, w=9)  (0 → 3, w=2)
(1 → 3, w=4)  (1 → 4, w=7)
(2 → 5, w=8)
(3 → 5, w=6)
(4 → 5, w=5)  (4 → 6, w=3)
```

---

## ✅ Output

**Directed Graph:**
```
0 --> 2 3
1 --> 3 4
2 --> 5
3 --> 5
4 --> 5 6
5 -->
6 -->
```

**Weighted Directed Graph:**
```
(0, 2, 9) (0, 3, 2)
(1, 3, 4) (1, 4, 7)
(2, 5, 8)
(3, 5, 6)
(4, 5, 5) (4, 6, 3)
```

---

## 📊 Comparison

| Feature | Directed Graph | Weighted Directed Graph |
|---|---|---|
| Edge type | `{src, dest}` | `{src, dest, weight}` |
| Storage per edge | `int` | `pair<int,int>` |
| Time complexity | O(V + E) | O(V + E) |
| Space complexity | O(V + E) | O(V + E) |
| Use cases | Dependency graphs, DAGs | Road networks, flow networks |

---

## 🚀 How to Run

**Prerequisites:** C++17 compiler (`g++`, `clang++`, or MSVC)

```bash
# Clone the repo
git clone https://github.com/Eng-Youssef-Amr-Adbdelrahman/graph-implementation-cpp.git
cd graph-implementation-cpp/code

# Compile directed graph
g++ -std=c++17 -O2 -o directed_graph directed_graph.cpp

# Compile weighted directed graph
g++ -std=c++17 -O2 -o weighted_directed_graph weighted_directed_graph.cpp

# Run
./directed_graph
./weighted_directed_graph
```

---

## 🎬 Demo Videos

### Directed Graph
[![Directed Graph](https://img.youtube.com/vi/gGTGoLTwCfA/maxresdefault.jpg)](https://youtu.be/gGTGoLTwCfA?si=6_ac2YCt5MPeD5tq)

### Weighted Directed Graph
[![Weighted Directed Graph](https://img.youtube.com/vi/zWKxEdO-iwo/maxresdefault.jpg)](https://youtu.be/zWKxEdO-iwo?si=4N6D1TeYwVU8bnMQ)

---

## 📚 Report

The full assignment report covers the problem description, solution design, full C++ source code, output, complexity analysis, advantages, and real-world use cases.

📄 [View the full report →](report/Graph_Report.pdf)

---

<div align="center">

**Data Structures and Problem Solving &nbsp;|&nbsp; Ain Shams University &nbsp;|&nbsp; Assignment Q50**

</div>
