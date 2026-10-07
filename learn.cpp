#include<bits/stdc++.h>
using namespace std;

void print1(int n){
    for(int i=0;i<n;i++){
         for(int j=0;j<n-i-1;j++){
            cout<<" ";

        }
        for(int j=0;j<2*i+1;j++){
            cout<<"*";

        }
       
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
       cout<<endl;
        }
        
    }
    
void print2(int n){
    for(int i=0;i<n;i++){
     for(int j=0;j<i;j++){
            cout<<" ";
            }

        for(int j=0;j<2*n-2*i-1;j++){
            cout<<"*";

        }
       
        for(int j=0;j<i;j++){
            cout<<" ";
}
cout<<endl;
    }
}

void print3(int n){
    for(int i=1;i<=2*n-1;i++){
        int rows=i;
        if(i>n) rows=2*n-i;
        for(int j=1;j<=rows;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print4(int n){
    for(int i=0;i<n;i++){
        int start=1;
        if(i%2==0) start=1;
        else start=0;
        for(int j=0;j<i;j++){
            cout << start;
            start=1-start;
        }
        cout << endl;
    }
}

void print5(int n){
    int space=2*n-2;
    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout << j;
        }
    
        
        for(int j=1;j<=space;j++){
            cout << " ";    
        }

    

        for(int j=i;j>=1;j--){
            cout << j;
        }
        cout<<endl;
        space-=2;
    }
    }

void print6(int n){
    int cutoff=1;
    int increament=1;
    int j=1;
    int whiff=1;
    for(int i=0;i<n;i++){
        for(int j=whiff;j<=cutoff;j++){
            cout << j;
            cout << " ";
        }
        whiff=cutoff+1;
        increament=increament+1;
        cutoff=cutoff + increament;
        cout<<endl;
    }
}

void print7(int n){
    
    for(int i=0;i<n;i++){
        char ch='A'+i; 
        for(char j = 0;j<=i;j++){
            cout << ch;
        }
        cout << endl;
    }
}

void print8(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch;
        }
        for(char dh='A'+i-1;dh>='A';dh--){
            cout << dh;
        }
        cout << endl;
}
}

void print9(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            cout << " ";
        }
        char c='A';
        int breakpoint=(2*i+1)/2;
        for(int j=0;j<2*i +1;j++){
            cout << c;
            if(j <i) c++;
            else c--;
        }
        cout << endl;
        }
        
    }

void print10(int n){
    for(int i=0;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        int j=n-i;
        for(int k=0;k<n-j;k++){
            cout << " ";
        }
        for(int k=0;k<n-j;k++){
            cout << " ";
        }

        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }  
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int k=n-i-1;k>0;k--){
            cout << " ";
        }
        for(int k=n-i-1;k>0;k--){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }

}

void print11(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        for(int j=n-i-1;j>0;j--){
            cout << " ";
        }
        for(int j=n-i-1;j>0;j--){
            cout << " ";
        }
        for(int j=0;j<=i;j++){
            cout << "*";
        }
        cout << endl;
    }
    
    for(int i=1;i<n;i++){
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=0;j<i;j++){
            cout << " ";
        }
        for(int j=n-i;j>0;j--){
            cout << "*";
        }
        cout << endl;
    }
}

void print12(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==0 || i==n-1 || j==0 || j==n-1) cout << "*"; 
            else cout << " ";
        }
    cout << endl;
}
}

void print13(int n){
    for(int i=0;i<2*n-1;i++){
        for(int j=0;j<2*n-1;j++){
            int top=i;
            int left=j;
            int right=(2*n-2)-j;
            int bottom=(2*n-2)-i;
            cout << n-min(min(top,bottom),min(left,right));
        }
        cout << endl;
    }
}
int main(){

    int n;
    cin >> n;
    print13(n);
}

