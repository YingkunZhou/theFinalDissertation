//TODO: When compiler bug SI-5604 is fixed in 2.10, change object Constants to
//      package object rocket and remove import Constants._'s from other files
package object rv32_3stage extends ProcConstants
  with ScalarOpConstants
  with common.RISCVConstants
  with common.MemoryOpConstants
  with common.PrivilegedConstants

