#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char text[100] = "a plantat cinci lalele visinii sau rosii";
    int size = strlen(text);
    char delim[] = " ";

    char *ptr = strtok(text, delim);

    while (ptr != NULL)
    {

        int size_ptr = strlen(ptr);

        int a = 0, e = 0, i = 0, o = 0, u = 0;
        for (int j = 0; j <= size_ptr; j++)
        {
            switch (ptr[j])
            {
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
            }
        }
        
        if(a>0 && e==0 && i==0 && o==0 && u==0)
            cout<<ptr<<endl;
        if(a==0 && e>0 && i==0 && o==0 && u==0)
            cout<<ptr<<endl;
        if(a==0 && e==0 && i>0 && o==0 && u==0)
            cout<<ptr<<endl;
        if(a==0 && e==0 && i==0 && o>0 && u==0)
            cout<<ptr<<endl;
        if(a==0 && e==0 && i==0 && o==0 && u>0)
            cout<<ptr<<endl;

        ptr = strtok(NULL, delim);
    }

    return 0;
}