#include<iostream>
using namespace std;
class student
{
private:
	int id;
	int score;
public:
	void setstu(int id,int score)
	{
		this->id=id,this->score = score;
	}
	int getid()const
	{
		return id;
	}
	int setscore()const
	{
		return score;
	}
};
const student* max(const student * stu, int size)
	{
		const student* maxstu = &stu[0];
		for (int i = 0; i < size; i++)
		{
			if (stu[i].setscore() > maxstu->setscore())
			{
				maxstu = &stu[i];
			}
		}
		return maxstu;
	}
int main()
{
	student stu[5];
	stu[0].setstu(1, 64);
	stu[1].setstu(2, 92);
	stu[2].setstu(3, 72);
	stu[3].setstu(4, 87);
	stu[4].setstu(5, 89);
	const student* maxstu;
	const student* maxstudent=max(stu,5 );
	cout << "最高成绩的学生的学号是：" << maxstudent->getid() << endl;


}