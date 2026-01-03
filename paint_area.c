#include <stdio.h>

int main()
{
    float l,w,h, wd,hd, ww,hw, wall_area, Adoor, Awindow, P_wallar, roof_area;
    printf("Please enter the dimensions of Room(in meters)\n");
    printf("Height of Room: ");
    scanf("%f",&h);
    printf("\nWidth of Room: ");
    scanf("%f",&w);
    printf("\nLength of Room: ");
    scanf("%f",&l);

    printf("\n\nNow please enter the dimensions of Door(in meters)\n");
    printf("Width of door: ");
    scanf("%f",&wd);
    printf("\nHeight of door: ");
    scanf("%f",&hd);

    printf("\n\nNow please enter the dimensions of Window(in meters)\n");
    printf("Width of window: ");
    scanf("%f",&ww);
    printf("\nHeight of window: ");
    scanf("%f",&hw);

    wall_area= 2*(l*h)+2*(w*h);
    Adoor= wd*hd;
    Awindow= 2*(ww*hw);
    P_wallar= wall_area-(Adoor+Awindow);
    roof_area= l*w;

    printf("\nArea to be painted(interior walls) is %.2f m^2\n",P_wallar);
    printf("\nArea to be whitewashed(roof) is %.2f m^2\n",roof_area);
    
    return 0;

}