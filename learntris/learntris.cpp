#include <iostream>

using namespace std;

#define ROW 22


int main(void)
{
    char cmd;
    
    while(1)
    {
        cin >> cmd;

        if ('p' == cmd)
        {
            char line[] = ". . . . . . . . . .";
            int i; 
            
            for(i=0; i<ROW; i++)
            {       
                cout << line << endl;   
            }
        }
        
        if ('g' == cmd)
        {
            char given_line[20];
            
            int i; 
            for(i=0; i<ROW; i++)
            {       
                cin >> given_line;   
            }
        }
        
        if ('q' == cmd)
        {
            break;
        }
        
    }
    return 0;
}

