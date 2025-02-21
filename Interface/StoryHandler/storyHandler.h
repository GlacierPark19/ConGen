class storyHandlerClass{

    public: 
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


    private:

        int currentLine, previousLine;
        bool isEndLine;


};