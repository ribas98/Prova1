#include <stdio.h>
#include <string.h>

void tiraRepeticao(char codigomedio[])
{
  printf("\n entrou na função\n\n");
  int tamanho= strlen(codigomedio);
  int contaux =1;
  for (int i = 1; codigomedio[i] != '\0'; i++)
  {
    if ((codigomedio[i] != codigomedio[i - 1]) && (i == 1))
    {
      printf("%c",codigomedio[0]);
      if (codigomedio[i] != codigomedio[i+1])
      {
        printf("%c",codigomedio[i]);
      }           
    }
    else if (codigomedio[i] == codigomedio[i - 1])
    {
      contaux++;
      if (codigomedio[i + 1] == '\0') 
      {      
        printf("%d", contaux);
        printf("%c",codigomedio[i]);
      }
    }
    else if ((codigomedio[i] != codigomedio[i - 1]) && (contaux > 1))
    {
      printf("%d", contaux);
      contaux =1;
      printf("%c",codigomedio[i-1]);
      if (codigomedio[i + 1] == '\0') 
      {      
        printf("%c",codigomedio[i]);
      }
      else if ((codigomedio[i] != codigomedio[i+1])&&(codigomedio[i + 1] != '\0'))
      {      
        //printf("%c",codigomedio[i-1]);
        printf("%c",codigomedio[i]);
        
      }
    }
    else
    {
      if ((codigomedio[i] != codigomedio[i+1])&&(codigomedio[i + 1] != '\0'))
      {      
        //printf("%c",codigomedio[i-1]);
        printf("%c",codigomedio[i]);
        
      }
      else if (codigomedio[i + 1] == '\0') 
      {      
        //printf("%c",codigomedio[i-1]);
        printf("%c",codigomedio[i]);
        
      }
    }
  }
}
int main(void) 
{
  char entrada[1000];     // entrada de dados
  char acao[1];          // Codifica ou descodifica
  char codigomedio[1000];
  char auxdecod[1000];
  inicio:
  printf("Deseja Codificar(C) ou Decodificar(D): ");
  scanf("%s", acao);
  
  printf("Digite seu codigo: ");
  scanf("%s", entrada);  
  
  if (acao[0] == 'C')
  {
    //printf("Começa aqui a codificacao\n");
    //printf("Entrada é %s",entrada);
    int j=0;
    for (int i = 0; i < 1000; i++) // troca Z por ZZ
    {  
      
      if (entrada[i] == 'Z') 
      {        
        codigomedio[j] = ('Z');
        j++;
        codigomedio[j] = ('Z');
        j++;
      }
      else if (entrada[i] != 'Z') 
      {
        if(entrada[i]==('0')||('1')||('2')||('3')||('4')||('5')||('6')||('7')||('8')||('9'))
        {
          switch (entrada[i]) 
          {
            case '0':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('A');j++;           
              break;
            case '1':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('B');j++;           
              break;
            case '2':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('C');j++;            
              break;
            case '3':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = 'D';j++;            
              break;
            case '4':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('E');j++;            
              break;
            case '5':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('F');j++;           
              break;
            case '6':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('G');j++;            
              break;
            case '7':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('H');j++;            
              break;
            case '8':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('I');j++;            
              break;
            case '9':
              codigomedio[j] = ('Z');j++;
              codigomedio[j] = ('J');j++;           
              break;
            default:
              codigomedio[j] = entrada[i];j++;
              break;            
          } //acaba o switch numero
        } // acaba o if numero
      }//fim do if diferente de Z
    }//fim do for
    tiraRepeticao(codigomedio); 
  }// fim da codificação


  //cole o codigo de decodificação aqui
  else if(acao[0]=='D')
  {

     int j=0; 
    for (int i = 0; i < 1000; i++) 
    {
      if (entrada[i]== '2')
      {
          
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
        
      }
      else if (entrada[i]== '3')
      {
         if (entrada[i+1]== 'Z')
          {
              codigomedio[j]=("s",entrada[i+1]);
             j++;
          }
          else
          {
             codigomedio[j]=("s",entrada[i+1]);
             j++;
             codigomedio[j]=("s",entrada[i+1]);
             j++;
          }
        
      }
      else if (entrada[i]== '4')
      {
          if (entrada[i+1]== 'Z')
          {
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
          }
          else {
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
          }
      }
      else if (entrada[i]== '5')
      {
            if (entrada[i+1]== 'Z')
          {
        
             codigomedio[j]=('Z');
             j++;
             codigomedio[j]=("s",entrada[i+1]);
             j++;
                     
          } else
          {
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
          }
      }
      else if (entrada[i]== '6')
      {
          if (entrada[i+1]== 'Z')
          {
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
          }
          else
          {
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
          } 
        
      }
      else if (entrada[i]== '7')
      {
            if (entrada[i+1]== 'Z')
          {
             codigomedio[j]=('Z');
             j++;        
             codigomedio[j]=('Z');
             j++;
             codigomedio[j]=("s",entrada[i+1]);
             j++;
                     
          } else 
          {
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++;
          }      
        
      }
      else if (entrada[i]== '8')
      {
          if (entrada[i+1]== 'Z')
          {
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
              codigomedio[j]=('Z');
             j++;
          }
          else
          {          
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++;
          }
        
      }
      else if (entrada[i]== '9')
      {
            if (entrada[i+1]== 'Z')
          {
             codigomedio[j]=('Z');
             j++;        
             codigomedio[j]=('Z');
             j++;
             codigomedio[j]=('Z');
             j++;
             codigomedio[j]=("s",entrada[i+1]);
             j++;
                     
          } else 
          {          
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
             codigomedio[j]=("s",entrada[i+1]);
             j++; 
          }
      }
      else if(entrada[i]!='Z' && entrada[i-1]!='Z')
      {
        codigomedio[j]=("s",entrada[i]);
        j++;
        //i--;
      }
      
      else if(entrada[i]!='Z' && entrada[i-1]=='Z')   
      {
        if(entrada[i-1]==('A')||('B')||('C')||('D')||('E')||('F')||('G')||('H')||('I')||('J'))
        {
          
          switch (entrada[i])
          {        
          case 'A':
            codigomedio[j]=('0');
            j++;
            break;
          case 'B':
            codigomedio[j]=('1');
            j++;
            break;
          case 'C':
            codigomedio[j]=('2');
            j++;
            break;
          case 'D':
            codigomedio[j]=('3');
            j++;
            break;
          case 'E':
            codigomedio[j]=('4');
            j++;
            break;
          case 'F':
            codigomedio[j]=('5');
            j++;
            break;
          case 'G':
            codigomedio[j]=('6');
            j++;
            break;
          case 'H':
            codigomedio[j]=('7');
            j++;
            break;
          case 'I':
            codigomedio[j]=('8');
            j++;
            break;
          case 'J':
            codigomedio[j]=('9');
            j++;
            break;
            default:
            codigomedio[j] = ("%s", entrada[i]);
            j++;
            break;
          }//fim do case
        }//fim do if 
      }

    else if(entrada[i]=='Z' && entrada[i-1]!='Z')
        {
            auxdecod[1]==(' '); // para codigomedio não receber nada
        }
 
    }
    //printf("\n pulou o if"); 
    printf("\n%s", codigomedio);
  }

  
  
  else
  {
    printf("Desculpe, só é permitida entrada de dados em letra MAIUSCULA.\nTente novamente \n\n");
    goto inicio;
  }
  //printf("\n codigomedio é %s",codigomedio);   
}