#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdbool.h>

int main()
{
    int n, k, i, dem = 0;
    scanf("%d %d", &n, &k);
    
    for(i = 2; i <= n; i += 2)
    {
        int temp = i;
        while(temp % 2 == 0)
        {
            ++dem;
            temp = temp / 2;
        }
    }
    
    if(dem >= k) 
        printf("Yes\n");
    else 
        printf("No\n");

    return 0;
}

