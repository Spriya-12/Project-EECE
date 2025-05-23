**Title:**  
Dual Port RAM Implementation on FPGA with Verilog and System Verilog - Driven Testbenches  

**Project Supervisor:**  
Dr. ArunKumar Manoharan 

**Cluster Name:**  
VLSI  

**Project Coordinator:**  
Dr. Ambar Bajpai  

---

## Mini Project (PROJ2099) Outcome: (Summary in 3-6 bullet points)

1. **Objective Fulfillment:**  
   Dual-Port RAM was successfully designed and implemented using Verilog, enabling simultaneous read/write operations and independent port access for enhanced performance.

2. **Hardware Simulation and Testing:**  
   Validated through real-time simulations of RAM, SRAM, DRAM, and Dual-Port RAM with output waveforms and schematic diagrams.

3. **Performance Optimization:**  
   Dual-Port RAM’s ability to support parallelism improved data throughput, addressing high-performance requirements in FPGA/ASIC designs.

4. **Future Work Identified:**  
   Plans include optimizing clock speeds, scaling memory size, and enhancing power efficiency and verification methodologies.

---

## Extended Project Abstract (up to 300 words)

This project addresses the need for high-performance memory architectures in modern digital systems and continues the progress made in an earlier project. The work focuses on enhancing the design and implementation of Dual-Port RAM on FPGA to meet the increasing demand for efficient memory solutions in applications like parallel processing, video streaming, and networking.  

Dual-Port RAM is a specialized memory module that supports simultaneous read and write operations on two independent ports, significantly improving throughput and system efficiency. Verilog is used for designing access for each port and incorporates mechanisms such as arbitration and collision detection for conflicts when both ports access the same memory location at the same time.  

Verilog is used to model the architecture's structural and behavioral aspects, while SystemVerilog is utilized to develop advanced test benches for comprehensive functional and performance validation. These test benches simulate various scenarios, including edge cases and concurrent operations, to ensure the robustness and reliability of the design.  

Xilinx Vivado is employed for synthesis, simulation, and real-time testing, with an emphasis on optimizing resource utilization, scaling for larger memory requirements, and minimizing power consumption. The FPGA implementation is thoroughly verified before transitioning to SystemVerilog for further improvements, including enhanced scalability, power efficiency, and advanced verification techniques such as Universal Verification Methodology (UVM).

---

**Tools Used:**  
- **Languages:** Verilog, SystemVerilog  
- **Design Tool:** Xilinx Vivado  


---
| **Step Number** | **Task**                                | **Duration**       | **Dependencies**                     | **Milestone**                  |
|------------------|----------------------------------------|--------------------|---------------------------------------|---------------------------------|
| 1                | Design and Architecture               | Week 1 - Week 2    | None                                  | Independent port access ready  |
| 2                | Verification and Test                 | Week 3 - Week 4    | Completion of Step 1                 | Functional test cases verified |
| 3                | Toolchain Utilization                 | Week 5 - Week 6    | Completion of Step 2                 | FPGA testing successful        |
| 4                | Optimize Effort and Resources         | Week 7 - Week 8    | Completion of Step 3                 | Resource optimization achieved |
| 5                | Validation and Refinement             | Week 9 - Week 10   | Completion of Step 4                 | SystemVerilog transition done  |
| 6                | Future Enhancements                   | Week 11 onwards    | Completion of Step 5                 | Advanced features implemented  |

---
I have successfully completed all tasks outlined in the project timeline. The implementation of Dual-Port RAM in both software and hardware is now complete, ensuring the design meets all performance and optimization goals.
