String voice;
int RED = 2;
int GREEN = 3;
int YELLOW = 4;
void RedOn(){
digitalWrite (RED, HIGH);
}
void RedOff(){
digitalWrite (RED, LOW);
}
void GreenOn(){
digitalWrite (GREEN, HIGH);
}
void GreenOff(){
digitalWrite (GREEN, LOW);
}
void YellowOn(){
digitalWrite (YELLOW, HIGH);
}
void YellowOff(){
digitalWrite (YELLOW, LOW);
}
void allOn() {
digitalWrite (RED, HIGH);
digitalWrite (GREEN, HIGH);
digitalWrite (YELLOW, HIGH);
}
void allOff() {
digitalWrite (RED, LOW);
digitalWrite (GREEN, LOW);
digitalWrite (YELLOW, LOW);
}
void setup() {
Serial.begin(9600);
pinMode(RED, OUTPUT);
pinMode(GREEN, OUTPUT);
pinMode(YELLOW, OUTPUT);
}
void loop() {
while(Serial.available()) {
delay(10);
char c=Serial.read();
if(c=='#')
{break; }
voice += c;
}
if (voice.length() > 0) {
Serial.println(voice);
if (voice == "all on" || voice == "on")
{
allOn() ;
}
else if (voice == "of" || voice=="all of")
{
allOff() ;
}
else if(voice =="red" || voice =="red on"){
RedOn();
}
else if(voice =="red off"){
RedOff();
}
else if(voice =="green" || voice =="green on"){
GreenOn();
}
else if( voice =="green off" ){
GreenOff();
}
else if(voice =="yellow" || voice =="yellow on"){
YellowOn();
}
else if(voice =="yellow off"){
YellowOff();
}
voice="";
}
}