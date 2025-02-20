#include "display.h"

void displayModuleInit(){
DisplayModule newDisplay;

//TODO: Methods to automagically set this shit
newDisplay.setEnabledDisplayModule(true);
newDisplay.setRefreshRate(60.0);
newDisplay.setResolution(1920, 1080);
}
