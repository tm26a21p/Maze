# Maze Solver and Generator

The project Maze allow generation and the solving of mazes, written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).

### File Structure
- The repository contains the totality of source files, excluding unnecessary files like binaries, temporary files, and object files.
- Each sub-directory (solver, generator) contains a Makefile to compile the respective binaries.
- A root Makefile is provided to compile all binaries.

### Project Components

### 1. Generator
- It creates mazes based on given dimensions and an optional "perfect" argument.
- The default maze generation is imperfect unless specified as perfect.
- **Perfect Maze:** A maze without loops or clusters.
- **Imperfect Maze:** A maze with clusters.
- Input for maze generation includes size (width/height).

The maze generator is implemented in the generator directory. It uses a binary tree algorithm to generate mazes.     
core logic is in `generator.c`.
The binary tree algorithm works by dividing the maze area into smaller and smaller sections, each time choosing a random wall to remove. This process continues recursively until the entire maze has been generated.

> learn more about maze perfection: https://en.wikipedia.org/wiki/Maze

### Solver
- It reads a maze from a text file, solves it, and log the results.
- Indicate if no solution is found.
- Both perfect and imperfect mazes can to be solved.

The maze solver uses the [A* algorithm](https://en.wikipedia.org/wiki/A*_search_algorithm) to find the shortest path through the maze as fast as possible.
The A* algorithm works by maintaining a priority queue of potential paths, prioritized by a heuristic that estimates the cost to reach the goal from each node. It continually selects the most promising path and expands it until the goal is reached.

### Maze Representation
- Mazes are represented as rectangular grids in ASCII format.
- `X` denotes walls, and `*` denotes free spaces.
- Movement is allowed in the four surrounding squares (up, down, right, left).
- The maze starts at (0,0) and ends at the bottom right-hand corner.
- A solution is represented by 'o' along the path from start to finish.

### Optimization
- Emphasis on optimizing algorithms for efficiency, particularly for large mazes.


## Conclusion
The Make project offers a comprehensive exploration of maze generation, solving, and optimization techniques.
It was a good technical challenge in C and algorithm design.  
