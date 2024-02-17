# Concurrency
Concurrency in C

/		Concurrency 
Definition 		The concurrency terms, explains system’s ability  to deal and manage serval processes or threads at the same time , this in advantage will allow them to advance at the same time , so they will may share some CPU cores and switch between executions 
Execution		Simultaneous Execution 
Resource		it only requires a single processor 
Interaction 		
Communication		We don’t need a message passing because it causes a slowdown in the system, so shared memory are used for communicating between threads, so that can prevent a lot of problems 
Complexity		By sharing the same memory from the threads this make it easy to deal with and design, but it needs strict coordination for preventing race situations and deadlocks.
Scalability 		Hard to scale because the share of the memory cores 
Switching of context  		Faster because each thread has its own space
