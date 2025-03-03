#include <iostream>
#include <thread>
#include <mutex>


std::mutex mutex;

void thread_function()
{
    std::lock_guard<std::mutex> guard(mutex);
    thread_local int res;

    std::cout << "thread[" << std::this_thread::get_id() << "], res: "
              << static_cast<void*>(&res) << '\n';
}

int main()
{
    constexpr int t_count = 5;
    std::thread t1(thread_function);
    std::thread t2(thread_function);
    std::thread t3(thread_function);
    std::thread t4(thread_function);
    std::thread t5(thread_function);

    t1.join();
    t2.join();
    t3.join();
    t4.join();
    t5.join();



    return 0;
}
