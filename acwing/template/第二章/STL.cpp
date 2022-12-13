#include <iostream>
#include <vector>
#include <cstdio>
#include <cstring>
#include <algorithm>

using namespace std;

/**
 * [main description]
 * @Author   Ric
 * @DateTime 2022-10-30T13:53:10+0800
 * @return   [description]
 *
 * 常用C++利器
 * vector 变长数组，倍增思想
 * pair 存储二元组
 * string 字符串, substr(), c_str()
 * queue 队列，push(), pop()
 * priority_queue 优先队列, push(), top(), pop()
 * stack 栈, push(), top(), pop()
 * deque 双端队列
 * set, map, multiset, multimap 基于平衡二叉树（红黑树）, 动态维护有序序列
 * unordered_set, unordered_map, unordered_multiset, unordered_multimap 哈希表
 * bitset 压位
 * 
 */


int main()
{	
	/*
	// vector
	// 系统为某一程序分配空间时所需时间，与空间大小无关，与申请次数有关
	// 倍增思想
	vector<int> a; // 最简
	vector<int> a(n); // 定义长度
	vector<int> a(n, 3); // 定义长度
	vector<int> a[10]; // 定义数组

	// O(1) 复杂度
	a.size(); // 返回数组元素个数
	a.empty(); // 返回是否为空
	a.clear(); // 清空
	a.front() / back();
	a.push_back() // pop_back();
	a.begin() / end();

	for (int i = 0; i < a.size(); i ++ )
	for (vector<int>::iterator i = begin(); i != a.end(); i ++ )
	for (auto x : a)
	
	// 支持比较运算
	vector<int> a(4, 3), b(3, 4);
	if (a < b) puts("a < b");

	*/

	/*
	pair<int, string> p;
	p.first // 第一个元素
	p.second // 第二个元素
	支持比较运算，以first

	p = make_pair(10, "yxc");
	p = {20. "acb"};
	
	pair<int, pair<int, int>> p; // 可以存三种东西

	*/

	/*
	string
	size() == length()
	empty()
	clear()
	
	string a = "yxc";
	a += "def";
	a += "c";

	substr() // 返回子串，输入 （起始位置，长度）长度大于字符串长度会返回到字符串结尾 
	c_str() // 返回存储字符串的起始地址
	 */
	
	/*
	queue
	empty()
	push() 向队尾插入一个元素
	front() 返回队头元素
	back() 返回队尾元素
	pop() 弹出队头元素

	queue<int> q;
	q.clear();
	q = queue<int>(); // 清空

	 */
	
	/*
	priority_queue 默认是大根堆
		push() 插入一个元素
		top() 返回堆顶元素
		pop() 弹出堆顶元素
	
	定义成小根堆
	方法一	
	priority_queue<int> heap;
	heap.clear(-x); 向堆中插入元素直接插入负数
	方法二
	priority_queue<int, vector<int>, greater<int>> heap;

	 */
	
	/*
	stack 栈
		push() 向栈顶插入一个元素
		top() 返回栈顶元素
		pop() 弹出栈顶元素
		empty()
		size()
	 */
	
	/*
	deque 双端队列
		size()
		empty()
		clear()
		front() 返回队头的值
		back() 返回队尾的值
		push_back() / pop_back()
		push_front() / pop_front()
		begin() / end()
		支持随机寻址
	 */
	
	/*
	map / multimap, set / multiset
	
	begin() / end() ++, -- 返回前驱和后继, 时间复杂度O(logn)
	size()
	empty()
	clear()
	set<int> s; 无法插入重复元素，若重复插入会被忽略
	multiset<int> ms; 可以插入重复元素

		set/multiset
			insert() 插入一个数
			find () 查找一个数
			count() 返回一个数的个数
			erase()
				(1) 输入一个数x, 删除所有x O(k + logn) k 是x的个数
				(2) 输入一个迭代器，删除这个迭代器()
			lower_bound() / upper_bound()
				lower_bound(x) 返回大于等于x的最小的数的迭代器
				upper_bound(x) 返回大于x的最小的数的迭代器

	map / multimap
		insert() 插入的数是一个pair
		erase() 输入的参数是pair或者迭代器
		find() 
		[] 时间复杂度是O(logn)
	map<string, int> a;
	a["yxc"] = 1;
	cout << a["yxc"] << endl;

	 */	

	/*
		
 	unordered_set, unordered_map, unordered_multiset, unordered_multimap 哈希表
 		和上面类似，增删改查时间复杂度是O(1)
 		不支持 lower_bound / upper_bound, 迭代器的 ++ ，-- 

	 */

	/*
	bitset, 压位
		省内存 省8倍空间
		bitset<10000> S; // <个数>
		支持所有运算

		count( ) 返回有多少个1
		any() 判断是否至少有一个1
		none() 判断是否全为0
	
		set(), 把所有位 置成1
		set(k, v) 将第k位变成v
		reset() 把所有位变成0
		flip() 等价于~
		filp(k) 把第k位取反
		

	 */

	return 0;
}