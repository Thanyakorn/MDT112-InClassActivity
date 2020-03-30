int mynum[5] = { 10, 20, 30, 40, 50};
int *myPoint = myNum; 

void setup(){
    serial.begin(9600);
     
     // via pointer
    for (int i = 0; i < 5; i++){
        serial.println("Address" + string(i) + " = " + int(myPoint) + " Value :" + int(*myPoint));
        myPoint++;
    }

    serial.println(" .... ")

    // Via Iadex
    for (int i = 0; i < 5; i++){
        serial.println("Address" + string(i) + " = " + int(&myNum[i]) +" Value :" + int(myNum[i]));
    }

}

void loop(){

}