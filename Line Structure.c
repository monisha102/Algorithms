#include<stdio.h>
#include<math.h>

    struct point{
        float x;
        float y;
    };
    struct line{

        struct point startp;
        struct point endp;


    };


float distanceLine(struct line myline){

    float distance;

    distance=sqrt((myline.startp.x)-(myline.endp.x)*(myline.startp.x)-(myline.endp.x)+(myline.startp.y)-(myline.endp.y)*(myline.startp.y)-(myline.endp.y));
    return distance;
}




int main(){

    struct point p;
    struct line myline;
    float distance;

    printf("\nEnter x1 of start point: ");
    scanf("%d",&myline.startp.x);
     printf("\nEnter y1 of start point: ");
    scanf("%d",&myline.startp.y);
     printf("\nEnter x2 of start point: ");
    scanf("%d",&myline.endp.x);
     printf("\nEnter y2 of start point: ");
    scanf("%d",&myline.endp.y);

    distance=distanceLine(myline);

    printf("\nDistance between (%.2f,%.2f) and (%.2f,%.2f) is: %.2f",myline.startp.x,myline.startp.y,myline.endp.x,myline.endp.y,distance);

return 0;

}
