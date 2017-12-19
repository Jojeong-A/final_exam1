#include <stdio.h>
#include <string.h>
#define i 30;
#define infor 8; 

void SSinfor(void); // 정보 입력
void SSinfor2(Sinfor[i][infor]); // 출력 

struct Score // 성적 구조체 
{
    int SNum;
    char Name[10];
    int KS;
    int MS;
    int ES;
    int S_Sum;
    int S_AVG;
};

int main(void)
{
    
    struct Score SS; int A;
    int Sinfor[30][7]; // 학생 정보 저장 배열
    

    // 처음 화면 
    printf("===================\n");
    printf("1. input Student infor \n"); //학생및  성적 정보  입력
    printf("2. Student infor \n"); // 학생 정보 로딩 
    printf("===================\n");
    scanf("%d",&A);

    if( A == 1) //학생 및 성적 정보 입력
    {   
        int SSinfor();
        int A1;

        printf("=====================\n");
        printf(" check : input 0\n ");
        printf(" Exist : input 1\n");
        printf(" continue: input  2\n");
        printf("=====================\n");
        scanf("%d",&A1);
        
        
        scanf("%d", &A1);
        if(A1== 0){
            
        }
        if (A1 == 1){
            break;
        }
        if(A1 == 2){
            continue;
        }
    }
    if (A==2)// 학생 정보 
    {

    }
    return 0;


}
void  SSinfor(void){
        int Sinfor[i][infor];
        struct Score SS;
        
        for(int i=; i< 30; i++){

        printf("input Student Num : \n"); scnaf("%d", &Sinfor[i][SS.SNum]);infor++;
        printf("input Student Name:\n"); scanf("%c",&Sinfor[i][SS.Name]);infor++;
        printf("input Student Korean Score: \n"); scanf("%d", &Sinfor[i][SS.KS]);infor++;
        printf("input Student Math Score: \n"); scanf("%d", &Sinfor[i][SS.MS]);infor++;
        printf("input Student English Score:\n"); scanf("%d", &Sinfor[i][SS.ES]);infor++;
                 
                  
        int Sinfor[i][SS.S_Sum]  = Sinfor[i][SS.KS]+Sinfor[i][SS.MS]+Sinfor[SS.ES];
        int Sinfor[i][SS.S_AVG] = sinfor[i][SS.S_Sum]/ 3;
        
        void SSinfor2(Sinfor[i][infor]);
    }
}
void SSinfor2(Sinfor[i][infor]){

}
        
           
