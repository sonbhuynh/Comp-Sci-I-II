// Son Huynh
// Scene 16

import java.awt.*;
import java.util.*;

public class Scene16 extends java.applet.Applet
{	
	int appletWidth, appletHeight, x_s15 = 0, count_s15 = 0;	//Declaration
	
	public void scene15(Graphics g)
	{
		background_s15(g);								//Function call for Background
		
		memorial_s15(g);								//Function call for Memorial
		forrest_s15(g);									//Function call for Forrest
		
		sun_s15(g);										//Function call for Sun
		
		do
		{
			count_s15 ++;									//Increases count_s15 by 1
			
			g.setColor(new Color(0, 255, 255));
			g.fillRect(750, 250, 400, 150);	
			
			//****** DRAWS VIETNAMESE ******
			g.setColor(Color.yellow);					
			vietnamese_s15(g);								//Function call for Vietnamese
		
			g.setColor(Color.black);
			guns_s15(g);									//Function call for Guns
			eyes_s15(g);									//Function call for Eyes
			
								
			delay(150);
			
			//****** BLACK-OUT ******
			g.setColor(Color.green);
			vietnamese_s15(g);								//Function call for Vietnamese
			guns_s15(g);									//Function call for Guns
			eyes_s15(g);									//Function call for Eyes
			
			//****** MOVES VIETNAMESE ******
			move_s15();										//Function call for Move
		}
		while (count_s15 <= 35);
			
	}
	
	//********* VIETNAM MEMORIAL *********
	
	public void memorial_s15(Graphics g)
	{
		g.setColor(new Color(192, 192, 192));
		
		Polygon top = new Polygon();				//Draws top of memorial
		
		top.addPoint(100, 300);
		top.addPoint(700, 200);
		top.addPoint(720, 220);
		top.addPoint(120, 320);
		
		g.fillPolygon(top);
		
		g.setColor(new Color(128, 128, 128));
		
		Polygon side = new Polygon();				//Draws side of memorial
		
		side.addPoint(100, 300);
		side.addPoint(120, 320);
		side.addPoint(120, 520);
		side.addPoint(100, 500);
		
		g.fillPolygon(side);
		
		g.setColor(Color.black);
		
		Polygon front = new Polygon();				//Draws front of memorial
		
		front.addPoint(120, 320);
		front.addPoint(720, 220);
		front.addPoint(720, 420);
		front.addPoint(120, 520);
		
		g.fillPolygon(front);
	}
	
	//******** FORREST GUMP *********
	
	public void forrest_s15(Graphics g)
	{
		g.setColor(new Color(255, 255, 255));
		g.fillOval(500, 500, 40, 40);				//Draws head
		
		g.drawLine(520, 540, 520, 620);				//Draws body
		
		g.drawLine(520, 550, 480, 560);				//Draws left arm
		g.drawLine(480, 560, 515, 580);
		
		g.drawLine(520, 550, 560, 560);				//Draws right arm
		g.drawLine(560, 560, 525, 580);
		
		g.drawLine(520, 620, 500, 670);				//Draws left leg
		g.drawLine(500, 670, 485, 670);				//Draws left foot
		
		g.drawLine(520, 620, 540, 670);				//Draws right leg
		g.drawLine(540, 670, 555, 670);				//Draws right foot
		
		g.setColor(Color.black);
		g.fillOval(500, 510, 10, 10);				//Draws eye
		g.drawLine(503, 530, 510, 530);				//Draws mouth
		
		g.setColor(new Color(255, 255, 255));
		g.fillOval(550, 450, 100, 40);				//Draws talk bubble
		g.fillOval(540, 490, 20, 20);
		
		g.setColor(Color.black);
		g.setFont(new Font("Planet Benson 2", Font.PLAIN, 20));
		g.drawString("OMG", 570, 470);				//Outputs OMG
		
		g.setColor(new Color(255, 255, 255));
		g.setFont(new Font("Neuropol", Font.PLAIN, 30));
		g.drawString("Vietnam", 160, 340);						//Draws title of memorial
		
		g.setFont(new Font("Neuropol", Font.PLAIN, 30));
		g.drawString("Veterans", 330, 310);
		
		g.setFont(new Font("Neuropol", Font.PLAIN, 30));
		g.drawString("Memorial", 520, 280);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("B", 180, 490);							//Draws Bubba Gump's name
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("u", 220, 485);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("b", 260, 480);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("b", 300, 475);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("a", 340, 470);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("G", 460, 445);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("u", 503, 440);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("m", 540, 435);
		
		g.setFont(new Font("Calibri", Font.BOLD, 50));
		g.drawString("p", 590, 430);
	}
	
