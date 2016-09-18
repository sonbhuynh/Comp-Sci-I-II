// Javastart.java
// This program will draw a star

import java.awt.*;
import java.util.*;

public class D10J extends java.applet.Applet
{	
	int appletWidth, appletHeight, red, green, blue, x, y, starcolor;						//Declaration
	
	Random rnd = new Random();							//Randomize
	
	public void paint(Graphics g)
	{
		background(g);									//Function call for background
		
		//****** RANDOM STAR COLOR ******
		starrandom();									//Function call for Randomizing star
		
		//***** RANDOM LOCATION *****
		starlocation();									//Function call for Random location
		
		//****** DRAW STAR ******
		g.setColor(new Color(red, green, blue));		//Sets color of Star
		drawstar(g);									//Function call for Draw Star
	}
	
	//****** DRAW STAR ******
	public void drawstar(Graphics g)
	{
		Polygon star = new Polygon();
			star.addPoint(300 + x, 300 + y);						//Top point (Clock-wise)
			star.addPoint(320 + x, 360 + y);						//1st inner point
			star.addPoint(380 + x, 360 + y);						//2nd outer point
			star.addPoint(330 + x, 390 + y);						//2nd inner point
			star.addPoint(350 + x, 450 + y);						//3rd outer point
			star.addPoint(300 + x, 410 + y);						//3rd inner point
			star.addPoint(250 + x, 450 + y);						//4th outer point
			star.addPoint(270 + x, 390 + y);						//4th inner point
			star.addPoint(220 + x, 360 + y);						//5th outer point
			star.addPoint(280 + x, 360 + y);						//5th inner point
			g.fillPolygon(star);							//Fills in color of Star
	}
	
	//***** RANDOM STAR COLOR *****
	public void starrandom()
	{
		red = rnd.nextInt(256);					//Random a number for Red
		green = rnd.nextInt(256);					//Random a number for Green
		blue = rnd.nextInt(256);					//Random a number for Blue
	}
	
	//***** RANDOM LOCATION *****
	public void starlocation()
	{
		x = rnd.nextInt(appletWidth - 350);		//Random x value 
		y = rnd.nextInt(appletHeight - 450);		//Random y value
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
    	appletWidth = getWidth();						//Sets width
    	appletHeight = getHeight();						//Sets height
    	
    	g.setColor(new Color(red, green, blue));		//Sets background
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills in background
    }
							
}