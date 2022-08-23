#include <stdio.h>
#include <string.h> 

#define maxn 50
#define maxc 50
struct tAluno{
  int matricula;
  char nome[maxn] ;
  char curso[maxc];
};

int main() {
  tAluno alunot[5];
  char classe[maxn];
  
  for (int i = 0; i < 5; i++){
    scanf("%d", &alunot[i].matricula);
    scanf(" %[^\n]", alunot[i].nome);
    scanf(" %[^\n]", alunot[i].curso);
  };
  
  scanf(" %[^\n]", classe);
  
  for(int j = 0; j < 5; j++){
    if (strcmp(alunot[j].curso, classe) == 0){
      printf("%d ", alunot[j].matricula);
      printf("%s\n", alunot[j].nome);
    }
  }
  
  return 0;  
}