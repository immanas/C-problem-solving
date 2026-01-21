#include <stdio.h>

#define N 4  // Maze size N x N (4x4)

// Check if cell is within bounds and not blocked
int isSafe(int maze[], int x, int y) {
    return (x >= 0 && x < N && y >= 0 && y < N && maze[x * N + y] == 1);
}

// Recursive function to find path
int solveMaze(int maze[], int x, int y, int sol[]) {
    if (x == N - 1 && y == N - 1) {
        sol[x * N + y] = 1;
        return 1;
    }

    if (isSafe(maze, x, y)) {
        sol[x * N + y] = 1;

        // Move Right
        if (solveMaze(maze, x, y + 1, sol)) return 1;

        // Move Down
        if (solveMaze(maze, x + 1, y, sol)) return 1;

        // Backtrack
        sol[x * N + y] = 0;
        return 0;
    }

    return 0;
}

int main() {
    int maze[N * N];
    printf("Enter %d elements (0 or 1) for the maze:\n", N * N);
    for (int i = 0; i < N * N; i++) {
        scanf("%d", &maze[i]);
    }

    int solution[N * N] = {0};

    if (solveMaze(maze, 0, 0, solution)) {
        printf("Path (1 shows the path taken):\n");
        for (int i = 0; i < N * N; i++) {
            printf("%d ", solution[i]);
            if ((i + 1) % N == 0) printf("\n");
        }
    } else {
        printf("No path found.\n");
    }

    return 0;
}
