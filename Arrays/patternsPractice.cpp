// Online C++ compiler to run C++ program online
/* Tips for loops
1. for the outer loop, count the number of lines.
2. for the inner loop, focus on the columns, and connect them somehow to the rows.
3. Print the content inside the inner loop.
4. Observe symmetry .
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    //patterns practice 
    //will go according striver patterns video
    //pattern 1 
    for(int i=0; i<5;i++)
    {
        for( int j=0;j<5;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    //pattern 2
    for(int i=0;i<5;i++)
    {
        for( int j=i;j>=0;j--)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    
    //pattern 3
    for(int i=1;i<6;i++)
    {
        for(int j=1;j<i+1;j++)
        {
            cout<<j;
        }
        cout<<endl;
    }
    
    //pattern 4
    for(int i=0;i<5;i++)
    {
        int x=1;
        for(int j=0;j<(5-i);j++)
        {
            cout<<x;
            x++;
        }
        cout<<endl;
    }
    
    //pattern 5
    for(int i=0;i<5;i++)
    {
        for( int j=0; j<5;j++)
        {
            if(j<(i+1))
              cout<<"*";
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }

    //pattern 7 (pattern 6 used for learning)
    for( int i=0;i<5;i++)
    {
        //space
        for(int j=0; j<i;j++)
        {
            cout<<" ";
        }
        //stars
        for(int j=0;j<2*5-(2*i)-1;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=0; j<i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
    
    
}
