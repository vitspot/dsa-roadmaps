#include<stdio.h>
#include<stdbool.h>
#include <limits.h>

#define V 9

//Utility functions
int minDist(int d[], bool SPT[]){
	int min = INT_MAX, min_index;

	for (int v = 0; v < V; v++)
		if (SPT[v] == false && d[v] <= min)
			min = d[v], min_index = v;

	return min_index;
}

void printSPT(int d[]){
	printf("Vertex \t\t Shortest distance from source\n");
	for (int i = 0; i < V; i++)
		printf("%d \t\t %d\n", i, d[i]);
}

void dijkstraAlgorithm(int G[V][V], int source){
	int d[V]; //ith element is the shortest distance from source to ith vertex
	bool SPT[V]; //ith element is true if ith node is included in SPT

	//initialize d = infinity except the source node
    for (int i = 0; i < V; i++)
		d[i] = INT_MAX, SPT[i] = false;

	d[source] = 0;

	for (int count = 0; count < V - 1; count++) {
		int u = minDist(d, SPT); //minimum distance vertex

		SPT[u] = true; //vertex now included in SPT

		for (int v = 0; v < V; v++)
			if (!SPT[v] && G[u][v] && d[u] != INT_MAX
				&& d[u] + G[u][v] < d[v])
				d[v] = d[u] + G[u][v];
	}

	printSPT(d);
}

//Driver code
int main(){
    int G[V][V];
    printf("Enter the elements (edge weights) of the graph in the adjacency matrix form: ");
    for (int i = 0; i < V; i++){
        for (int j = 0; j < V; j++){
            scanf("%d", &G[i][j]);
        }
    }
 
	dijkstraAlgorithm(G, 0);
}
