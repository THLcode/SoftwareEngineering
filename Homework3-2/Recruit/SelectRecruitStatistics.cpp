#include "SelectRecruitStatistics.h"
#include "SelectRecruitStatisticsUI.h"
#include "../RecruitInfoCollection.h"
SelectRecruitStatistics::SelectRecruitStatistics()
{
    SelectRecruitStatisticsUI selectRecruitStatisticsUI;

    selectRecruitStatisticsUI.startInterface(this);
}
vector<Recruit> SelectRecruitStatistics::showRecruitStatistics(string currentLoginClient) {
    RecruitInfoCollection rc;
    vector<Recruit> rList = rc.getRecruitListById(currentLoginClient);
    return rList;
}
map<string, int> SelectRecruitStatistics::getRecruitNumByJob(vector<Recruit> rList) {
    map<string, int> jobCount;

    for (Recruit recruit : rList) {
        string job = recruit.getJob();  // 지원자의 업무

        // 맵에 업무가 이미 등록되어 있는 경우 해당 업무의 지원자 수를 증가시킴
        if (jobCount.count(job) > 0) {
            jobCount[job]++;
        }
        // 맵에 업무가 등록되어 있지 않은 경우 해당 업무의 지원자 수를 1로 초기화
        else {
            jobCount[job] = 1;
        }
    }
    return jobCount;
}