#include <stdio.h>
#include <stdlib.h>

int main() {
 
 // cfood = escolha de alimentar, attp = tentativas, start = começar jogo, lamp = genio da lampada (variavel pra armazenar dica)
 int pet, act, food, cfood, back, attp, start, lamp, guess;
 int num = 17;
 int menu = 1;
 int energy = 100;
 int happy = 100;
 int hunger = 70;
 char name[20];

 
    printf("\n     ///////////////////////////////////////////");
    printf("\n     //                                       //");
    printf("\n     //          Projetinho mimosa            //");
    printf("\n     //                                       //");
    printf("\n     ///////////////////////////////////////////\n");
    
      printf("\nBem-Vindo ao Projetinho Mimosa!\n");
      printf("\nPara prosseguir escolha qual sera o seu bichinho:\n");
      
        printf("\n1 -  Gatinho");
        printf("\n2 -  Coelinho");
        printf("\n3 -  Peixinho\n");
     
     //aqui temos um if    
    printf("\nQual o numero do animal escolhido: ");
    scanf("%d", &pet);
    
    if(pet == 1){
        
    printf("\nSeu bichinho eh um Gatinho\n");
        
    } else if(pet == 2){
        
         printf("\nSeu bichinho eh um Coelinho\n");
        
    } else  {
         
     printf("\nSeu bichinho eh um Peixinho\n");
         
     } 

     printf("\nQual o nome do dele(a)? (maximo 20 caracteres) ");
     scanf("%s", &name);

    system("cls");
   
    while(menu == 1){
    
     printf("\n========== Menu %s ==========\n", name);
     
     if(pet == 1){
                
      printf("\n            /\\_/\\\\\n");
      printf("           ( ^.^ )\n");
      printf("            > ^ <\n");
        
    } else if(pet == 2){
        
      printf("\n          (\\_/)\n");
      printf("          ( ._.)\n");
      printf("          /> *<)\n");  
        
    } else  {
         
      printf("\n                         /`·..\n");
               printf("               /.....`:·\n");
               printf("           ..·´  .   `·...·´)\n");
               printf("         : © ):.;      .  {\n");
               printf("           `·.. `· .·´\\`·¸)\n");
               printf("             `\\\\..\\..·´\n");
         
     } 
      
      printf("\n1 - Alimentar");
      printf("\n2 - Brincar");
      printf("\n3 - Fazer carinho");
      printf("\n4 - Colocar pra dormir");
      printf("\n5 - Ver status do bichinho");
      printf("\n0 - Sair\n");
    
       printf("\nO que deseja fazer com seu pet? ");
       scanf("%d", &act);
       
       switch(act){
           case 1:
           
              system("cls");

             printf("\nFome: %d", hunger);
             printf("\nBarra de fome: ");
             
             for(int i = 0; i < 10; i++){
                 
                 if(i < hunger / 10){
                 printf("/");
                 }else{
                 printf("-");
                   } 
             }
              
             printf("\n");  
             printf("\nDeseja alimentar o bichinho? (1 - SIM / 0 - NAO): ");
             scanf("%d", &cfood);
             
             if(cfood == 1){
                 
                 printf("\nQuanto de racao voce deseja oferecer? [0-100] ");
                 scanf("%d", &food);
                 
                 hunger = hunger + food;
               
                if(hunger > 100){
                     hunger = 100;
                 }
                 
                 printf("\nRefeicao concluida com sucesso!");
                 printf("\n");
                 printf("\nFome: %d", hunger);
                 printf("\nBarra de fome: ");
    
             
                    for(int i = 0; i < 10; i++){
                 
                         if(i < hunger / 10){
                         printf("/");
                         }else{
                         printf("-");
                           } 
                    }  
                 printf("\n");
                    
                 if(food >= 40){
                    printf("\nAtencao, voce deu muita comida, agora seu bichinho esta cansado!");
                    printf("\n");
                    energy = energy - 10;
                 }
                 
                   if(energy < 0){
                       energy = 0;
                   }
                 } 

             printf("\nInsira 1 para voltar ao menu ");
             scanf("%d", &back);

             if(back == 1){
                menu = 1;
             }
             system("cls");
             break;

           case 2:
           system("cls"); 

            printf("\n      ====================================");
            printf("\n      =          ADIVINHE O NUMERO       =");
            printf("\n      ====================================\n");
            
            printf("\nSera que voce consegue descobrir qual o numero que estou pensando?\n");
            
            printf("\n***ATENCAO*** Voce tera 5 chances de acertar, caso nao consiga sucesso seu bichinho ficara triste!\n");
            
            printf("\nDeseja comecar? (1 - SIM / 0 - NAO) ");
            scanf("%d", &start);
            
            if(start == 1){
                printf("\nAntes de comecarmos a brincadeira, que tal uma dica?");
                printf("\n(1 - Quero / 0 - Nao precisa) ");
                scanf("%d", &lamp);
                
                   if(lamp == 1){
                       printf("\n**DICA: Seu numero eh um inteiro IMPAR e menor que 20\n");
                   } 
              
             
                 for (attp = 0; attp <= 5; attp++){
                     
                     printf("\nQual seu palpite? ");
                     scanf("%d", &guess);
                     
                     if(guess == num){
                       printf("\nParabens voce acertou!\n ");
                       break;
                     }
            
                     if(guess >= 13 && guess <= 19){
                         
                       printf("\nEsta quente! Tente outra vez!\n");
                   }else{
                       
                       printf("\nEsta Frio! Tente outra vez!\n");
                  }
                     if(attp == 5){
                         
                        system("cls");

                         printf("\n===================================");
                         printf("\n              GAME OVER!           ");
                         printf("\n===================================\n");
                         
                         printf("\nVoce excedeu o numero de tentativas!\n");
                         printf("\n-10 pontos de Felicidade \n");
                         
                          happy = happy - 10;
                            }
                         }
                 }
                 printf("\nInsira 1 para voltar ao menu ");
                 scanf("%d", &back);

                  if(back == 1){
                        menu = 1;
                      }
                system("cls");
             break;

            case 3:
              system("cls");

              if(pet == 1){
                
                printf("\n%s adorou o carinho!\n", name);
                
              printf("\n        /\\_/\\\n");
              printf("       (^ . ^) \n");
              printf("       / > < \\\n");
              
                printf("\n+5 pontos de felicidade\n");
                happy = happy + 5;
            
                
            }else if(pet == 2 ){ 
                
                printf("\n%s adorou o carinho!\n", name);
                
              printf("\n        /)/)    \n");
              printf("       (._.)     \n");
              printf("       />*<) \n");
              
                printf("\n+5 pontos de felicidade\n");
                happy = happy + 5;
            
                
            }else{
            
                 printf("\n%s adorou o carinho!\n", name);
              
               printf("\n                /`·..\n");
               printf("               /.....`:·\n");
               printf("           ..·´  .   `....-)\n");
               printf("         : * ):.;      .  {\n");
               printf("           `·.. `· .·´\\-·¸)\n");
               printf("             `\\\\..\\..·´\n");
               
                 printf("\n+5 pontos de felicidade\n");
                 happy = happy + 5;
            }
             printf("\nInsira 1 para voltar ao menu ");
             scanf("%d", &back);

             if(back == 1){
                menu = 1;
             }
            system("cls");
              break;

            case 4:
              system("cls");
        
            if(pet == 1){
                
                printf("\n%s esta dormindo...\n", name);
        
              printf("\n        /\\_/\\\n");
              printf("       (- . -) ZzZ\n");
              printf("       / > < \\\n");
              
                printf("\n+5 pontos de energia\n");
            
                
            }else if(pet == 2){
                
                printf("\n%s esta dormindo...\n", name);
              
              printf("\n        /)/)    \n");
              printf("       (-_-) ZzZ    \n");
              printf("       />*<) \n");

                printf("\n+5 pontos de energia\n");
              
            }else{   
              
                printf("\n%s esta dormindo...\n", name);
                
               printf("\n Z             /`·..\n");
               printf("   z Z        /.....`:·\n");
               printf("      z    ..·´  .   `....-)\n");
               printf("         : - ):.;      .  {\n");
               printf("           `·.. `·  ..·´\\`·¸)\n");
               printf("             `\\\\..\\..·´\n");
               
                printf("\n+5 pontos de energia\n");
            }
             printf("\nInsira 1 para voltar ao menu ");
             scanf("%d", &back);

             if(back == 1){
                menu = 1;
             }
             system("cls");
              break;

            case 5:
              system("cls");

            if(happy > 100){
                    happy = 100;
                 }
                if(happy < 0){
                    happy = 0;
                } 
                
            printf("\nFelicidade: %d", happy);
            printf("\nBarra da Felicidade: ");
            
            for(int h = 0; h < 10; h++){
                if(h < happy / 10){
                 printf("/");
                    }else{
                     printf("-");
                    }
            }
            printf("\n");
            printf("\nEnergia: %d", energy);
            printf("\nBarra de Energia: ");
            
            for(int e = 0; e < 10; e++){
                if(e < energy / 10){
                 printf("/");
                    }else{
                     printf("-");
                    }
                if(energy > 100){
                    energy = 100;
                 }
                if(energy < 0){
                    energy = 0;
                    if(energy <= 0){
                    energy = 0;
                }
                } 
            }
            printf("\n");
            printf("\nInsira 1 para voltar ao menu ");
             scanf("%d", &back);

             if(back == 1){
                menu = 1;
             }
              system("cls");
              break;

            case 0:
              menu = 0;
              system("cls");
              break;

             default: 
               printf("\nOpcao nao encontrada, selecione outra!\n");
      }
    }

    return 0;
}