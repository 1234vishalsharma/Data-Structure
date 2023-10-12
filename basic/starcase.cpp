// this program demonstrate the problem of creating the stairs building problem we have n blocks and have to create stairs from these n blocks

// like n=5             n=8
// X                    X     
// X X                  X X
// X X                  X X X
//                      X X
    #include<iostream>
    using namespace std;

    int solve(int row,int count,int n){
        if(row>n){
            return count;
        }    
        n-=row;
        row++;
        count++;
        cout<<count<<endl;
       solve(row,count,n);
  }
    int completeRows(int n) {
        // code here
        
        int count=0;
        int row=1;
    
        return solve(row,count,n);
        
    }

    int main()
    {
        cout<<completeRows(91);
        return 0;
    }