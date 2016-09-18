// Javastart.java
// This program begins a java program

import java.awt.*;

public class D1J extends java.applet.Applet
{	
	public void paint(Graphics g)
	{
		g.setColor(Color.red);			//Set rectangle's color red
		g.drawLine(30, 40, 130, 40);	//Draws Top line starting at 30,40
		
		g.drawLine(130, 40, 130, 140);	//Draws Right line starting at 130, 40
		
		g.drawLine(130, 140, 30, 140);	//Draws Bottom line starting at 130, 140
		
		g.drawLine(30, 140, 30, 40);	//Draws Left line starting at 30, 140
		
		//***********************
		
		g.setColor(Color.green);
		g.fillRect(50, 60, 1, 1);		//Draws Top row, left to right
		
		g.setColor(Color.blue);
		g.fillRect(65, 60, 1, 1);
		
		g.setColor(Color.orange);
		g.fillRect(80, 60, 1, 1);
		
		g.setColor(Color.red);
		g.fillRect(95, 60, 1, 1);
		
		g.setColor(Color.black);
		g.fillRect(110, 60, 1, 1);
		
		//***********************
		
		g.setColor(Color.gray);
		g.fillRect(110, 75, 1, 1);		//Draws Right row, top to bottom
		
		g.setColor(Color.green);
		g.fillRect(110, 90, 1, 1);
		
		g.setColor(Color.red);
		g.fillRect(110, 105, 1, 1);
		
		//***********************
		
		g.setColor(Color.orange);
		g.fillRect(110, 120, 1, 1);		//Draws Bottom row, right to left
		
		g.setColor(Color.green);
		g.fillRect(95, 120, 1, 1);
		
		g.setColor(Color.blue);
		g.fillRect(80, 120, 1, 1);
		
		g.setColor(Color.black);
		g.fillRect(65, 120, 1, 1);
		
		g.setColor(Color.magenta);
		g.fillRect(50, 120, 1, 1);
		
		//***********************
		
		g.setColor(Color.black);
		g.fillRect(50, 75, 1, 1);		//Draws Left row, bottom to top
		
		g.setColor(Color.blue);
		g.fillRect(50, 90, 1, 1);
		
		g.setColor(Color.gray);
		g.fillRect(50, 105, 1, 1);
		
		//***********************
		
	
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
    	
    }
							
}

