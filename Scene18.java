// Son Huynh
// Scene18

import java.awt.*;

public class Scene18 extends java.applet.Applet
{	
	int appletWidth, appletHeight, x_heli_s17 = -400, count_s17 = 0;					//Declaration
	int x_rock1_s17 = 0, y_rock1_s17, x_rock2_s17 = 0, y_rock2_s17 = 0;
	
	public void scene17(Graphics g)
	{
		background_s17(g);									//Function call for Background
		viet_s17(g);										//Function call for Vietnamese people	
	
		do
		{
			//***** DRAWS HELICOPTER'S BODY *****
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_body_s17(g);								//Function call for Helicopter's body
		
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_tail_s17(g);								//Function call for Helicopter's tail
			
			//***** DRAWS CROSS BLADES *****
			g.setColor(new Color(100, 100, 100));		//Sets Color
			cross_blades_s17(g);							//Function call for Horizontal blades
			
			g.setColor(new Color(0, 215, 215));			//Sets Color
			windows_s17(g);									//Function call for Windows
			
			g.setColor(new Color(100, 100, 100));		//Sets Color
			details_s17(g);									//Function call for Details
			
			//******* DRAWS ROCKS *******
			g.setColor(new Color(128, 128, 128));
			rock_s17(g);									//Function call for Rocks
			
			delay(50);
			
			//******* BLACK-OUT ROCKS *******
			g.setColor(new Color(0, 255, 255));			//Sets color
			rock_s17(g);									//Function call for Rocks
			viet_s17(g);
			
			//******* MOVES ROCKS *******
			moverock_s17();										//Function call for Move Rocks
			
			//***** BLACK-OUT *****
			g.setColor(new Color(0, 255, 255));			//Sets color
			cross_blades_s17(g);							//Function call for Cross blades
			heli_tail_s17(g);								//Function call for Heli's tail
			heli_body_s17(g);								//Function call for Heli's body
			windows_s17(g);									//Function call for Windows
			details_s17(g);									//Function call for Details
			
			//***** MOVE HELICOPTER *****
			moveheli_s17();									//Function call for Helicopter's body
			
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_tail_s17(g);								//Function call for Helicopter's tail
			
			//***** DRAWS VERTICAL BLADES *****
			g.setColor(new Color(100, 100, 100));		//Sets Color
			vertical_blades_s17(g);							//Function call for Vertical blades
			
			g.setColor(new Color(0, 100, 50));			//Sets Color
			heli_body_s17(g);								//Function call for Helicopter's body
				
			g.setColor(new Color(0, 215, 215));			//Sets Color
			windows_s17(g);									//Function call for Windows
			
			g.setColor(new Color(100, 100, 100));		//Sets Color
			details_s17(g);									//Function call for Details
			
			//******* DRAWS ROCKS *******
			g.setColor(new Color(128, 128, 128));
			rock_s17(g);
			
			delay(50);
			
			//******* BLACK-OUT ROCKS *******
			g.setColor(new Color(0, 255, 255));			//Sets color
			rock_s17(g);									//Function call for Rocks
			viet_s17(g);
			
			//***** BLACK-OUT BLADES *****
			g.setColor(new Color(0, 255, 255));			//Sets color
			vertical_blades_s17(g);							//Function call for Vertical blades
			heli_body_s17(g);								//Function call for Heli's body
			heli_tail_s17(g);								//Function call for Heli's tail
			windows_s17(g);									//Function call for Windows
			details_s17(g);									//Function call for Details
			
			//***** MOVE HELICOPTER *****
			moveheli_s17();									//Function call for Moving Helicopter
		}
		while (x_heli_s17 <= appletWidth + 200);		
		
	}
	
