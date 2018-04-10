# Multilevel Scheduling
## Round Robin and Fixed Priority Preemptive Scheduling
### Supported Theory: 

This approach improves the CPU Performance in real time OS. The given problem is priority based Round robin CPU Scheduling algorithm. It has the same property of round robin and fixed priority with an advantage of reducing starvation and integrates priority-based scheduling. This code or algorithm improves all the drawbacks like varying time quantum, average waiting time, Turnaround time and number of context switches.	

This code implements multilevel Feedback Queue in two levels.

Level 1: Fixed Priority Pre-emptive Scheduling

Level 2: Round Robin Scheduling

In Level 1 Operations: Level 1 is a fixed priority pre-emptive scheduling where the processes enter in the queue and when a process is running with a priority x and another process enters the queue with a higher priority, an interrupt is called which pre-empts the first process and moves it to the Level 2 Queue and runs the process having higher priority. The processes in queue 1 will get sorted based on their priorities and the pre-empted process is moved in level 2 which follows round robin.
E.g.: If a process say P1 is scheduled and running, now another process with higher priority comes P2. P2 is the New process with higher priority, process P2 pre-empts currently running process P1 and process P1 will go to second level queue.

In Level 2 Operations: This is the second level following round robin’s algorithm with the time quantum in multiples of two. Here, The Pre-empted processes enter this level which is moved from queue 1. If there are multiple processes in this level it runs according to its time quantum. All the processes in this queue will get executed after queue 1 is completed. This queue has lower priority compared with queue 1.
E.g.: Suppose Queue 1 is empty and currently process from Queue 2 is being executed. Now, if at this time a new process arrives then new process will be part of Queue 1. So, new
process should be scheduled as Queue 1 has higher priority than Queue 2. Again, after Queue 1 becomes empty Queue 2 will resume execution.


