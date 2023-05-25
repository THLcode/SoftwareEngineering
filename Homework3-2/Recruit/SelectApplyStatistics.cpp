#include "SelectApplyStatistics.h"
#include "SelectApplyStatisticsUI.h"
#include "../Recruit.h"
#include "../ApplyInfoCollection.h"
SelectApplyStatistics::SelectApplyStatistics()
{
    SelectApplyStatisticsUI selectApplyStatisticsUI;

    selectApplyStatisticsUI.startInterface(this);
}
vector<Recruit> SelectApplyStatistics::showApplyStatistics(string currentLoginClient)
{
    ApplyInfoCollection ac;
    vector<Recruit> RList = ac.getApplyListById(currentLoginClient);

    return RList;
}
map<string, int> SelectApplyStatistics::getApplyNumByJob(vector<Recruit> rList) {
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