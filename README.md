# Dual Port RAM Implementation on FPGA with Verilog and SystemVerilog-Driven Testbenches

## Project Details
- **Project Supervisor:** Dr. ArunKumar Manoharan  

## Mini Project Outcome
- **Objective Fulfillment:** Dual-Port RAM was successfully designed and implemented using Verilog, enabling simultaneous read/write operations and independent port access for enhanced performance.
- **Hardware Simulation and Testing:** Simulation results verified the functionality of RAM, SRAM, DRAM, and Dual-Port RAM with output waveforms and schematic diagrams.
- **Performance Optimization:** Dual-Port RAM's ability to support parallelism improved data throughput, addressing high-performance requirements in FPGA/ASIC designs.
- **Future Work Identified:** Plans include optimizing clock speeds, scaling memory size, and enhancing power efficiency and verification methodologies.

## Project Abstract
This project addresses the need for high-performance memory architectures in modern digital systems. Continuing from the progress made in an earlier project, this work focuses on enhancing the design and implementation of Dual-Port RAM on FPGA to meet the increasing demand for efficient memory solutions in applications like parallel processing, video processing, and networking. 

Dual-Port RAM is a specialized memory module that supports simultaneous read and write operations on two independent ports, significantly improving data throughput and system efficiency. The design ensures independent access for each port and incorporates mechanisms such as arbitration and collision detection to handle conflicts when both ports access the same memory location, ensuring data integrity. 

Verilog is used to model the architecture’s structural and behavioral aspects, while SystemVerilog is utilized to develop advanced test benches for comprehensive functional and performance validation. These test benches simulate various scenarios, including edge cases and concurrent operations, to ensure the robustness and reliability of the design.

Xilinx Vivado is employed for synthesis, simulation, and real-time testing, with an emphasis on optimizing resource utilization, scaling for larger memory requirements, and minimizing power consumption. The FPGA implementation is thoroughly verified before transitioning to SystemVerilog for further improvements, including enhanced scalability, power efficiency, and advanced verification techniques such as Universal Verification Methodology (UVM).

## Project Objectives
- **Optimize Resource Utilization:** Efficiently utilize FPGA hardware resources during the design and implementation process, ensuring minimal resource usage without compromising performance.
- **Facilitate Comprehensive Verification:** Use SystemVerilog-driven test benches to validate the design under various operational conditions, ensuring robustness and functionality in real-world applications.


## Group Details
| Name | Registration Number |
|------|---------------------|
| N Keerthi | BU21EECE0100410 |
| C Santhi Priya | BU21EECE0100367 |
| Pranitha M | BU21EECE0100336 |
