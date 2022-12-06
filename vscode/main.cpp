// #include <stdio.h>
// #include <sys/sysinfo.h>

// int main() {
//     struct sysinfo info;
//     if (sysinfo(&info) < 0) {
//         perror(NULL);
//     }
//     printf("The system has been up for %ld seconds\n", info.uptime);

//     return 0;
// }

#include <boost/thread.hpp>
#include <boost/chrono.hpp>
#include <iostream>
void wait(int seconds)
{
    boost::this_thread::sleep_for(boost::chrono::seconds{seconds});
}
void thread()
{
    for (int i = 0; i < 5; ++i)
    {
        wait(1);
        std::cout << i << '\n';
    }
}
int main()
{
    boost::thread t{thread};
    t.join();
}