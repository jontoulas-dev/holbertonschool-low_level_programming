Measurement Methodology
This series of tasks allows us to measure the time a processor takes to execute a program. To achieve this, we utilize the standard <time.h> library, leveraging key elements such as the clock() function, the clock_t data type, and double variables.
- Clock() : This function returns the number of clock ticks elapsed since the program started. It captures the exact CPU time dedicated to our process.
- Clock_ :This is the specific data type used to store the raw processor clock ticks returned by clock() at the start and end of the execution.
- CLOCKS_PER_SEC : This constant defines the number of clock ticks per second for the system, which is crucial for converting raw ticks into actual time.
- double : This floating-point data type is used to store the final, precise duration in seconds after dividing the elapsed ticks by CLOCKS_PER_SEC.

Observed Performance Differences
By running the program multiple times, we recorded three distinct execution times: 0.123762 seconds, 0.130857 seconds, and 0.133403 seconds. These variations clearly demonstrate that runtime is not static; it fluctuates due to external factors such as operating system overhead, CPU scheduling, and cache memory management. Therefore, calculating an average of these trials is essential to obtain a reliable and representative baseline. The naive algorithm utilizes nested loops, which imply a higher algorithmic complexity, and performs repeated operations on the same data, whereas the optimized single-pass algorithm completes the processing in a single pass.

Relation Between Runtime and Energy Consumption
We then benchmarked two different algorithms to demonstrate that a faster execution time directly correlates with lower energy consumption.Both implementations were verified to produce identical outputs, ensuring that the optimization maintains perfect functional correctness while significantly reducing execution time. This relationship is highlighted by the massive performance gap between the two approaches: the naive algorithm required an average execution time of 0.944405 seconds, whereas the optimized single-pass algorithm completed in just 0.000034 seconds.

Limitations of the Experiment
A key limitation of this experiment is hardware dependency. The benchmarks obtained are tightly coupled with our specific machine's architecture. The exact same algorithm could yield significantly different results or performance variations from one computer to another. Furthermore, these short-term measurements do not account for long-term thermal throttling or prolonged background workload fluctuations.

Practical Engineering Takeaway
To conclude, I would say that we must try to design the most efficient algorithms possible for a fast response and lower consumption. The final task allows us to see where the responses are the slowest, which is a plus for understanding the machine and being able to optimize it as well as improve its algorithms. For this exercise, we used 3 data components, which are executed in this order: BUILD_DATA (initialization) which corresponds to the RAM, PROCESS (computation) which indicates the algorithmic efficiency or the processor power, and REDUCE (the result) for data centralization. The results I obtained are the following:
- TOTAL =  0.000605 seconds
- BUILD_DATA = 0.000277 seconds
- PROCESS = 0.000224 seconds
- REDUCE = 0.000101 seconds
Based on these results, it is clear that BUILD_DATA and PROCESS are the two most resource-intensive stages, accounting for over 82% of the total runtime. Consequently, these are the two priority areas to optimize in order to improve overall efficiency and reduce energy consumption.