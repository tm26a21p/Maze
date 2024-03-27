# Dante’s Maze Solver and Generator

## Technical Overview

### Introduction
The project "Dante’s Maze" aims optimize the generatiion and the solving of mazes. It is implemented in the C programming language.

- **Built-in:** C

### File Structure
- The repository contains the totality of source files, excluding unnecessary files like binaries, temporary files, and object files.

### Project Components

#### 1. Generator
- The generator is a binary named `generator`
- It creates mazes based on given dimensions and an optional "perfect" argument.
- The default maze generation is imperfect unless specified as perfect.

> learn more about maze perfection: https://en.wikipedia.org/wiki/Maze

#### 2. Solver
- The solver is a binary named `solver`
- It reads a maze from a text file, solves it, and prints the solution to the standard output.
- If no solution is found, it prints "no solution found."

#### 3. Makefile
- Each sub-directory (solver, generator) contains a Makefile to compile the respective binaries.
- A root Makefile is provided to compile all binaries.

### Maze Representation
- Mazes are represented as rectangular grids in ASCII format.
- 'X' denotes walls, and '*' denotes free spaces.
- Movement is allowed in the four surrounding squares (up, down, right, left).
- The maze starts at (0,0) and ends at the bottom right-hand corner.
- A solution is represented by 'o' along the path from start to finish.
- Start and finish points can be occupied, indicating no solution.

### Maze Generation
- **Perfect Maze:** A maze without loops or clusters.
- **Imperfect Maze:** A maze with clusters.
- Input for maze generation includes size (width/height).
- Output is displayed on the standard output.
The maze generator is implemented in the generator directory. It uses a binary tree algorithm to generate mazes. The main entry point is in main.c, and the core logic is in generator.c.
The binary tree algorithm works by dividing the maze area into smaller and smaller sections, each time choosing a random wall to remove. This process continues recursively until the entire maze has been generated.

### Maze Solving
- The solver accepts a maze file name as input and outputs the solution to the standard output.
- Both perfect and imperfect mazes need to be solved.
The maze solver is implemented in the solver directory. It uses the A* algorithm to find the shortest path through the maze. The main entry point is in main.c, and the core logic is spread across multiple files such as get_goal.c, get_node_neighbors.c, and lowest_f_cost.c.

The A* algorithm works by maintaining a priority queue of potential paths, prioritized by a heuristic that estimates the cost to reach the goal from each node. It continually selects the most promising path and expands it until the goal is reached.

### Optimization
- Emphasis on optimizing algorithms for efficiency, particularly for large mazes.
- Options to prioritize between RAM and CPU usage.
- Consideration for system-dependency, maze-dependency, and randomness in algorithm design.


## Conclusion
The "Dante’s Maze" project offers a comprehensive exploration of maze generation, solving, and optimization techniques.It was a good technical challenges in programming and algorithm design.     
Through this project, I learned proficiency in C programming, algorithm optimization, and problem-solving skills.
