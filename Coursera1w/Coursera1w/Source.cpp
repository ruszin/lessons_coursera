#include <algorithm>
#include <map>
#include <string>
#include <tuple>
#include <vector>
#include <iostream>
#include <vector>
#include <utility>
#include<set>
#include <list>
using namespace std;

//template <typename First,typename Second>
//pair<First, Second> operator * (const pair<First, Second>& p1, const pair<First, Second>& p2) {
//	First f = p1.first*p2.first;
//	Second s = p1.second*p2.second;
//	return{ f,s };
//}
//template <typename T>
//map<T, pair<T, T> > Sqr(map<T, pair<T, T> >& m) {
//	for (auto &item : m) {
//		item.second.first = item.second.first * item.second.first;
//		item.second.second = item.second.second * item.second.second;
//	}
//	return m;
//}
//template <typename T>
//vector<T> Sqr(vector<T> vi) {
//	for (int i = 0; i< vi.size(); i++)
//		vi[i] = vi[i] * vi[i];
//	return vi;
//}
//template <typename T>
//T Sqr(T x) {
//	return x*x;
//}
//enum class TaskStatus {
//	NEW,          // новая
//	IN_PROGRESS,  // в разработке
//	TESTING,      // на тестировании
//	DONE          // завершена
//};
//
//// Объявляем тип-синоним для map<TaskStatus, int>,
//// позволяющего хранить количество задач каждого статуса
//using TasksInfo = map<TaskStatus, int>;
//
//void PrintTasksInfo(TasksInfo tasks_info) {
//	cout << tasks_info[TaskStatus::NEW] << " new tasks" <<
//		", " << tasks_info[TaskStatus::IN_PROGRESS] << " tasks in progress" <<
//		", " << tasks_info[TaskStatus::TESTING] << " tasks are being tested" <<
//		", " << tasks_info[TaskStatus::DONE] << " tasks are done" << endl;
//}
//
//class TeamTasks {
//public:
//	// Получить статистику по статусам задач конкретного разработчика
//	const TasksInfo& GetPersonTasksInfo(const string& person) const;
//
//	// Добавить новую задачу (в статусе NEW) для конкретного разработчитка
//	void AddNewTask(const string& person);
//
//	// Обновить статусы по данному количеству задач конкретного разработчика,
//	// подробности см. ниже
//	tuple<TasksInfo, TasksInfo> PerformPersonTasks(
//		const string& person, int task_count);
//};
//const TasksInfo& GetPersonTasksInfo(const string& person) const {
//
//}
#define MAX_SIZE 100000
int sum_intervals(std::vector<std::pair<int, int>> intervals) {
	int ins[MAX_SIZE] = {0}; int sum_of_intervals = 0;
	for (auto &i:intervals) {
		for (int j = i.first; j <= i.second; ++j) {
			ins[j] = 1;
		}
	}
	for (auto &i : ins) {
		if (i == 1) {
			sum_of_intervals++;
		}
	}
	return sum_of_intervals-(intervals.size());
}

int main() {
	vector<std::pair<int, int>> intervals = { { 1, 5 } };
	cout<<sum_intervals(intervals);
	system("pause");
}