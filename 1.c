#include<stdio.h>
    struct process_structure {
	        int process_id, arrival_time, burst_time, priority;
		int w_flag,waiting_time;
		int turnaround_time;
    };
int main() {
    int limit, count;
    int time_quantum;
    int waiting_time;
int i, j;
    printf("\n Level 1 : Fixed priority preemptive Scheduling\n Level 2 : Round Robin Scheduling\n\n");
    printf("Enter Total Number of Processes   : ");
    scanf("%d", & limit);
    printf("Enter Time Quantum for Round Robin in multiple of 2: ");
    scanf("%d", & time_quantum);
    struct process_structure p1[limit];
    struct process_structure p2[limit];
    struct process_structure processTree[limit];
    int flag = 1;
    int Qlevel=1;
    int q1 = 0, q2 = 0;	
    for (count = 0; count < limit; count++) {
            printf("Process ID       : ");
            scanf("%d", & p1[q1].process_id);
           printf("Arrival Time     : ");
            scanf("%d", & p1[q1].arrival_time);
            printf("Burst Time       : ");
            scanf("%d", & p1[q1].burst_time);
            printf("Process Priority : ");
            scanf("%d", & p1[q1].priority);
	    p1[q1].w_flag=0;
            p1[q1].waiting_time=0;
            p1[q1].turnaround_time=0;	
            processTree[count]=p1[q1];
            q1++;
        }
        struct process_structure temp;
    for (i = 1; i < q1; i++)
        for (j = 0; j < q1 - i; j++) {
            if (p1[j].arrival_time > p1[j + 1].arrival_time) {
                temp = p1[j];
                p1[j] = p1[j + 1];
                p1[j + 1] = temp;
            }
        }
    
    printf("\n\n \t\t\tLEVEL 1 QUEUE IS Running\n\n");

