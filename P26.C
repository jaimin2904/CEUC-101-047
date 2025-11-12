#include<stdio.h>
//#include<conio.h>
#include<math.h>

   void inputsides(float *a ,float *b, float *c);
   int validt(float a, float b, float c);
   float calculatearea(float a ,float b, float c);
   void displayresult(float a,float b,float c);

 int main()
{
  float a,b,c;
  void displayresult(float a,float b,float c);
  return 0;
}
  void inputsides(float *a,float *b,float *c)
 {
    printf("enter three sides of the triangles:");
    scanf("%f %f %f",a,b,c);
 }

  int validt(float a,float b, float c)
  {
    if(a>=0 && b>=0 && c>=0)
    {
      return 1;
    }
    else
    {

    if(a+b>c && b+c>a && a+c>b)
    {
      return 1;
    }
    else
    {
	printf("side lengths must be positive number: \n");
	return 0;
    }
  }
  }
    float calculatearea(float a, float b, float c)
   {
      float s=(a+b+c)/2;
      return sqrt(s*(s-a)*(s-b)*(s-c));
    }

   void displayresult(float a, float b, float c)
   {
      inputsides(&a,&b,&c);
      if(validt(a,b,c))
      {
	 float area = calculatearea(a,b,c);
	 printf("area %f\n :",area);
      }
       else
       {
	 printf("not valid");
       }
   }


