#include "Hazard.h"


//Change direction of movement upong collision with border
void Hazard::Update()     
{
	if ((x <= 10) || (x >= Graphics::ScreenWidth - 30))
	{
		vx = -vx;
		x = x + vx;
	}
	else
		x = x + vx;



	if ((y <= 75) || (y >= Graphics::ScreenHeight - 30))
	{
		vy = -vy;
		y = y + vy;
	}
	else
		y = y + vy;
}      



//Check for collision with player.
bool Hazard::IsColliding(int x1, int y1, int h, int w)
{
	int Right1 = x1 + w;          //Calculating player edges
	int Bottom1 = y1 + h;
	int Right2 = x + Width;       // Calculating hazard edges
	int Bottom2 = y + Height;

	if (Right1 >= x && x1 <= Right2 && Bottom1 >= y && y1 <= Bottom2)
		HasTouched = true;
	return true;
}

//Used LuX Image Scanner to change an image into a text of x/y locations and r,g,b colors.
//Pasted the file into the function to avoid File input
void Hazard::Draw(Graphics & gfx)
{
	gfx.PutPixel(10 + x, 0 + y, 219, 222, 224);
	gfx.PutPixel(11 + x, 0 + y, 182, 188, 190);
	gfx.PutPixel(12 + x, 0 + y, 182, 188, 190);
	gfx.PutPixel(13 + x, 0 + y, 179, 186, 187);
	gfx.PutPixel(14 + x, 0 + y, 203, 208, 210);
	gfx.PutPixel(7 + x, 1 + y, 203, 205, 208);
	gfx.PutPixel(8 + x, 1 + y, 104, 115, 119);
	gfx.PutPixel(9 + x, 1 + y, 43, 63, 62);
	gfx.PutPixel(10 + x, 1 + y, 44, 60, 61);
	gfx.PutPixel(11 + x, 1 + y, 49, 68, 69);
	gfx.PutPixel(12 + x, 1 + y, 52, 69, 71);
	gfx.PutPixel(13 + x, 1 + y, 52, 68, 71);
	gfx.PutPixel(14 + x, 1 + y, 45, 61, 63);
	gfx.PutPixel(15 + x, 1 + y, 34, 54, 51);
	gfx.PutPixel(16 + x, 1 + y, 91, 104, 106);
	gfx.PutPixel(17 + x, 1 + y, 187, 188, 191);
	gfx.PutPixel(5 + x, 2 + y, 251, 252, 252);
	gfx.PutPixel(6 + x, 2 + y, 57, 67, 74);
	gfx.PutPixel(7 + x, 2 + y, 33, 47, 52);
	gfx.PutPixel(8 + x, 2 + y, 63, 84, 82);
	gfx.PutPixel(9 + x, 2 + y, 65, 83, 80);
	gfx.PutPixel(10 + x, 2 + y, 60, 75, 74);
	gfx.PutPixel(11 + x, 2 + y, 59, 75, 74);
	gfx.PutPixel(12 + x, 2 + y, 53, 70, 68);
	gfx.PutPixel(13 + x, 2 + y, 51, 66, 64);
	gfx.PutPixel(14 + x, 2 + y, 54, 68, 67);
	gfx.PutPixel(15 + x, 2 + y, 68, 87, 84);
	gfx.PutPixel(16 + x, 2 + y, 61, 82, 78);
	gfx.PutPixel(17 + x, 2 + y, 30, 44, 45);
	gfx.PutPixel(18 + x, 2 + y, 36, 43, 50);
	gfx.PutPixel(19 + x, 2 + y, 237, 238, 239);
	gfx.PutPixel(4 + x, 3 + y, 187, 191, 193);
	gfx.PutPixel(5 + x, 3 + y, 24, 34, 43);
	gfx.PutPixel(6 + x, 3 + y, 61, 79, 78);
	gfx.PutPixel(7 + x, 3 + y, 66, 86, 82);
	gfx.PutPixel(8 + x, 3 + y, 60, 75, 75);
	gfx.PutPixel(9 + x, 3 + y, 41, 53, 52);
	gfx.PutPixel(10 + x, 3 + y, 45, 56, 57);
	gfx.PutPixel(11 + x, 3 + y, 64, 82, 73);
	gfx.PutPixel(12 + x, 3 + y, 59, 76, 71);
	gfx.PutPixel(13 + x, 3 + y, 60, 76, 71);
	gfx.PutPixel(14 + x, 3 + y, 49, 64, 63);
	gfx.PutPixel(15 + x, 3 + y, 42, 53, 51);
	gfx.PutPixel(16 + x, 3 + y, 65, 82, 79);
	gfx.PutPixel(17 + x, 3 + y, 73, 93, 88);
	gfx.PutPixel(18 + x, 3 + y, 60, 79, 77);
	gfx.PutPixel(19 + x, 3 + y, 18, 25, 34);
	gfx.PutPixel(20 + x, 3 + y, 169, 173, 176);
	gfx.PutPixel(3 + x, 4 + y, 203, 206, 208);
	gfx.PutPixel(4 + x, 4 + y, 18, 30, 37);
	gfx.PutPixel(5 + x, 4 + y, 69, 89, 85);
	gfx.PutPixel(6 + x, 4 + y, 64, 82, 79);
	gfx.PutPixel(7 + x, 4 + y, 46, 60, 58);
	gfx.PutPixel(8 + x, 4 + y, 44, 60, 57);
	gfx.PutPixel(9 + x, 4 + y, 42, 52, 50);
	gfx.PutPixel(10 + x, 4 + y, 49, 61, 62);
	gfx.PutPixel(11 + x, 4 + y, 93, 112, 92);
	gfx.PutPixel(12 + x, 4 + y, 75, 94, 76);
	gfx.PutPixel(13 + x, 4 + y, 80, 98, 83);
	gfx.PutPixel(14 + x, 4 + y, 53, 67, 66);
	gfx.PutPixel(15 + x, 4 + y, 39, 47, 47);
	gfx.PutPixel(16 + x, 4 + y, 47, 61, 58);
	gfx.PutPixel(17 + x, 4 + y, 49, 61, 60);
	gfx.PutPixel(18 + x, 4 + y, 68, 84, 79);
	gfx.PutPixel(19 + x, 4 + y, 70, 90, 87);
	gfx.PutPixel(20 + x, 4 + y, 20, 29, 36);
	gfx.PutPixel(21 + x, 4 + y, 181, 184, 186);
	gfx.PutPixel(2 + x, 5 + y, 242, 243, 243);
	gfx.PutPixel(3 + x, 5 + y, 26, 37, 45);
	gfx.PutPixel(4 + x, 5 + y, 70, 90, 86);
	gfx.PutPixel(5 + x, 5 + y, 60, 77, 73);
	gfx.PutPixel(6 + x, 5 + y, 47, 62, 59);
	gfx.PutPixel(7 + x, 5 + y, 53, 70, 68);
	gfx.PutPixel(8 + x, 5 + y, 49, 62, 60);
	gfx.PutPixel(9 + x, 5 + y, 36, 42, 43);
	gfx.PutPixel(10 + x, 5 + y, 65, 83, 81);
	gfx.PutPixel(11 + x, 5 + y, 68, 87, 82);
	gfx.PutPixel(12 + x, 5 + y, 69, 88, 83);
	gfx.PutPixel(13 + x, 5 + y, 69, 87, 81);
	gfx.PutPixel(14 + x, 5 + y, 65, 84, 83);
	gfx.PutPixel(15 + x, 5 + y, 35, 40, 39);
	gfx.PutPixel(16 + x, 5 + y, 49, 61, 58);
	gfx.PutPixel(17 + x, 5 + y, 53, 69, 64);
	gfx.PutPixel(18 + x, 5 + y, 52, 66, 64);
	gfx.PutPixel(19 + x, 5 + y, 58, 74, 72);
	gfx.PutPixel(20 + x, 5 + y, 73, 94, 89);
	gfx.PutPixel(21 + x, 5 + y, 21, 31, 36);
	gfx.PutPixel(22 + x, 5 + y, 236, 237, 238);
	gfx.PutPixel(2 + x, 6 + y, 55, 65, 71);
	gfx.PutPixel(3 + x, 6 + y, 65, 82, 80);
	gfx.PutPixel(4 + x, 6 + y, 67, 86, 82);
	gfx.PutPixel(5 + x, 6 + y, 48, 62, 60);
	gfx.PutPixel(6 + x, 6 + y, 56, 73, 71);
	gfx.PutPixel(7 + x, 6 + y, 46, 57, 55);
	gfx.PutPixel(8 + x, 6 + y, 47, 56, 56);
	gfx.PutPixel(9 + x, 6 + y, 78, 97, 94);
	gfx.PutPixel(10 + x, 6 + y, 84, 95, 97);
	gfx.PutPixel(11 + x, 6 + y, 81, 93, 94);
	gfx.PutPixel(12 + x, 6 + y, 78, 90, 92);
	gfx.PutPixel(13 + x, 6 + y, 85, 98, 99);
	gfx.PutPixel(14 + x, 6 + y, 91, 105, 107);
	gfx.PutPixel(15 + x, 6 + y, 84, 102, 102);
	gfx.PutPixel(16 + x, 6 + y, 51, 59, 58);
	gfx.PutPixel(17 + x, 6 + y, 46, 57, 55);
	gfx.PutPixel(18 + x, 6 + y, 52, 68, 63);
	gfx.PutPixel(19 + x, 6 + y, 53, 68, 63);
	gfx.PutPixel(20 + x, 6 + y, 62, 78, 76);
	gfx.PutPixel(21 + x, 6 + y, 67, 86, 84);
	gfx.PutPixel(22 + x, 6 + y, 45, 53, 56);
	gfx.PutPixel(1 + x, 7 + y, 204, 206, 208);
	gfx.PutPixel(2 + x, 7 + y, 44, 59, 62);
	gfx.PutPixel(3 + x, 7 + y, 81, 102, 98);
	gfx.PutPixel(4 + x, 7 + y, 48, 61, 59);
	gfx.PutPixel(5 + x, 7 + y, 54, 70, 68);
	gfx.PutPixel(6 + x, 7 + y, 49, 62, 59);
	gfx.PutPixel(7 + x, 7 + y, 56, 65, 64);
	gfx.PutPixel(8 + x, 7 + y, 84, 99, 103);
	gfx.PutPixel(9 + x, 7 + y, 84, 97, 102);
	gfx.PutPixel(10 + x, 7 + y, 92, 104, 106);
	gfx.PutPixel(11 + x, 7 + y, 103, 117, 123);
	gfx.PutPixel(12 + x, 7 + y, 120, 138, 149);
	gfx.PutPixel(13 + x, 7 + y, 104, 118, 125);
	gfx.PutPixel(14 + x, 7 + y, 95, 108, 112);
	gfx.PutPixel(15 + x, 7 + y, 96, 107, 110);
	gfx.PutPixel(16 + x, 7 + y, 88, 104, 106);
	gfx.PutPixel(17 + x, 7 + y, 53, 62, 61);
	gfx.PutPixel(18 + x, 7 + y, 49, 60, 56);
	gfx.PutPixel(19 + x, 7 + y, 54, 70, 66);
	gfx.PutPixel(20 + x, 7 + y, 50, 64, 60);
	gfx.PutPixel(21 + x, 7 + y, 74, 94, 91);
	gfx.PutPixel(22 + x, 7 + y, 51, 68, 66);
	gfx.PutPixel(23 + x, 7 + y, 187, 189, 191);
	gfx.PutPixel(1 + x, 8 + y, 112, 129, 127);
	gfx.PutPixel(2 + x, 8 + y, 76, 97, 93);
	gfx.PutPixel(3 + x, 8 + y, 66, 83, 79);
	gfx.PutPixel(4 + x, 8 + y, 48, 60, 58);
	gfx.PutPixel(5 + x, 8 + y, 45, 58, 55);
	gfx.PutPixel(6 + x, 8 + y, 48, 57, 56);
	gfx.PutPixel(7 + x, 8 + y, 96, 114, 116);
	gfx.PutPixel(8 + x, 8 + y, 77, 87, 90);
	gfx.PutPixel(9 + x, 8 + y, 112, 125, 132);
	gfx.PutPixel(10 + x, 8 + y, 138, 161, 170);
	gfx.PutPixel(11 + x, 8 + y, 82, 94, 101);
	gfx.PutPixel(12 + x, 8 + y, 89, 73, 79);
	gfx.PutPixel(13 + x, 8 + y, 86, 99, 107);
	gfx.PutPixel(14 + x, 8 + y, 131, 150, 162);
	gfx.PutPixel(15 + x, 8 + y, 105, 118, 125);
	gfx.PutPixel(16 + x, 8 + y, 85, 95, 98);
	gfx.PutPixel(17 + x, 8 + y, 86, 102, 102);
	gfx.PutPixel(18 + x, 8 + y, 55, 62, 61);
	gfx.PutPixel(19 + x, 8 + y, 48, 57, 55);
	gfx.PutPixel(20 + x, 8 + y, 50, 61, 58);
	gfx.PutPixel(21 + x, 8 + y, 65, 81, 77);
	gfx.PutPixel(22 + x, 8 + y, 73, 93, 90);
	gfx.PutPixel(23 + x, 8 + y, 99, 118, 116);
	gfx.PutPixel(1 + x, 9 + y, 53, 72, 69);
	gfx.PutPixel(2 + x, 9 + y, 74, 92, 89);
	gfx.PutPixel(3 + x, 9 + y, 50, 63, 61);
	gfx.PutPixel(4 + x, 9 + y, 44, 57, 54);
	gfx.PutPixel(5 + x, 9 + y, 47, 58, 58);
	gfx.PutPixel(6 + x, 9 + y, 75, 96, 93);
	gfx.PutPixel(7 + x, 9 + y, 87, 99, 104);
	gfx.PutPixel(8 + x, 9 + y, 110, 123, 130);
	gfx.PutPixel(9 + x, 9 + y, 145, 169, 177);
	gfx.PutPixel(10 + x, 9 + y, 116, 55, 57);
	gfx.PutPixel(11 + x, 9 + y, 233, 44, 47);
	gfx.PutPixel(12 + x, 9 + y, 243, 42, 46);
	gfx.PutPixel(13 + x, 9 + y, 224, 42, 45);
	gfx.PutPixel(14 + x, 9 + y, 89, 40, 44);
	gfx.PutPixel(15 + x, 9 + y, 129, 147, 159);
	gfx.PutPixel(16 + x, 9 + y, 102, 113, 120);
	gfx.PutPixel(17 + x, 9 + y, 96, 106, 108);
	gfx.PutPixel(18 + x, 9 + y, 74, 93, 90);
	gfx.PutPixel(19 + x, 9 + y, 50, 58, 56);
	gfx.PutPixel(20 + x, 9 + y, 44, 51, 50);
	gfx.PutPixel(21 + x, 9 + y, 45, 55, 52);
	gfx.PutPixel(22 + x, 9 + y, 64, 84, 79);
	gfx.PutPixel(23 + x, 9 + y, 56, 76, 71);
	gfx.PutPixel(0 + x, 10 + y, 178, 187, 188);
	gfx.PutPixel(1 + x, 10 + y, 88, 104, 101);
	gfx.PutPixel(2 + x, 10 + y, 74, 91, 88);
	gfx.PutPixel(3 + x, 10 + y, 68, 87, 83);
	gfx.PutPixel(4 + x, 10 + y, 62, 79, 77);
	gfx.PutPixel(5 + x, 10 + y, 70, 86, 81);
	gfx.PutPixel(6 + x, 10 + y, 88, 105, 106);
	gfx.PutPixel(7 + x, 10 + y, 61, 70, 71);
	gfx.PutPixel(8 + x, 10 + y, 145, 164, 174);
	gfx.PutPixel(9 + x, 10 + y, 106, 80, 81);
	gfx.PutPixel(10 + x, 10 + y, 247, 45, 48);
	gfx.PutPixel(11 + x, 10 + y, 233, 45, 51);
	gfx.PutPixel(12 + x, 10 + y, 230, 42, 51);
	gfx.PutPixel(13 + x, 10 + y, 233, 43, 49);
	gfx.PutPixel(14 + x, 10 + y, 242, 43, 45);
	gfx.PutPixel(15 + x, 10 + y, 78, 68, 72);
	gfx.PutPixel(16 + x, 10 + y, 128, 145, 156);
	gfx.PutPixel(17 + x, 10 + y, 70, 77, 77);
	gfx.PutPixel(18 + x, 10 + y, 83, 99, 100);
	gfx.PutPixel(19 + x, 10 + y, 67, 83, 79);
	gfx.PutPixel(20 + x, 10 + y, 80, 98, 89);
	gfx.PutPixel(21 + x, 10 + y, 61, 78, 74);
	gfx.PutPixel(22 + x, 10 + y, 80, 97, 93);
	gfx.PutPixel(23 + x, 10 + y, 66, 83, 81);
	gfx.PutPixel(24 + x, 10 + y, 183, 192, 194);
	gfx.PutPixel(0 + x, 11 + y, 186, 193, 193);
	gfx.PutPixel(1 + x, 11 + y, 82, 99, 96);
	gfx.PutPixel(2 + x, 11 + y, 73, 89, 85);
	gfx.PutPixel(3 + x, 11 + y, 60, 76, 73);
	gfx.PutPixel(4 + x, 11 + y, 104, 127, 102);
	gfx.PutPixel(5 + x, 11 + y, 80, 102, 85);
	gfx.PutPixel(6 + x, 11 + y, 83, 97, 99);
	gfx.PutPixel(7 + x, 11 + y, 81, 92, 95);
	gfx.PutPixel(8 + x, 11 + y, 142, 165, 172);
	gfx.PutPixel(9 + x, 11 + y, 146, 50, 52);
	gfx.PutPixel(10 + x, 11 + y, 238, 45, 49);
	gfx.PutPixel(11 + x, 11 + y, 231, 46, 59);
	gfx.PutPixel(12 + x, 11 + y, 234, 61, 70);
	gfx.PutPixel(13 + x, 11 + y, 231, 43, 54);
	gfx.PutPixel(14 + x, 11 + y, 241, 41, 46);
	gfx.PutPixel(15 + x, 11 + y, 121, 57, 58);
	gfx.PutPixel(16 + x, 11 + y, 127, 147, 158);
	gfx.PutPixel(17 + x, 11 + y, 81, 90, 91);
	gfx.PutPixel(18 + x, 11 + y, 82, 97, 100);
	gfx.PutPixel(19 + x, 11 + y, 84, 104, 87);
	gfx.PutPixel(20 + x, 11 + y, 86, 105, 86);
	gfx.PutPixel(21 + x, 11 + y, 54, 71, 68);
	gfx.PutPixel(22 + x, 11 + y, 77, 95, 91);
	gfx.PutPixel(23 + x, 11 + y, 69, 86, 84);
	gfx.PutPixel(24 + x, 11 + y, 183, 191, 192);
	gfx.PutPixel(0 + x, 12 + y, 186, 193, 192);
	gfx.PutPixel(1 + x, 12 + y, 82, 99, 95);
	gfx.PutPixel(2 + x, 12 + y, 78, 97, 94);
	gfx.PutPixel(3 + x, 12 + y, 59, 77, 73);
	gfx.PutPixel(4 + x, 12 + y, 93, 113, 93);
	gfx.PutPixel(5 + x, 12 + y, 87, 109, 91);
	gfx.PutPixel(6 + x, 12 + y, 81, 96, 99);
	gfx.PutPixel(7 + x, 12 + y, 73, 84, 86);
	gfx.PutPixel(8 + x, 12 + y, 146, 168, 175);
	gfx.PutPixel(9 + x, 12 + y, 131, 54, 55);
	gfx.PutPixel(10 + x, 12 + y, 242, 44, 49);
	gfx.PutPixel(11 + x, 12 + y, 231, 46, 56);
	gfx.PutPixel(12 + x, 12 + y, 232, 49, 62);
	gfx.PutPixel(13 + x, 12 + y, 230, 42, 52);
	gfx.PutPixel(14 + x, 12 + y, 245, 42, 46);
	gfx.PutPixel(15 + x, 12 + y, 103, 66, 68);
	gfx.PutPixel(16 + x, 12 + y, 132, 151, 162);
	gfx.PutPixel(17 + x, 12 + y, 75, 83, 84);
	gfx.PutPixel(18 + x, 12 + y, 85, 100, 104);
	gfx.PutPixel(19 + x, 12 + y, 84, 104, 86);
	gfx.PutPixel(20 + x, 12 + y, 112, 134, 107);
	gfx.PutPixel(21 + x, 12 + y, 59, 74, 71);
	gfx.PutPixel(22 + x, 12 + y, 70, 86, 82);
	gfx.PutPixel(23 + x, 12 + y, 70, 88, 86);
	gfx.PutPixel(24 + x, 12 + y, 183, 190, 191);
	gfx.PutPixel(0 + x, 13 + y, 190, 196, 196);
	gfx.PutPixel(1 + x, 13 + y, 81, 98, 95);
	gfx.PutPixel(2 + x, 13 + y, 82, 100, 97);
	gfx.PutPixel(3 + x, 13 + y, 68, 86, 81);
	gfx.PutPixel(4 + x, 13 + y, 82, 101, 95);
	gfx.PutPixel(5 + x, 13 + y, 66, 83, 81);
	gfx.PutPixel(6 + x, 13 + y, 81, 98, 99);
	gfx.PutPixel(7 + x, 13 + y, 55, 62, 63);
	gfx.PutPixel(8 + x, 13 + y, 150, 167, 176);
	gfx.PutPixel(9 + x, 13 + y, 89, 85, 88);
	gfx.PutPixel(10 + x, 13 + y, 223, 53, 53);
	gfx.PutPixel(11 + x, 13 + y, 241, 44, 49);
	gfx.PutPixel(12 + x, 13 + y, 235, 43, 47);
	gfx.PutPixel(13 + x, 13 + y, 244, 42, 47);
	gfx.PutPixel(14 + x, 13 + y, 202, 63, 63);
	gfx.PutPixel(15 + x, 13 + y, 83, 89, 97);
	gfx.PutPixel(16 + x, 13 + y, 134, 150, 159);
	gfx.PutPixel(17 + x, 13 + y, 74, 81, 83);
	gfx.PutPixel(18 + x, 13 + y, 91, 109, 110);
	gfx.PutPixel(19 + x, 13 + y, 68, 83, 80);
	gfx.PutPixel(20 + x, 13 + y, 61, 77, 76);
	gfx.PutPixel(21 + x, 13 + y, 64, 82, 78);
	gfx.PutPixel(22 + x, 13 + y, 73, 89, 86);
	gfx.PutPixel(23 + x, 13 + y, 71, 89, 87);
	gfx.PutPixel(24 + x, 13 + y, 178, 186, 187);
	gfx.PutPixel(0 + x, 14 + y, 227, 229, 229);
	gfx.PutPixel(1 + x, 14 + y, 60, 79, 75);
	gfx.PutPixel(2 + x, 14 + y, 75, 96, 91);
	gfx.PutPixel(3 + x, 14 + y, 41, 51, 51);
	gfx.PutPixel(4 + x, 14 + y, 43, 53, 52);
	gfx.PutPixel(5 + x, 14 + y, 46, 57, 57);
	gfx.PutPixel(6 + x, 14 + y, 74, 94, 91);
	gfx.PutPixel(7 + x, 14 + y, 81, 93, 96);
	gfx.PutPixel(8 + x, 14 + y, 103, 115, 122);
	gfx.PutPixel(9 + x, 14 + y, 153, 173, 183);
	gfx.PutPixel(10 + x, 14 + y, 83, 74, 77);
	gfx.PutPixel(11 + x, 14 + y, 154, 58, 52);
	gfx.PutPixel(12 + x, 14 + y, 195, 56, 55);
	gfx.PutPixel(13 + x, 14 + y, 146, 48, 49);
	gfx.PutPixel(14 + x, 14 + y, 75, 77, 85);
	gfx.PutPixel(15 + x, 14 + y, 142, 159, 170);
	gfx.PutPixel(16 + x, 14 + y, 97, 106, 112);
	gfx.PutPixel(17 + x, 14 + y, 107, 121, 126);
	gfx.PutPixel(18 + x, 14 + y, 78, 99, 96);
	gfx.PutPixel(19 + x, 14 + y, 50, 59, 57);
	gfx.PutPixel(20 + x, 14 + y, 43, 50, 49);
	gfx.PutPixel(21 + x, 14 + y, 47, 56, 54);
	gfx.PutPixel(22 + x, 14 + y, 77, 94, 90);
	gfx.PutPixel(23 + x, 14 + y, 63, 82, 78);
	gfx.PutPixel(24 + x, 14 + y, 220, 223, 224);
	gfx.PutPixel(1 + x, 15 + y, 75, 98, 94);
	gfx.PutPixel(2 + x, 15 + y, 87, 107, 103);
	gfx.PutPixel(3 + x, 15 + y, 66, 82, 79);
	gfx.PutPixel(4 + x, 15 + y, 57, 72, 69);
	gfx.PutPixel(5 + x, 15 + y, 50, 62, 61);
	gfx.PutPixel(6 + x, 15 + y, 59, 70, 69);
	gfx.PutPixel(7 + x, 15 + y, 82, 99, 101);
	gfx.PutPixel(8 + x, 15 + y, 75, 85, 88);
	gfx.PutPixel(9 + x, 15 + y, 110, 123, 129);
	gfx.PutPixel(10 + x, 15 + y, 163, 184, 194);
	gfx.PutPixel(11 + x, 15 + y, 134, 153, 161);
	gfx.PutPixel(12 + x, 15 + y, 110, 122, 128);
	gfx.PutPixel(13 + x, 15 + y, 135, 155, 162);
	gfx.PutPixel(14 + x, 15 + y, 147, 164, 174);
	gfx.PutPixel(15 + x, 15 + y, 100, 111, 117);
	gfx.PutPixel(16 + x, 15 + y, 95, 107, 110);
	gfx.PutPixel(17 + x, 15 + y, 94, 110, 112);
	gfx.PutPixel(18 + x, 15 + y, 49, 55, 54);
	gfx.PutPixel(19 + x, 15 + y, 46, 56, 52);
	gfx.PutPixel(20 + x, 15 + y, 52, 64, 60);
	gfx.PutPixel(21 + x, 15 + y, 62, 76, 73);
	gfx.PutPixel(22 + x, 15 + y, 80, 100, 96);
	gfx.PutPixel(23 + x, 15 + y, 75, 97, 92);
	gfx.PutPixel(24 + x, 15 + y, 248, 249, 249);
	gfx.PutPixel(1 + x, 16 + y, 112, 121, 126);
	gfx.PutPixel(2 + x, 16 + y, 82, 101, 99);
	gfx.PutPixel(3 + x, 16 + y, 82, 102, 98);
	gfx.PutPixel(4 + x, 16 + y, 57, 73, 70);
	gfx.PutPixel(5 + x, 16 + y, 62, 81, 77);
	gfx.PutPixel(6 + x, 16 + y, 54, 67, 65);
	gfx.PutPixel(7 + x, 16 + y, 70, 83, 82);
	gfx.PutPixel(8 + x, 16 + y, 87, 105, 108);
	gfx.PutPixel(9 + x, 16 + y, 82, 92, 97);
	gfx.PutPixel(10 + x, 16 + y, 80, 89, 93);
	gfx.PutPixel(11 + x, 16 + y, 101, 114, 119);
	gfx.PutPixel(12 + x, 16 + y, 126, 140, 148);
	gfx.PutPixel(13 + x, 16 + y, 95, 105, 111);
	gfx.PutPixel(14 + x, 16 + y, 70, 78, 82);
	gfx.PutPixel(15 + x, 16 + y, 104, 118, 122);
	gfx.PutPixel(16 + x, 16 + y, 87, 102, 105);
	gfx.PutPixel(17 + x, 16 + y, 59, 72, 70);
	gfx.PutPixel(18 + x, 16 + y, 50, 60, 57);
	gfx.PutPixel(19 + x, 16 + y, 56, 74, 68);
	gfx.PutPixel(20 + x, 16 + y, 50, 63, 61);
	gfx.PutPixel(21 + x, 16 + y, 77, 97, 93);
	gfx.PutPixel(22 + x, 16 + y, 82, 101, 98);
	gfx.PutPixel(23 + x, 16 + y, 100, 111, 112);
	gfx.PutPixel(1 + x, 17 + y, 201, 204, 207);
	gfx.PutPixel(2 + x, 17 + y, 49, 63, 68);
	gfx.PutPixel(3 + x, 17 + y, 89, 111, 105);
	gfx.PutPixel(4 + x, 17 + y, 64, 80, 77);
	gfx.PutPixel(5 + x, 17 + y, 65, 84, 78);
	gfx.PutPixel(6 + x, 17 + y, 67, 85, 81);
	gfx.PutPixel(7 + x, 17 + y, 69, 88, 86);
	gfx.PutPixel(8 + x, 17 + y, 86, 103, 101);
	gfx.PutPixel(9 + x, 17 + y, 90, 110, 110);
	gfx.PutPixel(10 + x, 17 + y, 86, 100, 105);
	gfx.PutPixel(11 + x, 17 + y, 82, 95, 99);
	gfx.PutPixel(12 + x, 17 + y, 76, 87, 90);
	gfx.PutPixel(13 + x, 17 + y, 77, 89, 93);
	gfx.PutPixel(14 + x, 17 + y, 77, 89, 93);
	gfx.PutPixel(15 + x, 17 + y, 76, 93, 92);
	gfx.PutPixel(16 + x, 17 + y, 70, 82, 80);
	gfx.PutPixel(17 + x, 17 + y, 50, 61, 56);
	gfx.PutPixel(18 + x, 17 + y, 56, 73, 67);
	gfx.PutPixel(19 + x, 17 + y, 55, 70, 64);
	gfx.PutPixel(20 + x, 17 + y, 57, 71, 67);
	gfx.PutPixel(21 + x, 17 + y, 85, 106, 99);
	gfx.PutPixel(22 + x, 17 + y, 50, 64, 64);
	gfx.PutPixel(23 + x, 17 + y, 193, 197, 197);
	gfx.PutPixel(2 + x, 18 + y, 78, 87, 93);
	gfx.PutPixel(3 + x, 18 + y, 74, 90, 89);
	gfx.PutPixel(4 + x, 18 + y, 90, 111, 105);
	gfx.PutPixel(5 + x, 18 + y, 62, 80, 77);
	gfx.PutPixel(6 + x, 18 + y, 77, 99, 95);
	gfx.PutPixel(7 + x, 18 + y, 85, 110, 105);
	gfx.PutPixel(8 + x, 18 + y, 74, 94, 92);
	gfx.PutPixel(9 + x, 18 + y, 60, 74, 73);
	gfx.PutPixel(10 + x, 18 + y, 91, 115, 111);
	gfx.PutPixel(11 + x, 18 + y, 87, 109, 105);
	gfx.PutPixel(12 + x, 18 + y, 85, 108, 105);
	gfx.PutPixel(13 + x, 18 + y, 83, 105, 101);
	gfx.PutPixel(14 + x, 18 + y, 81, 103, 99);
	gfx.PutPixel(15 + x, 18 + y, 53, 63, 61);
	gfx.PutPixel(16 + x, 18 + y, 54, 65, 62);
	gfx.PutPixel(17 + x, 18 + y, 58, 74, 70);
	gfx.PutPixel(18 + x, 18 + y, 59, 76, 69);
	gfx.PutPixel(19 + x, 18 + y, 53, 67, 63);
	gfx.PutPixel(20 + x, 18 + y, 78, 98, 92);
	gfx.PutPixel(21 + x, 18 + y, 71, 87, 84);
	gfx.PutPixel(22 + x, 18 + y, 65, 76, 77);
	gfx.PutPixel(3 + x, 19 + y, 39, 50, 58);
	gfx.PutPixel(4 + x, 19 + y, 86, 106, 102);
	gfx.PutPixel(5 + x, 19 + y, 98, 121, 114);
	gfx.PutPixel(6 + x, 19 + y, 74, 93, 90);
	gfx.PutPixel(7 + x, 19 + y, 83, 108, 105);
	gfx.PutPixel(8 + x, 19 + y, 94, 120, 116);
	gfx.PutPixel(9 + x, 19 + y, 59, 78, 77);
	gfx.PutPixel(10 + x, 19 + y, 86, 108, 108);
	gfx.PutPixel(11 + x, 19 + y, 120, 144, 122);
	gfx.PutPixel(12 + x, 19 + y, 105, 130, 112);
	gfx.PutPixel(13 + x, 19 + y, 109, 133, 113);
	gfx.PutPixel(14 + x, 19 + y, 69, 88, 87);
	gfx.PutPixel(15 + x, 19 + y, 46, 58, 53);
	gfx.PutPixel(16 + x, 19 + y, 60, 76, 72);
	gfx.PutPixel(17 + x, 19 + y, 58, 74, 69);
	gfx.PutPixel(18 + x, 19 + y, 55, 71, 66);
	gfx.PutPixel(19 + x, 19 + y, 73, 94, 87);
	gfx.PutPixel(20 + x, 19 + y, 78, 95, 92);
	gfx.PutPixel(21 + x, 19 + y, 39, 51, 52);
	gfx.PutPixel(22 + x, 19 + y, 241, 242, 243);
	gfx.PutPixel(3 + x, 20 + y, 203, 205, 208);
	gfx.PutPixel(4 + x, 20 + y, 30, 43, 52);
	gfx.PutPixel(5 + x, 20 + y, 94, 115, 113);
	gfx.PutPixel(6 + x, 20 + y, 113, 141, 135);
	gfx.PutPixel(7 + x, 20 + y, 97, 122, 118);
	gfx.PutPixel(8 + x, 20 + y, 88, 111, 108);
	gfx.PutPixel(9 + x, 20 + y, 70, 90, 88);
	gfx.PutPixel(10 + x, 20 + y, 87, 112, 110);
	gfx.PutPixel(11 + x, 20 + y, 102, 125, 114);
	gfx.PutPixel(12 + x, 20 + y, 93, 116, 106);
	gfx.PutPixel(13 + x, 20 + y, 97, 119, 104);
	gfx.PutPixel(14 + x, 20 + y, 69, 90, 89);
	gfx.PutPixel(15 + x, 20 + y, 51, 65, 60);
	gfx.PutPixel(16 + x, 20 + y, 53, 68, 64);
	gfx.PutPixel(17 + x, 20 + y, 63, 80, 75);
	gfx.PutPixel(18 + x, 20 + y, 83, 103, 96);
	gfx.PutPixel(19 + x, 20 + y, 79, 97, 92);
	gfx.PutPixel(20 + x, 20 + y, 34, 42, 45);
	gfx.PutPixel(21 + x, 20 + y, 178, 183, 184);
	gfx.PutPixel(4 + x, 21 + y, 218, 221, 223);
	gfx.PutPixel(5 + x, 21 + y, 44, 58, 66);
	gfx.PutPixel(6 + x, 21 + y, 87, 109, 109);
	gfx.PutPixel(7 + x, 21 + y, 130, 159, 153);
	gfx.PutPixel(8 + x, 21 + y, 126, 159, 154);
	gfx.PutPixel(9 + x, 21 + y, 101, 127, 124);
	gfx.PutPixel(10 + x, 21 + y, 81, 102, 99);
	gfx.PutPixel(11 + x, 21 + y, 84, 108, 104);
	gfx.PutPixel(12 + x, 21 + y, 85, 109, 104);
	gfx.PutPixel(13 + x, 21 + y, 82, 106, 101);
	gfx.PutPixel(14 + x, 21 + y, 73, 91, 88);
	gfx.PutPixel(15 + x, 21 + y, 66, 84, 79);
	gfx.PutPixel(16 + x, 21 + y, 89, 110, 106);
	gfx.PutPixel(17 + x, 21 + y, 86, 107, 100);
	gfx.PutPixel(18 + x, 21 + y, 69, 84, 82);
	gfx.PutPixel(19 + x, 21 + y, 33, 41, 44);
	gfx.PutPixel(20 + x, 21 + y, 188, 193, 193);
	gfx.PutPixel(6 + x, 22 + y, 80, 92, 99);
	gfx.PutPixel(7 + x, 22 + y, 63, 83, 89);
	gfx.PutPixel(8 + x, 22 + y, 122, 149, 144);
	gfx.PutPixel(9 + x, 22 + y, 120, 147, 143);
	gfx.PutPixel(10 + x, 22 + y, 82, 101, 98);
	gfx.PutPixel(11 + x, 22 + y, 79, 98, 94);
	gfx.PutPixel(12 + x, 22 + y, 82, 100, 96);
	gfx.PutPixel(13 + x, 22 + y, 90, 108, 103);
	gfx.PutPixel(14 + x, 22 + y, 83, 100, 95);
	gfx.PutPixel(15 + x, 22 + y, 83, 104, 98);
	gfx.PutPixel(16 + x, 22 + y, 83, 103, 98);
	gfx.PutPixel(17 + x, 22 + y, 37, 48, 51);
	gfx.PutPixel(18 + x, 22 + y, 56, 64, 67);
	gfx.PutPixel(19 + x, 22 + y, 241, 242, 242);
	gfx.PutPixel(7 + x, 23 + y, 215, 218, 220);
	gfx.PutPixel(8 + x, 23 + y, 149, 165, 164);
	gfx.PutPixel(9 + x, 23 + y, 83, 111, 105);
	gfx.PutPixel(10 + x, 23 + y, 88, 103, 99);
	gfx.PutPixel(11 + x, 23 + y, 86, 103, 97);
	gfx.PutPixel(12 + x, 23 + y, 88, 104, 98);
	gfx.PutPixel(13 + x, 23 + y, 86, 103, 96);
	gfx.PutPixel(14 + x, 23 + y, 76, 92, 85);
	gfx.PutPixel(15 + x, 23 + y, 69, 89, 84);
	gfx.PutPixel(16 + x, 23 + y, 119, 134, 133);
	gfx.PutPixel(17 + x, 23 + y, 204, 206, 207);
	gfx.PutPixel(10 + x, 24 + y, 210, 214, 214);
	gfx.PutPixel(11 + x, 24 + y, 199, 204, 203);
	gfx.PutPixel(12 + x, 24 + y, 200, 205, 204);
	gfx.PutPixel(13 + x, 24 + y, 201, 205, 205);
	gfx.PutPixel(14 + x, 24 + y, 225, 228, 229);

}

