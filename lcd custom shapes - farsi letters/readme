<h1>Farsi Display on Arduino: calendar and a dinosaur game</h1>
<h3><a href="https://intro.nyuadim.com/wp-content/uploads/2022/12/final_project_pic-scaled.jpeg"><img class="alignnone wp-image-13527" src="https://intro.nyuadim.com/wp-content/uploads/2022/12/final_project_pic-225x300.jpeg" alt="" width="521" height="695" /></a></h3>
<h3>Describe your concept</h3>
The premise of my project is very simple: construct and display Persian/Arabic letters on Arduino LCD (16x2), with the main purpose of displaying the Persian calendar date (Hijri Shamsi) and making a little dinosaur game where the barriers are Farsi letters (or a block).
<h3>How does the implementation work?</h3>
<ul>
 	<li style="list-style-type: none;">
<ul>
 	<li>Description of interaction design</li>
 	<li>Description of Arduino code</li>
 	<li>Description of p5.js code</li>
 	<li>Description of communication between Arduino and p5.js</li>
</ul>
</li>
</ul>
<strong>Interaction design:</strong>

p5.js is where the user input is stored and communicated to Arduino over serial operations. P5.js would take input based on the button the user clicks:

<a href="https://intro.nyuadim.com/wp-content/uploads/2022/12/Screen-Shot-2022-12-15-at-10.11.06-AM.png"><img class="alignnone wp-image-13521" src="https://intro.nyuadim.com/wp-content/uploads/2022/12/Screen-Shot-2022-12-15-at-10.11.06-AM-300x223.png" alt="" width="548" height="407" /></a>

<strong>Arduino code:</strong>

Arduino code reads serial input and does one of three things below:
<ol>
 	<li style="list-style-type: none;">
<ol>
 	<li>Display a welcome text to the user</li>
 	<li>Construct Farsi letters and display the Shamsi date on the LCD</li>
 	<li>Call the main game function</li>
</ol>
</li>
</ol>
For the game, I consulted the code from <a href="https://create.arduino.cc/projecthub/muhamd-magdy/arduino-game-by-lcd-9a3bc2?ref=similar&amp;ref_id=169084&amp;offset=0">the Arduino project hub</a> I used some functions for moving the barriers to the left of the screen and controlling the collision.

<a href="https://editor.p5js.org/maryami/sketches/G7wBAekOe">Link to Arduino code</a>

<strong>p5.js code:</strong>

Establishes the handshake between p5 and Arduino. Based on the button the user clicks, p5 sends a unique digit to Arduino and Arduino will take it from there.

