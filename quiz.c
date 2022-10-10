#include <stdio.h>
int main()
{
    char questions[][200] = {"1. Who is the Prime Minister of India?: \n",
                              "2.Who is the creator of C language?: \n",
                              "3.What is the capital of India?: ",
                              "4.When do we have PPS Lab?: ",
                              "5.Who won IPL 2022?: "};
    
    char options[][200] = {"1.Joe Biden","2.Putin","3.Modi","4.Kim Jong Un",
                            "1.Dennis Ritchie","2.Elon Musk","3.Edison","4.Jeff Bezos",
                            "1.Hyderabad","2.Delhi","3.Goa","4.Chennai",
                            "1.Wednesday","2.Saturday","3.Monday","4.Friday",
                            "1.Deccan Chargers","2.Chennai Super Kings","3.RCB","4.Gujarat Titans"};

    int answers[5] = {3,1,2,2,4};
    int numberofques=sizeof(questions)/sizeof(questions[0]);

    int guess[5];
    int score=0,i,j;

    printf("QUIZ GAME \n");

    for(i=0;i<numberofques;i++)
    {
        printf("*******************\n");
        printf("%s\n",questions[i]);
        printf("*******************\n");
        for(j=(i*4);j<(i*4)+4;j++)
        {
          printf("%s\n",options[j]);
        }
        printf("Guess\n");
        scanf("%d", &guess[i]);
        if(guess[i]==answers[i])
        {   
            printf("CORRECT\n");
            score++;
        }
        else
        {
            printf("WRONG\n");
        }

    }   
    printf("SCORE=%d\n",score);
    if(score>=3)
    printf("QUALIFIED\n");
    else
    printf("NOT QUALIFIED\n");

}  






