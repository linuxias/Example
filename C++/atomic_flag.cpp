#include <iostream>
#include <thread>
#include <vector>
#include <atomic>

using namespace std;

std::atomic_flag lock = ATOMIC_FLAG_INIT;

static int index;

void func(int n)
{
	for (int cnt = 0; cnt < 10; ++cnt) {
		while (lock.test_and_set(std::memory_order_acquire));  // acquire lock

		cout << "Output from thread " << n << " : " << index++ << endl;
		lock.clear(std::memory_order_release);               // release lock
	}
}

int main()
{
	std::vector<std::thread> v;

	for (int i = 0; i < 5; ++i)
		v.emplace_back(func, i);

	for (auto& t : v)
		t.join();
}
