
////TODO: When compiler bug SI-5604 is fixed in 2.10, change object Constants to
////      package object rocket and remove import Constants._'s from other files
package object sodorCore extends ScalarOpConstants with sodorCore.common.RISCVConstants with sodorCore.common.MemoryOpConstants
  with sodorCore.common.PrivilegedConstants

