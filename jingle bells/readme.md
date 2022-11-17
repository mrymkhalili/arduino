<h2 class="p1">Christmas is in the Air</h2>
<h3><a href="https://intro.nyuadim.com/wp-content/uploads/2022/11/jingle-b-scaled.jpeg"><img class="alignnone wp-image-12543" src="https://intro.nyuadim.com/wp-content/uploads/2022/11/jingle-b-225x300.jpeg" alt="" width="625" height="833" /></a></h3>
<h3 class="p1"><b>Concept:<span class="Apple-converted-space"> </span></b></h3>
<p class="p1">Christmas is growing closer by the day, and where's the festive mood without some carols? In this project, we are using switches, a piezo buzzer, and a potentiometer that has the five notes needed to play Jingle Bells. Switches 1 through 5 represent nodes C5, D5, E5, F5, and G5 in order. The LED on pin 13 lights up when you switch between nodes. The potentiometer lets you control the tempo. If you are not familiar with the notes, you follow the order below to play the song.</p>

<blockquote>
<p class="p1">%%%%%%%%%%%</p>
<p class="p1">3,3,3</p>
<p class="p1">3,3,3</p>
<p class="p1">3,5,1,2</p>
<p class="p1">3</p>
<p class="p1">4,4,4,4,</p>
<p class="p1">4,3,3,3,3</p>
<p class="p1">3,2,2,3</p>
<p class="p1">2,5</p>
<p class="p1">%%%%%%%%%%%</p>
</blockquote>
<h3 class="p1"><b>The Switches:</b></h3>
<p class="p1">In the beginning, we thought about using distance measurement sensors. We would then map different nodes of the song to the numbers we read from the sensor in a way that the tempo would increase and decrease as you get closer or farther from the sensor. But we wanted defined and distinct sounds and a more exact mapping so we decided to go with a digital I/O instead. We were also aiming to use the potentiometer to control volume initially but the buzzer was acting strange with the signal change in the potentiometer. Later we figured it was better and more practical to control the tempo via a potentiometer (the default tempo is 8).</p>
The five nodes in the program C5, D5, E5, F5, and G5 are defined in “pitches.h”. The song sheet is converted to code tokens and provided by <a href="https://create.arduino.cc/projecthub">Project Hub</a> and there is also a tutorial on how to do it yourself by Nathan Seidle on <a href="https://github.com/nseidle/AxelF_DoorBell/wiki/How-to-convert-sheet-music-into-an-Arduino-Sketch">Github</a>.
<pre class="EnlighterJSRAW" data-enlighter-language="generic" data-enlighter-theme="dracula">// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%
void loop() {

  int knob = analogRead(A2);
  Serial.println(knob);

  tempo = map(knob, 0, 1024, 60, 255)/15;

  switchOne = digitalRead(2);
  switchTwo = digitalRead(3);
  switchThree = digitalRead(4);
  switchFour = digitalRead(5);
  switchFive= digitalRead(6);
  
  if (switchOne == HIGH) {
    sing(1);
  } else if (switchTwo == HIGH) {
    sing(2);
  } else if (switchThree == HIGH) {
    sing(3);
  } else if (switchFour == HIGH) {
    sing(4);
  } else if (switchFive == HIGH) {
    sing(5);
  }
}
// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%</pre>
<p class="p1">Full code on p5.js can be found <a href="https://editor.p5js.org/maryami/sketches/NKVKFM6qu">here</a>.</p>

<h3 class="p1"><b>The Potentiometer:</b></h3>
After realizing that using the potentiometer for volume control would be difficult to do with our buzzer, we decided to use it as a means to control the tempo settings (the length of each note) of our instrument. This part of the code is used to achieve this:
<pre class="EnlighterJSRAW" data-enlighter-language="generic" data-enlighter-theme="dracula">void loop() {
//Potentiometer Value is Assigned to knob
  int knob = analogRead(A2);
//Tempo is Remapped and Divided
  tempo = map(knob, 0, 1024, 60, 255)/15;
. . .
//Tempo is Used to Determine Note Duration
  int noteDuration = 1000 / tempo;
  tone(melodyPin, c5, noteDuration);
}</pre>
With each loop, the value of the potentiometer is read and updated to the integer <em>knob</em>, which is subsequently remapped and divided; this value is then called to calculate <em>noteDuration</em>, which is used as a parameter that determines the length of the note played though <em>tone()</em>. According to this code, turning the potentiometer clockwise increases the length of a single note, while turning it counterclockwise achieves the opposite. With the potentiometer set up, our project can emit tones of differing pitches and lengths, allowing us to play neat little songs like Jingle Bells!
<h3>Demo:</h3>
[embed]https://youtube.com/shorts/lPdYSe71IUM?feature=share[/embed]
<h3>Reflection:</h3>
It was an enjoyable and rewarding experience to brainstorm and collaborate on this project as a group! I<span style="font-weight: 400;">t definitely helped to have each other to consult (and commiserate with) when we were stuck at certain points. </span><span style="font-weight: 400;">If we were to have more time, we would have liked to decorate our instrument with LEDs that correspond to the notes being played; regardless, we're very proud with what we were able to achieve with this project. </span><span style="font-weight: 400;">With each project, our familiarity with Arduino grows—and in this case, so did our teamwork. Coupled with a nice carol, this project really</span> harnesses the Christmas spirit!