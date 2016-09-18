// Son Huynh
// Scene 9

import java.awt.*;
import java.util.*;

public class Scene9 extends java.applet.Applet
{	
	int appletWidth, appletHeight, x_boat, y_boat;					//Declaration
	
	public void paint(Graphics g)
	{
		background(g);								//Function call for background

		//**** DRAWS EARTH ****
		g.setColor(new Color(0, 128, 255));		//Sets color
		earth(g);								//Function call for earth
		
		//**** DRAWS CONTINENTS ****
		g.setColor(Color.green);				//Sets color
		continents(g);							//Function call for continents
		
		//**** DRAWS STARS ****
		g.setColor(new Color(220, 225, 130));	//Sets color
		stars(g);								//Function call for stars
		
		//**** DRAWS MOON ****
		g.setColor(new Color(225, 225, 225));	//Sets color
		moon(g);								//Function call for Moon
		
		//**** DRAWS CRATERS ****
		g.setColor(new Color(175, 175, 175));	//Sets color
		craters(g);								//Function call for Craters
		
		do
		{
			//**** DRAWS BOAT ****
			g.setColor(new Color(100, 110, 120));	//Sets color
			body_boat(g, x_boat, y_boat);			//Function call for Body Boat
			
			g.setColor(new Color(180, 180, 150));	//Sets color
			top_boat(g, x_boat, y_boat);			//Function call for Top Boat
			
			delay(100);
			
			//**** BLACKOUT BOAT'S BODY ****
			g.setColor(Color.black);				//Sets color to background
			body_boat(g, x_boat, y_boat);			//Function call for Body Boat
			top_boat(g, x_boat, y_boat);			//Function call for Top Boat
			
			//**** MOVE BOAT ****
			moveboat();								//Function call move boat
			
		}
		while (x_boat <= appletWidth);
	}
	
	//**** DRAWS EARTH ****
	public void earth(Graphics g)
	{
		g.fillOval(-200, 500, 400, 400);				//Draws earth
	}
	
	//**** DRAWS CONTINENTS ****
	public void continents(Graphics g)
	{
		g.fillOval(50, 600, 100, 200);					//Draws continent 1
		g.fillOval(-50, 650, 200, 100);					//Draws continent 2
		g.fillOval(-100, 550, 150, 100);				//Draws continent 3
	}
	
	//**** DRAWS STARS ****
	public void stars(Graphics g)
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
		
		Polygon star2 = new Polygon();
		
		star2.addPoint(420, 160);					//1st top point, going clockwise
		star2.addPoint(435, 200);					//1st inner point
		star2.addPoint(475, 200);					//2nd outer point
		star2.addPoint(442, 225);					//2nd inner point
		star2.addPoint(455, 265);					//3rd outer point
		star2.addPoint(420, 240);					//3rd inner point
		star2.addPoint(385, 265);					//4th outer point
		star2.addPoint(397, 225);					//4th inner point
		star2.addPoint(365, 200);					//5th outer point
		star2.addPoint(405, 200);					//5th inner point
		
		g.fillPolygon(star2);
		
		Polygon star3 = new Polygon();
		
		star3.addPoint(220, 260);					//1st top point, going clockwise
		star3.addPoint(235, 300);					//1st inner point
		star3.addPoint(275, 300);					//2nd outer point
		star3.addPoint(242, 325);					//2nd inner point
		star3.addPoint(255, 365);					//3rd outer point
		star3.addPoint(220, 340);					//3rd inner point
		star3.addPoint(185, 365);					//4th outer point
		star3.addPoint(197, 325);					//4th inner point
		star3.addPoint(165, 300);					//5th outer point
		star3.addPoint(205, 300);					//5th inner point
		
		g.fillPolygon(star3);
		
		Polygon star4 = new Polygon();
		
		star4.addPoint(520, -40);					//1st top point, going clockwise
		star4.addPoint(535, 0);						//1st inner point
		star4.addPoint(575, 0);						//2nd outer point
		star4.addPoint(542, 25);					//2nd inner point
		star4.addPoint(555, 65);					//3rd outer point
		star4.addPoint(520, 40);					//3rd inner point
		star4.addPoint(485, 65);					//4th outer point
		star4.addPoint(497, 25);					//4th inner point
		star4.addPoint(465, 0);						//5th outer point
		star4.addPoint(505, 0);						//5th inner point
		
		g.fillPolygon(star4);
		
		Polygon star5 = new Polygon();
		
		star5.addPoint(820, 460);					//1st top point, going clockwise
		star5.addPoint(835, 500);					//1st inner point
		star5.addPoint(875, 500);					//2nd outer point
		star5.addPoint(842, 525);					//2nd inner point
		star5.addPoint(855, 565);					//3rd outer point
		star5.addPoint(820, 540);					//3rd inner point
		star5.addPoint(785, 565);					//4th outer point
		star5.addPoint(797, 525);					//4th inner point
		star5.addPoint(765, 500);					//5th outer point
		star5.addPoint(805, 500);					//5th inner point
		
		g.fillPolygon(star5);
	}
	
	//**** DRAWS MOON ****
	public void moon(Graphics g)
	{
		g.fillOval(900, 500, 100, 100);			//Draws moon
	}

	//**** DRAWS MOON CRATER ****
	public void craters(Graphics g)
	{
		g.fillOval(920, 520, 20, 20);			//Draws crater 1
		g.fillOval(950, 540, 25, 25);			//Draws crater 2
		g.fillOval(940, 560, 30, 30);			//Draws crater 3
	}
	
	//**** DRAWS BOAT'S BODY ****
	public void body_boat(Graphics g, int x_boat, int y_boat)
	{
		g.fillRect(250 + x_boat, 550 + y_boat, 120, 40);			//Draws boat body
		
		Polygon boat = new Polygon ();
		
		boat.addPoint(370 + x_boat, 550 + y_boat);		//1st point, inner point
		boat.addPoint(430 + x_boat, 550 + y_boat);		//2nd point, outer tip
		boat.addPoint(410 + x_boat, 570 + y_boat);		//3rd point
		boat.addPoint(370 + x_boat, 590 + y_boat);		//4th point
		
		g.fillPolygon(boat);
	}
	
	//**** DRAWS BOAT'S TOP ****
	public void top_boat(Graphics g, int x_boat, int y_boat)
	{
		g.fillRect(310 + x_boat, 510 + y_boat, 60, 40);		//Bottom box
		g.fillRect(330 + x_boat, 490 + y_boat, 40, 20);		//Middle box
		
		Polygon topbox = new Polygon ();
		
		topbox.addPoint(370 + x_boat, 510 + y_boat);	//1st Point
		topbox.addPoint(410 + x_boat, 550 + y_boat);	//2nd Point
		topbox.addPoint(370 + x_boat, 550 + y_boat);	//3rd Point
		
		g.fillPolygon(topbox);
	}

	//**** MOVE BOAT ****
	public void moveboat()
	{
		x_boat += 20;						//Moves boat across
		y_boat -= 10;						//Moves boat up
	}

	public void delay(int n)
    {
	   long startDelay = System.currentTimeMillis();
	   long endDelay = 0;
	   while (endDelay - startDelay < n)
		 endDelay = System.currentTimeMillis();
    }
    
    public void background(Graphics g)
    {
    	appletWidth = getWidth();					//Sets width
    	appletHeight = getHeight();					//Sets height
    	
    	g.setColor(Color.black);					//Sets color 
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills background
    }
							
}