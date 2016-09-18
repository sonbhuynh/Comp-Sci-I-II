// Son Huynh
// 

import java.awt.*;
import java.util.*;

public class Scene3 extends java.applet.Applet
{	
	int appletWidth, appletHeight, x_ball, x_forrest, count = 0;					//Declaration
	
	public void paint(Graphics g)
	{
		background(g);								//Function call for background
		
		greenfield(g);								//Function call for Green Field
		
		do
		{
			//***** DRAW FOOTBALL *****
			g.setColor(new Color(106, 82, 57));				//Sets color
			football(g, x_ball);							//Function call for football
			
			//***** DRAW FOOTBALL GRIP *****
			g.setColor(Color.white);				//Sets color
			footballgrip(g, x_ball);				//Function call for football grip
			
			//***** DRAW FORREST *****
			g.setColor(Color.white);				//Sets color
			runforrest(g, x_forrest);				//Function call for running forrest
			
			//***** DRAW EYES *****
			g.setColor(Color.black);				//Sets color
			forresteyes(g, x_forrest);				//Function call for Forrest's eyes
			
			delay (100);
			
			count++;
			
			//***** BLACK-OUT *****
			g.setColor(new Color(0, 255, 255));		//Sets color
			football(g, x_ball);					//Function call for football
			footballgrip(g, x_ball);				//Function call for football grip
			runforrest(g, x_forrest);				//Function call for running forrest
			forresteyes(g, x_forrest);				//Function call for Forrest's eyes
			
			//***** MOVE *****
			moveball_forrest();						//Function call for moving football and forrest
		}
		while(count <= 45);
	}
	
	//**** DRAW GREENFIELD ****
	public void greenfield(Graphics g)
	{
		g.setColor(Color.green);							//Sets color
		g.fillRect(0, 670, appletWidth, appletHeight);		//Draws the field
	}
	
	
	//***** DRAW FOOTBALL *****
	public void football(Graphics g, int x_ball)
	{
		
		g.fillOval(50 + x_ball, 250, 75, 50);				//Draws football
	}
	
	//***** DRAW FOOTBALL GRIP *****
	public void footballgrip(Graphics g, int x_ball)
	{
		g.drawLine(75 + x_ball, 245, 75 + x_ball, 255);				//Draws line on football
		g.drawLine(85 + x_ball, 245, 85 + x_ball, 255);				//Draws line on football
		g.drawLine(95 + x_ball, 245, 95 + x_ball, 255);				//Draws line on football
	}
	
	//***** DRAW FORREST *****
	public void runforrest(Graphics g, int x_forrest)
	{
		g.fillOval(50 + x_forrest, 500, 50, 50);				//Draws head
		g.drawLine(75 + x_forrest, 550, 55 + x_forrest, 630);				//Draws body
		
		g.drawLine(70 + x_forrest, 570, 100 + x_forrest, 570);				//Draws right arm
		g.drawLine(100 + x_forrest, 570, 120 + x_forrest, 555);
		
		g.drawLine(70 + x_forrest, 570, 40 + x_forrest, 570);				//Draws left arm
		g.drawLine(40 + x_forrest, 570, 20 + x_forrest, 585);
		
		g.drawLine(55 + x_forrest, 630, 90 + x_forrest, 640);				//Draws right leg
		g.drawLine(90 + x_forrest, 640, 70 + x_forrest, 670);
		
		g.drawLine(55 + x_forrest, 630, 65 + x_forrest, 650);				//Draws left leg
		g.drawLine(65 + x_forrest, 650, 30 + x_forrest, 670);
	}
	
	//***** DRAW EYES *****
	public void forresteyes(Graphics g, int x_forrest)
	{
		g.fillOval(70 + x_forrest, 510, 13, 13);				//Draws left, bigger eye
		g.fillOval(87 + x_forrest, 510, 10, 10);				//Draws right, smaller eye
	}
	
	//***** MOVE FUNCTION *****
	public void moveball_forrest()
	{
		x_ball += 25;								//Moves football across
		x_forrest += 40;							//Moves forrest across
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
    	
    	g.setColor(new Color(0, 255, 255));			//Sets color
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills rectangle
    }
							
}
