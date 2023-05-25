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
        string job = recruit.getJob();  // �������� ����

        // �ʿ� ������ �̹� ��ϵǾ� �ִ� ��� �ش� ������ ������ ���� ������Ŵ
        if (jobCount.count(job) > 0) {
            jobCount[job]++;
        }
        // �ʿ� ������ ��ϵǾ� ���� ���� ��� �ش� ������ ������ ���� 1�� �ʱ�ȭ
        else {
            jobCount[job] = 1;
        }
    }
    return jobCount;
}