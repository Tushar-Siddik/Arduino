vSkip to content
Search or jump to…

Pulls
Issues
Marketplace
Explore
 
@Tushar-Siddik 
Tushar-Siddik
/
arduino
1
00
Code
Issues
Pull requests
Actions
Projects
Wiki
Security
Insights
More
arduino/led_blink1.ino
@Tushar-Siddik
Tushar-Siddik Add files via upload
…
Latest commit 7379108 30 minutes ago
 History
 1 contributor
28 lines (21 sloc)  459 Bytes
 
void setup() {
    pinMode (13, OUTPUT);
}
void loop() {
    digitalWrite (13, HIGH);
    delay (1000);
    
    digitalWrite (13, LOW);
    delay (300);
    
    digitalWrite (13, HIGH);
    delay (800);
    
    digitalWrite (13, LOW);
    delay (300);
    
    digitalWrite (13, HIGH);
    delay (500);
    
    digitalWrite (13, LOW);
    delay (300);
    
    digitalWrite (13, HIGH);
    delay (300);
    
    digitalWrite (13, LOW);
    delay (2500);
}
© 2020 GitHub, Inc.
Terms
Privacy
Security
Status
Help
Contact GitHub
Pricing
API
Training
Blog
About
