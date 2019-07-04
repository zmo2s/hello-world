









node* A[n] ; // defines an array of n node pointers
for (i=0; i<n; i++) A[i] = NULL; // initializes the array to NULL
Creating an Array of Linked Lists
Suppose that a linked list needs to be created starting at A[i]. The first node can be
created as follows.
A[i]->(node*)malloc(sizeof(node)); // allocate memory for node
A[i]->size = 10;
A[i]->name = (char*) malloc(strlen(“guna”+1));
strcpy(A[i] = name, “guna\0”);
A[i]->next = NULL;

int inserrnodes(node*** arrayhead, int index, node* ptr){ 

node* ptr = (node*)malloc(sizeof(node));
ptr -> size = 10;
ptr -> name = (char*) malloc(strlen(“guna”+1));
strcpy(ptr -> name, “guna\0”);
ptr-> next = NULL;
}