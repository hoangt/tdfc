//////////////////////////////////////////////////////////////////////////////
//
// Copyright (c) 1999 The Regents of the University of California 
// Permission to use, copy, modify, and distribute this software and
// its documentation for any purpose, without fee, and without a
// written agreement is hereby granted, provided that the above copyright 
// notice and this paragraph and the following two paragraphs appear in
// all copies. 
//
// IN NO EVENT SHALL THE UNIVERSITY OF CALIFORNIA BE LIABLE TO ANY PARTY FOR
// DIRECT, INDIRECT, SPECIAL, INCIDENTAL, OR CONSEQUENTIAL DAMAGES, INCLUDING
// LOST PROFITS, ARISING OUT OF THE USE OF THIS SOFTWARE AND ITS DOCUMENTATION,
// EVEN IF THE UNIVERSITY OF CALIFORNIA HAS BEEN ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE. 
//
// THE UNIVERSITY OF CALIFORNIA SPECIFICALLY DISCLAIMS ANY WARRANTIES,
// INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY
// AND FITNESS FOR A PARTICULAR PURPOSE. THE SOFTWARE PROVIDED HEREUNDER IS ON
// AN "AS IS" BASIS, AND THE UNIVERSITY OF CALIFORNIA HAS NO OBLIGATIONS TO
// PROVIDE MAINTENANCE, SUPPORT, UPDATES, ENHANCEMENTS, OR MODIFICATIONS. 
//
//////////////////////////////////////////////////////////////////////////////
//
// BRASS source file
//
// SCORE TDF compiler:  Verilog wrapper for Read-Write segment
// $Revision: 1.1 $
//
//////////////////////////////////////////////////////////////////////////////


#ifndef _TDF_SEG_SEQCYCLICR_
#define _TDF_SEG_SEQCYCLICR_


const char* SEG_seq_cyclic_r = "\n\
// SEG_seq_cyclic_r.v\n\
//\n\
//  - A read-only segment mapped to a BlockRAM\n\
//\n\
//  - Nachiket Kapre, amended by Abid Rafique  23/Oct/11\n\
\n\
\n\
`ifdef  SEG_seq_cyclic_r\n\
`else\n\
`define SEG_seq_cyclic_r\n\
\n\
\n\
module SEG_seq_cyclic_r (clock, reset, dataR_d, dataR_e, dataR_v, dataR_b);\n\
\n\
   parameter nelems =  0;    // - greatest #items in memory (maybe unused) \n\
   parameter awidth = 16;    // - width of arrr (addr_d)\n\
   parameter dwidth = 16;    // - width of data (dataR_d, dataW_d)\n\
\n\
   input     clock;\n\
   input     reset;\n\
   \n\
   output [dwidth-1:0] dataR_d;\n\
   output dataR_e;\n\
   output dataR_v;\n\
   input  dataR_b;\n\
\n\
   wire state;\n\
   wire [1:0] statecase;\n\
   wire flag_steady_0;\n\
   wire flag_steady_1;\n\
\n\
   SEG_seq_cyclic_r_fsm fsm (clock, reset, dataR_e, dataR_v, dataR_b, state, statecase, flag_steady_0, flag_steady_1);\n\
   SEG_seq_cyclic_r_dp #(.nelems(nelems),.awidth(awidth),.dwidth(dwidth)) dp (clock, reset, dataR_d, state, statecase, flag_steady_0, flag_steady_1);\n\
\n\
\n\
endmodule // SEG_seq_cyclic_r\n\
\n\
\n\
`endif	// `ifdef  SEG_seq_cyclic_r\n\
";


#endif	// #ifndef _TDF_SEG_SEQR_