	//******** SUN *********
	public void sun_s15(Graphics g)
	{
		g.setColor(Color.yellow);
		g.fillOval(-200, -100, 300, 300);						//Draws sun
	}
	
	//******** VIETNAMESE *********
	
	public void vietnamese_s15(Graphics g)
	{
		g.fillOval(1200 + x_s15, 300, 40, 40);						//Draws head
		
		g.drawLine(1220 + x_s15, 340, 1220 + x_s15, 420);				//Draws body
		
		g.drawLine(1220 + x_s15, 360, 1180 + x_s15, 380);				//Draws left arm
		
		g.drawLine(1220 + x_s15, 420, 1200 + x_s15, 460);				//Draws left leg
		g.drawLine(1220 + x_s15, 420, 1240 + x_s15, 460);				//Draws right leg
				
		g.fillOval(1200 + x_s15, 500, 40, 40);						//Draws head 2
		
		g.drawLine(1220 + x_s15, 540, 1220 + x_s15, 620);				//Draws body 2
		
		g.drawLine(1220 + x_s15, 560, 1180 + x_s15, 560);				//Draws left arm 2
		
		g.drawLine(1220 + x_s15, 620, 1200 + x_s15, 660);				//Draws left leg 2
		g.drawLine(1220 + x_s15, 620, 1240 + x_s15, 660);				//Draws right leg 2
	}
	
	//******** DRAWS GUNS *********
	
	public void guns_s15(Graphics g)
	{
		Polygon gun1 = new Polygon();
		
		gun1.addPoint(1140 + x_s15, 365);					//Draws gun 1
		gun1.addPoint(1175 + x_s15, 355);
		gun1.addPoint(1180 + x_s15, 380);
		gun1.addPoint(1175 + x_s15, 383);
		gun1.addPoint(1171 + x_s15, 363);
		gun1.addPoint(1142 + x_s15, 372);
		
		g.fillPolygon(gun1);
		
		Polygon gun2 = new Polygon();
		
		gun2.addPoint(1140 + x_s15, 530);					//Draws gun 2
		gun2.addPoint(1180 + x_s15, 530);
		gun2.addPoint(1180 + x_s15, 560);
		gun2.addPoint(1175 + x_s15, 560);
		gun2.addPoint(1175 + x_s15, 537);
		gun2.addPoint(1140 + x_s15, 537);
		
		g.fillPolygon(gun2);
	}
	
	//******** DRAWS EYES ********
	public void eyes_s15(Graphics g)
	{
		g.fillOval(1200 + x_s15, 310, 10, 10);				//Draws eye 1
		
		g.fillOval(1200 + x_s15, 510, 10, 10);				//Draws eye 2
	}
	
	//******** MOVE *********
	public void move_s15()
	{
		x_s15 -= 10;									//Moves from right to left
	}
	
    public void background_s15(Graphics g)
    {
    	appletWidth = getWidth();						//Sets width
    	appletHeight = getHeight();						//Sets height
    	
    	g.setColor(Color.green);						//Sets color
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills rectangle
    	
    	g.setColor(new Color(0, 255, 255));				//Sets color
    	g.fillRect(0, 0, 1050, 400);					//Fills rectangle
    }
	
	

	public void delay(int n)
	{
	   long startDelay = System.currentTimeMillis();
	   long endDelay = 0;
	   while (endDelay - startDelay < n)
		 endDelay = System.currentTimeMillis();
	}
	
							
}