1. lttng create
2. LD_PRELOAD=liblttng-ust-libc-wrapper.so:liblttng-ust-dl.so:liblttng-ust-cyg-profile.so ./lttng_ust_test 
3. lttng list --userspace
4. lttng enable-event --userspace --all
5. lttng start
6. Input any-key to application
7. lttng destory
8. babeltrace ~/lttng-strace/somepath


