#include <stdio.h>
#include <stdlib.h>


int main() {
int Y, X;     // Variaveis
int n = 0;    // Camadas
int u = 0;    // Condição while
int W=2;      // While   
int user;     // While variavel
int Cm [6];   // Vetor inicial  
char Cmg [6]; // Vetor camadas         
int i, j, k;
int n1=-1, n2=-1;                         // Contador para if  
int K[1], L[2], M[3];                     // Contador para if  
int N[4], O[4], P[3], Q[1];               // Subníveis vetores
int s=0, p=0, d=0, f=0;                   // Subníveis variaveis
int Orb;                                  // Orbs
do
{
n = 0;
u = 0;
system ("cls");
printf ("\n ------------------------------------------------------------");
printf ("\n ***            DISTRIBUI%c%cO ELETR%cNICA                   ***", 128, 182, 226);
printf ("\n ------------------------------------------------------------");
printf ("\n V%clida apenas para familia A da tabela peri%cdica", 160, 162);
printf ("\n\n Nada se cria,\n nada se perde,\n tudo se transforma.");
printf ("\n\n Digite o n%cmero de el%ctrons do %ctomo:\n\n ", 163, 130, 160);
scanf ("%i", &X);
Y = X;

//---------------------------------------------------------------// Camada K
if (Y>0 && Y<=2)
{
	Cm [0] = Y;
    Cmg [0] = 'K';
    n = 1;
}
else
{
	Cm [0] = 2;
	Cmg [0] = 'K';
	Y = Y - 2;
    u = 1;
}
//---------------------------------------------------------------// Camada K

//---------------------------------------------------------------// Camada L
while (u == 1)
{
  if (Y>=1  && Y <= 8)
  {
  	Cm [1] = Y;
	Cmg [1] = 'L';
	n = 2;
  }
  else 
  {
  	  if (Y <= 0)
	  {
	   break;
	  }
	  else
      {
	    Cm [1] = 8;
	    Cmg [1] = 'L';
	    Y = Y - 8;
        u = 2; 
      }
  }
  break;
}
//---------------------------------------------------------------// Camada L

//---------------------------------------------------------------// Camada M
while (u == 2)
{
  if (Y > 0 && Y <= 8)
  {
     Cm [2] = Y;
	 Cmg [2] = 'M';
	 n = 3;
     u = 3;
  }
  else 
  {
	 if (Y>8 && Y<18)
	 {
	 
	 Cm [2] = 8;
	 Cmg [2] = 'M';
	 Y = Y - 8;
     n = 3;
     u = 3;
	 }
     else
     {
     	if (Y == 18)
     	{
     	     Cm [2] = 18;
	         Cmg [2] = 'M';
     	     n = 3;
		 }
        else
        {
        	 if (Y <= 0)
        	 {
        	 	break;
        	 }
             else
             {
	           Cm [2] = 18;
	           Cmg [2] = 'M';
	           Y = Y - 18;
               u = 3; 
             }
		}
	 }
  }
  break;
}
//---------------------------------------------------------------// Camada M

//---------------------------------------------------------------// Camada N
while (u == 3)
{
  if (Y>0 && Y <=8)
  {
	 Cm [3] = Y;
	 Cmg [3] = 'N';
	 n = 4;
  }
  else 
  {
	 if ( Y>8 && Y<18)
	 {
	    Cm [3] = 8;
	    Cmg [3] = 'N';
	    Y = Y - 8;
        n = 4;
	    u = 4; 
     }
     else
     {
     	 if (Y == 18)
         {
	        Cm [3] = 18;
	        Cmg [3] = 'N';
	        n = 4;
         }
         else
		 {
		 	 if (Y>18 && Y<32)
             {
	            Cm [3] = 18;
	            Cmg [3] = 'N';
	            Y = Y - 18;
                u = 4; 
                n = 4;
             }
		     else
		     {
		     	 if (Y == 32)
                 {
	                Cm [3] = 32;
	                Cmg [3] = 'N';
	                n = 4;
                 }
		         else
		         {
		         	if (Y <= 0)
		         	{
  	                   break;
                    }
		            else
		            {
		               Cm [3] = 32;
	                   Cmg [3] = 'N';
	                   Y = Y - 32;
                       n = 4;
					   u = 4;
                    }
				 }
			 }
		 }	
  	 }
  }
  break;
}
//---------------------------------------------------------------// Camada N

//---------------------------------------------------------------// Camada O
while (u == 4)
{
  if (Y <= 8)
  {
	 Cm [4] = Y;
	 Cmg [4] = 'O';
	 n = 5;
  }
  else 
  {
	 
	 if ( Y>8 && Y<18)
	 {
	 	Cm [4] = 8;
	    Cmg [4] = 'O';
	    Y = Y - 8;
        n = 5;
		u = 5;
	 }
    else
    {
    	if (Y == 18)
        {
	       Cm [4] = 18;
	       Cmg [4] = 'O';
	       n = 5;
           u = 5;
		}
        else
        {
        	 if (Y>18 && Y<32)
             {
	            Cm [4] = 18;
	            Cmg [4] = 'O';
	            Y = Y - 18;
	            n = 5;
			    u = 5;
	         }
             else
             {
             	if (Y == 32)
                {
	              Cm [4] = 32;
	              Cmg [4] = 'O';
	              n = 5;
                }
                else
                {
                   if (Y <= 0)
                   {
  	                 break;
                   }
                   else
                   {
                   	  Cm [4] = 32;
	                  Cmg [4] = 'O';
	                  Y = Y - 32;
	                  n = 5; 
					  u = 5; 
	               }
                }
             }
        }
	}
  }
  break;
}
//---------------------------------------------------------------// Camada O

//---------------------------------------------------------------// Camada P
	
while (u == 5)
{
  if (Y>=0 && Y<=8)
  {
	 Cm [5] = Y;
	 Cmg [5] = 'P';
	 n = 6;
  }
  else
  {
	 if (Y>8 && Y<18)
	 {
	    Cm [5] = 8;
	    Cmg [5] = 'P';
	    Y = Y - 8;
	    n = 6;
		u = 6;
     }
     else
	 {
	 	if (X == 18)
        {
	       Cm [5] = 18;
	       Cmg [5] = 'P';
	       n = 6;
        }
        else
        {
          if (Y <= 0)
          {
  	       break;
          }	
          else
          {
          	Cm [5] = 18;
	        Cmg [5] = 'P';
	        Y = Y - 18;
	        n = 6;
			u = 6;
	      }
		}
	 } 
  }
  break;
}
//---------------------------------------------------------------// Camada P

//---------------------------------------------------------------// Camada Q
while (u == 6)
{
  if (Y > 0)
  {
	  Cm [6] = Y;
	  Cmg [6] = 'Q';
	  n = 7;
  }
  else 
  {
  	break;
  }
  break;
}
//---------------------------------------------------------------// Camada Q
system ("cls");
printf ("\n ------------------------------------------------------------");
printf ("\n N%cmero de camadas: %i", 163, n);
printf ("\n ------------------------------------------------------------");
printf ("\n ------------------------------------------------------------");
printf ("\n N%cmero qu%cntico principal:", 163, 131);
printf ("\n ------------------------------------------------------------\n");
for (i=0; i<n; i++)
{
   printf (" %c =", Cmg[i]);
   printf (" %i \n", Cm[i]);
}
//-----------------------------------------------------------------------------------------------------// Distribuição Subníveis
printf (" ------------------------------------------------------------\n");
n2=-1;
n1=-1;
for (i=0;i<n;i++)
{
 n1=n1+1;	
 if (n1==0)
  {
    Orb = Cm[i];
    for (j=0;j<Orb;j++)
    {
      s=s+1;
    }
    K[0]=s;
	s=0;
  }
 else
  {
     if  (n1==1)
     {
     	Orb=Cm[i];
		for (j=0;j<Orb;j++)
		{
		  n2=n2+1;
		  if (n2>=0 && n2<=1)
		  {
		    s=s+1;
		  }
		  else
		  {
		    p=p+1;
		  }
        }	
        L[0]=s;
		L[1]=p;
	    n2=-1;
		s=0;
	    p=0;
	    d=0;
     }
     else
	 {
	 	if (n1 == 2)
	 	{
	 	   Orb=Cm[i];
		   for (j=0;j<Orb;j++)
		   {
		     n2=n2+1;
		     if (n2>=0 && n2<=1)
		     {
		       s=s+1;
		     }
		     else
			  {
			    if (n2>1 && n2 <=7)
		        {
		           p=p+1;
		        }
                else 
		        {
		           d=d+1;
		        }
		      }
	       }
			  M[0]=s;
		      M[1]=p;
		      M[2]=d;
		      n2=-1;
		      s=0;
	          p=0;
	          d=0;
	 	 }
		else
	    {
	     	if (n1 == 3) 
	     	{
	     		Orb=Cm[i];
		        for (j=0;j<Orb;j++)
		        {
		          n2=n2+1;
		          if (n2>=0 && n2<=1)
		          {
		            s=s+1;
		          }
		          else
				  {
				        if (n2>1 && n2<=7)
		                {
		                  p=p+1;
		                }
                        else
                        {
                            if (n2>7 && n2<=17)
		                    {
		                       d=d+1;
		                    }
		                    else
		                    {
		                       f=f+1;
		                    }  
		                }
				  }
	            }
				  N[0]=s;
		          N[1]=p;
		          N[2]=d;
		          N[3]=f;
		          n2=-1;
				  s=0;
	              p=0;
	              d=0;
	              f=0;
	     	 }
	         else
			 {
				if (n1 == 4)
				{
				   Orb=Cm[i];
		           for (j=0;j<Orb;j++)
		           {
		              n2=n2+1;
		              if (n2>=0 && n2<=1)
		              {
		                s=s+1;
		              }
		              else
		              {
		                if (n2>1 && n2<=7)
		                {
		                  p=p+1;
		                }
                        else
						{
						  if (n2>7 && n2<=17)
		                  {
		                     d=d+1;
		                  }
		                  else
		                  {
		                     f=f+1;
		                  } 
		                }
				      }
				   }
	               O[0]=s;
		           O[1]=p;
		           O[2]=d;
		           O[3]=f;
		           n2=-1;
				   s=0;
	               p=0;
	               d=0;
	               f=0;	
			 }
                else
				{
					if (n1 == 5)
					{
						 Orb=Cm[i];
		                 for (j=0;j<Orb;j++)
		                 {
		                    n2=n2+1;
		                    if (n2>=0 && n2<=1)
		                    {
		                        s=s+1;
		                    }
		                    else
		                    {
		                       if (n2>1 && n2<=7)
		                       {
		                          p=p+1;
		                       }
                               else
                               {
		                          d=d+1;
		                       }
		                    }
						 }
	                     P[0]=s;
		                 P[1]=p;
		                 P[2]=d;
		                 n2=-1;
		                 s=0;
	                     p=0;
	                     d=0;
					 }
				     else
				     {
				    	if (n1 == 6)
				    		n2=n2+1;
                           if (n2==0)
                           {
     	                      Orb = Cm[i];
                              for (j=0;j<Orb;j++)
                              {
        	                    s=s+1;
                              }
                              Q[1]=s;
		                      s=0;
                           }
				     }
				} 		 	 
			 }  
		}
	 }	
  }
}
//-----------------------------------------------------------------------------------------------------// Distribuição Subníveis
//-----------------------------------------------------------------------------------------------------// Exibindo
int n3=-1, n4=-1;
printf (" ------------------------------------------------------------\n");
printf (" N%cmero qu%cntico secund%crio:", 163, 131, 160);
printf ("\n ------------------------------------------------------------\n");
for (i=0;i<n;i++)
{
	n3=n3+1;
	if(n3==0)
	{
	  printf (" 1 k = 1S[%i]", K[0]);
	}
	else
	{
		if (n3==1)
		{
			printf ("\n");
			for (k=0;k<3;k++)
			{
				n4=n4+1;
				if (n4 == 0)
				{
					if (L[k]>0)
					{
				      printf (" 2 L = 2S[%i]", L[k]); 
				    }
				}
			    else
			    {
			    	if (n4==1)
			    	{
			    	  printf (" 2P[%i]", L[k]); 
			    	}
			    }
			}
		n4=-1;
		}
	    else
		{
			if (n3==2)
			{
				printf ("\n");
				for (k=0;k<3;k++)
			    {
				    n4=n4+1;
				    if (n4 == 0)
				    {
					   if (M[k]>0)
					   {
				          printf (" 3 M = 3S[%i]", M[k]); 
				       }
				    }
			        else
			        {
			    	   if (n4==1)
			    	   {
			    	   	 if (M[k]>0)
			    	   	 {
			    	   	    printf (" 3P[%i]", M[k]); 
			    	     }
					   }
			           else
			           {
			           	 if (n4==2)
			           	 {
			           	 	if (M[k]>0)
			           	 	{
			           	 	 printf (" 3D[%i]", M[k]); 
                            }
 						 }
			           }
					
					}
			    }
			n4=-1;
			}
		    else
			{
				if (n3==3)
				{
				  printf ("\n");
				  for (k=0;k<4;k++)
			      {
				     n4=n4+1;
				     if (n4 == 0)
				     {
					    if (N[k]>0)
					    {
				          printf (" 4 N = 4S[%i]", N[k]); 
				        }
				     }
			         else
			         { 
			    	   if (n4==1)
			    	   {
			    	   	 if (N[k]>0)
			    	   	 {
			    	   	    printf (" 4P[%i]", N[k]); 
			    	     }
					   }
			           else
			           {
			           	 if (n4==2)
			           	 {
			           	 	if (N[k]>0)
			           	 	{
			           	 	 printf (" 4D[%i]", N[k]); 
                            }
 						 }
			             else
			             {
			             	if (n4==3)
			           	    {
			           	 	   if (N[k]>0)
			           	 	   {
			           	 	     printf (" 4F[%i]", N[k]); 
                               }
 						    }
			             }
					   }
					 }
				  }
			    n4=-1;
				} 
		        else
		        {
		        	if (n3 == 4)
		        	{
		        	   printf ("\n");
				       for (k=0;k<4;k++)
			           {
				          n4=n4+1;
				          if (n4 == 0)
				          {
					        if (O[k]>0)
					        {
				              printf (" 5 O = 5S[%i]", O[k]); 
				            }
				          }
			              else
			              {   
			    	        if (n4==1)
			    	        {
			    	   	      if (O[k]>0)
			    	   	      {
			    	   	        printf (" 5P[%i]", O[k]); 
			    	          }
					        }
			                else
			                {
			           	       if (n4==2)
			           	       {
			           	 	      if (O[k]>0)
			           	 	      {
			           	 	          printf (" 5D[%i]", O[k]); 
                                  }
 						       }
			                   else
			                   {
			             	      if (n4==3)
			           	          {
			           	 	         if (O[k]>0)
			           	 	         {
			           	 	           printf (" 5F[%i]", O[k]); 
                                     }
 						          }
			                   }
					        }
					      }
				       }   	
		        	n4=-1;
					}
		            else
					{
					   if (n3 == 5)
					   {
					   	  printf ("\n");
				          for (k=0;k<3;k++)
			              {
				            n4=n4+1;
				            if (n4 == 0)
				            {
					           if (P[k]>0)
					           {
				                  printf (" 6 P = 6S[%i]", P[k]); 
				               }
				            }
			                else
			                {
			    	           if (n4==1)
			    	           {
			    	   	         if (P[k]>0)
			    	   	         {
			    	   	            printf (" 6P[%i]", P[k]); 
			    	             }
					           }
			                   else
			                   {
			           	          if (n4==2)
			           	          {
			           	 	         if (P[k]>0)
			           	 	         {
			           	 	           printf (" 6D[%i]", P[k]); 
                                     }
 						          }
			                   }
					        }
					      }	
					   n4=-1;
					   } 
				       else
					   {
					   	 if (n3 == 6)
					   	 {
					   	 	if (Q[1]>0)
			           	    {
			           	 	  printf ("\n 7 Q = 7S[%i]", Q[1]); 
                            }
					   	 }
					   } 
					}
		        }
	        }
        }
    }  
}
printf ("\n ------------------------------------------------------------");
printf ("\n N%cmero de %ctomos: %i", 163, 160, X);
printf ("\n ------------------------------------------------------------");
//-----------------------------------------------------------------------------------------------------// Exibindo
printf  ("\n Calcular novamente ?\n Sim (1) N%co (2)\n\n ", 198);
scanf ("%i", &user);

 switch (user)
 {
  case 1:
  W = 2;
  break;	
 
  case 2:
  exit (0);
  break;
 }
}while (W == 2);



return 0;  }
