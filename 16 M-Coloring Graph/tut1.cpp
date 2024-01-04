
// M-Coloring Problem


// https://www.geeksforgeeks.org/problems/m-coloring-problem-1587115620/1


class Solution{
public:
    // Function to determine if graph can be coloured with at most M colours such
    // that no two adjacent vertices of graph are coloured with same colour.
    
    bool isValid(int node,int color,bool graph[101][101],vector<int>&colors,int n){
        for(int i=0;i<n;i++){
            if(node!=i && graph[node][i]){
                if(colors[i]==color) return false;
            }
        }
        return true;
    }
    
    
    bool solver(int node,int m,int n,bool graph[101][101],vector<int>&colors){
        if(node==n) return true;
        for(int clr=1;clr<=m;clr++){
            if(isValid(node,clr,graph,colors,n)){
                colors[node]=clr;
                if(solver(node+1,m,n,graph,colors)==true) return true;
                colors[node]=0;
            }
        }
        return false;
    }
    
    bool graphColoring(bool graph[101][101], int m, int n) {
        vector<int> colors(n);
        return solver(0,m,n,graph,colors);
    }
};
