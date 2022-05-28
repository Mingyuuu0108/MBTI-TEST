//MBTI 테스트 프로그램 made by Leemingyu
//질문들의 출처 : 타입스 성격유형검사 (( types.my/quiz ))

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>

int Icnt = 0; // I 판단 카운트
int Ecnt = 0; // E 판단 카운트
int Ncnt = 0; // N 판단 카운트
int Scnt = 0; // S 판단 카운트
int Fcnt = 0; // F 판단 카운트
int Tcnt = 0; // T 판단 카운트
int Pcnt = 0; // P 판단 카운트
int Jcnt = 0; // J 판단 카운트

//질문과 문항에 대한 구조체
struct MBTIstruct{
    char QuestionNum[1000]; // 질문 내용
    char AnswerOne[1000]; // 질문 대답 1
    char AnswerTwo[1000]; // 질문 대답 2
}MBTI;

//메인 함수
int main(){
    
    int Answer = 0;
    int QuestionArray[24];
    int temp, startNum,Questioncnt=0;
    int continueTest;
    
    printf("==========<내 MBTI가 궁금해!!>========\n");
    printf("->간단한 문항에 답하여 내 MBTI를 찾아보자!<-\n");
    printf("-----------------------------------\n");
    printf("[질문을 읽고 자신과 가장 유사한 문항에 근접해 \n");
    printf("있는 숫자를 입력하시면 됩니다 !!]\n");
    printf("아무 숫자나 입력하면 검사가 시작됩니다.\n");
    
    scanf("%d",&startNum);
    printf("-----------------------------------\n");

    
    for(int i=0;i<24;i++){
        QuestionArray[i]=i+1;
    }
    
    srand(time(NULL));
    for(int i=0; i<50; i++) {
        int randNum1 = rand() % 24;
        int randNum2 = rand() % 24;
        temp = QuestionArray[randNum1];
        QuestionArray[randNum1] = QuestionArray[randNum2];
        QuestionArray[randNum2] = temp;
    }//배열 섞는 코드
    
    for(int i=0;i<24;i++) {
        if(QuestionArray[i]==1){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<길고 고단한 한 주 끝에 내가 기다리는 것은?>");
            strcpy(MBTI.AnswerOne, "많은 친구들과의 모임 자리");
            strcpy(MBTI.AnswerTwo, "영화나 게임 들을 즐기는 나만의 시간");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Ecnt+=2;
                    if(Answer==2) Ecnt++;
                    if(Answer==3) Icnt++;
                    if(Answer==4) Icnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==2){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<내가 더 중요하게 생각하는 것은?>");
            strcpy(MBTI.AnswerOne, "임기응변과 적응하는 능력");
            strcpy(MBTI.AnswerTwo, "꼼꼼하고 체계적인 능력");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            scanf("%d",&Answer);
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Pcnt+=2;
                    if(Answer==2) Pcnt++;
                    if(Answer==3) Jcnt++;
                    if(Answer==4) Jcnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==3){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나의 평상시 대화 스타일은?>");
            strcpy(MBTI.AnswerOne, "일반적으로 활발하게 대화");
            strcpy(MBTI.AnswerTwo, "꼭 필요할 때가 아니면 말수가 적음");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Ecnt+=2;
                    if(Answer==2) Ecnt++;
                    if(Answer==3) Icnt++;
                    if(Answer==4) Icnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==4){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나는 다른 사람들에게 어떤 사람이라고 보여질까?>");
            strcpy(MBTI.AnswerOne, "활동적이고 개방적인 사람");
            strcpy(MBTI.AnswerTwo, "신중하고 사려깊은 사람");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Ecnt+=2;
                    if(Answer==2) Ecnt++;
                    if(Answer==3) Icnt++;
                    if(Answer==4) Icnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==5){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나에게 좀 더 중요한 것은?>");
            strcpy(MBTI.AnswerOne, "팩트와 사실");
            strcpy(MBTI.AnswerTwo, "관계와 감정");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Tcnt+=2;
                    if(Answer==2) Tcnt++;
                    if(Answer==3) Fcnt++;
                    if(Answer==4) Fcnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==6){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<내가 좀 더 끌리는 것은?>");
            strcpy(MBTI.AnswerOne, "이미 해본 적 있는 안전한 방식");
            strcpy(MBTI.AnswerTwo, "혁신적이고 새로운 방식");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Scnt+=2;
                    if(Answer==2) Scnt++;
                    if(Answer==3) Ncnt++;
                    if(Answer==4) Ncnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==7){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<다음 중 내가 가까운 것은?>");
            strcpy(MBTI.AnswerOne, "현실적인 사람");
            strcpy(MBTI.AnswerTwo, "창의적이고 기발한 사람");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Scnt+=2;
                    if(Answer==2) Scnt++;
                    if(Answer==3) Ncnt++;
                    if(Answer==4) Ncnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==8){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나의 평상시 태도는?>");
            strcpy(MBTI.AnswerOne, "공정하고 올바른");
            strcpy(MBTI.AnswerTwo, "따듯하고 친절한");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Tcnt+=2;
                    if(Answer==2) Tcnt++;
                    if(Answer==3) Fcnt++;
                    if(Answer==4) Fcnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==9){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<일반적으로 나>");
            strcpy(MBTI.AnswerOne, "스스로의 판단에 따라 옳다고 믿는 대로 행동");
            strcpy(MBTI.AnswerTwo, "내 행동으로 다른 사람들이 받을 영향을 고려하여 행동");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Tcnt+=2;
                    if(Answer==2) Tcnt++;
                    if(Answer==3) Fcnt++;
                    if(Answer==4) Fcnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==10){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나는 주변과 물건들을>");
            strcpy(MBTI.AnswerOne, "잘 어지르는 편");
            strcpy(MBTI.AnswerTwo, "항상 정돈된 상태로 유지");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Pcnt+=2;
                    if(Answer==2) Pcnt++;
                    if(Answer==3) Jcnt++;
                    if(Answer==4) Jcnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==11){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<산다는 것과 죽음의 의미에 대해>");
            strcpy(MBTI.AnswerOne, "그다지 생각하지 않는다");
            strcpy(MBTI.AnswerTwo, "자주 생각한다");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Scnt+=2;
                    if(Answer==2) Scnt++;
                    if(Answer==3) Ncnt++;
                    if(Answer==4) Ncnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
        if(QuestionArray[i]==12){
            Questioncnt++;
            printf("%d번 문항\n",Questioncnt);
            strcpy(MBTI.QuestionNum, "<나는 여러 사람들 가운데 있을 때>");
            strcpy(MBTI.AnswerOne, "에너지가 생긴다");
            strcpy(MBTI.AnswerTwo, "에너지가 소모된다");

            printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
            printf("대답 : ");
            for(int j=0;j<100;j++){
                scanf("%d",&Answer);
                if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                    if(Answer==1) Ecnt+=2;
                    if(Answer==2) Ecnt++;
                    if(Answer==3) Icnt++;
                    if(Answer==4) Icnt+=2;
                    break;
                }
                else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
            }
            printf("-----------------------------------\n");
        }
    }
    
    printf("\n이제 절반의 문항을 끝마쳤습니다, 이대로 결과를 확인하시겠습니까?\n");
    printf("결과를 확인하기 위해서는 1 을 입력하세요.\n");
    printf("더욱 자세하게 검사하기 위해서는 2 를 입력하세요.\n");
    scanf("%d",&continueTest);
    printf("-----------------------------------\n");
    
    if (continueTest == 1) {
        goto End;
    }
    else if (continueTest == 2) {
        for(int i=0;i<24;i++) {
            if(QuestionArray[i]==13){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<내가 더 선호하는 이야기 주제는>");
                strcpy(MBTI.AnswerOne, "현재 일어나는 일들에 대해");
                strcpy(MBTI.AnswerTwo, "가능성과 아이디어에 대해");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Scnt+=2;
                        if(Answer==2) Scnt++;
                        if(Answer==3) Ncnt++;
                        if(Answer==4) Ncnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==14){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<여러 사람이 모인 자리에서 선호하는 것은>");
                strcpy(MBTI.AnswerOne, "새로운 사람과 이야기");
                strcpy(MBTI.AnswerTwo, "편하고 잘 아는 사람과의 이야기");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Ecnt+=2;
                        if(Answer==2) Ecnt++;
                        if(Answer==3) Icnt++;
                        if(Answer==4) Icnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==15){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<친구가 고민이 있을 때, 내가 가장 잘 해줄 수 있는 것은>");
                strcpy(MBTI.AnswerOne, "현실적인 조언과 도움");
                strcpy(MBTI.AnswerTwo, "감정적인 공감과 경청");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Tcnt+=2;
                        if(Answer==2) Tcnt++;
                        if(Answer==3) Fcnt++;
                        if(Answer==4) Fcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==16){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<해야할 일들이 많이 있을 때, 평소 내가 일들을 처리하는 방식은>");
                strcpy(MBTI.AnswerOne, "한꺼번에 몰아서");
                strcpy(MBTI.AnswerTwo, "계획에 따라 차근차근");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Pcnt+=2;
                        if(Answer==2) Pcnt++;
                        if(Answer==3) Jcnt++;
                        if(Answer==4) Jcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==17){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<다음 중 내가 더 선호하는 것은>");
                strcpy(MBTI.AnswerOne, "즉흥적으로 행동하기");
                strcpy(MBTI.AnswerTwo, "구체적인 계획에 따라 움직이기");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Pcnt+=2;
                        if(Answer==2) Pcnt++;
                        if(Answer==3) Jcnt++;
                        if(Answer==4) Jcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==18){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<중요한 결정을 해야할 때 나는 일반적으로>");
                strcpy(MBTI.AnswerOne, "논리적인 판단을 따름");
                strcpy(MBTI.AnswerTwo, "가슴이 시키는 것을 따름");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Tcnt+=2;
                        if(Answer==2) Tcnt++;
                        if(Answer==3) Fcnt++;
                        if(Answer==4) Fcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==19){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<철학적이거나 추상적인 이야기는>");
                strcpy(MBTI.AnswerOne, "지루할 때가 많다");
                strcpy(MBTI.AnswerTwo, "흥미로울 때가 많다");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Tcnt+=2;
                        if(Answer==2) Tcnt++;
                        if(Answer==3) Fcnt++;
                        if(Answer==4) Fcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==20){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<내가 더 선호하는 것은>");
                strcpy(MBTI.AnswerOne, "모든 가능성에 열린 자세로 적응하기");
                strcpy(MBTI.AnswerTwo, "가능한 상황들에 체계적으로 대비하기");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Pcnt+=2;
                        if(Answer==2) Pcnt++;
                        if(Answer==3) Jcnt++;
                        if(Answer==4) Jcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==21){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<일반적으로 나는>");
                strcpy(MBTI.AnswerOne, "비판적이고 올바른 사람");
                strcpy(MBTI.AnswerTwo, "타인을 배려하는 사람");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Tcnt+=2;
                        if(Answer==2) Tcnt++;
                        if(Answer==3) Fcnt++;
                        if(Answer==4) Fcnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
            if(QuestionArray[i]==22){
                Questioncnt++;
                printf("%d번 문항\n",Questioncnt);
                strcpy(MBTI.QuestionNum, "<여럿이 모은 상황에서 나는>");
                strcpy(MBTI.AnswerOne, "다른 사람들 앞에 나서는데 거리낌이 없음");
                strcpy(MBTI.AnswerTwo, "최대한 다른 사람들 앞에 나서지 않음");

                printf("%s\n%s 1 2 3 4 %s\n",MBTI.QuestionNum,MBTI.AnswerOne,MBTI.AnswerTwo);
                printf("대답 : ");
                for(int j=0;j<100;j++){
                    scanf("%d",&Answer);
                    if(Answer==1 || Answer==2 || Answer==3 || Answer==4){
                        if(Answer==1) Ecnt+=2;
                        if(Answer==2) Ecnt++;
                        if(Answer==3) Icnt++;
                        if(Answer==4) Icnt+=2;
                        break;
                    }
                    else printf("1 에서 4 사이의 값을 입력해주세요..!\n");
                }
                printf("-----------------------------------\n");
            }
        }
    }
    
End:
    printf("-----------------------------------\n");

    //결과값 측정하는 코드
    printf("당신의 MBTI는 \"");
    if(Icnt>=Ecnt) printf("I");
    else printf("E");
    if(Ncnt>=Scnt) printf("N");
    else printf("S");
    if(Fcnt>=Tcnt) printf("F");
    else printf("T");
    if(Pcnt>=Jcnt) printf("P");
    else printf("J");
    printf("\" 입니다!! 😃 \n");
    printf("-----------------------------------\n");
    printf("<MBTI 통계>\nI: %.2f / E: %.2f\nN: %.2f / S: %.2f\n",(float)Icnt/(Icnt+Ecnt)*100,(float)Ecnt/(Icnt+Ecnt)*100,(float)Ncnt/(Ncnt+Scnt)*100,(float)Scnt/(Ncnt+Scnt)*100);
    printf("F: %.2f / T: %.2f\nP: %.2f / J: %.2f\n",(float)Fcnt/(Fcnt+Tcnt)*100,(float)Tcnt/(Fcnt+Tcnt)*100,(float)Pcnt/(Pcnt+Jcnt)*100,(float)Jcnt/(Pcnt+Jcnt)*100);

    
}
