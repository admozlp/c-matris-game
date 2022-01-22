#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int d0[7];
	int d1[7];
	int d2[7];
	int d3[7];
	int k0[7];
	int k1[7];
	int k2[7];
	int k3[7];	
	int i,j,k,l=1;
	
	for(i=0;i<7;i++)
	{
		d0[i]=0;
		d1[i]=0;
		d2[i]=0;
		d3[i]=0;
	}

	for(j=0;j<7;j++)
	{
		while(k<7)
		{
			printf("| %d ",d0[k]);
			printf("| %d ",d1[k]);
			printf("| %d ",d2[k]);
			printf("| %d |",d3[k]);
		
			printf("\n");
			k++;
		}
		printf("**");
	}   
	printf("***\n");
	k=0;
	int konum=0;
	int secilendizi;
	int eleman;
	
	do
	{
		printf("Oyuncu%d bir dizi seciniz(0,3) :",l);
		scanf("%d",&secilendizi);
		
		switch (secilendizi)
		{
			case 0:                  // dizi 0
				printf("Oyuncu%d konum seciniz(0,6) :",l);   //    konum alma
				scanf("%d",&konum);
				while((konum<0 || konum>6) || (k0[konum]==konum))
				{
					printf("Gecersiz konum \n");
					printf("Oyuncu%d konum seciniz(0,6) :",l);
					scanf("%d",&konum);												
				}
				k0[konum]=konum;
													
				printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);//    eleman alma
				scanf("%d",&eleman);
				while(eleman !=1 && eleman != 2)
				{
		 			printf("Gecerli bir eleman giriniz {1,2}\n");
					printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);
					scanf("%d",&eleman);					
				}									
				d0[konum] = eleman;
				
				for(j=0;j<7;j++)
	            {
		            while(k<7)
	 				{
					printf("| %d ",d0[k]);
					printf("| %d ",d1[k]);
					printf("| %d ",d2[k]);
					printf("| %d |",d3[k]);		
					printf("\n");
					k++;
	   				}
			    	printf("**");
				}  	printf("***\n");		
					
				if((d0[konum]==d0[konum+1] && d0[konum]==d0[konum+2] && d0[konum]==d1[konum+2]) || (d0[konum]==d0[konum-1] &&
				  d0[konum]==d0[konum+1] && d0[konum]==d1[konum+1]) ||(d0[konum]== d0[konum-2] && d0[konum]== d0[konum-1] &&
				  d0[konum]== d1[konum] ))
				{
					printf("\nOyuncu%d kazandi. Oyun bitti",l);
					if(l==1)
					l=0;
					else 
					l=3;				
					break;
				}
				else if(l==1)
					l++;
				else
				l--;	
				
				konum=0;
				j=0;
				k=0;		
			break;
			case 1:                    //dizi 1
				printf("Oyuncu%d konum seciniz(0,6) :",l);//      konum alma
				scanf("%d",&konum);
				while((konum<0 || konum>6) || (k1[konum]==konum))
				{
					printf("Gecersiz konum \n");
					printf("Oyuncu%d konum seciniz(0,6) :",l);
					scanf("%d",&konum);
				}k1[konum]=konum;
				    						
				printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);//    eleman alma
				scanf("%d",&eleman);
				while(eleman !=1 && eleman != 2) 
				{
		 			printf("Gecerli bir eleman giriniz {1,2}\n");
					printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);
					scanf("%d",&eleman);
				}									
				d1[konum]= eleman;
				
				for(j=0;j<7;j++)
	            {
		            while(k<7)
	 				{
					printf("| %d ",d0[k]);
					printf("| %d ",d1[k]);
					printf("| %d ",d2[k]);
					printf("| %d |",d3[k]);		
					printf("\n");
					k++;
	   				}
			    	printf("**");
				}   
				printf("***\n");
				
				if((d1[konum]==d1[konum+1] && d1[konum]==d1[konum+2] && d1[konum]==d2[konum+2]) ||(d1[konum]==d1[konum-1] && 
				d1[konum]==d1[konum+1] && d1[konum]==d2[konum+1]) ||((d1[konum]==d1[konum-2] && d1[konum]==d1[konum-1] &&
				d1[konum]==d2[konum]) || (d1[konum]==d0[konum] && d1[konum]==d0[konum-1]&& d1[konum]==d0[konum-2])))
				{
					printf("\nOyuncu%d kazandi. Oyun bitti",l);
					if(l==1)
					l=0;
					else 
					l=3;				
					break;
				}
				else if(l==1)
					l++;
				else
				l--;
					
				j=0;
				k=0;		
				eleman=0;
				konum=0;
			    break;
			
			case 2:           //  dizi 2
				printf("Oyuncu%d konum seciniz(0,6) :",l);//      konum alma
				scanf("%d",&konum);
				while((konum<0 || konum>6) || (k2[konum]==konum))
				{
					printf("Gecersiz konum \n");
					printf("Oyuncu%d konum seciniz(0,6) :",l);
					scanf("%d",&konum);				
				}	k2[konum]=konum;	
				
				printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);//   eleman alma
				scanf("%d",&eleman);
				while(eleman !=1 && eleman != 2)
				{
		 			printf("Gecerli bir eleman giriniz {1,2}\n");
					printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);
					scanf("%d",&eleman);				
				}									
				d2[konum]= eleman;
				
				for(j=0;j<7;j++)
	            {
		            while(k<7)
	 				{
					printf("| %d ",d0[k]);
					printf("| %d ",d1[k]);
					printf("| %d ",d2[k]);
					printf("| %d |",d3[k]);		
					printf("\n");
					k++;
	   				}
			    	printf("**");
				}printf("***\n");	
				if((d2[konum]==d2[konum+1] && d2[konum]==d2[konum+2] && d2[konum]==d3[konum+2]) ||(d2[konum]==d2[konum-1] && 
				d2[konum]==d2[konum+1] && d2[konum]==d3[konum+1]) ||((d2[konum]==d2[konum-2] && d2[konum]==d2[konum-1] &&
				d2[konum]==d3[konum]) || (d2[konum]==d1[konum] && d2[konum]==d1[konum-1]&& d2[konum]==d1[konum-2])))
				{
					printf("\nOyuncu%d kazandi. Oyun bitti",l);
					if(l==1)
					l=0;
					else 
					l=3;	
				}
				else if(l==1)
					l++;
				else
				l--;
				
				j=0;
			    k=0;
				konum=0;		
				break;
			
			case 3:					//	dizi 3
				printf("Oyuncu%d konum seciniz(0,6) :",l);//     konum alma
				scanf("%d",&konum);
				while((konum<0 || konum>6) || (k3[konum]==konum))
				{
					printf("Gecersiz konum \n");
					printf("Oyuncu%d konum seciniz(0,6) :",l);
					scanf("%d",&konum);
				}	k3[konum]=konum;	
					
				printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);//    eleman alma
				scanf("%d",&eleman);
				while(eleman !=1 && eleman != 2) 
				{
		 			printf("Gecerli bir eleman giriniz {1,2}\n");
					printf("Oyuncu%d yerlestirilecek elemani seciniz{1,2} :",l);
					scanf("%d",&eleman);
				}									
				d3[konum]= eleman;
				
				for(j=0;j<7;j++)
	            {
		            while(k<7)
	 				{
					printf("| %d ",d0[k]);
					printf("| %d ",d1[k]);
					printf("| %d ",d2[k]);
					printf("| %d |",d3[k]);		
					printf("\n");
					k++;
	   				}
			    	printf("**");
				}printf("***\n");	 
				if(d3[konum]==d2[konum] && d3[konum]==d2[konum-1] && d3[konum]==d2[konum-2])
				{
						printf("\nOyuncu%d kazandi. Oyun bitti",l);
					if(l==1)
					l=0;
					else 
					l=3;				
				}
				else if(l==1)
					l++;
				else
				l--;
										
				j=0;
				k=0;	
				konum=0;	
				break;			
			default:
			 printf("Lutfen gecerli bir dizi seciniz(0,3)\n");
		}		
		konum=0;
		secilendizi=0;
		eleman = 0;		
	}while(l==1 ||l==2);	
	return 0;
}
