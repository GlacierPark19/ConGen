class DisplayModule{

    public:
        //setters
        void setEnabledDisplayModule(bool en){
            enabled = en;
        }
        void setResolution(int xRes, int yRes){
            xResolution = xRes;
            yResolution = yRes;
        }
        void setRefreshRate(float ref){
            refreshRate = ref;
        }


        //Getters

        bool getDisplayModuleStatus(){
            return enabled;
        }

        int getXres(){
            return xResolution;
        }

        int getYres(){
            return yResolution;
        }

        float getRefRate(){
            return refreshRate;
        }


    private:     
        bool enabled; 
        int xResolution, yResolution;
        float refreshRate;

};