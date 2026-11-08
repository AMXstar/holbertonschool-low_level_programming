# Green Efficiency Analysis

## Measurement Methodology

I evaluated the recorded output of the C instrumentation program, `instrumentation_lab.c`. In PowerShell, I compiled it with `gcc -std=gnu89 -Wall -Wextra -Werror -pedantic instrumentation_lab.c -o instrumentation_lab.exe` and then ran `./instrumentation_lab.exe`. The compilation completed without an error. The program uses facilities from `<time.h>`, including `clock_t`, `clock()`, and `CLOCKS_PER_SEC`, to report CPU execution time in seconds. Timing is placed around the dataset-building, processing, and checksum-reduction phases, with an additional measurement for the whole operation. Each result is printed to six decimal places.

The observed output from this run was:

```text
TOTAL seconds: 0.000000
BUILD_DATA seconds: 0.000000
PROCESS seconds: 0.000000
REDUCE seconds: 0.000000
```

These are the values actually recorded, not estimated durations. The output does not report electricity consumption or processor power.

## Observed Performance Differences

All four displayed durations were `0.000000` seconds. Therefore, this run shows **no detectable difference at the precision of the displayed results** between the reported phase times. It does not show that all phases take exactly zero time or that they are equally fast. Each phase performs different work, but the recorded timing values are too small to distinguish their costs here.

The available output also does not contain a paired timing run for a baseline implementation and an alternative implementation. Consequently, I cannot calculate a supported speedup, percentage improvement, or ranking of algorithms. Claiming that one implementation is faster would go beyond the evidence collected in this run.

## Relation Between Runtime and Energy Consumption

Runtime can help investigate energy efficiency because energy use depends on both power and time. In simplified terms, energy equals average power multiplied by elapsed time. If two implementations run on comparable hardware at similar average power, a shorter runtime could reduce energy use. However, this relationship is conditional: processor utilization, frequency changes, and other system activity can affect power consumption.

The program measured CPU time, not electrical power in watts, energy in joules, or total system energy. Since the only displayed times are zero at six decimal places, they cannot support a numerical estimate of energy savings. No measured result here proves that the program is greener than another implementation.

## Limitations of the Experiment

The most important limitation is the resolution of the recorded measurements. The operations may finish within a timer interval or round to `0.000000` when formatted to six decimal places. A zero in this output should be interpreted as **not resolved by this measurement**, rather than an instantaneous operation. Only one displayed run is available for this report, so run-to-run variability cannot be assessed. The evidence also lacks a direct baseline-versus-alternative comparison and a hardware power measurement.

Furthermore, `clock()` measures processor time according to the runtime environment. It is not a substitute for a dedicated energy meter. Without repeated observations, uncertainty estimates, and comparable conditions, conclusions about small performance differences would be unreliable.

## Practical Engineering Takeaway

The instrumentation provides a useful structure for measuring separate phases, and the program compiled and ran successfully. Nevertheless, the current results are insufficient to establish an efficiency improvement. A stronger follow-up would repeat the same workload many times under comparable conditions, record individual results with adequate timer resolution, and compare clearly identified implementations without changing their algorithmic behavior. If the goal is environmental efficiency, a suitable power or energy measurement should accompany runtime data.

The defensible conclusion from the recorded evidence is narrow but important: the program produced the required timing labels, yet **no execution-time difference or energy saving can be demonstrated from these four displayed values alone**.
