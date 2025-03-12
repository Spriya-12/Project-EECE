1. Functional Requirements
Read/Write Access: Two independent ports should be able to read and write simultaneously.
Addressing: Separate address lines for each port.
Data Width: Typically 8-bit, 16-bit, 32-bit, or configurable.
Memory Depth: Define based on application needs (e.g., 256x8, 512x16, etc.).
Clocking: Can be synchronous (same clock) or asynchronous (different clocks for each port).
Collision Handling: Define behavior when both ports access the same address.
Read-Write Conflict: Prioritization or last-write-wins.
Write-Write Conflict: Arbitration mechanism.
2. Design Requirements
Memory Array: Use reg or logic array to store data.
Port Configuration:
Separate address, data, and control signals for each port.
Optional enable (en) and write enable (we) signals.
Clock Domain Considerations:
Synchronous DPRAM: Uses a single clock.
Asynchronous DPRAM: Requires clock synchronization logic.
Power Optimization:
Use clock gating if needed.
Implement low-power retention techniques.
Technology Mapping: Ensure compatibility with FPGA/ASIC libraries.
3. Verification Requirements (SystemVerilog)
Testbench Components:
Randomized read/write test scenarios.
Functional coverage for address and data transactions.
Assertions for collision detection and error handling.
Assertions & Functional Checks:
Read-after-Write (RAW), Write-after-Read (WAR), Write-after-Write (WAW) tests.
Access latencies validation.
Corner Cases:
Simultaneous reads and writes to the same address.
Boundary address handling.
Clock Domain Verification: If using different clocks, ensure proper synchronization
