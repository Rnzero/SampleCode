# SampleCode
Simple Game made in C++ using ChiliFramework, without using a physics engine.

The empty framework can be obtained at   https://github.com/planetchili/chili_framework

This project is just to display my understanding of C++. 
I know that it would've been a lot easier if I used a game engine, but the posting specifically asked for code samples and nothing more.
This project is a bit rushed.
Open in Visual Studio for optimal results.


Game logic can be found in
-> Game.cpp
-> DrawImage.cpp    //contains a lot of putpixel calls(i.e; calling graphics object to paint an image). Keep the functions collapsed.
-> Goal.cpp
-> Hazard.cpp
-> Player.cpp
-> Progress.cpp
   and their respective header files.
   
   
Program Features (Read this if you're looking at the code) 
-> Hazards are randomly generated at different points on the coordinate system, with different velocities in x and y directions
-> Screen is 800x600. Top-Left pixel = (0,0). Bottom-Right Pixel = (799,599)
-> Player starts off at the top left corner.
-> Because we don't want the hazard to generate on the player when the game starts, I simply limited the random generator from generating low x and y values(low x and y values will result in them spawning in the top left corner).
-> The code has been kept as simple and readable as possible, with comments wherever needed.
-> Why use a 3rd party framework instead of a powerful engine? I Recently lost my laptop, and my secondary laptop can't handle engines like Unity or Unreal.
-> To look at the changes I've made, please check the empty framework at    < https://github.com/planetchili/chili_framework >


How to play?
-> Make the player collect Goals (squares), while avoiding the circular hazards.
-> Collecting goals increases the progression bar at the top of the screen.
-> Complete the progression bar to win, and get a little surprise.
