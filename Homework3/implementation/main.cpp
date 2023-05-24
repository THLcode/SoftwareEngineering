
// 헤더 선언
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include "header.h"
using namespace std;

// 상수 선언
#define MAX_STRING 32
#define INPUT_FILE_NAME "input.txt“
#define OUTPUT_FILE_NAME "output.txt"

// 함수 선언
void doTask();
void join();
void program_exit();

// 변수 선언
ifstream fin;
ofstream fout;
string currentLoginClient = "None";

/*********************지원 취소************************/

void CancelApplyUI::cancelApply() {

}

void CancelApplyUI::printOutput() {
    //결과물 output.txt에 출력
}

/*********************일반회원 지원 정보 통계************************/

void SelectApplyStatisticsUI::selectApplyStatistics() {

}

void SelectApplyStatisticsUI::printOutput() {

}

/*********************회사회원 지원 정보 통계************************/

void SelectRecruitStatisticsUI::selectRecruitStatistics() {

}

void SelectRecruitStatisticsUI::printOutput() {

}

int main()
{
    fin.open("input.txt");  
    fout.open("output.txt");    
    // Use the input and output file streams for further operations
    doTask();
    // Close the file streams when you're done
    fin.close();
    fout.close();

  return 0;
}


void doTask()
{
    // 메뉴 파싱을 위한 level 구분을 위한 변수
    int menu_level_1 = 0, menu_level_2 = 0;
    int is_program_exit = 0;
    // Read two integers from the file
    
    
    while(!fin.eof() || !is_program_exit)
    {
        // 입력파일에서 메뉴 숫자 2개를 읽기
        fin >> menu_level_1 >> menu_level_2;

        // 메뉴 구분 및 해당 연산 수행
        switch(menu_level_1)
        {
            case 1:
            {
                switch(menu_level_2)
                {
                case 1:   // "1.1. 회원가입“ 메뉴 부분
                {
                    // join() 함수에서 해당 기능 수행 
                    join();
            
                    break;
                }
                case 2:
                {
                    
                    break;
                }
            }
            case 4:
            {
                switch(menu_level_2)
                {
                    case 4 :
                    {
                        //지원 취소

                    }
                }
            }
            case 5:
            {
                switch(menu_level_2)
                {
                    case 1 :
                    {
                        //지원 정보 통계

                    }
                }
            }
            case 6:
            {
                switch(menu_level_2)
                {
                    case 1:   // "6.1. 종료“ 메뉴 부분
                {
                    program_exit();
                    is_program_exit = 1;
                    break;;
                }        
            }
        }
    }
    
    return;
}



void program_exit()    
{
   cout << "6.1. 종료";
}