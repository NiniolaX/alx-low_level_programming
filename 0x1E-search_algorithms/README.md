# 0x1E - SEARCH ALGORITHMS
This repository contains my C implementation of some search algorithms.

## Files
1. 0-linear.c - Linear search algorithm.
2. 1-binary.c - Binary search algorithm.
3. 2-O - time complexity (worst case) of a linear search in an array of
	size n.
4. 3-O - Space complexity (worst case) of an iterative linear search algorithm
	in an array of size n.
5. 4-0 - Time complexity (worst case) of a binary search in an array of size n.
6. 5-0 - Space complexity (worst case) of a binary search in an array of size n.
7. 6-0 - Space complexity of the function below:
int **allocate_map(int n, int m)
{
     int **map;

     map = malloc(sizeof(int *) * n);
     for (size_t i = 0; i < n; i++)
     {
          map[i] = malloc(sizeof(int) * m);
     }
     return (map);
}
