// Javastart.java
// This program will draw a face and make the eye wink

import java.awt.*;

public class D11J extends java.applet.Applet
{	
	int appletWidth, appletHeight;					//Declaration
	
	public void paint(Graphics g)
	{
		background(g);								//Function call for background
		
		//***** DRAW FACE *****
		drawface(g);								//Function call for draw face
		
		//***** DRAW RIGHT EYE *****
		drawrighteye(g);							//Function call for draw right eye
		
		//***** DRAW MOUTH *****
		drawmouth(g);								//Function call for draw mouth
		
		//***** DRAW EYEBROWS *****
		drawbrows(g);								//Function call for draw brows
		
		//***** DRAW WORDS *****
		drawwords(g);								//Function call for draw words
		
		do
		{
			//***** DRAW OPEN EYE *****
			g.setColor(new Color(250, 135, 80));	//Sets color of Open eye
			drawopeneye(g);							//Function call for Open eye
			
			delay (200);
			
			//*** BLACK-OUT OPEN EYE ***
			g.setColor(new Color(255, 215, 128));	//Sets color to face's color
			drawopeneye(g);							//Function call for Open eye
			
			//***** DRAW CLOSED EYE *****
			g.setColor(new Color(250, 135, 80));	//Sets color of Closed eye
			drawclosedeye(g);						//Function call for Closed eye
			
			delay (200);
			
			//*** BLACK-OUT CLOSED EYE ***
			g.setColor(new Color(255, 215, 128));	//Sets color to face's color
			drawclosedeye(g);						//Function call for Closed eye
		}
		while (5 == 5);
	}
	
	//***** DRAW FACE *****
	public void drawface(Graphics g)
	{
		g.setColor(new Color(255, 215, 128));		//Sets color of face
		g.fillOval(300, 200, 400, 420);				//Draws face
	}
	
	//***** DRAW RIGHT EYE *****
	public void drawrighteye(Graphics g)
	{
		g.setColor(new Color(250, 135, 80));		//Sets color of right eye
		g.fillOval(550, 300, 75, 50);				//Draws right eye
	}
	
	//***** DRAW MOUTH *****
	public void drawmouth(Graphics g)
	{
		g.setColor(new Color(155, 255, 75));		//Sets color of mouth
		g.fillOval(450, 500, 100, 75);				//Draws mouth
	}
	
	//***** DRAW EYEBROWS *****
	public void drawbrows(Graphics g)
	{
		g.setColor(new Color(0, 0, 0));				//Sets color of right eyebrow
		g.drawArc(515, 280, 140, 100, 60, 60);		//Draws right eyebrow
		g.drawArc(515, 281, 140, 100, 60, 60);
		g.drawArc(515, 282, 140, 100, 60, 60);
		g.drawArc(515, 283, 140, 100, 60, 60);
		g.drawArc(515, 284, 140, 100, 60, 60);
		
		g.drawArc(340, 280, 140, 100, 60, 60);		//Draws left eyebrow
		g.drawArc(340, 281, 140, 100, 60, 60);
		g.drawArc(340, 282, 140, 100, 60, 60);
		g.drawArc(340, 283, 140, 100, 60, 60);
		g.drawArc(340, 284, 140, 100, 60, 60);
	}
	
	//***** DRAW WORDS *****
	public void drawwords(Graphics g)
	{
		g.setColor(Color.orange);									//Sets Color
		g.setFont(new Font("Calibri", Font.BOLD, 50));				//Sets Font
		g.drawString("Hello", 450, 180);							//Outputs Hello
		
		g.setColor(Color.gray);										//Sets Color
		g.setFont(new Font("Courier", Font.BOLD, 50));				//Sets Font
		g.drawString("How", 200, 430);								//Outputs How
		
		g.setColor(Color.blue);										//Sets Color
		g.setFont(new Font("Arial", Font.BOLD, 50));				//Sets Font
		g.drawString("Are", 720, 430);								//Outputs Are
		
		g.setColor(Color.green);									//Sets Color
		g.setFont(new Font("Algerian", Font.PLAIN, 50));			//Sets Font
		g.drawString("You?", 440, 670);								//Outputs You?
	}
	
	//***** DRAW OPEN EYE *****
	public void drawopeneye(Graphics g)
	{
		g.fillOval(375, 300, 75, 50);				//Draws open eye
	}
	
	//***** DRAW CLOSED EYE *****
	public void drawclosedeye(Graphics g)
	{
		g.fillRect(375, 320, 75, 20);				//Draws closed eye
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
    	
    	g.setColor(Color.red);					//Sets color of background
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills in background
    }
							
}