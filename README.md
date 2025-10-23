# **Interactive Playground for PageRank Algorithm**
### Using Random Surfer and Power Iteration Methods

---

### **Overview**
This project visualizes how the **PageRank algorithm** ranks the importance of nodes in a directed graph — inspired by how Google ranks web pages.

It compares two approaches:
1. **Random Surfer Model** – simulates a user randomly clicking links across pages.  
2. **Power Iteration Method** – a matrix-based, iterative computation that converges to stable PageRank values.  

Both ultimately produce similar rankings, but through different paths — one probabilistic, the other deterministic.

---

### **Aim**
To build an interactive C++ simulation that explains and compares **Random Surfer** and **Power Iteration** methods for PageRank computation.

---

### **Implementation**
- **Language:** C++  
- **Inputs:** Number of nodes, directed edges, and their connections  
- **Outputs:** PageRank values for each node  
- **Parameters:**  
  - Damping factor (𝑑): 0.85  
  - Convergence threshold (ε): 1e-8  

---

### **Algorithm Summary**

#### 🔹 Random Surfer Model
A probabilistic approach where a “surfer” randomly moves between linked pages, occasionally jumping to a random one.  
After many iterations, pages visited more frequently have higher ranks.

#### 🔹 Power Iteration Method
A deterministic matrix-based approach that repeatedly updates PageRank values until they stabilize, representing the steady-state distribution of importance.

---

### **Sample Input**
4 5

0 1

1 2

2 0

2 3

3 0

---

### **Sample Output**
| Node | Random Surfer | Power Iteration |
|------|----------------|----------------|
| 0 | 0.371852 | 0.372628 |
| 1 | 0.200537 | 0.200365 |
| 2 | 0.245386 | 0.245009 |
| 3 | 0.182225 | 0.182000 |

---

### **Conclusion**
The project successfully demonstrates how PageRank can be computed through two distinct methods that converge to nearly the same result.  
It provides an intuitive way to understand **graph-based ranking**, **probability**, and **iterative convergence** in networks.


