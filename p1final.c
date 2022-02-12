#include<stdio.h>
void input(float *base,float *height)
{
  printf("enter base and height of the triangle\n");
  scanf("%f%f",base,height);
}
void find_area(float base,float height,float*area)
{
  *area=1/2*base*height;
}
void output(float base,float height,float area)
{
  printf("the area of triangle with base %f and height %f is %f\n ",base ,height,area);
}
int main()
{
  float b, h, area;
  input(&b, &h);
  find_area( b, h, &area);
  output(b, h, area);
  return 0;
}
  