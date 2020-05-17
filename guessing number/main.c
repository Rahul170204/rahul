#include<stdio.h>
#include<windows.h>
int main()
{
    int i=17,j,k=2,l=2,m=0,n=0,o=10,p=1,q=25,u=0,v=0;
    int x;
    printf("yours game is starting soon");
    while(v<6){
    printf(".");
    Sleep(400);
     v++;
  }
    system("cls");
    v=0;
    printf("This game is usually number guessing");
    while(v<6){
    printf(".");
    Sleep(400);
     v++;
  }
    system("cls");
    system("cls");
    printf("I have given a number and u have to guess,U have four chance to guess each number");
    v=0;
      while(v<6){
    printf(".");
    Sleep(400);
     v++;
  }
    system("cls");
    a:
        system("cls");
        printf("\nThe range of number is %d to %d",p,q);
    printf("\nGuess the number ");
    scanf("%d",&j);

while(m<3){

     if(j>i){
        printf("Number is smaller then written number");
        Sleep(2000);
        k--;
        l=l--;
        m++;
        o=o-2;
        goto a;
    }

  else if(j<i){
        printf("\nNumber is greater then written number");
        Sleep(2000);
         system("cls");
        k--;
        l--;
        m++;
        o=o-2;
        goto a;
    }

        else if(j==i){
        printf("Congratulation");
        Sleep(1000);
          n=n+pow(o,2);
        i=pow(k,l);
        p=pow(k-l,l-1);
        q=pow(k+1,l+1)/2-pow(k,l);
        m=0;
        o=10;
        k=k+1;
        l=l;
        system("cls");
        printf("next level");
        Sleep(1500);
        system("cls");
        goto a;
    }

}

     if(m==3){
        printf("Your score is %d",n);
        printf("\nNumber is %d",i);
    }
}

