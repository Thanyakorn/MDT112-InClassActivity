void setup(){
    int sampleArray[]={10,20,30,40,50,60,70,80,90,100};

    String StringshowArray;
    for (int i = 0; i <= 9; i++){
        StringshowArray = StringshowArray + sampleArray[i] + '\t';
    }
    Serial.begin(9600);
    Serial.println(StringshowArray);
}
void loop(){

}