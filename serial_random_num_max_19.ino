int x[18],max=0,min=0;
void setup() {
Serial.begin(9600);
Serial.println("start");
for(int i =0;i<18;i++) {x[i]=random(70,101);}
for(int i=0;i<18;i++) {Serial.println(x[i]);}


for(int i=0;i<18;i++){max=max(max,x[i]);}
Serial.print("max:");
Serial.println(max);


for(int i=0;i<18;i++){min=min(min,x[i]);}
Serial.print("min:");
Serial.println(min);
}
void loop() {
}