	//******** VIETNAMESE ********
	public void viet_s17(Graphics g)
	{
		g.setColor(Color.yellow);
		
		g.fillOval(50, 500, 40, 40);					//Draws head
		
		g.drawLine(70, 540, 70, 620);					//Draws body
		
		g.drawLine(70, 560, 30, 540);					//Draws left arm
		g.drawLine(70, 560, 110, 540);					//Draws right arm
		
		g.drawLine(70, 620, 50, 660);					//Draws left leg
		g.drawLine(50, 660, 40, 660);
		
		g.drawLine(70, 620, 90, 660);					//Draws right leg
		g.drawLine(90, 660, 100, 660);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat = new Polygon();
		
		hat.addPoint(30, 510);							//Draws hat
		hat.addPoint(70, 470);
		hat.addPoint(110, 510);
		
		g.fillPolygon(hat);
		
		
		g.setColor(Color.black);
		
		g.fillOval(52, 510, 15, 7);						//Draws left eye
		g.fillOval(71, 510, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(150, 460, 40, 40);					//Draws head
		
		g.drawLine(170, 500, 170, 580);					//Draws body
		
		g.drawLine(170, 520, 130, 500);					//Draws left arm
		g.drawLine(170, 520, 210, 500);					//Draws right arm
		
		g.drawLine(170, 580, 150, 620);					//Draws left leg
		g.drawLine(150, 620, 140, 620);
		
		g.drawLine(170, 580, 190, 620);					//Draws right leg
		g.drawLine(190, 620, 200, 620);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat1 = new Polygon();
		
		hat1.addPoint(130, 470);							//Draws hat
		hat1.addPoint(170, 430);
		hat1.addPoint(210, 470);
		
		g.fillPolygon(hat1);
		
		
		g.setColor(Color.black);
		
		g.fillOval(152, 470, 15, 7);						//Draws left eye
		g.fillOval(171, 470, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(250, 500, 40, 40);					//Draws head
		
		g.drawLine(270, 540, 270, 620);					//Draws body
		
		g.drawLine(270, 560, 230, 540);					//Draws left arm
		g.drawLine(270, 560, 310, 540);					//Draws right arm
		
		g.drawLine(270, 620, 250, 660);					//Draws left leg
		g.drawLine(250, 660, 240, 660);
		
		g.drawLine(270, 620, 290, 660);					//Draws right leg
		g.drawLine(290, 660, 300, 660);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat2 = new Polygon();
		
		hat2.addPoint(230, 510);							//Draws hat
		hat2.addPoint(270, 470);
		hat2.addPoint(310, 510);
		
		g.fillPolygon(hat2);
		
		
		g.setColor(Color.black);
		
		g.fillOval(252, 510, 15, 7);						//Draws left eye
		g.fillOval(271, 510, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(350, 460, 40, 40);					//Draws head
		
		g.drawLine(370, 500, 370, 580);					//Draws body
		
		g.drawLine(370, 520, 330, 500);					//Draws left arm
		g.drawLine(370, 520, 410, 500);					//Draws right arm
		
		g.drawLine(370, 580, 350, 620);					//Draws left leg
		g.drawLine(350, 620, 340, 620);
		
		g.drawLine(370, 580, 390, 620);					//Draws right leg
		g.drawLine(390, 620, 400, 620);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat3 = new Polygon();
		
		hat3.addPoint(330, 470);							//Draws hat
		hat3.addPoint(370, 430);
		hat3.addPoint(410, 470);
		
		g.fillPolygon(hat3);
		
		
		g.setColor(Color.black);
		
		g.fillOval(352, 470, 15, 7);						//Draws left eye
		g.fillOval(371, 470, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(450, 500, 40, 40);					//Draws head
		
		g.drawLine(470, 540, 470, 620);					//Draws body
		
		g.drawLine(470, 560, 430, 540);					//Draws left arm
		g.drawLine(470, 560, 510, 540);					//Draws right arm
		
		g.drawLine(470, 620, 450, 660);					//Draws left leg
		g.drawLine(450, 660, 440, 660);
		
		g.drawLine(470, 620, 490, 660);					//Draws right leg
		g.drawLine(490, 660, 500, 660);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat4 = new Polygon();
		
		hat4.addPoint(430, 510);							//Draws hat
		hat4.addPoint(470, 470);
		hat4.addPoint(510, 510);
		
		g.fillPolygon(hat4);
		
		
		g.setColor(Color.black);
		
		g.fillOval(452, 510, 15, 7);						//Draws left eye
		g.fillOval(471, 510, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(650, 500, 40, 40);					//Draws head
		
		g.drawLine(670, 540, 670, 620);					//Draws body
		
		g.drawLine(670, 560, 630, 540);					//Draws left arm
		g.drawLine(670, 560, 710, 540);					//Draws right arm
		
		g.drawLine(670, 620, 650, 660);					//Draws left leg
		g.drawLine(650, 660, 640, 660);
		
		g.drawLine(670, 620, 690, 660);					//Draws right leg
		g.drawLine(690, 660, 700, 660);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat5 = new Polygon();
		
		hat5.addPoint(630, 510);							//Draws hat
		hat5.addPoint(670, 470);
		hat5.addPoint(710, 510);
		
		g.fillPolygon(hat5);
		
		
		g.setColor(Color.black);
		
		g.fillOval(652, 510, 15, 7);						//Draws left eye
		g.fillOval(671, 510, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(850, 500, 40, 40);					//Draws head
		
		g.drawLine(870, 540, 870, 620);					//Draws body
		
		g.drawLine(870, 560, 830, 540);					//Draws left arm
		g.drawLine(870, 560, 910, 540);					//Draws right arm
		
		g.drawLine(870, 620, 850, 660);					//Draws left leg
		g.drawLine(850, 660, 840, 660);
		
		g.drawLine(870, 620, 890, 660);					//Draws right leg
		g.drawLine(890, 660, 900, 660);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat6 = new Polygon();
		
		hat6.addPoint(830, 510);							//Draws hat
		hat6.addPoint(870, 470);
		hat6.addPoint(910, 510);
		
		g.fillPolygon(hat6);
		
		
		g.setColor(Color.black);
		
		g.fillOval(852, 510, 15, 7);						//Draws left eye
		g.fillOval(871, 510, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(550, 460, 40, 40);					//Draws head
		
		g.drawLine(570, 500, 570, 580);					//Draws body
		
		g.drawLine(570, 520, 530, 500);					//Draws left arm
		g.drawLine(570, 520, 610, 500);					//Draws right arm
		
		g.drawLine(570, 580, 550, 620);					//Draws left leg
		g.drawLine(550, 620, 540, 620);
		
		g.drawLine(570, 580, 590, 620);					//Draws right leg
		g.drawLine(590, 620, 600, 620);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat7 = new Polygon();
		
		hat7.addPoint(530, 470);							//Draws hat
		hat7.addPoint(570, 430);
		hat7.addPoint(610, 470);
		
		g.fillPolygon(hat7);
		
		
		g.setColor(Color.black);
		
		g.fillOval(552, 470, 15, 7);						//Draws left eye
		g.fillOval(571, 470, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(750, 460, 40, 40);					//Draws head
		
		g.drawLine(770, 500, 770, 580);					//Draws body
		
		g.drawLine(770, 520, 730, 500);					//Draws left arm
		g.drawLine(770, 520, 810, 500);					//Draws right arm
		
		g.drawLine(770, 580, 750, 620);					//Draws left leg
		g.drawLine(750, 620, 740, 620);
		
		g.drawLine(770, 580, 790, 620);					//Draws right leg
		g.drawLine(790, 620, 800, 620);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat8 = new Polygon();
		
		hat8.addPoint(730, 470);							//Draws hat
		hat8.addPoint(770, 430);
		hat8.addPoint(810, 470);
		
		g.fillPolygon(hat8);
		
		
		g.setColor(Color.black);
		
		g.fillOval(752, 470, 15, 7);						//Draws left eye
		g.fillOval(771, 470, 15, 7);						//Draws right eye
		
		//**********************************************************************
		
		g.setColor(Color.yellow);
		
		g.fillOval(950, 460, 40, 40);					//Draws head
		
		g.drawLine(970, 500, 970, 580);					//Draws body
		
		g.drawLine(970, 520, 930, 500);					//Draws left arm
		g.drawLine(970, 520, 1010, 500);					//Draws right arm
		
		g.drawLine(970, 580, 950, 620);					//Draws left leg
		g.drawLine(950, 620, 940, 620);
		
		g.drawLine(970, 580, 990, 620);					//Draws right leg
		g.drawLine(990, 620, 1000, 620);
		
		
		g.setColor(new Color(250, 180, 130));
		
		Polygon hat9 = new Polygon();
		
		hat9.addPoint(930, 470);							//Draws hat
		hat9.addPoint(970, 430);
		hat9.addPoint(1010, 470);
		
		g.fillPolygon(hat9);
		
		
		g.setColor(Color.black);
		
		g.fillOval(952, 470, 15, 7);						//Draws left eye
		g.fillOval(971, 470, 15, 7);						//Draws right eye
	}
	
	//***** DRAWS HELICOPTER'S BODY *****
	public void heli_body_s17(Graphics g)
	{	
		Polygon heli = new Polygon();
		
		heli.addPoint(150 + x_heli_s17, 150);				//1st Point, clock-wise, Draws body
		heli.addPoint(270 + x_heli_s17, 150);				
		heli.addPoint(300 + x_heli_s17, 180);				
		heli.addPoint(300 + x_heli_s17, 255);				
		heli.addPoint(270 + x_heli_s17, 270);				
		heli.addPoint(180 + x_heli_s17, 270);				
		heli.addPoint(150 + x_heli_s17, 240);				
		heli.addPoint(150 + x_heli_s17, 210);
		heli.addPoint(120 + x_heli_s17, 195);
		heli.addPoint(120 + x_heli_s17, 165);
		
		g.fillPolygon(heli);
	}
	
	//***** DRAWS WINDOWS *****
	public void windows_s17(Graphics g)
	{	
		Polygon window = new Polygon();
		
		window.addPoint(225 + x_heli_s17, 155);				//1st Point, clock-wise, Draws window
		window.addPoint(270 + x_heli_s17, 155);
		window.addPoint(295 + x_heli_s17, 180);
		window.addPoint(295 + x_heli_s17, 210);
		window.addPoint(225 + x_heli_s17, 210);
		
		g.fillPolygon(window);
	}
	
	//***** DRAWS DETAILS *****
	public void details_s17(Graphics g)
	{
		g.fillRect(200 + x_heli_s17, 140, 5, 10);			//Draws top blades
		g.fillRect(230 + x_heli_s17, 140, 5, 10);
		g.fillRect(120 + x_heli_s17, 135, 200, 5);
		
		g.fillRect(200 + x_heli_s17, 270, 5, 10);			//Draws landing gears
		g.fillRect(250 + x_heli_s17, 270, 5, 10);
		g.fillRect(150 + x_heli_s17, 280, 150, 10);
	}
	
	//***** DRAWS HELICOPTER'S TAIL *****
	public void heli_tail_s17(Graphics g)
	{
		g.fillRect(30 + x_heli_s17, 165, 100, 30);			//Draws tail
	}
	
	//**** DRAWS VERTI-HORIZ BLADES ****
	public void vertical_blades_s17(Graphics g)
	{
		g.fillRect(40 + x_heli_s17, 150, 5, 60);			//Draws vertical blade
		g.fillRect(12 + x_heli_s17, 177, 60, 5);			//Draws horizontal blade
	}
	
	//**** DRAWS CROSS BLADES ****
	public void cross_blades_s17(Graphics g)
	{
		Polygon rblade = new Polygon();
		
		rblade.addPoint(59 + x_heli_s17, 156);				//Draws top right blade
		rblade.addPoint(63 + x_heli_s17, 161);
		rblade.addPoint(22 + x_heli_s17, 204);
		rblade.addPoint(19 + x_heli_s17, 199);
		
		g.fillPolygon(rblade);
		
		Polygon lblade = new Polygon();
		
		lblade.addPoint(19 + x_heli_s17, 161);				//Draws top left blade
		lblade.addPoint(22 + x_heli_s17, 156);
		lblade.addPoint(63 + x_heli_s17, 199);
		lblade.addPoint(59 + x_heli_s17, 204);
		
		g.fillPolygon(lblade);
	}
	
	//**** MOVE HELI ****
	public void moveheli_s17()
	{
		x_heli_s17 += 20;									//Moves heli across
	}
	
	//******* DRAWS ROCK ********
	public void rock_s17(Graphics g)
	{
		g.fillOval(100 + x_rock1_s17, 520 + y_rock1_s17, 20, 20);					//Draws Rock
		g.fillOval(300 + x_rock1_s17, 520 + y_rock1_s17, 20, 20);
		g.fillOval(500 + x_rock1_s17, 520 + y_rock1_s17, 20, 20);
		g.fillOval(700 + x_rock1_s17, 520 + y_rock1_s17, 20, 20);
		g.fillOval(900 + x_rock1_s17, 520 + y_rock1_s17, 20, 20);
		
		g.fillOval(120 + x_rock2_s17, 480 + y_rock2_s17, 20, 20);
		g.fillOval(320 + x_rock2_s17, 480 + y_rock2_s17, 20, 20);
		g.fillOval(520 + x_rock2_s17, 480 + y_rock2_s17, 20, 20);
		g.fillOval(720 + x_rock2_s17, 480 + y_rock2_s17, 20, 20);
		g.fillOval(920 + x_rock2_s17, 480 + y_rock2_s17, 20, 20);
	}
	
	//******* MOVES ROCKS *******
	public void moverock_s17()
	{
		x_rock1_s17 -= 10;					//Moves rock on first row left
		y_rock1_s17 -= 20;					//Moves rock on first row up
		
		x_rock2_s17 += 10;					//Moves rock on 2nd row right
		y_rock2_s17 -= 20;					//Moves rock on 2nd row up
	}
    
    public void background_s17(Graphics g)
    {
    	appletWidth = getWidth();
    	appletHeight = getHeight();
    	
    	g.setColor(Color.green);						//Sets color
    	g.fillRect(0, 0, appletWidth, appletHeight);	//Fills rectangle
    	
    	g.setColor(new Color(0, 255, 255));				//Sets color
    	g.fillRect(0, 0, 1050, 600);					//Fills rectangle
    }
    
    public void delay(int n)
	{
	   long startDelay = System.currentTimeMillis();
	   long endDelay = 0;
	   while (endDelay - startDelay < n)
		 endDelay = System.currentTimeMillis();
	}
							
}