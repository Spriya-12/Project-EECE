module dual_port_ram (
    input clk,
    input [3:0] addr_a, addr_b,   // 4-bit addresses
    input [7:0] data_in_a, data_in_b,   // 8-bit data inputs
    input we_a, we_b,             // Write enable for each port
    output reg [7:0] data_out_a, data_out_b // 8-bit data outputs
);

    // Declare a 16x8-bit RAM (16 memory locations, each 8 bits wide)
    reg [7:0] ram [15:0];

    // Clock-sensitive block
    always @(posedge clk) begin
        // Port A operation: Write or Read
        if (we_a) begin
            ram[addr_a] <= 8'b11001100;   // Changed data_in_a to fixed value 11001100
        end else begin
            data_out_a <= ram[addr_a];   // Read data from memory at address addr_a
        end

        // Port B operation: Write or Read
        if (we_b) begin
            ram[addr_b] <= 8'b00110011;   // Changed data_in_b to fixed value 00110011
        end else begin
            data_out_b <= ram[addr_b];   // Read data from memory at address addr_b
        end
    end
endmodule
-------------------------------------------------------------------------------
TEST BENCH

module tb_dual_port_ram();

    reg clk;
    reg [3:0] addr_a, addr_b;   // 4-bit addresses
    reg we_a, we_b;             // Write enable signals
    wire [7:0] data_out_a, data_out_b;   // 8-bit data outputs

    // Instantiate the dual port RAM module
    dual_port_ram uut (
        .clk(clk),
        .addr_a(addr_a),
        .addr_b(addr_b),
        .we_a(we_a),
        .we_b(we_b),
        .data_out_a(data_out_a),
        .data_out_b(data_out_b)
    );

    // Clock generation
    always #5 clk = ~clk; // 10 time units per clock cycle

    initial begin
        // Initialize inputs
        clk = 0;
        we_a = 0; we_b = 0;
        addr_a = 4'b0000; addr_b = 4'b0000;

        // Test case 1: Write to port A, read from port B
        #10;
        addr_a = 4'b0001; we_a = 1; // Write 11001100 to address 1 on port A
        #10; we_a = 0; // Stop writing

        addr_b = 4'b0001; we_b = 0; // Read from address 1 on port B
        #10;

        // Test case 2: Write to port B, read from port A
        addr_b = 4'b0010; we_b = 1; // Write 00110011 to address 2 on port B
        #10; we_b = 0; // Stop writing

        addr_a = 4'b0010; we_a = 0; // Read from address 2 on port A
        #10;

        // Test case 3: Simultaneous writes to both ports
        addr_a = 4'b0011; we_a = 1; // Write 11001100 to address 3 on port A
        addr_b = 4'b0011; we_b = 1; // Write 00110011 to address 3 on port B
        #10; we_a = 0; we_b = 0; // Stop writing

        // Test case 4: Read back both values
        addr_a = 4'b0011; we_a = 0; // Read from address 3 on port A
        addr_b = 4'b0011; we_b = 0; // Read from address 3 on port B
        #10;

        $stop; // End the simulation
    end
endmodule