<a href="http://let serial; let txt; let flag; var currentDate; var currentTime; var button_col = &quot;grey&quot;; function setup() { createCanvas(1420,900); if (!serialActive) { text(&quot;Press = to select Serial Port&quot;, 20, 30); } else { text(&quot;Connected&quot;, 20, 30); } // button for the game welcome_button = createButton(&quot;what is this?&quot;); welcome_button.position(450,300); welcome_button.size(600, 100); welcome_button.style(&quot;font-family&quot;, &quot;Courier New&quot;); welcome_button.style(&quot;font-size&quot;, &quot;30px&quot;); welcome_button.style('background-color', button_col); welcome_button.style(&quot;border-width&quot;, &quot;10px&quot;); welcome_button.style(&quot;border-color&quot;, &quot;white&quot;); // button to send input to arduino calendar_button = createButton(&quot;display shamsi date and time&quot;); calendar_button.position(450,450); calendar_button.size(600, 100); calendar_button.style(&quot;font-family&quot;, &quot;Courier New&quot;); calendar_button.style(&quot;font-size&quot;, &quot;30px&quot;); calendar_button.style('background-color', button_col); calendar_button.style(&quot;border-width&quot;, &quot;10px&quot;); calendar_button.style(&quot;border-color&quot;, &quot;white&quot;); // game_button.mousePressed(game_event); // button for displaying time and date game_button = createButton(&quot;play the barrier game&quot;); game_button.position(450,600); game_button.size(600, 100); game_button.style(&quot;font-family&quot;, &quot;Courier New&quot;); game_button.style(&quot;font-size&quot;, &quot;30px&quot;); game_button.style('background-color', button_col); game_button.style(&quot;border-width&quot;, &quot;10px&quot;); game_button.style(&quot;border-color&quot;, &quot;white&quot;); // calendar_button.mousePressed(calendar_event); // reset_button = createButton(&quot;reset&quot;); // reset_button.position(450,750); // reset_button.size(600, 100); // reset_button.style(&quot;font-family&quot;, &quot;Courier New&quot;); // reset_button.style(&quot;font-size&quot;, &quot;30px&quot;); // reset_button.style('background-color', button_col); // reset_button.style(&quot;border-width&quot;, &quot;10px&quot;); // reset_button.style(&quot;border-color&quot;, &quot;white&quot;); } function draw() { background(0); var currentYear = year(); var currentMonth = month(); var currentDay = day(); var currentHour = hour(); var currentMinute = minute(); var currentSecond = second(); currentDate = currentYear + '-' + nf(currentMonth, 2) + '-' + nf(currentDay, 2); currentTime = currentHour + ':' + nf(currentMinute, 2) + ':' + nf(currentSecond, 2); fill(200); noStroke(); textSize(20); text(currentDate, 690, 170); text(currentTime, 700, 200); // sending data welcome_button.mousePressed(quote_event); calendar_button.mousePressed(calendar_event); game_button.mousePressed(game_event); // reset_button.mousePressed(reset_sketch); } function quote_event() { txt = &quot;ok so idk&quot; flag = &quot;1&quot;; writeSerial(flag, txt); } function calendar_event() { flag = &quot;2&quot;; writeSerial(flag, currentDate); } function game_event() { flag = &quot;3&quot;; writeSerial(flag); } function keyPressed() { if (key == &quot;=&quot;) { // important to have in order to start the serial connection!! setUpSerial(); } } // function readSerial(data) { //////////////////////////////////// //READ FROM ARDUINO HERE //////////////////////////////////// // if (data != null) { // print(&quot;we are here&quot;); // ////////////////////////////////// // //SEND TO ARDUINO HERE (handshake) // ////////////////////////////////// // let sendToArduino = value; // writeSerial(sendToArduino); // print(sendToArduino); // } // } function mousePressed() { if (mouseX &gt; 0 &amp;&amp; mouseX &lt; 100 &amp;&amp; mouseY &gt; 0 &amp;&amp; mouseY &lt; 100) { let fs = fullscreen(); fullscreen(!fs); } } function reset_sketch() { draw(); }">Link to p5.js code</a>
<h3>What are some aspects of the project that you’re particularly proud of?</h3>
My original idea was to make a Farsi letters reshaper/constructer only, but I decided to bring more interaction to the project by adding a little game. I enjoyed making the byte arrays for different Farsi letters and refining them so that they look better when put together in a word. I'm also proud of the little box I made with the help of Professor Shiloh. I had never worked with wood before and it was last minute but it turned out fine and people found it intuitive to interact with the button and LCD once they were made into the box.

<a href="https://intro.nyuadim.com/wp-content/uploads/2022/12/date.jpg"><img class="alignnone wp-image-13529" src="https://intro.nyuadim.com/wp-content/uploads/2022/12/date-259x300.jpg" alt="" width="458" height="531" /></a>
<h3>What are some areas for future improvement?</h3>
There are two limitations:
<ol>
 	<li style="list-style-type: none;">
<ol>
 	<li><span style="text-decoration: underline;">The 16x2 LCD is very limited:</span> in terms of how many custom characters you can make (only 8) and also in terms of how many characters it displays in general (32). A bigger LCD would solve this problem and improve the project.</li>
 	<li><span style="text-decoration: underline;">Serial input only reads English:</span> I tried sending Farsi letters over Serial communication which resulted in a gibberish serial read by Arduino. It might be possible to send English input and transliterate it in the Arduino and display it, but not all letters can be mapped.</li>
</ol>
</li>
</ol>
<h3>Demo:</h3>
<div style="padding: 177.78% 0 0 0; position: relative;"><iframe style="position: absolute; top: 0; left: 0; width: 100%; height: 100%;" title="final_project" src="https://player.vimeo.com/video/781404736?h=0913269dfa&amp;badge=0&amp;autopause=0&amp;player_id=0&amp;app_id=58479" frameborder="0" allowfullscreen="allowfullscreen"></iframe></div>
<script src="https://player.vimeo.com/api/player.js"></script>
