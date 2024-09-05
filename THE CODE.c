#include<stdio.h>       //Standard input output header file 
#include<stdint.h>      //Used for unit8_t
struct  LEDSettings{        //Structure for ledsettings
    unit8_t state;             //1 for on; 0 for off
    unsigned int brightness;    // values from 0 to 255
    unsigned int color;         //color only on rgb format  
};
struct LEDGroup{                //Structure for led group
    LEDSettings singleLED       //Represent single led settings
    unit8_t groupState;         //Collective state of group led
    unsigned int groupBrightness;   //collective brighntess for adjustment
};

 
void initLEDGroup(struct LEDGroup *group){      //Function to initalise LED GROUP using POINTERS
        group->state=0;                         //ALL LED OFF USE ARROW OPERATOR BEACUSE THERE IS  POINTER
        group->brightness=0;                    //MINMUM BRIGHTNESS
        group->color=0x000000;                  //NO COLOR
 }

 

 void updateLEDGroupSettings(LEDGroup *group,           //Function to update led group settings using pointers to structures
uint8_t groupState, uint8_t groupBrightness, uint8_t 
state, uint8_t brightness, uint32_t color){
        group->groupState=new_groupstate;
        group->groupBrightness=new_groupbrightness;
        group->state=new_state;
        group->brightness=new_brightness;
        group->color=new_color;
 }
 void displayLEDGroupStatus(const LEDGroup *group){     //Function to display current Led group status
    printf("Group State:%u\n",group->groupstate)        //values are all accessed using pointer dereferencing
    printf("Group Brightness:%u\n",group->groupBrightness)
    printf("Single Led Status:%u\n",group->state)
    printf("Single Led Brightness:%u\n",group->brightness)
    printf("Single Led Color:%u\n",group->color)
    }
int main(void)
{
    struct LEDGroup mygroup;                 //instance of led group
    initLEDGroup(&mygroup);
   displayLEDGroupStatus(&mygroup)            //display the current status of LEDGroup              

    updateLEDGroupSettings(&mygroup,1,200,1,155,0xFFFFFF);     //Updating action by initialising values in the ordwer they appaer in the structure
    displayLEDGroupStatus(&mygroup);                           //dispaly the updated values

    return 0;
}

