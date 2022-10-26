import java.util.*;
import java.io.*;
import java.lang.*;

class KosarajuAlgo
{
    public static void main (String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            // arraylist of arraylist to represent graph
            ArrayList<ArrayList<Integer>> adj = new ArrayList<>();
            
            int V = Integer.parseInt(sc.next());
            int E = Integer.parseInt(sc.next());
            
            for(int i =0; i < V; i++)
                adj.add(i, new ArrayList<Integer>());
                
            for(int i = 1; i <= E; i++)
            {    int u = Integer.parseInt(sc.next());
                 int v = Integer.parseInt(sc.next());
                 
                 // adding directed edgese between 
                 // vertex 'u' and 'v'
                 adj.get(u).add(v);
            }
            
            Solution ob = new Solution();
            System.out.println(ob.kosaraju(V, adj));
		}
    }
}
// } Driver Code Ends


//User function Template for Java


class Solution
{
    //Function to find number of strongly connected components in the graph.
    
    //Performing Topological Sort (Step 1)
    
    static void dfsTraversalForTopoSort(ArrayList<ArrayList<Integer>> adj, boolean visited[], Stack<Integer> st, int v)
    {
        visited[v] = true;
        
        for(Integer neighbour: adj.get(v))
        {
            if(!visited[neighbour])
            {
                dfsTraversalForTopoSort(adj, visited, st, neighbour);
            }
        }
        st.push(v);
    }
    
    // Reverse DFS & Finding Number of SCC (Step 3)
    
    static void revDFS(ArrayList<ArrayList<Integer>> transpose, boolean visited[], int v)
    {
        visited[v] = true;
        
        for(Integer neighbour: transpose.get(v))
        {
            if(!visited[neighbour])
            revDFS(transpose, visited, neighbour);
        }
    }
    
    public int kosaraju(int V, ArrayList<ArrayList<Integer>> adj)
    {
  
        
        boolean visited[] = new boolean[V];
        Stack<Integer> st = new Stack<>();
        
        int conncomp = 0;
        
        for(int i=0;i<V;i++)
        {
            if(!visited[i])
            {
                dfsTraversalForTopoSort(adj, visited, st, i);
            }
        }
        
        ArrayList<ArrayList<Integer>> transpose = new ArrayList<>();
        
        for (int i = 0; i < V; i++)
        {
            transpose.add(new ArrayList<>());
        }
        
        //Constructing Transpose Of The Matrix (Step 2)
        
        for(int i = 0; i < V;i ++)
        {
            visited[i] = false;
            
            for(Integer neighbour: adj.get(i))
            {
                transpose.get(neighbour).add(i);
            }
        }
        
        while(!st.isEmpty())
        {
            int curr = st.pop();
            
            if(!visited[curr])
            {
                conncomp++;
                revDFS(transpose, visited, curr);
            }
        }
        
        return conncomp;
    }
}