#include <iostream>
using namespace std;

int main(){
    int rows,colums; cin>>rows>>colums;
    bool test=true;
    for (int i = 0; i < (rows/2); i++)
    {
        for (int w = 0; w < colums; w++)
        {
            cout<<"#";
        }

        cout<<"\n";
        
        for (int y = 0; y < colums-1; y++)
        {       if(test){
                cout<<".";
                if(y==colums-2){cout<<"#"; test=false;}
                }else
                {
                    if(y==0){cout<<"#";}
                    cout<<".";
                    if(y==colums-2){test=true;}
                }
        }
        cout<<"\n";
        if(i+1==rows/2)
        {
            for (int q = 0; q <colums; q++)
            {
                cout<<"#";
            }
            
        }
    }
    

    return 0;
}