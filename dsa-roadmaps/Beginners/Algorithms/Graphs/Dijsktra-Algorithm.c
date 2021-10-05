/*Algorithm dijkstraAlgorithm(G, src)
    Input: The graph G with V vertices and the source vertex src
    Output: The shortest path from the source vertex to every other vertex in 
            G or the shortest path tree (SPT)

    //Initialize SPT as an empty set
    
    //Initialize the distance values of all vertices as infinity except the
    //source node
    
    //Initialize the distance value of source node (src) as 0
    
    //Repeat the following until the SPT does not contain all the vertices
    {
        //choose the vertex u which is not present in the SPT and has 
        //the minimum distance value

        //add the vertex u to the SPT

        //update the distance values of the adjacent vertex of vertex u
            for every adjacent vertex v of u {
                if d(u) + w(u, v) < d(v) then
                    d(v) = d(u) + w(u, v)
                //d(u) is the distance between source and vertex u
                //w(u, v) is the weight of the edge between u and v
            }        
    }

    //Print the vertices and their distance from src
*/

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
