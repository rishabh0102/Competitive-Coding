void initialize( int Arr[ ], int N)
{
    for(int i = 0;i<N;i++)
    Arr[ i ] = i ;
}
//returns true if A and B are connected, else returns false 
 bool find( int Arr[ ], int A, int B)                           
{
if(Arr[ A ] == Arr[ B ])
return true;
else
return false;   
}
//change all entries from arr[ A ] to arr[ B ].
void union(int Arr[ ], int N, int A, int B)
{
    int TEMP = Arr[ A ];
for(int i = 0; i < N;i++)
    {
    if(Arr[ i ] == TEMP)
    Arr[ i ] = Arr[ B ]; 
    }
}

// *******************************************************************
//finding root of an element
int root(int Arr[ ],int i)
{
    while(Arr[ i ] != i)           //chase parent of current element until it reaches root
    {
     i = Arr[ i ];
    }
    return i;
}


/*modified union function where we connect the elements by changing the root of one of the elements*/

int union(int Arr[ ] ,int A ,int B)
{
    int root_A = root(Arr, A);       
    int root_B = root(Arr, B);  
    Arr[ root_A ] = root_B ;       //setting parent of root(A) as root(B)
}
bool find(int A,int B)
{
    if( root(A)==root(B) )       //if A and B have the same root, it means that they are connected.
    return true;
    else
    return false;
}
//modified initialize function:
void initialize( int Arr[ ], int N)
{
    for(int i = 0;i<N;i++)
    {
        Arr[ i ] = i ;
        size[ i ] = 1;
    }
}

void weighted-union(int Arr[ ],int size[ ],int A,int B)
{
    int root_A = root(A);
    int root_B = root(B);
    if(root_A == root_B) return;
    if(size[root_A] < size[root_B ])
    {
        Arr[ root_A ] = Arr[root_B];
        size[root_B] += size[root_A];
    }
    else
    {
        Arr[ root_B ] = Arr[root_A];
        size[root_A] += size[root_B];
    }
}
//modified root function
/*Idea for improving this approach further

Union with path compression

While computing the root of A, 
set each i to point to its grandparent (thereby halving the length of the path), 
where i is the node that comes in the path while computing the root of A.
*/
int root (int Arr[ ] ,int i)
{
    while(Arr[ i ] != i)
    {
        Arr[ i ] = Arr[ Arr[ i ] ] ; 
        i = Arr[ i ]; 
    }
    return i;
}

