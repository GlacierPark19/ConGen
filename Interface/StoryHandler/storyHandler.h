class storyHandlerClass{

    public: 

        storyHandlerClass(){
            updateStoryLineNumber(0);
            setIsEndLine(false);
        }
        //Setters

        void updateStoryLineNumber(int storyLine){
            if(storyLine = (currentLine+1)){
                previousLine=currentLine;
                currentLine++;
            }else{
                previousLine=currentLine;
                currentLine=storyLine;
            }
        }

        void setIsEndLine(bool isThisEndLine){
            isEndLine=isThisEndLine;
        }
        //getters
        int getCurrentLine(){
            return currentLine;
        }
        int getPreviousLine(){
            return previousLine;
        }
        bool getEndLineStatus(){
            return isEndLine;
        }


    private:

        int currentLine, previousLine;
        bool isEndLine;


};