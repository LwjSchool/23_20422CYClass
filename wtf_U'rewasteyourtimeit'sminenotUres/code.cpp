int ButtonRandom = 0;
float GameOver = 0.0;
float N = 0.0;
float stage = 0.0;
float time = 0.0;

display0.addPicture("image1",(char*)picture1);
display0.addPicture("image2",(char*)picture2);
display0.addPicture("image7",(char*)picture7);
display0.addPicture("image5",(char*)picture5);
display0.addPicture("image3",(char*)picture3);
display0.addPicture("image6",(char*)picture6);
display0.addPicture("image4",(char*)picture4);
display0.addPicture("image9",(char*)picture9);
display0.addPicture("image10",(char*)picture10);
display0.addPicture("image11",(char*)picture11);
display0.addPicture("image12",(char*)picture12);
display0.addPicture("image13",(char*)picture13);

while(true)
{
	display0.setText("No Name Buton Game");
	GameOver = 0;
	if(button0.getClick()==TRUE)
	{
		display0.drawPicture("image1");
		sleep(3000);
		display0.drawPicture("image2");
		sleep(3000);
		display0.drawPicture("image7");
		sleep(4000);
		display0.drawPicture("image5");
		sleep(500);
		display0.drawPicture("image3");
		sleep(500);
		display0.setText("Game Rules");
		sleep(1000);
		display0.setText("Y = Button N = No");
		sleep(2000);
		display0.setText("Slow = Game Over");
		sleep(2000);
		N = 3.5;
		stage = 0;
		for(int i=0; i<5; i++)
		{
			stage = stage + 1;
			display0.drawPicture("image6");
			display0.setVariable(33, 12, stage);
			sleep(1000);
			display0.setText("Ready..");
			sleep(1500);
			display0.setText("Go!");
			sleep(500);
			N = N - 0.5;
			for(int i=0; i<20; i++)
			{
				ButtonRandom = getRandom(0, 1);
				time = 0;
				if(ButtonRandom==0)
				{
					display0.setText("Y");
					while(time<=N)
					{
						if(button0.getClick()==TRUE)
						{
							display0.setText("Good");
							sleep(400);
							break;
						}
						sleep(10);
						time = time + 0.01;
					}
					if(time>=N)
					{
						display0.drawPicture("image4");
						sleep(3000);
						display0.drawPicture("image9");
						sleep(500);
						display0.drawPicture("image10");
						sleep(500);
						display0.setText("Game Over");
						sleep(2000);
						GameOver = 1;
						break;
					}
				}
				else if(ButtonRandom==1)
				{
					display0.setText("N");
					while(time<=N)
					{
						if(button0.getClick()==TRUE)
						{
							display0.drawPicture("image11");
							sleep(3000);
							display0.drawPicture("image12");
							sleep(500);
							display0.drawPicture("image13");
							sleep(500);
							display0.setText("Game Over");
							sleep(2000);
							GameOver = 1;
							break;
						}
						sleep(10);
						time = time + 0.01;
					}
					if(GameOver!=1)
					{
						display0.setText("Good");
						sleep(400);
					}
				}
				if(GameOver==1)
				{
					break;
				}
			}
			if(GameOver==1)
			{
				break;
			}
			display0.setText("Stage Clear!!");
			sleep(500);
		}
		if(GameOver==0)
		{
			display0.setText("Ending");
			sleep(3000);
			display0.setText("loading...");
			sleep(3000);
			display0.setText("...");
			sleep(3000);
			display0.setText("ERROR! NO DATA!");
			sleep(1000);
		}
	}
}
