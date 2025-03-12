# Project Title
## Dual Port RAM Implementation on FPGA with Verilog and SystemVerilog-Driven Testbenches
### Mid-Review 1/2/3
**Academic Year:** 2021-25  
**Major Project ID:** V16  

## Objective and Goals
### Objective
- **Optimize Resource Utilization:** Efficiently utilize FPGA hardware resources to ensure minimal usage without compromising performance.
- **Facilitate Comprehensive Verification:** Use SystemVerilog-driven test benches to validate design under various operational conditions for robustness.

### Goals
- **Scalability:** Develop a design that can scale for larger memory sizes or adapt to advanced FPGA architectures.
- **Enhanced Verification:** Utilize SystemVerilog features like constrained random verification and functional coverage for thorough testing.
- **Documentation and Reporting:** Provide clear documentation, including methodology, simulation results, and insights for future improvements.

## Gantt Chart - Milestones and Activities
### Project Plan
Clearly mention milestones for objectives under each review.

## Literature Survey
### Key Publications
- **Design and Verification of Dual Port RAM using SystemVerilog Methodology** - 2019  
- **Design and Implementation of Synchronous Dual Port Memory** - 2024  
- **Verification Environment of Dual Port RAM** - 2019  

### Key Resources
- **Whitepapers, Application Notes, Datasheets**  
- **Design and Verification of a Dual Port RAM Using UVM Methodology (Paper)**  
- **Understanding Asynchronous Dual-Port RAMs (Notes)**  

### Existing Implementations
- **SystemVerilog Dual-Port RAM by KennethWilke** *(GitHub Link)*  
- **Dual-Port RAM by yashgupta26** *(GitHub Link)*  

## Architecture

## Use Cases & Testing
### Use Cases
- **Communication Systems:** Ideal for buffering and queuing in high-speed networks.  
- **Multi-Core Processors:** Enables efficient data sharing in parallel computing environments.  
- **FPGA-Based Prototyping:** Provides scalable memory design for various FPGA platforms.  

### Test Cases
- **Basic Read/Write Operations:** Verify operations for different data widths and addresses.  
- **Simultaneous Access:** Test concurrent read and write at different addresses.  
- **Concurrent Operation:** Stress test with random read/write operations.  
- **Reset and Initialization:** Verify memory reset behavior and default values.  

## Implementation and Results
### Iteration 1
- **Results:** RAM waveform, SRAM waveform  
- **Code:** RAM code, SRAM Code  

### Iteration 2
- **Results:** DRAM waveform, Dual-Port RAM waveform  

### Iteration 3
- **Results & Validation:** Dual-Port RAM code, Testbench  

## Contribution
### Team Progress
- **Completed Implementation of RAM on FPGA.**  
- **Completed Implementation of RAM, SRAM, DRAM, Dual-Port RAM in SystemVerilog (Vivado).**  

**I have successfully completed the FPGA implementation of Dual-Port RAM.**  

### Individual Contributions
- **C SanthiPriya:** Software implementation of RAM, SRAM, Dual-Port RAM & Documentation on Xilinx Vivado.  
- **Pranitha M:** Documentation & Software Implementation on Xilinx Vivado.  
- **N Keerthi:** Documentation & Software Implementation on Xilinx Vivado.  

## Conclusion & Future Work
### Summary and Conclusion
- Implemented a memory architecture enabling simultaneous read/write operations, improving parallel processing performance.  
- Used SystemVerilog for hardware description and testbenches for verification.  
- Synthesized and implemented design on FPGA ensuring proper timing, area, and power optimization.  
- Extensive validation through SystemVerilog-driven testbenches.  

### Future Work
- **Enhance DPRAM hardware implementation using advanced SystemVerilog features.**  
- **Explore improved methodologies and tools within SystemVerilog.**
