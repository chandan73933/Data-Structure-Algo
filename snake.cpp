#include <iostream> 
#define row 4 
#define col 4 
using namespace std; 
  
void print(int mat[4][4]) 
{ 
    for (int i = 0; i < row; i++) { 
        if (i % 2 == 0) { 
            for (int j = 0; j < col; j++) 
                cout<<mat[i][j] << " "; 
        } else { 
            for (int j = col - 1; j >= 0; j--) 
                cout<<mat[i][j] << " "; 
        } 
    } 
} 
int main() 
{ 
    int mat[4][4] = {{ 10, 20, 30, 40 }, 
                     { 15, 25, 35, 45 }, 
                     { 27, 29, 37, 48 }, 
                     { 32, 33, 39, 50 }}; 
  
    print(mat); 
    return 0; 
} 
