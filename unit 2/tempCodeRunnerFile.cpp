void time:: sum(time t1,time t2){
    min=t1.min+t2.min; //80
    hr= min/60;         //80/60= 1
    min=min%60;      //80%60=20
    hr=hr+t1.hr+t2.hr;   //
}