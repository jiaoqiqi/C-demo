#include <stdio.h>

int main(void)
{
        int n;
        printf("Please input how many numbers: ");
        scanf("%d",&n);
        int stats[n],x,y;
        int mode,count,oldcount,oldmode;
        
        printf("enter numbers: \n");
        for(x=0;x<n;x++) scanf("%d",&stats[x]);
        
        oldcount = 0;

        //find the mode
        
        for(x=0;x<n;x++){
                mode=stats[1];
                count =1;
                
                //count the occurrences of this value.
                
                for(y=x+1;y<n;y++)
                if(mode==stats[y]) count++;
                
                //if count is greater than old count,use new mode.
                if(count>oldcount){
                        oldmode=mode;
                        oldcount=count;
                }
        }
        printf("the mode is %d\n",oldmode);
        return 0;
}
