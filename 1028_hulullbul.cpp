#include<iostream.h>
#include<conio.h>
#include<string.h>

int main()
{
    char n[15];
    int test, start;
    cin >> test;
    while(test-- >0)
    {
        cin >>n >> start;
        if(start==0)
            printf("Airborne wins.\n");
        else 
            printf("Pagfloyd wins.\n");
    }
    getch(); 
    return 0;
}
