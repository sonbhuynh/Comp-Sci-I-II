// Son Huynh
// Scene 10

import java.awt.*;
import java.util.*;

public class Scene10 extends java.applet.Applet
{	
	int appletWidth, appletHeight, y_man_s10, ydir_s10 = -1;			//Declaration
	
	public void scene10(Graphics g)
	{
		background_s10(g);							//Function call for background
		
		//***** DRAWS STARS *****
		g.setColor(new Color(220, 225, 130));	//Sets color
		stars_s10(g);								//Function call for stars
		
		//**** DRAWS BOAT BODY ****
		g.setColor(new Color(100, 110, 120));	//Sets color
		body_boat_s10(g);							//Function call for Body Boat
		
		g.setColor(new Color(180, 180, 150));	//Sets color
		top_boat_s10(g);							//Function call for Top Boat
		
		//**** DRAWS DOOR ****
		g.setColor(new Color(100, 110, 120));	//Sets color
		door_s10(g);								//Function call for Door
		
		g.setColor(new Color(0, 255, 255));		//Sets color
		doorknob_s10(g);							//Function call for Door Knob
		
								
		
		do
		{
			//**** DRAWS BOAT BODY ****
			g.setColor(new Color(100, 110, 120));	//Sets color
			body_boat_s10(g);							//Function call for Body Boat
			
			//***** DRAWS MAN *****
			g.setColor(new Color(255, 255, 255));	//Sets color
			man_s10(g);									//Function call for man
			
			delay (35);
			
			//***** BLACK OUT MAN *****
			g.setColor(Color.black);				//Sets color to background
			man_s10(g);									//Function call for man
			
			movemanup_s10();							//Function call for Moving man up
			
			checkmanup_s10();							//Function call for Check man up
		}
		while (y_man_s10 <= appletHeight - 200);
	}
	
	//**** DRAWS STARS ****
	public void stars_s10(Graphics g)
	{
		Polygon star = new Polygon();
		
		star.addPoint(120, 60);						//1st top point, going clockwise
		star.addPoint(135, 100);					//1st inner point
		star.addPoint(175, 100);					//2nd outer point
		star.addPoint(142, 125);					//2nd inner point
		star.addPoint(155, 165);					//3rd outer point
		star.addPoint(120, 140);					//3rd inner point
		star.addPoint(85, 165);						//4th outer point
		star.addPoint(97, 125);						//4th inner point
		star.addPoint(65, 100);						//5th outer point
		star.addPoint(105, 100);					//5th inner point
		
		g.fillPolygon(star);
		
		Polygon star1 = new Polygon();
		
		star1.addPoint(820, 160);					//1st top point, going clockwise
		star1.addPoint(835, 200);					//1st inner point
		star1.addPoint(875, 200);					//2nd outer point
		star1.addPoint(842, 225);					//2nd inner point
		star1.addPoint(855, 265);					//3rd outer point
		star1.addPoint(820, 240);					//3rd inner point
		star1.addPoint(785, 265);					//4th outer point
		star1.addPoint(797, 225);					//4th inner point
		star1.addPoint(765, 200);					//5th outer point
		star1.addPoint(805, 200);					//5th inner point
		
		g.fillPolygon(star1);
		
		Polygon star2 = new Polygon();
		
		star2.addPoint(520, -40);					//1st top point, going clockwise
		star2.addPoint(535, 0);						//1st inner point
		star2.addPoint(575, 0);						//2nd outer point
		star2.addPoint(542, 25);					//2nd inner point
		star2.addPoint(555, 65);					//3rd outer point
		star2.addPoint(520, 40);					//3rd inner point
		star2.addPoint(485, 65);					//4th outer point
		star2.addPoint(497, 25);					//4th inner point
		star2.addPoint(465, 0);						//5th outer point
		star2.addPoint(505, 0);						//5th inner point
		
		g.fillPolygon(star2);
	}
	
	//**** DRAWS BOAT'S BODY ****
	public void body_boat_s10(Graphics g)
	{
		g.fillRect(100, 450, 600, 190);			//Draws boat body
		
		Polygon boat = new Polygon ();
		
		boat.addPoint(700, 450);		//1st point, inner point
		boat.addPoint(940, 450);		//2nd point, outer tip
		boat.addPoint(880, 530);		//3rd point
		boat.addPoint(700, 640);		//4th point
		
		g.fillPolygon(boat);
	}
	
	//**** DRAWS BOAT'S TOP ****
	public void top_boat_s10(Graphics g)
	{
		g.fillRect(400, 250, 300, 200);		//Bottom box
		g.fillRect(500, 150, 200, 100);		//Top box
		
		Polygon topbox = new Polygon ();
		
		topbox.addPoint(700, 250);	//1st Point
		topbox.addPoint(850, 450);	//2nd Point
		topbox.addPoint(700, 450);	//3rd Point
		
		g.fillPolygon(topbox);
	}
	
	//**** DRAWS DOOR ****
	public void door_s10(Graphics g)
	{
		g.drawRect(400, 300, 100, 150);			//Draws door
	}
	
	//**** DRAWS DOOR KNOB ****
	public void doorknob_s10(Graphics g)
	{
		g.fillOval(435, 330, 30, 30);			//Draws door knob
	}

	//**** DRAWS PARACHUTE MAN ****
	public void man_s10(Graphics g)
	{
		g.fillRect(310, 360 + y_man_s10, 30, 40);			//Draws parachute
		
		g.drawLine(325, 350 + y_man_s10, 325, 410 + y_man_s10);			//Draws man
		g.drawLine(325, 410 + y_man_s10, 300, 450 + y_man_s10);			//Draws left leg
		g.drawLine(325, 410 + y_man_s10, 350, 450 + y_man_s10);			//Draws right leg
		g.drawLine(325, 380 + y_man_s10, 290, 360 + y_man_s10);			//Draws left arm
		g.drawLine(325, 380 + y_man_s10, 360, 360 + y_man_s10);			//Draws right arm
		
		g.fillOval(300, 300 + y_man_s10, 50, 50);			//Draws head		
	}
	
	//***** MOVE MAN UP *****
	public void movemanup_s10()
	{
		y_man_s10 += ydir_s10 * 10;							//Moves man up
	}
	
	//***** CHECK MAN UP *****
	public void checkmanup_s10()
	{
		if (y_man_s10 <= 100)							//Checking up
			ydir_s10 = 1;
	}
    
    public void background_s10(Graphics g)
    {
    	appletWidth = getWidth();						//Sets width
    	appletHeight = getHeight();						//Sets height
    	
    	g.setColor(Color.black);						//Sets color
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills rectangle
    }
							
}