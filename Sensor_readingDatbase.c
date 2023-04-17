#include <stdio.h>
#include <stdlib.h>
void interpreteReading(int Yaxis, int Timeaxis);
void Add_Reading();
void gitLink();
void error();
void errorDuringAdd_Reading();
int times;
 struct Sensor_readingDatabase
    {
        char Sensor_id[10];
    
    };
     struct Sensor_readingDatabase Reading;
int main(){
   
   
    int UserOption;
    system("clear");
        printf("************************************************************************\n");
        printf("Welcome to techJigger's OpenSource Sensor Reading and Analyses database\n");
        printf("************************************************************************\n\n\a");
    
        printf("1.Add Sensor Reading\n2.Edit Sensor Readings\n3.Share the project or get the code\n4.Exit\n");
            scanf("%d",&UserOption);
            switch (UserOption)
            {
            case 1:
            system("clear");
            Add_Reading();
                break;
            case 2:
            system("clear");
            Add_Reading();
                break;
            case 3:
            system("clear");
            gitLink();
                break;
            case 4:
            system("clear");
            printf("Hooo Buddy!, Thank you for trying this out.\n\a");
                break;
            default:
            error();
                break;
            
            }
           

    return 0;
    
}
//Function to Add Sensor Reading
    void Add_Reading(){
        int count;
        printf("Enter the Sensor ID:");
        scanf("%s",Reading.Sensor_id);
        printf("Enter the number of Readings to be entered:\n");
        scanf("%d",&count);

//creating arrays to store the sensor readings and timestamp
        int SensorVal_Y[count], TimeInterval[count];
            //taking the sensor readings
            system("clear");
        printf("Enter the Sensor Readings in the format :(reading1 reading2 reading3 reading4 ...reading(n).:)\n");
       for (size_t i = 0; i < count; i++)
       {
        scanf("%d",&SensorVal_Y[i]);
       }
            //taking the timestamps
       printf("Please Enter the timestamp in the same format as your sensor readings:\n");
        for (size_t i = 0; i < count; i++)
       {
        scanf("%d",&TimeInterval[i]);
       }
        system("clear");
       printf("Hollaaa Success!, Sensor reading has been added succesfully. Choose an option: \n1.Interprete Reading on Graph\n2.Edit Reading\n3.Exit\n");
      int UserOption;
      scanf("%d",&UserOption);
       switch (UserOption)
       {
       case 1:
            interpreteReading(SensorVal_Y[count], TimeInterval[count] );
        break;
       case 2:
            system("clear");
            Add_Reading();
       break;
       case 3:
        system("clear");
            printf("Hooo Buddy!, Thank you for trying this out.\n\a");
       break;
       default:
       errorDuringAdd_Reading();
        break;
       }
        
       
       
}
//Function to Interprete the reading entered and plot graph of the Sensor reading against Timestamp
    void interpreteReading(int Yaxis , int Timeaxis){
        system("clear");
        system("gnuplot");
        system("plot(Yaxis,Xaxis)");
        /*come back here and develop how i can plot the variables Yaxis and Timeaxis */
}
//Function to send users the link of the sourceCode of this project
    void gitLink(){
 system("clear");
            printf("Hooo Buddy!, This is an OpenSource Project I built myself.\nUse the link below to access the source code for free and also feel free to email me when you don't understand anything @elliottransford2@gmail.com\ngit  Link: https://github.com/ell12r/C_Projects/edit/master/Sensor_readingDatbase.c\nYouTube link: \nLinkedIn: \n\n");
        
            printf("Thank you for trying this out.\n\a");
}
    void error(){
        char errorChar;
        system("clear");
            printf("Sorry you have chosen an invalid option, Please enter 'y' to try again and 'n' to Quit the application:\n");
            scanf("%s",&errorChar);
            if (errorChar == 'y'){
                system("clear");
                main();
            }
            else if (errorChar == 'n') {
                system("clear");
                printf("Hooo Buddy!, Thank you for trying this out.\n");
                }
            else
            {
                system("clear");
                printf("Hooo Buddy!, Thank you for trying this out.\n\a");
            }
    }
    void  errorDuringAdd_Reading(){
        char errorChar;
        system("clear");
            printf("Sorry you have chosen an invalid option, Please enter 'y' to try again and 'n' to Quit the application:\n");
            scanf("%s",&errorChar);
            if (errorChar == 'y'){
                system("clear");
                Add_Reading();
            }
            else if (errorChar == 'n') {
                system("clear");
                printf("Hooo Buddy!, Thank you for trying this out.\n");
                }
            else
            {
                system("clear");
                printf("Hooo Buddy!, Thank you for trying this out.\n\a");
            }

    }
