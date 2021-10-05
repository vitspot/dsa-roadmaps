/*Algorithm BFS(G, src)
    Input: The graph G The graph G with V vertices and E edges and source vertex src
    Output: The breadth first search of G

    //initialize the vertices of G
    for each vertex u in G except src{
        u.visited = 0 //if vertex is visited or not
        u.d = infinity //distance from src
        u.pi = NIL //predecessor of u
    }

    src.visited = 1 ////source vertex is visited, print src
    src.d = 0
    src.pi = NIL

    //Create an empty queue Q
    //enqueue the source vertex into Q

    while Q is not empty{
        //dequeue Q and assign its value to u
        for every adjacent vertex v of u{
            if v.visited == 0 then{
                v.visited = 1 //vertex is visited, print v
                v.d = u.d + 1 //distance of v from src 
                              //is distance of u from src + 1
                v.pi = u //predecessor of v is u
                //enqueue v into Q   
            }
        } 
    }
*/

#include <stdio.h>
#include <stdlib.h>
#define SIZE 40

//Required structures
struct Queue {
    int items[SIZE];
    int front;
    int rear;
};

struct node {
    int vertex;
    struct node* next;
};

struct Graph {
    int V;
    struct node** adj;
    int* visited;
};

//Utility functions
struct node* createNode(int v) {
  struct node* newNode = malloc(sizeof(struct node));
  newNode->vertex = v;
  newNode->next = NULL;
  return newNode;
}

struct Graph* createGraph(int V) {
  struct Graph* G = malloc(sizeof(struct Graph));
  G->V = V;

  G->adj = malloc(V*sizeof(struct node*));
  G->visited = malloc(V*sizeof(int));

    for (int i = 0; i < V; i++) {
        G->adj[i] = NULL;
        G->visited[i] = 0;
    }

    return G;
}

void addEdge(struct Graph* G, int src, int dest) {
    struct node* newNode = createNode(dest);
    newNode->next = G->adj[src];
    G->adj[src] = newNode;

    newNode = createNode(src);
    newNode->next = G->adj[dest];
    G->adj[dest] = newNode;
}

struct Queue* createQueue() {
    struct Queue* Q = malloc(sizeof(struct Queue));
    Q->front = -1;
    Q->rear = -1;
    return Q;
}

//Queue operations
int isEmpty(struct Queue* Q) {
    if (Q->rear == -1)
      return 1;
    else
      return 0;
}

void enqueue(struct Queue* Q, int u) {
    if (Q->rear == SIZE - 1)
      printf("\nQueue is Full!!");
    else {
      if (Q->front == -1)
        Q->front = 0;
      Q->rear++;
      Q->items[Q->rear] = u;
    }
}

int dequeue(struct Queue* Q) {
    int u;
    if (isEmpty(Q)) {
      printf("Queue is empty");
      u = -1;
    } else {
      u = Q->items[Q->front];
      Q->front++;
      if (Q->front > Q->rear) {
        printf("Resetting queue\n");
        Q->front = Q->rear = -1;
      }
    }
    return u;
}

void printQueue(struct Queue* Q) {
    int i = Q->front;

    if (isEmpty(Q)) {
      printf("Queue is empty");
    } else {
      printf("Queue contains: ");
      for (i = Q->front; i < Q->rear + 1; i++) {
        printf("%d ", Q->items[i]);
      }
      printf("\n");
    }
}

void BFS(struct Graph* G, int src) {
  struct Queue* Q = createQueue();

  G->visited[src] = 1;
  enqueue(Q, src);

  while (!isEmpty(Q)) {
    printQueue(Q);
    int u = dequeue(Q); //vertex now visited
    printf("Visited %d\n", u);

    struct node* temp = G->adj[u];

    while (temp) {
      int adjVertex = temp->vertex;

      if (G->visited[adjVertex] == 0) {
        G->visited[adjVertex] = 1;
        enqueue(Q, adjVertex);
      }
      temp = temp->next;
    }
  }
}

int main() {
    int V, E;
    printf("Enter the number of vertices in the graph ");
    scanf("%d", &V);
    struct Graph* G = createGraph(V);

    printf("Enter the number of edges in the graph ");
    scanf("%d", &E);

    printf("Enter the edges in the graph (Src Dest): ");
    for (int i = 0; i < E; i++){
        int src, dest;
        scanf("%d%d", &src, &dest);
        addEdge(G, src, dest);
    }

    BFS(G, 0);
}
