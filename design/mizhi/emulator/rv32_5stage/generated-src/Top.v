module CtlPath( // @[:@3.2]
  input         clock, // @[:@4.4]
  input         reset, // @[:@5.4]
  input         io_dmem_resp_valid, // @[:@6.4]
  input  [31:0] io_dat_dec_inst, // @[:@6.4]
  input         io_dat_exe_br_eq, // @[:@6.4]
  input         io_dat_exe_br_lt, // @[:@6.4]
  input         io_dat_exe_br_ltu, // @[:@6.4]
  input  [3:0]  io_dat_exe_br_type, // @[:@6.4]
  input         io_dat_mem_ctrl_dmem_val, // @[:@6.4]
  input         io_dat_csr_eret, // @[:@6.4]
  output        io_ctl_dec_stall, // @[:@6.4]
  output        io_ctl_full_stall, // @[:@6.4]
  output [1:0]  io_ctl_exe_pc_sel, // @[:@6.4]
  output [3:0]  io_ctl_br_type, // @[:@6.4]
  output        io_ctl_if_kill, // @[:@6.4]
  output        io_ctl_dec_kill, // @[:@6.4]
  output [1:0]  io_ctl_op1_sel, // @[:@6.4]
  output [2:0]  io_ctl_op2_sel, // @[:@6.4]
  output [3:0]  io_ctl_alu_fun, // @[:@6.4]
  output [1:0]  io_ctl_wb_sel, // @[:@6.4]
  output        io_ctl_rf_wen, // @[:@6.4]
  output        io_ctl_mem_val, // @[:@6.4]
  output [1:0]  io_ctl_mem_fcn, // @[:@6.4]
  output [2:0]  io_ctl_mem_typ, // @[:@6.4]
  output [2:0]  io_ctl_csr_cmd, // @[:@6.4]
  output        io_ctl_fencei, // @[:@6.4]
  output        io_ctl_pipeline_kill, // @[:@6.4]
  output        io_ctl_mem_exception // @[:@6.4]
);
  wire [31:0] _T_232; // @[Lookup.scala 9:38:@50.4]
  wire  _T_233; // @[Lookup.scala 9:38:@51.4]
  wire  _T_237; // @[Lookup.scala 9:38:@53.4]
  wire  _T_241; // @[Lookup.scala 9:38:@55.4]
  wire  _T_245; // @[Lookup.scala 9:38:@57.4]
  wire  _T_249; // @[Lookup.scala 9:38:@59.4]
  wire  _T_253; // @[Lookup.scala 9:38:@61.4]
  wire  _T_257; // @[Lookup.scala 9:38:@63.4]
  wire  _T_261; // @[Lookup.scala 9:38:@65.4]
  wire [31:0] _T_264; // @[Lookup.scala 9:38:@66.4]
  wire  _T_265; // @[Lookup.scala 9:38:@67.4]
  wire  _T_269; // @[Lookup.scala 9:38:@69.4]
  wire  _T_273; // @[Lookup.scala 9:38:@71.4]
  wire  _T_277; // @[Lookup.scala 9:38:@73.4]
  wire  _T_281; // @[Lookup.scala 9:38:@75.4]
  wire  _T_285; // @[Lookup.scala 9:38:@77.4]
  wire  _T_289; // @[Lookup.scala 9:38:@79.4]
  wire  _T_293; // @[Lookup.scala 9:38:@81.4]
  wire [31:0] _T_296; // @[Lookup.scala 9:38:@82.4]
  wire  _T_297; // @[Lookup.scala 9:38:@83.4]
  wire  _T_301; // @[Lookup.scala 9:38:@85.4]
  wire  _T_305; // @[Lookup.scala 9:38:@87.4]
  wire [31:0] _T_308; // @[Lookup.scala 9:38:@88.4]
  wire  _T_309; // @[Lookup.scala 9:38:@89.4]
  wire  _T_313; // @[Lookup.scala 9:38:@91.4]
  wire  _T_317; // @[Lookup.scala 9:38:@93.4]
  wire  _T_321; // @[Lookup.scala 9:38:@95.4]
  wire  _T_325; // @[Lookup.scala 9:38:@97.4]
  wire  _T_329; // @[Lookup.scala 9:38:@99.4]
  wire  _T_333; // @[Lookup.scala 9:38:@101.4]
  wire  _T_337; // @[Lookup.scala 9:38:@103.4]
  wire  _T_341; // @[Lookup.scala 9:38:@105.4]
  wire  _T_345; // @[Lookup.scala 9:38:@107.4]
  wire  _T_349; // @[Lookup.scala 9:38:@109.4]
  wire  _T_353; // @[Lookup.scala 9:38:@111.4]
  wire  _T_357; // @[Lookup.scala 9:38:@113.4]
  wire  _T_361; // @[Lookup.scala 9:38:@115.4]
  wire  _T_365; // @[Lookup.scala 9:38:@117.4]
  wire  _T_369; // @[Lookup.scala 9:38:@119.4]
  wire  _T_373; // @[Lookup.scala 9:38:@121.4]
  wire  _T_377; // @[Lookup.scala 9:38:@123.4]
  wire  _T_381; // @[Lookup.scala 9:38:@125.4]
  wire  _T_385; // @[Lookup.scala 9:38:@127.4]
  wire  _T_389; // @[Lookup.scala 9:38:@129.4]
  wire  _T_393; // @[Lookup.scala 9:38:@131.4]
  wire  _T_397; // @[Lookup.scala 9:38:@133.4]
  wire  _T_401; // @[Lookup.scala 9:38:@135.4]
  wire  _T_405; // @[Lookup.scala 9:38:@137.4]
  wire  _T_409; // @[Lookup.scala 9:38:@139.4]
  wire  _T_413; // @[Lookup.scala 9:38:@141.4]
  wire  _T_417; // @[Lookup.scala 9:38:@143.4]
  wire  _T_421; // @[Lookup.scala 9:38:@145.4]
  wire  _T_425; // @[Lookup.scala 9:38:@147.4]
  wire  _T_429; // @[Lookup.scala 9:38:@149.4]
  wire  _T_431; // @[Lookup.scala 11:37:@151.4]
  wire  _T_432; // @[Lookup.scala 11:37:@152.4]
  wire  _T_433; // @[Lookup.scala 11:37:@153.4]
  wire  _T_434; // @[Lookup.scala 11:37:@154.4]
  wire  _T_435; // @[Lookup.scala 11:37:@155.4]
  wire  _T_436; // @[Lookup.scala 11:37:@156.4]
  wire  _T_437; // @[Lookup.scala 11:37:@157.4]
  wire  _T_438; // @[Lookup.scala 11:37:@158.4]
  wire  _T_439; // @[Lookup.scala 11:37:@159.4]
  wire  _T_440; // @[Lookup.scala 11:37:@160.4]
  wire  _T_441; // @[Lookup.scala 11:37:@161.4]
  wire  _T_442; // @[Lookup.scala 11:37:@162.4]
  wire  _T_443; // @[Lookup.scala 11:37:@163.4]
  wire  _T_444; // @[Lookup.scala 11:37:@164.4]
  wire  _T_445; // @[Lookup.scala 11:37:@165.4]
  wire  _T_446; // @[Lookup.scala 11:37:@166.4]
  wire  _T_447; // @[Lookup.scala 11:37:@167.4]
  wire  _T_448; // @[Lookup.scala 11:37:@168.4]
  wire  _T_449; // @[Lookup.scala 11:37:@169.4]
  wire  _T_450; // @[Lookup.scala 11:37:@170.4]
  wire  _T_451; // @[Lookup.scala 11:37:@171.4]
  wire  _T_452; // @[Lookup.scala 11:37:@172.4]
  wire  _T_453; // @[Lookup.scala 11:37:@173.4]
  wire  _T_454; // @[Lookup.scala 11:37:@174.4]
  wire  _T_455; // @[Lookup.scala 11:37:@175.4]
  wire  _T_456; // @[Lookup.scala 11:37:@176.4]
  wire  _T_457; // @[Lookup.scala 11:37:@177.4]
  wire  _T_458; // @[Lookup.scala 11:37:@178.4]
  wire  _T_459; // @[Lookup.scala 11:37:@179.4]
  wire  _T_460; // @[Lookup.scala 11:37:@180.4]
  wire  _T_461; // @[Lookup.scala 11:37:@181.4]
  wire  _T_462; // @[Lookup.scala 11:37:@182.4]
  wire  _T_463; // @[Lookup.scala 11:37:@183.4]
  wire  _T_464; // @[Lookup.scala 11:37:@184.4]
  wire  _T_465; // @[Lookup.scala 11:37:@185.4]
  wire  _T_466; // @[Lookup.scala 11:37:@186.4]
  wire  _T_467; // @[Lookup.scala 11:37:@187.4]
  wire  _T_468; // @[Lookup.scala 11:37:@188.4]
  wire  _T_469; // @[Lookup.scala 11:37:@189.4]
  wire  _T_470; // @[Lookup.scala 11:37:@190.4]
  wire  _T_471; // @[Lookup.scala 11:37:@191.4]
  wire  _T_472; // @[Lookup.scala 11:37:@192.4]
  wire  _T_473; // @[Lookup.scala 11:37:@193.4]
  wire  _T_474; // @[Lookup.scala 11:37:@194.4]
  wire  _T_475; // @[Lookup.scala 11:37:@195.4]
  wire  _T_476; // @[Lookup.scala 11:37:@196.4]
  wire  _T_477; // @[Lookup.scala 11:37:@197.4]
  wire  _T_478; // @[Lookup.scala 11:37:@198.4]
  wire  cs_val_inst; // @[Lookup.scala 11:37:@199.4]
  wire [3:0] _T_492; // @[Lookup.scala 11:37:@213.4]
  wire [3:0] _T_493; // @[Lookup.scala 11:37:@214.4]
  wire [3:0] _T_494; // @[Lookup.scala 11:37:@215.4]
  wire [3:0] _T_495; // @[Lookup.scala 11:37:@216.4]
  wire [3:0] _T_496; // @[Lookup.scala 11:37:@217.4]
  wire [3:0] _T_497; // @[Lookup.scala 11:37:@218.4]
  wire [3:0] _T_498; // @[Lookup.scala 11:37:@219.4]
  wire [3:0] _T_499; // @[Lookup.scala 11:37:@220.4]
  wire [3:0] _T_500; // @[Lookup.scala 11:37:@221.4]
  wire [3:0] _T_501; // @[Lookup.scala 11:37:@222.4]
  wire [3:0] _T_502; // @[Lookup.scala 11:37:@223.4]
  wire [3:0] _T_503; // @[Lookup.scala 11:37:@224.4]
  wire [3:0] _T_504; // @[Lookup.scala 11:37:@225.4]
  wire [3:0] _T_505; // @[Lookup.scala 11:37:@226.4]
  wire [3:0] _T_506; // @[Lookup.scala 11:37:@227.4]
  wire [3:0] _T_507; // @[Lookup.scala 11:37:@228.4]
  wire [3:0] _T_508; // @[Lookup.scala 11:37:@229.4]
  wire [3:0] _T_509; // @[Lookup.scala 11:37:@230.4]
  wire [3:0] _T_510; // @[Lookup.scala 11:37:@231.4]
  wire [3:0] _T_511; // @[Lookup.scala 11:37:@232.4]
  wire [3:0] _T_512; // @[Lookup.scala 11:37:@233.4]
  wire [3:0] _T_513; // @[Lookup.scala 11:37:@234.4]
  wire [3:0] _T_514; // @[Lookup.scala 11:37:@235.4]
  wire [3:0] _T_515; // @[Lookup.scala 11:37:@236.4]
  wire [3:0] _T_516; // @[Lookup.scala 11:37:@237.4]
  wire [3:0] _T_517; // @[Lookup.scala 11:37:@238.4]
  wire [3:0] _T_518; // @[Lookup.scala 11:37:@239.4]
  wire [3:0] _T_519; // @[Lookup.scala 11:37:@240.4]
  wire [3:0] _T_520; // @[Lookup.scala 11:37:@241.4]
  wire [3:0] _T_521; // @[Lookup.scala 11:37:@242.4]
  wire [3:0] _T_522; // @[Lookup.scala 11:37:@243.4]
  wire [3:0] _T_523; // @[Lookup.scala 11:37:@244.4]
  wire [3:0] _T_524; // @[Lookup.scala 11:37:@245.4]
  wire [3:0] _T_525; // @[Lookup.scala 11:37:@246.4]
  wire [3:0] _T_526; // @[Lookup.scala 11:37:@247.4]
  wire [3:0] _T_527; // @[Lookup.scala 11:37:@248.4]
  wire [1:0] _T_535; // @[Lookup.scala 11:37:@257.4]
  wire [1:0] _T_536; // @[Lookup.scala 11:37:@258.4]
  wire [1:0] _T_537; // @[Lookup.scala 11:37:@259.4]
  wire [1:0] _T_538; // @[Lookup.scala 11:37:@260.4]
  wire [1:0] _T_539; // @[Lookup.scala 11:37:@261.4]
  wire [1:0] _T_540; // @[Lookup.scala 11:37:@262.4]
  wire [1:0] _T_541; // @[Lookup.scala 11:37:@263.4]
  wire [1:0] _T_542; // @[Lookup.scala 11:37:@264.4]
  wire [1:0] _T_543; // @[Lookup.scala 11:37:@265.4]
  wire [1:0] _T_544; // @[Lookup.scala 11:37:@266.4]
  wire [1:0] _T_545; // @[Lookup.scala 11:37:@267.4]
  wire [1:0] _T_546; // @[Lookup.scala 11:37:@268.4]
  wire [1:0] _T_547; // @[Lookup.scala 11:37:@269.4]
  wire [1:0] _T_548; // @[Lookup.scala 11:37:@270.4]
  wire [1:0] _T_549; // @[Lookup.scala 11:37:@271.4]
  wire [1:0] _T_550; // @[Lookup.scala 11:37:@272.4]
  wire [1:0] _T_551; // @[Lookup.scala 11:37:@273.4]
  wire [1:0] _T_552; // @[Lookup.scala 11:37:@274.4]
  wire [1:0] _T_553; // @[Lookup.scala 11:37:@275.4]
  wire [1:0] _T_554; // @[Lookup.scala 11:37:@276.4]
  wire [1:0] _T_555; // @[Lookup.scala 11:37:@277.4]
  wire [1:0] _T_556; // @[Lookup.scala 11:37:@278.4]
  wire [1:0] _T_557; // @[Lookup.scala 11:37:@279.4]
  wire [1:0] _T_558; // @[Lookup.scala 11:37:@280.4]
  wire [1:0] _T_559; // @[Lookup.scala 11:37:@281.4]
  wire [1:0] _T_560; // @[Lookup.scala 11:37:@282.4]
  wire [1:0] _T_561; // @[Lookup.scala 11:37:@283.4]
  wire [1:0] _T_562; // @[Lookup.scala 11:37:@284.4]
  wire [1:0] _T_563; // @[Lookup.scala 11:37:@285.4]
  wire [1:0] _T_564; // @[Lookup.scala 11:37:@286.4]
  wire [1:0] _T_565; // @[Lookup.scala 11:37:@287.4]
  wire [1:0] _T_566; // @[Lookup.scala 11:37:@288.4]
  wire [1:0] _T_567; // @[Lookup.scala 11:37:@289.4]
  wire [1:0] _T_568; // @[Lookup.scala 11:37:@290.4]
  wire [1:0] _T_569; // @[Lookup.scala 11:37:@291.4]
  wire [1:0] _T_570; // @[Lookup.scala 11:37:@292.4]
  wire [1:0] _T_571; // @[Lookup.scala 11:37:@293.4]
  wire [1:0] _T_572; // @[Lookup.scala 11:37:@294.4]
  wire [1:0] _T_573; // @[Lookup.scala 11:37:@295.4]
  wire [1:0] _T_574; // @[Lookup.scala 11:37:@296.4]
  wire [1:0] _T_575; // @[Lookup.scala 11:37:@297.4]
  wire [1:0] _T_576; // @[Lookup.scala 11:37:@298.4]
  wire [2:0] _T_590; // @[Lookup.scala 11:37:@313.4]
  wire [2:0] _T_591; // @[Lookup.scala 11:37:@314.4]
  wire [2:0] _T_592; // @[Lookup.scala 11:37:@315.4]
  wire [2:0] _T_593; // @[Lookup.scala 11:37:@316.4]
  wire [2:0] _T_594; // @[Lookup.scala 11:37:@317.4]
  wire [2:0] _T_595; // @[Lookup.scala 11:37:@318.4]
  wire [2:0] _T_596; // @[Lookup.scala 11:37:@319.4]
  wire [2:0] _T_597; // @[Lookup.scala 11:37:@320.4]
  wire [2:0] _T_598; // @[Lookup.scala 11:37:@321.4]
  wire [2:0] _T_599; // @[Lookup.scala 11:37:@322.4]
  wire [2:0] _T_600; // @[Lookup.scala 11:37:@323.4]
  wire [2:0] _T_601; // @[Lookup.scala 11:37:@324.4]
  wire [2:0] _T_602; // @[Lookup.scala 11:37:@325.4]
  wire [2:0] _T_603; // @[Lookup.scala 11:37:@326.4]
  wire [2:0] _T_604; // @[Lookup.scala 11:37:@327.4]
  wire [2:0] _T_605; // @[Lookup.scala 11:37:@328.4]
  wire [2:0] _T_606; // @[Lookup.scala 11:37:@329.4]
  wire [2:0] _T_607; // @[Lookup.scala 11:37:@330.4]
  wire [2:0] _T_608; // @[Lookup.scala 11:37:@331.4]
  wire [2:0] _T_609; // @[Lookup.scala 11:37:@332.4]
  wire [2:0] _T_610; // @[Lookup.scala 11:37:@333.4]
  wire [2:0] _T_611; // @[Lookup.scala 11:37:@334.4]
  wire [2:0] _T_612; // @[Lookup.scala 11:37:@335.4]
  wire [2:0] _T_613; // @[Lookup.scala 11:37:@336.4]
  wire [2:0] _T_614; // @[Lookup.scala 11:37:@337.4]
  wire [2:0] _T_615; // @[Lookup.scala 11:37:@338.4]
  wire [2:0] _T_616; // @[Lookup.scala 11:37:@339.4]
  wire [2:0] _T_617; // @[Lookup.scala 11:37:@340.4]
  wire [2:0] _T_618; // @[Lookup.scala 11:37:@341.4]
  wire [2:0] _T_619; // @[Lookup.scala 11:37:@342.4]
  wire [2:0] _T_620; // @[Lookup.scala 11:37:@343.4]
  wire [2:0] _T_621; // @[Lookup.scala 11:37:@344.4]
  wire [2:0] _T_622; // @[Lookup.scala 11:37:@345.4]
  wire [2:0] _T_623; // @[Lookup.scala 11:37:@346.4]
  wire [2:0] _T_624; // @[Lookup.scala 11:37:@347.4]
  wire [2:0] _T_625; // @[Lookup.scala 11:37:@348.4]
  wire  _T_634; // @[Lookup.scala 11:37:@358.4]
  wire  _T_635; // @[Lookup.scala 11:37:@359.4]
  wire  _T_636; // @[Lookup.scala 11:37:@360.4]
  wire  _T_637; // @[Lookup.scala 11:37:@361.4]
  wire  _T_638; // @[Lookup.scala 11:37:@362.4]
  wire  _T_639; // @[Lookup.scala 11:37:@363.4]
  wire  _T_640; // @[Lookup.scala 11:37:@364.4]
  wire  _T_641; // @[Lookup.scala 11:37:@365.4]
  wire  _T_642; // @[Lookup.scala 11:37:@366.4]
  wire  _T_643; // @[Lookup.scala 11:37:@367.4]
  wire  _T_644; // @[Lookup.scala 11:37:@368.4]
  wire  _T_645; // @[Lookup.scala 11:37:@369.4]
  wire  _T_646; // @[Lookup.scala 11:37:@370.4]
  wire  _T_647; // @[Lookup.scala 11:37:@371.4]
  wire  _T_648; // @[Lookup.scala 11:37:@372.4]
  wire  _T_649; // @[Lookup.scala 11:37:@373.4]
  wire  _T_650; // @[Lookup.scala 11:37:@374.4]
  wire  _T_651; // @[Lookup.scala 11:37:@375.4]
  wire  _T_652; // @[Lookup.scala 11:37:@376.4]
  wire  _T_653; // @[Lookup.scala 11:37:@377.4]
  wire  _T_654; // @[Lookup.scala 11:37:@378.4]
  wire  _T_655; // @[Lookup.scala 11:37:@379.4]
  wire  _T_656; // @[Lookup.scala 11:37:@380.4]
  wire  _T_657; // @[Lookup.scala 11:37:@381.4]
  wire  _T_658; // @[Lookup.scala 11:37:@382.4]
  wire  _T_659; // @[Lookup.scala 11:37:@383.4]
  wire  _T_660; // @[Lookup.scala 11:37:@384.4]
  wire  _T_661; // @[Lookup.scala 11:37:@385.4]
  wire  _T_662; // @[Lookup.scala 11:37:@386.4]
  wire  _T_663; // @[Lookup.scala 11:37:@387.4]
  wire  _T_664; // @[Lookup.scala 11:37:@388.4]
  wire  _T_665; // @[Lookup.scala 11:37:@389.4]
  wire  _T_666; // @[Lookup.scala 11:37:@390.4]
  wire  _T_667; // @[Lookup.scala 11:37:@391.4]
  wire  _T_668; // @[Lookup.scala 11:37:@392.4]
  wire  _T_669; // @[Lookup.scala 11:37:@393.4]
  wire  _T_670; // @[Lookup.scala 11:37:@394.4]
  wire  _T_671; // @[Lookup.scala 11:37:@395.4]
  wire  _T_672; // @[Lookup.scala 11:37:@396.4]
  wire  _T_673; // @[Lookup.scala 11:37:@397.4]
  wire  _T_674; // @[Lookup.scala 11:37:@398.4]
  wire  cs_rs1_oen; // @[Lookup.scala 11:37:@399.4]
  wire  _T_694; // @[Lookup.scala 11:37:@419.4]
  wire  _T_695; // @[Lookup.scala 11:37:@420.4]
  wire  _T_696; // @[Lookup.scala 11:37:@421.4]
  wire  _T_697; // @[Lookup.scala 11:37:@422.4]
  wire  _T_698; // @[Lookup.scala 11:37:@423.4]
  wire  _T_699; // @[Lookup.scala 11:37:@424.4]
  wire  _T_700; // @[Lookup.scala 11:37:@425.4]
  wire  _T_701; // @[Lookup.scala 11:37:@426.4]
  wire  _T_702; // @[Lookup.scala 11:37:@427.4]
  wire  _T_703; // @[Lookup.scala 11:37:@428.4]
  wire  _T_704; // @[Lookup.scala 11:37:@429.4]
  wire  _T_705; // @[Lookup.scala 11:37:@430.4]
  wire  _T_706; // @[Lookup.scala 11:37:@431.4]
  wire  _T_707; // @[Lookup.scala 11:37:@432.4]
  wire  _T_708; // @[Lookup.scala 11:37:@433.4]
  wire  _T_709; // @[Lookup.scala 11:37:@434.4]
  wire  _T_710; // @[Lookup.scala 11:37:@435.4]
  wire  _T_711; // @[Lookup.scala 11:37:@436.4]
  wire  _T_712; // @[Lookup.scala 11:37:@437.4]
  wire  _T_713; // @[Lookup.scala 11:37:@438.4]
  wire  _T_714; // @[Lookup.scala 11:37:@439.4]
  wire  _T_715; // @[Lookup.scala 11:37:@440.4]
  wire  _T_716; // @[Lookup.scala 11:37:@441.4]
  wire  _T_717; // @[Lookup.scala 11:37:@442.4]
  wire  _T_718; // @[Lookup.scala 11:37:@443.4]
  wire  _T_719; // @[Lookup.scala 11:37:@444.4]
  wire  _T_720; // @[Lookup.scala 11:37:@445.4]
  wire  _T_721; // @[Lookup.scala 11:37:@446.4]
  wire  _T_722; // @[Lookup.scala 11:37:@447.4]
  wire  _T_723; // @[Lookup.scala 11:37:@448.4]
  wire  cs_rs2_oen; // @[Lookup.scala 11:37:@449.4]
  wire [3:0] _T_731; // @[Lookup.scala 11:37:@457.4]
  wire [3:0] _T_732; // @[Lookup.scala 11:37:@458.4]
  wire [3:0] _T_733; // @[Lookup.scala 11:37:@459.4]
  wire [3:0] _T_734; // @[Lookup.scala 11:37:@460.4]
  wire [3:0] _T_735; // @[Lookup.scala 11:37:@461.4]
  wire [3:0] _T_736; // @[Lookup.scala 11:37:@462.4]
  wire [3:0] _T_737; // @[Lookup.scala 11:37:@463.4]
  wire [3:0] _T_738; // @[Lookup.scala 11:37:@464.4]
  wire [3:0] _T_739; // @[Lookup.scala 11:37:@465.4]
  wire [3:0] _T_740; // @[Lookup.scala 11:37:@466.4]
  wire [3:0] _T_741; // @[Lookup.scala 11:37:@467.4]
  wire [3:0] _T_742; // @[Lookup.scala 11:37:@468.4]
  wire [3:0] _T_743; // @[Lookup.scala 11:37:@469.4]
  wire [3:0] _T_744; // @[Lookup.scala 11:37:@470.4]
  wire [3:0] _T_745; // @[Lookup.scala 11:37:@471.4]
  wire [3:0] _T_746; // @[Lookup.scala 11:37:@472.4]
  wire [3:0] _T_747; // @[Lookup.scala 11:37:@473.4]
  wire [3:0] _T_748; // @[Lookup.scala 11:37:@474.4]
  wire [3:0] _T_749; // @[Lookup.scala 11:37:@475.4]
  wire [3:0] _T_750; // @[Lookup.scala 11:37:@476.4]
  wire [3:0] _T_751; // @[Lookup.scala 11:37:@477.4]
  wire [3:0] _T_752; // @[Lookup.scala 11:37:@478.4]
  wire [3:0] _T_753; // @[Lookup.scala 11:37:@479.4]
  wire [3:0] _T_754; // @[Lookup.scala 11:37:@480.4]
  wire [3:0] _T_755; // @[Lookup.scala 11:37:@481.4]
  wire [3:0] _T_756; // @[Lookup.scala 11:37:@482.4]
  wire [3:0] _T_757; // @[Lookup.scala 11:37:@483.4]
  wire [3:0] _T_758; // @[Lookup.scala 11:37:@484.4]
  wire [3:0] _T_759; // @[Lookup.scala 11:37:@485.4]
  wire [3:0] _T_760; // @[Lookup.scala 11:37:@486.4]
  wire [3:0] _T_761; // @[Lookup.scala 11:37:@487.4]
  wire [3:0] _T_762; // @[Lookup.scala 11:37:@488.4]
  wire [3:0] _T_763; // @[Lookup.scala 11:37:@489.4]
  wire [3:0] _T_764; // @[Lookup.scala 11:37:@490.4]
  wire [3:0] _T_765; // @[Lookup.scala 11:37:@491.4]
  wire [3:0] _T_766; // @[Lookup.scala 11:37:@492.4]
  wire [3:0] _T_767; // @[Lookup.scala 11:37:@493.4]
  wire [3:0] _T_768; // @[Lookup.scala 11:37:@494.4]
  wire [3:0] _T_769; // @[Lookup.scala 11:37:@495.4]
  wire [3:0] _T_770; // @[Lookup.scala 11:37:@496.4]
  wire [3:0] _T_771; // @[Lookup.scala 11:37:@497.4]
  wire [3:0] _T_772; // @[Lookup.scala 11:37:@498.4]
  wire [1:0] _T_780; // @[Lookup.scala 11:37:@507.4]
  wire [1:0] _T_781; // @[Lookup.scala 11:37:@508.4]
  wire [1:0] _T_782; // @[Lookup.scala 11:37:@509.4]
  wire [1:0] _T_783; // @[Lookup.scala 11:37:@510.4]
  wire [1:0] _T_784; // @[Lookup.scala 11:37:@511.4]
  wire [1:0] _T_785; // @[Lookup.scala 11:37:@512.4]
  wire [1:0] _T_786; // @[Lookup.scala 11:37:@513.4]
  wire [1:0] _T_787; // @[Lookup.scala 11:37:@514.4]
  wire [1:0] _T_788; // @[Lookup.scala 11:37:@515.4]
  wire [1:0] _T_789; // @[Lookup.scala 11:37:@516.4]
  wire [1:0] _T_790; // @[Lookup.scala 11:37:@517.4]
  wire [1:0] _T_791; // @[Lookup.scala 11:37:@518.4]
  wire [1:0] _T_792; // @[Lookup.scala 11:37:@519.4]
  wire [1:0] _T_793; // @[Lookup.scala 11:37:@520.4]
  wire [1:0] _T_794; // @[Lookup.scala 11:37:@521.4]
  wire [1:0] _T_795; // @[Lookup.scala 11:37:@522.4]
  wire [1:0] _T_796; // @[Lookup.scala 11:37:@523.4]
  wire [1:0] _T_797; // @[Lookup.scala 11:37:@524.4]
  wire [1:0] _T_798; // @[Lookup.scala 11:37:@525.4]
  wire [1:0] _T_799; // @[Lookup.scala 11:37:@526.4]
  wire [1:0] _T_800; // @[Lookup.scala 11:37:@527.4]
  wire [1:0] _T_801; // @[Lookup.scala 11:37:@528.4]
  wire [1:0] _T_802; // @[Lookup.scala 11:37:@529.4]
  wire [1:0] _T_803; // @[Lookup.scala 11:37:@530.4]
  wire [1:0] _T_804; // @[Lookup.scala 11:37:@531.4]
  wire [1:0] _T_805; // @[Lookup.scala 11:37:@532.4]
  wire [1:0] _T_806; // @[Lookup.scala 11:37:@533.4]
  wire [1:0] _T_807; // @[Lookup.scala 11:37:@534.4]
  wire [1:0] _T_808; // @[Lookup.scala 11:37:@535.4]
  wire [1:0] _T_809; // @[Lookup.scala 11:37:@536.4]
  wire [1:0] _T_810; // @[Lookup.scala 11:37:@537.4]
  wire [1:0] _T_811; // @[Lookup.scala 11:37:@538.4]
  wire [1:0] _T_812; // @[Lookup.scala 11:37:@539.4]
  wire [1:0] _T_813; // @[Lookup.scala 11:37:@540.4]
  wire [1:0] _T_814; // @[Lookup.scala 11:37:@541.4]
  wire [1:0] _T_815; // @[Lookup.scala 11:37:@542.4]
  wire [1:0] _T_816; // @[Lookup.scala 11:37:@543.4]
  wire [1:0] _T_817; // @[Lookup.scala 11:37:@544.4]
  wire [1:0] _T_818; // @[Lookup.scala 11:37:@545.4]
  wire [1:0] _T_819; // @[Lookup.scala 11:37:@546.4]
  wire [1:0] _T_820; // @[Lookup.scala 11:37:@547.4]
  wire [1:0] _T_821; // @[Lookup.scala 11:37:@548.4]
  wire  _T_835; // @[Lookup.scala 11:37:@563.4]
  wire  _T_836; // @[Lookup.scala 11:37:@564.4]
  wire  _T_837; // @[Lookup.scala 11:37:@565.4]
  wire  _T_838; // @[Lookup.scala 11:37:@566.4]
  wire  _T_839; // @[Lookup.scala 11:37:@567.4]
  wire  _T_840; // @[Lookup.scala 11:37:@568.4]
  wire  _T_841; // @[Lookup.scala 11:37:@569.4]
  wire  _T_842; // @[Lookup.scala 11:37:@570.4]
  wire  _T_843; // @[Lookup.scala 11:37:@571.4]
  wire  _T_844; // @[Lookup.scala 11:37:@572.4]
  wire  _T_845; // @[Lookup.scala 11:37:@573.4]
  wire  _T_846; // @[Lookup.scala 11:37:@574.4]
  wire  _T_847; // @[Lookup.scala 11:37:@575.4]
  wire  _T_848; // @[Lookup.scala 11:37:@576.4]
  wire  _T_849; // @[Lookup.scala 11:37:@577.4]
  wire  _T_850; // @[Lookup.scala 11:37:@578.4]
  wire  _T_851; // @[Lookup.scala 11:37:@579.4]
  wire  _T_852; // @[Lookup.scala 11:37:@580.4]
  wire  _T_853; // @[Lookup.scala 11:37:@581.4]
  wire  _T_854; // @[Lookup.scala 11:37:@582.4]
  wire  _T_855; // @[Lookup.scala 11:37:@583.4]
  wire  _T_856; // @[Lookup.scala 11:37:@584.4]
  wire  _T_857; // @[Lookup.scala 11:37:@585.4]
  wire  _T_858; // @[Lookup.scala 11:37:@586.4]
  wire  _T_859; // @[Lookup.scala 11:37:@587.4]
  wire  _T_860; // @[Lookup.scala 11:37:@588.4]
  wire  _T_861; // @[Lookup.scala 11:37:@589.4]
  wire  _T_862; // @[Lookup.scala 11:37:@590.4]
  wire  _T_863; // @[Lookup.scala 11:37:@591.4]
  wire  _T_864; // @[Lookup.scala 11:37:@592.4]
  wire  _T_865; // @[Lookup.scala 11:37:@593.4]
  wire  _T_866; // @[Lookup.scala 11:37:@594.4]
  wire  _T_867; // @[Lookup.scala 11:37:@595.4]
  wire  _T_868; // @[Lookup.scala 11:37:@596.4]
  wire  _T_869; // @[Lookup.scala 11:37:@597.4]
  wire  _T_870; // @[Lookup.scala 11:37:@598.4]
  wire  _T_872; // @[Lookup.scala 11:37:@601.4]
  wire  _T_873; // @[Lookup.scala 11:37:@602.4]
  wire  _T_874; // @[Lookup.scala 11:37:@603.4]
  wire  _T_875; // @[Lookup.scala 11:37:@604.4]
  wire  _T_876; // @[Lookup.scala 11:37:@605.4]
  wire  _T_877; // @[Lookup.scala 11:37:@606.4]
  wire  _T_878; // @[Lookup.scala 11:37:@607.4]
  wire  _T_879; // @[Lookup.scala 11:37:@608.4]
  wire  _T_880; // @[Lookup.scala 11:37:@609.4]
  wire  _T_881; // @[Lookup.scala 11:37:@610.4]
  wire  _T_882; // @[Lookup.scala 11:37:@611.4]
  wire  _T_883; // @[Lookup.scala 11:37:@612.4]
  wire  _T_884; // @[Lookup.scala 11:37:@613.4]
  wire  _T_885; // @[Lookup.scala 11:37:@614.4]
  wire  _T_886; // @[Lookup.scala 11:37:@615.4]
  wire  _T_887; // @[Lookup.scala 11:37:@616.4]
  wire  _T_888; // @[Lookup.scala 11:37:@617.4]
  wire  _T_889; // @[Lookup.scala 11:37:@618.4]
  wire  _T_890; // @[Lookup.scala 11:37:@619.4]
  wire  _T_891; // @[Lookup.scala 11:37:@620.4]
  wire  _T_892; // @[Lookup.scala 11:37:@621.4]
  wire  _T_893; // @[Lookup.scala 11:37:@622.4]
  wire  _T_894; // @[Lookup.scala 11:37:@623.4]
  wire  _T_895; // @[Lookup.scala 11:37:@624.4]
  wire  _T_896; // @[Lookup.scala 11:37:@625.4]
  wire  _T_897; // @[Lookup.scala 11:37:@626.4]
  wire  _T_898; // @[Lookup.scala 11:37:@627.4]
  wire  _T_899; // @[Lookup.scala 11:37:@628.4]
  wire  _T_900; // @[Lookup.scala 11:37:@629.4]
  wire  _T_901; // @[Lookup.scala 11:37:@630.4]
  wire  _T_902; // @[Lookup.scala 11:37:@631.4]
  wire  _T_903; // @[Lookup.scala 11:37:@632.4]
  wire  _T_904; // @[Lookup.scala 11:37:@633.4]
  wire  _T_905; // @[Lookup.scala 11:37:@634.4]
  wire  _T_906; // @[Lookup.scala 11:37:@635.4]
  wire  _T_907; // @[Lookup.scala 11:37:@636.4]
  wire  _T_908; // @[Lookup.scala 11:37:@637.4]
  wire  _T_909; // @[Lookup.scala 11:37:@638.4]
  wire  _T_910; // @[Lookup.scala 11:37:@639.4]
  wire  _T_911; // @[Lookup.scala 11:37:@640.4]
  wire  _T_912; // @[Lookup.scala 11:37:@641.4]
  wire  _T_913; // @[Lookup.scala 11:37:@642.4]
  wire  _T_914; // @[Lookup.scala 11:37:@643.4]
  wire  _T_915; // @[Lookup.scala 11:37:@644.4]
  wire  _T_916; // @[Lookup.scala 11:37:@645.4]
  wire  _T_917; // @[Lookup.scala 11:37:@646.4]
  wire  _T_918; // @[Lookup.scala 11:37:@647.4]
  wire  _T_919; // @[Lookup.scala 11:37:@648.4]
  wire  cs0_3; // @[Lookup.scala 11:37:@649.4]
  wire  _T_963; // @[Lookup.scala 11:37:@693.4]
  wire  _T_964; // @[Lookup.scala 11:37:@694.4]
  wire  _T_965; // @[Lookup.scala 11:37:@695.4]
  wire  _T_966; // @[Lookup.scala 11:37:@696.4]
  wire  _T_967; // @[Lookup.scala 11:37:@697.4]
  wire  _T_968; // @[Lookup.scala 11:37:@698.4]
  wire  cs0_4; // @[Lookup.scala 11:37:@699.4]
  wire [2:0] _T_1011; // @[Lookup.scala 11:37:@742.4]
  wire [2:0] _T_1012; // @[Lookup.scala 11:37:@743.4]
  wire [2:0] _T_1013; // @[Lookup.scala 11:37:@744.4]
  wire [2:0] _T_1014; // @[Lookup.scala 11:37:@745.4]
  wire [2:0] _T_1015; // @[Lookup.scala 11:37:@746.4]
  wire [2:0] _T_1016; // @[Lookup.scala 11:37:@747.4]
  wire [2:0] _T_1017; // @[Lookup.scala 11:37:@748.4]
  wire [2:0] _T_1021; // @[Lookup.scala 11:37:@753.4]
  wire [2:0] _T_1022; // @[Lookup.scala 11:37:@754.4]
  wire [2:0] _T_1023; // @[Lookup.scala 11:37:@755.4]
  wire [2:0] _T_1024; // @[Lookup.scala 11:37:@756.4]
  wire [2:0] _T_1025; // @[Lookup.scala 11:37:@757.4]
  wire [2:0] _T_1026; // @[Lookup.scala 11:37:@758.4]
  wire [2:0] _T_1027; // @[Lookup.scala 11:37:@759.4]
  wire [2:0] _T_1028; // @[Lookup.scala 11:37:@760.4]
  wire [2:0] _T_1029; // @[Lookup.scala 11:37:@761.4]
  wire [2:0] _T_1030; // @[Lookup.scala 11:37:@762.4]
  wire [2:0] _T_1031; // @[Lookup.scala 11:37:@763.4]
  wire [2:0] _T_1032; // @[Lookup.scala 11:37:@764.4]
  wire [2:0] _T_1033; // @[Lookup.scala 11:37:@765.4]
  wire [2:0] _T_1034; // @[Lookup.scala 11:37:@766.4]
  wire [2:0] _T_1035; // @[Lookup.scala 11:37:@767.4]
  wire [2:0] _T_1036; // @[Lookup.scala 11:37:@768.4]
  wire [2:0] _T_1037; // @[Lookup.scala 11:37:@769.4]
  wire [2:0] _T_1038; // @[Lookup.scala 11:37:@770.4]
  wire [2:0] _T_1039; // @[Lookup.scala 11:37:@771.4]
  wire [2:0] _T_1040; // @[Lookup.scala 11:37:@772.4]
  wire [2:0] _T_1041; // @[Lookup.scala 11:37:@773.4]
  wire [2:0] _T_1042; // @[Lookup.scala 11:37:@774.4]
  wire [2:0] _T_1043; // @[Lookup.scala 11:37:@775.4]
  wire [2:0] _T_1044; // @[Lookup.scala 11:37:@776.4]
  wire [2:0] _T_1045; // @[Lookup.scala 11:37:@777.4]
  wire [2:0] _T_1046; // @[Lookup.scala 11:37:@778.4]
  wire [2:0] _T_1047; // @[Lookup.scala 11:37:@779.4]
  wire [2:0] _T_1048; // @[Lookup.scala 11:37:@780.4]
  wire [2:0] _T_1049; // @[Lookup.scala 11:37:@781.4]
  wire [2:0] _T_1050; // @[Lookup.scala 11:37:@782.4]
  wire [2:0] _T_1051; // @[Lookup.scala 11:37:@783.4]
  wire [2:0] _T_1052; // @[Lookup.scala 11:37:@784.4]
  wire [2:0] _T_1053; // @[Lookup.scala 11:37:@785.4]
  wire [2:0] _T_1054; // @[Lookup.scala 11:37:@786.4]
  wire [2:0] _T_1055; // @[Lookup.scala 11:37:@787.4]
  wire [2:0] _T_1056; // @[Lookup.scala 11:37:@788.4]
  wire [2:0] _T_1057; // @[Lookup.scala 11:37:@789.4]
  wire [2:0] _T_1058; // @[Lookup.scala 11:37:@790.4]
  wire [2:0] _T_1059; // @[Lookup.scala 11:37:@791.4]
  wire [2:0] _T_1060; // @[Lookup.scala 11:37:@792.4]
  wire [2:0] _T_1061; // @[Lookup.scala 11:37:@793.4]
  wire [2:0] _T_1062; // @[Lookup.scala 11:37:@794.4]
  wire [2:0] _T_1063; // @[Lookup.scala 11:37:@795.4]
  wire [2:0] _T_1064; // @[Lookup.scala 11:37:@796.4]
  wire [2:0] _T_1065; // @[Lookup.scala 11:37:@797.4]
  wire [2:0] _T_1066; // @[Lookup.scala 11:37:@798.4]
  wire [2:0] cs0_6; // @[Lookup.scala 11:37:@799.4]
  wire  _T_1069; // @[Lookup.scala 11:37:@802.4]
  wire  _T_1070; // @[Lookup.scala 11:37:@803.4]
  wire  _T_1071; // @[Lookup.scala 11:37:@804.4]
  wire  _T_1072; // @[Lookup.scala 11:37:@805.4]
  wire  _T_1073; // @[Lookup.scala 11:37:@806.4]
  wire  _T_1074; // @[Lookup.scala 11:37:@807.4]
  wire  _T_1075; // @[Lookup.scala 11:37:@808.4]
  wire  _T_1076; // @[Lookup.scala 11:37:@809.4]
  wire  _T_1077; // @[Lookup.scala 11:37:@810.4]
  wire  _T_1078; // @[Lookup.scala 11:37:@811.4]
  wire  _T_1079; // @[Lookup.scala 11:37:@812.4]
  wire  _T_1080; // @[Lookup.scala 11:37:@813.4]
  wire  _T_1081; // @[Lookup.scala 11:37:@814.4]
  wire  _T_1082; // @[Lookup.scala 11:37:@815.4]
  wire  _T_1083; // @[Lookup.scala 11:37:@816.4]
  wire  _T_1084; // @[Lookup.scala 11:37:@817.4]
  wire  _T_1085; // @[Lookup.scala 11:37:@818.4]
  wire  _T_1086; // @[Lookup.scala 11:37:@819.4]
  wire  _T_1087; // @[Lookup.scala 11:37:@820.4]
  wire  _T_1088; // @[Lookup.scala 11:37:@821.4]
  wire  _T_1089; // @[Lookup.scala 11:37:@822.4]
  wire  _T_1090; // @[Lookup.scala 11:37:@823.4]
  wire  _T_1091; // @[Lookup.scala 11:37:@824.4]
  wire  _T_1092; // @[Lookup.scala 11:37:@825.4]
  wire  _T_1093; // @[Lookup.scala 11:37:@826.4]
  wire  _T_1094; // @[Lookup.scala 11:37:@827.4]
  wire  _T_1095; // @[Lookup.scala 11:37:@828.4]
  wire  _T_1096; // @[Lookup.scala 11:37:@829.4]
  wire  _T_1097; // @[Lookup.scala 11:37:@830.4]
  wire  _T_1098; // @[Lookup.scala 11:37:@831.4]
  wire  _T_1099; // @[Lookup.scala 11:37:@832.4]
  wire  _T_1100; // @[Lookup.scala 11:37:@833.4]
  wire  _T_1101; // @[Lookup.scala 11:37:@834.4]
  wire  _T_1102; // @[Lookup.scala 11:37:@835.4]
  wire  _T_1103; // @[Lookup.scala 11:37:@836.4]
  wire  _T_1104; // @[Lookup.scala 11:37:@837.4]
  wire  _T_1105; // @[Lookup.scala 11:37:@838.4]
  wire  _T_1106; // @[Lookup.scala 11:37:@839.4]
  wire  _T_1107; // @[Lookup.scala 11:37:@840.4]
  wire  _T_1108; // @[Lookup.scala 11:37:@841.4]
  wire  _T_1109; // @[Lookup.scala 11:37:@842.4]
  wire  _T_1110; // @[Lookup.scala 11:37:@843.4]
  wire  _T_1111; // @[Lookup.scala 11:37:@844.4]
  wire  _T_1112; // @[Lookup.scala 11:37:@845.4]
  wire  _T_1113; // @[Lookup.scala 11:37:@846.4]
  wire  _T_1114; // @[Lookup.scala 11:37:@847.4]
  wire  _T_1115; // @[Lookup.scala 11:37:@848.4]
  wire  cs0_7; // @[Lookup.scala 11:37:@849.4]
  wire  _T_1116; // @[Cpath.scala 132:49:@850.4]
  wire  _T_1117; // @[Cpath.scala 133:49:@851.4]
  wire  _T_1119; // @[Cpath.scala 133:65:@852.4]
  wire [1:0] _T_1120; // @[Cpath.scala 133:64:@853.4]
  wire  _T_1121; // @[Cpath.scala 134:49:@854.4]
  wire [1:0] _T_1122; // @[Cpath.scala 134:64:@855.4]
  wire  _T_1123; // @[Cpath.scala 135:49:@856.4]
  wire  _T_1125; // @[Cpath.scala 135:65:@857.4]
  wire [1:0] _T_1126; // @[Cpath.scala 135:64:@858.4]
  wire  _T_1127; // @[Cpath.scala 136:49:@859.4]
  wire  _T_1129; // @[Cpath.scala 136:65:@860.4]
  wire [1:0] _T_1130; // @[Cpath.scala 136:64:@861.4]
  wire  _T_1131; // @[Cpath.scala 137:49:@862.4]
  wire [1:0] _T_1132; // @[Cpath.scala 137:64:@863.4]
  wire  _T_1133; // @[Cpath.scala 138:49:@864.4]
  wire [1:0] _T_1134; // @[Cpath.scala 138:64:@865.4]
  wire  _T_1135; // @[Cpath.scala 139:49:@866.4]
  wire  _T_1136; // @[Cpath.scala 140:49:@867.4]
  wire [1:0] _T_1137; // @[Cpath.scala 140:29:@868.4]
  wire [1:0] _T_1138; // @[Cpath.scala 139:29:@869.4]
  wire [1:0] _T_1139; // @[Cpath.scala 138:29:@870.4]
  wire [1:0] _T_1140; // @[Cpath.scala 137:29:@871.4]
  wire [1:0] _T_1141; // @[Cpath.scala 136:29:@872.4]
  wire [1:0] _T_1142; // @[Cpath.scala 135:29:@873.4]
  wire [1:0] _T_1143; // @[Cpath.scala 134:29:@874.4]
  wire [1:0] _T_1144; // @[Cpath.scala 133:29:@875.4]
  wire [1:0] _T_1145; // @[Cpath.scala 132:29:@876.4]
  wire [1:0] ctrl_exe_pc_sel; // @[Cpath.scala 131:29:@877.4]
  wire  _T_1146; // @[Cpath.scala 144:35:@878.4]
  wire  _T_1150; // @[Cpath.scala 144:68:@881.4]
  reg  _T_1152; // @[Cpath.scala 144:91:@882.4]
  reg [31:0] _RAND_0;
  wire  dec_exception; // @[Cpath.scala 151:25:@888.4]
  wire [4:0] dec_rs1_addr; // @[Cpath.scala 156:38:@891.4]
  wire [4:0] dec_rs2_addr; // @[Cpath.scala 157:38:@892.4]
  wire [4:0] dec_wbaddr; // @[Cpath.scala 158:38:@893.4]
  wire  dec_rs1_oen; // @[Cpath.scala 159:26:@894.4]
  wire  dec_rs2_oen; // @[Cpath.scala 160:26:@895.4]
  reg [4:0] exe_reg_wbaddr; // @[Cpath.scala 162:33:@896.4]
  reg [31:0] _RAND_1;
  reg  exe_reg_exception; // @[Cpath.scala 168:37:@902.4]
  reg [31:0] _RAND_2;
  reg  exe_reg_is_csr; // @[Cpath.scala 170:32:@903.4]
  reg [31:0] _RAND_3;
  reg  exe_inst_is_load; // @[Cpath.scala 205:34:@938.4]
  reg [31:0] _RAND_4;
  wire  _T_1198; // @[Cpath.scala 217:53:@945.4]
  wire  _T_1199; // @[Cpath.scala 217:34:@946.4]
  wire  _T_1201; // @[Cpath.scala 217:90:@947.4]
  wire  _T_1202; // @[Cpath.scala 217:71:@948.4]
  wire  _T_1203; // @[Cpath.scala 217:99:@949.4]
  wire  _T_1204; // @[Cpath.scala 218:53:@950.4]
  wire  _T_1205; // @[Cpath.scala 218:34:@951.4]
  wire  _T_1208; // @[Cpath.scala 218:71:@953.4]
  wire  _T_1209; // @[Cpath.scala 218:99:@954.4]
  wire  _T_1210; // @[Cpath.scala 217:115:@955.4]
  wire  stall; // @[Cpath.scala 218:115:@956.4]
  wire  _T_1174; // @[Cpath.scala 174:10:@905.4]
  wire  _T_1214; // @[Cpath.scala 225:53:@959.4]
  wire  _T_1216; // @[Cpath.scala 225:79:@960.4]
  wire  _T_1217; // @[Cpath.scala 225:76:@961.4]
  wire  full_stall; // @[Cpath.scala 225:41:@962.4]
  wire  _T_1176; // @[Cpath.scala 174:20:@906.4]
  wire  _T_1177; // @[Cpath.scala 174:17:@907.4]
  wire  _T_1182; // @[Cpath.scala 187:44:@918.8]
  wire  _T_1183; // @[Cpath.scala 187:68:@919.8]
  wire  _T_1184; // @[Cpath.scala 187:54:@920.8]
  wire [4:0] _GEN_0; // @[Cpath.scala 177:7:@909.6]
  wire  _GEN_2; // @[Cpath.scala 177:7:@909.6]
  wire  _GEN_3; // @[Cpath.scala 177:7:@909.6]
  wire  _T_1187; // @[Cpath.scala 191:21:@927.6]
  wire [4:0] _GEN_4; // @[Cpath.scala 192:4:@928.6]
  wire  _GEN_6; // @[Cpath.scala 192:4:@928.6]
  wire  _GEN_7; // @[Cpath.scala 192:4:@928.6]
  wire  _GEN_10; // @[Cpath.scala 175:4:@908.4]
  wire  _GEN_11; // @[Cpath.scala 175:4:@908.4]
  wire  _T_1196; // @[Cpath.scala 209:52:@941.6]
  wire  _T_1197; // @[Cpath.scala 209:37:@942.6]
  wire  _GEN_12; // @[Cpath.scala 208:4:@940.4]
  reg  _T_1222; // @[Cpath.scala 242:45:@976.4]
  reg [31:0] _RAND_5;
  reg  _T_1225; // @[Cpath.scala 244:35:@980.4]
  reg [31:0] _RAND_6;
  wire  _T_1226; // @[Cpath.scala 249:30:@984.4]
  wire  _T_1227; // @[Cpath.scala 249:54:@985.4]
  wire  _T_1228; // @[Cpath.scala 249:40:@986.4]
  wire  _T_1230; // @[Cpath.scala 249:77:@987.4]
  wire  csr_ren; // @[Cpath.scala 249:65:@988.4]
  assign _T_232 = io_dat_dec_inst & 32'h707f; // @[Lookup.scala 9:38:@50.4]
  assign _T_233 = 32'h2003 == _T_232; // @[Lookup.scala 9:38:@51.4]
  assign _T_237 = 32'h3 == _T_232; // @[Lookup.scala 9:38:@53.4]
  assign _T_241 = 32'h4003 == _T_232; // @[Lookup.scala 9:38:@55.4]
  assign _T_245 = 32'h1003 == _T_232; // @[Lookup.scala 9:38:@57.4]
  assign _T_249 = 32'h5003 == _T_232; // @[Lookup.scala 9:38:@59.4]
  assign _T_253 = 32'h2023 == _T_232; // @[Lookup.scala 9:38:@61.4]
  assign _T_257 = 32'h23 == _T_232; // @[Lookup.scala 9:38:@63.4]
  assign _T_261 = 32'h1023 == _T_232; // @[Lookup.scala 9:38:@65.4]
  assign _T_264 = io_dat_dec_inst & 32'h7f; // @[Lookup.scala 9:38:@66.4]
  assign _T_265 = 32'h17 == _T_264; // @[Lookup.scala 9:38:@67.4]
  assign _T_269 = 32'h37 == _T_264; // @[Lookup.scala 9:38:@69.4]
  assign _T_273 = 32'h13 == _T_232; // @[Lookup.scala 9:38:@71.4]
  assign _T_277 = 32'h7013 == _T_232; // @[Lookup.scala 9:38:@73.4]
  assign _T_281 = 32'h6013 == _T_232; // @[Lookup.scala 9:38:@75.4]
  assign _T_285 = 32'h4013 == _T_232; // @[Lookup.scala 9:38:@77.4]
  assign _T_289 = 32'h2013 == _T_232; // @[Lookup.scala 9:38:@79.4]
  assign _T_293 = 32'h3013 == _T_232; // @[Lookup.scala 9:38:@81.4]
  assign _T_296 = io_dat_dec_inst & 32'hfc00707f; // @[Lookup.scala 9:38:@82.4]
  assign _T_297 = 32'h1013 == _T_296; // @[Lookup.scala 9:38:@83.4]
  assign _T_301 = 32'h40005013 == _T_296; // @[Lookup.scala 9:38:@85.4]
  assign _T_305 = 32'h5013 == _T_296; // @[Lookup.scala 9:38:@87.4]
  assign _T_308 = io_dat_dec_inst & 32'hfe00707f; // @[Lookup.scala 9:38:@88.4]
  assign _T_309 = 32'h1033 == _T_308; // @[Lookup.scala 9:38:@89.4]
  assign _T_313 = 32'h33 == _T_308; // @[Lookup.scala 9:38:@91.4]
  assign _T_317 = 32'h40000033 == _T_308; // @[Lookup.scala 9:38:@93.4]
  assign _T_321 = 32'h2033 == _T_308; // @[Lookup.scala 9:38:@95.4]
  assign _T_325 = 32'h3033 == _T_308; // @[Lookup.scala 9:38:@97.4]
  assign _T_329 = 32'h7033 == _T_308; // @[Lookup.scala 9:38:@99.4]
  assign _T_333 = 32'h6033 == _T_308; // @[Lookup.scala 9:38:@101.4]
  assign _T_337 = 32'h4033 == _T_308; // @[Lookup.scala 9:38:@103.4]
  assign _T_341 = 32'h40005033 == _T_308; // @[Lookup.scala 9:38:@105.4]
  assign _T_345 = 32'h5033 == _T_308; // @[Lookup.scala 9:38:@107.4]
  assign _T_349 = 32'h6f == _T_264; // @[Lookup.scala 9:38:@109.4]
  assign _T_353 = 32'h67 == _T_232; // @[Lookup.scala 9:38:@111.4]
  assign _T_357 = 32'h63 == _T_232; // @[Lookup.scala 9:38:@113.4]
  assign _T_361 = 32'h1063 == _T_232; // @[Lookup.scala 9:38:@115.4]
  assign _T_365 = 32'h5063 == _T_232; // @[Lookup.scala 9:38:@117.4]
  assign _T_369 = 32'h7063 == _T_232; // @[Lookup.scala 9:38:@119.4]
  assign _T_373 = 32'h4063 == _T_232; // @[Lookup.scala 9:38:@121.4]
  assign _T_377 = 32'h6063 == _T_232; // @[Lookup.scala 9:38:@123.4]
  assign _T_381 = 32'h5073 == _T_232; // @[Lookup.scala 9:38:@125.4]
  assign _T_385 = 32'h6073 == _T_232; // @[Lookup.scala 9:38:@127.4]
  assign _T_389 = 32'h1073 == _T_232; // @[Lookup.scala 9:38:@129.4]
  assign _T_393 = 32'h2073 == _T_232; // @[Lookup.scala 9:38:@131.4]
  assign _T_397 = 32'h3073 == _T_232; // @[Lookup.scala 9:38:@133.4]
  assign _T_401 = 32'h7073 == _T_232; // @[Lookup.scala 9:38:@135.4]
  assign _T_405 = 32'h73 == io_dat_dec_inst; // @[Lookup.scala 9:38:@137.4]
  assign _T_409 = 32'h30200073 == io_dat_dec_inst; // @[Lookup.scala 9:38:@139.4]
  assign _T_413 = 32'h7b200073 == io_dat_dec_inst; // @[Lookup.scala 9:38:@141.4]
  assign _T_417 = 32'h100073 == io_dat_dec_inst; // @[Lookup.scala 9:38:@143.4]
  assign _T_421 = 32'h10500073 == io_dat_dec_inst; // @[Lookup.scala 9:38:@145.4]
  assign _T_425 = 32'h100f == _T_232; // @[Lookup.scala 9:38:@147.4]
  assign _T_429 = 32'hf == _T_232; // @[Lookup.scala 9:38:@149.4]
  assign _T_431 = _T_425 ? 1'h1 : _T_429; // @[Lookup.scala 11:37:@151.4]
  assign _T_432 = _T_421 ? 1'h1 : _T_431; // @[Lookup.scala 11:37:@152.4]
  assign _T_433 = _T_417 ? 1'h1 : _T_432; // @[Lookup.scala 11:37:@153.4]
  assign _T_434 = _T_413 ? 1'h1 : _T_433; // @[Lookup.scala 11:37:@154.4]
  assign _T_435 = _T_409 ? 1'h1 : _T_434; // @[Lookup.scala 11:37:@155.4]
  assign _T_436 = _T_405 ? 1'h1 : _T_435; // @[Lookup.scala 11:37:@156.4]
  assign _T_437 = _T_401 ? 1'h1 : _T_436; // @[Lookup.scala 11:37:@157.4]
  assign _T_438 = _T_397 ? 1'h1 : _T_437; // @[Lookup.scala 11:37:@158.4]
  assign _T_439 = _T_393 ? 1'h1 : _T_438; // @[Lookup.scala 11:37:@159.4]
  assign _T_440 = _T_389 ? 1'h1 : _T_439; // @[Lookup.scala 11:37:@160.4]
  assign _T_441 = _T_385 ? 1'h1 : _T_440; // @[Lookup.scala 11:37:@161.4]
  assign _T_442 = _T_381 ? 1'h1 : _T_441; // @[Lookup.scala 11:37:@162.4]
  assign _T_443 = _T_377 ? 1'h1 : _T_442; // @[Lookup.scala 11:37:@163.4]
  assign _T_444 = _T_373 ? 1'h1 : _T_443; // @[Lookup.scala 11:37:@164.4]
  assign _T_445 = _T_369 ? 1'h1 : _T_444; // @[Lookup.scala 11:37:@165.4]
  assign _T_446 = _T_365 ? 1'h1 : _T_445; // @[Lookup.scala 11:37:@166.4]
  assign _T_447 = _T_361 ? 1'h1 : _T_446; // @[Lookup.scala 11:37:@167.4]
  assign _T_448 = _T_357 ? 1'h1 : _T_447; // @[Lookup.scala 11:37:@168.4]
  assign _T_449 = _T_353 ? 1'h1 : _T_448; // @[Lookup.scala 11:37:@169.4]
  assign _T_450 = _T_349 ? 1'h1 : _T_449; // @[Lookup.scala 11:37:@170.4]
  assign _T_451 = _T_345 ? 1'h1 : _T_450; // @[Lookup.scala 11:37:@171.4]
  assign _T_452 = _T_341 ? 1'h1 : _T_451; // @[Lookup.scala 11:37:@172.4]
  assign _T_453 = _T_337 ? 1'h1 : _T_452; // @[Lookup.scala 11:37:@173.4]
  assign _T_454 = _T_333 ? 1'h1 : _T_453; // @[Lookup.scala 11:37:@174.4]
  assign _T_455 = _T_329 ? 1'h1 : _T_454; // @[Lookup.scala 11:37:@175.4]
  assign _T_456 = _T_325 ? 1'h1 : _T_455; // @[Lookup.scala 11:37:@176.4]
  assign _T_457 = _T_321 ? 1'h1 : _T_456; // @[Lookup.scala 11:37:@177.4]
  assign _T_458 = _T_317 ? 1'h1 : _T_457; // @[Lookup.scala 11:37:@178.4]
  assign _T_459 = _T_313 ? 1'h1 : _T_458; // @[Lookup.scala 11:37:@179.4]
  assign _T_460 = _T_309 ? 1'h1 : _T_459; // @[Lookup.scala 11:37:@180.4]
  assign _T_461 = _T_305 ? 1'h1 : _T_460; // @[Lookup.scala 11:37:@181.4]
  assign _T_462 = _T_301 ? 1'h1 : _T_461; // @[Lookup.scala 11:37:@182.4]
  assign _T_463 = _T_297 ? 1'h1 : _T_462; // @[Lookup.scala 11:37:@183.4]
  assign _T_464 = _T_293 ? 1'h1 : _T_463; // @[Lookup.scala 11:37:@184.4]
  assign _T_465 = _T_289 ? 1'h1 : _T_464; // @[Lookup.scala 11:37:@185.4]
  assign _T_466 = _T_285 ? 1'h1 : _T_465; // @[Lookup.scala 11:37:@186.4]
  assign _T_467 = _T_281 ? 1'h1 : _T_466; // @[Lookup.scala 11:37:@187.4]
  assign _T_468 = _T_277 ? 1'h1 : _T_467; // @[Lookup.scala 11:37:@188.4]
  assign _T_469 = _T_273 ? 1'h1 : _T_468; // @[Lookup.scala 11:37:@189.4]
  assign _T_470 = _T_269 ? 1'h1 : _T_469; // @[Lookup.scala 11:37:@190.4]
  assign _T_471 = _T_265 ? 1'h1 : _T_470; // @[Lookup.scala 11:37:@191.4]
  assign _T_472 = _T_261 ? 1'h1 : _T_471; // @[Lookup.scala 11:37:@192.4]
  assign _T_473 = _T_257 ? 1'h1 : _T_472; // @[Lookup.scala 11:37:@193.4]
  assign _T_474 = _T_253 ? 1'h1 : _T_473; // @[Lookup.scala 11:37:@194.4]
  assign _T_475 = _T_249 ? 1'h1 : _T_474; // @[Lookup.scala 11:37:@195.4]
  assign _T_476 = _T_245 ? 1'h1 : _T_475; // @[Lookup.scala 11:37:@196.4]
  assign _T_477 = _T_241 ? 1'h1 : _T_476; // @[Lookup.scala 11:37:@197.4]
  assign _T_478 = _T_237 ? 1'h1 : _T_477; // @[Lookup.scala 11:37:@198.4]
  assign cs_val_inst = _T_233 ? 1'h1 : _T_478; // @[Lookup.scala 11:37:@199.4]
  assign _T_492 = _T_377 ? 4'h6 : 4'h0; // @[Lookup.scala 11:37:@213.4]
  assign _T_493 = _T_373 ? 4'h5 : _T_492; // @[Lookup.scala 11:37:@214.4]
  assign _T_494 = _T_369 ? 4'h4 : _T_493; // @[Lookup.scala 11:37:@215.4]
  assign _T_495 = _T_365 ? 4'h3 : _T_494; // @[Lookup.scala 11:37:@216.4]
  assign _T_496 = _T_361 ? 4'h1 : _T_495; // @[Lookup.scala 11:37:@217.4]
  assign _T_497 = _T_357 ? 4'h2 : _T_496; // @[Lookup.scala 11:37:@218.4]
  assign _T_498 = _T_353 ? 4'h8 : _T_497; // @[Lookup.scala 11:37:@219.4]
  assign _T_499 = _T_349 ? 4'h7 : _T_498; // @[Lookup.scala 11:37:@220.4]
  assign _T_500 = _T_345 ? 4'h0 : _T_499; // @[Lookup.scala 11:37:@221.4]
  assign _T_501 = _T_341 ? 4'h0 : _T_500; // @[Lookup.scala 11:37:@222.4]
  assign _T_502 = _T_337 ? 4'h0 : _T_501; // @[Lookup.scala 11:37:@223.4]
  assign _T_503 = _T_333 ? 4'h0 : _T_502; // @[Lookup.scala 11:37:@224.4]
  assign _T_504 = _T_329 ? 4'h0 : _T_503; // @[Lookup.scala 11:37:@225.4]
  assign _T_505 = _T_325 ? 4'h0 : _T_504; // @[Lookup.scala 11:37:@226.4]
  assign _T_506 = _T_321 ? 4'h0 : _T_505; // @[Lookup.scala 11:37:@227.4]
  assign _T_507 = _T_317 ? 4'h0 : _T_506; // @[Lookup.scala 11:37:@228.4]
  assign _T_508 = _T_313 ? 4'h0 : _T_507; // @[Lookup.scala 11:37:@229.4]
  assign _T_509 = _T_309 ? 4'h0 : _T_508; // @[Lookup.scala 11:37:@230.4]
  assign _T_510 = _T_305 ? 4'h0 : _T_509; // @[Lookup.scala 11:37:@231.4]
  assign _T_511 = _T_301 ? 4'h0 : _T_510; // @[Lookup.scala 11:37:@232.4]
  assign _T_512 = _T_297 ? 4'h0 : _T_511; // @[Lookup.scala 11:37:@233.4]
  assign _T_513 = _T_293 ? 4'h0 : _T_512; // @[Lookup.scala 11:37:@234.4]
  assign _T_514 = _T_289 ? 4'h0 : _T_513; // @[Lookup.scala 11:37:@235.4]
  assign _T_515 = _T_285 ? 4'h0 : _T_514; // @[Lookup.scala 11:37:@236.4]
  assign _T_516 = _T_281 ? 4'h0 : _T_515; // @[Lookup.scala 11:37:@237.4]
  assign _T_517 = _T_277 ? 4'h0 : _T_516; // @[Lookup.scala 11:37:@238.4]
  assign _T_518 = _T_273 ? 4'h0 : _T_517; // @[Lookup.scala 11:37:@239.4]
  assign _T_519 = _T_269 ? 4'h0 : _T_518; // @[Lookup.scala 11:37:@240.4]
  assign _T_520 = _T_265 ? 4'h0 : _T_519; // @[Lookup.scala 11:37:@241.4]
  assign _T_521 = _T_261 ? 4'h0 : _T_520; // @[Lookup.scala 11:37:@242.4]
  assign _T_522 = _T_257 ? 4'h0 : _T_521; // @[Lookup.scala 11:37:@243.4]
  assign _T_523 = _T_253 ? 4'h0 : _T_522; // @[Lookup.scala 11:37:@244.4]
  assign _T_524 = _T_249 ? 4'h0 : _T_523; // @[Lookup.scala 11:37:@245.4]
  assign _T_525 = _T_245 ? 4'h0 : _T_524; // @[Lookup.scala 11:37:@246.4]
  assign _T_526 = _T_241 ? 4'h0 : _T_525; // @[Lookup.scala 11:37:@247.4]
  assign _T_527 = _T_237 ? 4'h0 : _T_526; // @[Lookup.scala 11:37:@248.4]
  assign _T_535 = _T_401 ? 2'h2 : 2'h0; // @[Lookup.scala 11:37:@257.4]
  assign _T_536 = _T_397 ? 2'h0 : _T_535; // @[Lookup.scala 11:37:@258.4]
  assign _T_537 = _T_393 ? 2'h0 : _T_536; // @[Lookup.scala 11:37:@259.4]
  assign _T_538 = _T_389 ? 2'h0 : _T_537; // @[Lookup.scala 11:37:@260.4]
  assign _T_539 = _T_385 ? 2'h2 : _T_538; // @[Lookup.scala 11:37:@261.4]
  assign _T_540 = _T_381 ? 2'h2 : _T_539; // @[Lookup.scala 11:37:@262.4]
  assign _T_541 = _T_377 ? 2'h0 : _T_540; // @[Lookup.scala 11:37:@263.4]
  assign _T_542 = _T_373 ? 2'h0 : _T_541; // @[Lookup.scala 11:37:@264.4]
  assign _T_543 = _T_369 ? 2'h0 : _T_542; // @[Lookup.scala 11:37:@265.4]
  assign _T_544 = _T_365 ? 2'h0 : _T_543; // @[Lookup.scala 11:37:@266.4]
  assign _T_545 = _T_361 ? 2'h0 : _T_544; // @[Lookup.scala 11:37:@267.4]
  assign _T_546 = _T_357 ? 2'h0 : _T_545; // @[Lookup.scala 11:37:@268.4]
  assign _T_547 = _T_353 ? 2'h0 : _T_546; // @[Lookup.scala 11:37:@269.4]
  assign _T_548 = _T_349 ? 2'h0 : _T_547; // @[Lookup.scala 11:37:@270.4]
  assign _T_549 = _T_345 ? 2'h0 : _T_548; // @[Lookup.scala 11:37:@271.4]
  assign _T_550 = _T_341 ? 2'h0 : _T_549; // @[Lookup.scala 11:37:@272.4]
  assign _T_551 = _T_337 ? 2'h0 : _T_550; // @[Lookup.scala 11:37:@273.4]
  assign _T_552 = _T_333 ? 2'h0 : _T_551; // @[Lookup.scala 11:37:@274.4]
  assign _T_553 = _T_329 ? 2'h0 : _T_552; // @[Lookup.scala 11:37:@275.4]
  assign _T_554 = _T_325 ? 2'h0 : _T_553; // @[Lookup.scala 11:37:@276.4]
  assign _T_555 = _T_321 ? 2'h0 : _T_554; // @[Lookup.scala 11:37:@277.4]
  assign _T_556 = _T_317 ? 2'h0 : _T_555; // @[Lookup.scala 11:37:@278.4]
  assign _T_557 = _T_313 ? 2'h0 : _T_556; // @[Lookup.scala 11:37:@279.4]
  assign _T_558 = _T_309 ? 2'h0 : _T_557; // @[Lookup.scala 11:37:@280.4]
  assign _T_559 = _T_305 ? 2'h0 : _T_558; // @[Lookup.scala 11:37:@281.4]
  assign _T_560 = _T_301 ? 2'h0 : _T_559; // @[Lookup.scala 11:37:@282.4]
  assign _T_561 = _T_297 ? 2'h0 : _T_560; // @[Lookup.scala 11:37:@283.4]
  assign _T_562 = _T_293 ? 2'h0 : _T_561; // @[Lookup.scala 11:37:@284.4]
  assign _T_563 = _T_289 ? 2'h0 : _T_562; // @[Lookup.scala 11:37:@285.4]
  assign _T_564 = _T_285 ? 2'h0 : _T_563; // @[Lookup.scala 11:37:@286.4]
  assign _T_565 = _T_281 ? 2'h0 : _T_564; // @[Lookup.scala 11:37:@287.4]
  assign _T_566 = _T_277 ? 2'h0 : _T_565; // @[Lookup.scala 11:37:@288.4]
  assign _T_567 = _T_273 ? 2'h0 : _T_566; // @[Lookup.scala 11:37:@289.4]
  assign _T_568 = _T_269 ? 2'h0 : _T_567; // @[Lookup.scala 11:37:@290.4]
  assign _T_569 = _T_265 ? 2'h1 : _T_568; // @[Lookup.scala 11:37:@291.4]
  assign _T_570 = _T_261 ? 2'h0 : _T_569; // @[Lookup.scala 11:37:@292.4]
  assign _T_571 = _T_257 ? 2'h0 : _T_570; // @[Lookup.scala 11:37:@293.4]
  assign _T_572 = _T_253 ? 2'h0 : _T_571; // @[Lookup.scala 11:37:@294.4]
  assign _T_573 = _T_249 ? 2'h0 : _T_572; // @[Lookup.scala 11:37:@295.4]
  assign _T_574 = _T_245 ? 2'h0 : _T_573; // @[Lookup.scala 11:37:@296.4]
  assign _T_575 = _T_241 ? 2'h0 : _T_574; // @[Lookup.scala 11:37:@297.4]
  assign _T_576 = _T_237 ? 2'h0 : _T_575; // @[Lookup.scala 11:37:@298.4]
  assign _T_590 = _T_377 ? 3'h3 : 3'h0; // @[Lookup.scala 11:37:@313.4]
  assign _T_591 = _T_373 ? 3'h3 : _T_590; // @[Lookup.scala 11:37:@314.4]
  assign _T_592 = _T_369 ? 3'h3 : _T_591; // @[Lookup.scala 11:37:@315.4]
  assign _T_593 = _T_365 ? 3'h3 : _T_592; // @[Lookup.scala 11:37:@316.4]
  assign _T_594 = _T_361 ? 3'h3 : _T_593; // @[Lookup.scala 11:37:@317.4]
  assign _T_595 = _T_357 ? 3'h3 : _T_594; // @[Lookup.scala 11:37:@318.4]
  assign _T_596 = _T_353 ? 3'h1 : _T_595; // @[Lookup.scala 11:37:@319.4]
  assign _T_597 = _T_349 ? 3'h5 : _T_596; // @[Lookup.scala 11:37:@320.4]
  assign _T_598 = _T_345 ? 3'h0 : _T_597; // @[Lookup.scala 11:37:@321.4]
  assign _T_599 = _T_341 ? 3'h0 : _T_598; // @[Lookup.scala 11:37:@322.4]
  assign _T_600 = _T_337 ? 3'h0 : _T_599; // @[Lookup.scala 11:37:@323.4]
  assign _T_601 = _T_333 ? 3'h0 : _T_600; // @[Lookup.scala 11:37:@324.4]
  assign _T_602 = _T_329 ? 3'h0 : _T_601; // @[Lookup.scala 11:37:@325.4]
  assign _T_603 = _T_325 ? 3'h0 : _T_602; // @[Lookup.scala 11:37:@326.4]
  assign _T_604 = _T_321 ? 3'h0 : _T_603; // @[Lookup.scala 11:37:@327.4]
  assign _T_605 = _T_317 ? 3'h0 : _T_604; // @[Lookup.scala 11:37:@328.4]
  assign _T_606 = _T_313 ? 3'h0 : _T_605; // @[Lookup.scala 11:37:@329.4]
  assign _T_607 = _T_309 ? 3'h0 : _T_606; // @[Lookup.scala 11:37:@330.4]
  assign _T_608 = _T_305 ? 3'h1 : _T_607; // @[Lookup.scala 11:37:@331.4]
  assign _T_609 = _T_301 ? 3'h1 : _T_608; // @[Lookup.scala 11:37:@332.4]
  assign _T_610 = _T_297 ? 3'h1 : _T_609; // @[Lookup.scala 11:37:@333.4]
  assign _T_611 = _T_293 ? 3'h1 : _T_610; // @[Lookup.scala 11:37:@334.4]
  assign _T_612 = _T_289 ? 3'h1 : _T_611; // @[Lookup.scala 11:37:@335.4]
  assign _T_613 = _T_285 ? 3'h1 : _T_612; // @[Lookup.scala 11:37:@336.4]
  assign _T_614 = _T_281 ? 3'h1 : _T_613; // @[Lookup.scala 11:37:@337.4]
  assign _T_615 = _T_277 ? 3'h1 : _T_614; // @[Lookup.scala 11:37:@338.4]
  assign _T_616 = _T_273 ? 3'h1 : _T_615; // @[Lookup.scala 11:37:@339.4]
  assign _T_617 = _T_269 ? 3'h4 : _T_616; // @[Lookup.scala 11:37:@340.4]
  assign _T_618 = _T_265 ? 3'h4 : _T_617; // @[Lookup.scala 11:37:@341.4]
  assign _T_619 = _T_261 ? 3'h2 : _T_618; // @[Lookup.scala 11:37:@342.4]
  assign _T_620 = _T_257 ? 3'h2 : _T_619; // @[Lookup.scala 11:37:@343.4]
  assign _T_621 = _T_253 ? 3'h2 : _T_620; // @[Lookup.scala 11:37:@344.4]
  assign _T_622 = _T_249 ? 3'h1 : _T_621; // @[Lookup.scala 11:37:@345.4]
  assign _T_623 = _T_245 ? 3'h1 : _T_622; // @[Lookup.scala 11:37:@346.4]
  assign _T_624 = _T_241 ? 3'h1 : _T_623; // @[Lookup.scala 11:37:@347.4]
  assign _T_625 = _T_237 ? 3'h1 : _T_624; // @[Lookup.scala 11:37:@348.4]
  assign _T_634 = _T_397 ? 1'h1 : _T_401; // @[Lookup.scala 11:37:@358.4]
  assign _T_635 = _T_393 ? 1'h1 : _T_634; // @[Lookup.scala 11:37:@359.4]
  assign _T_636 = _T_389 ? 1'h1 : _T_635; // @[Lookup.scala 11:37:@360.4]
  assign _T_637 = _T_385 ? 1'h1 : _T_636; // @[Lookup.scala 11:37:@361.4]
  assign _T_638 = _T_381 ? 1'h1 : _T_637; // @[Lookup.scala 11:37:@362.4]
  assign _T_639 = _T_377 ? 1'h1 : _T_638; // @[Lookup.scala 11:37:@363.4]
  assign _T_640 = _T_373 ? 1'h1 : _T_639; // @[Lookup.scala 11:37:@364.4]
  assign _T_641 = _T_369 ? 1'h1 : _T_640; // @[Lookup.scala 11:37:@365.4]
  assign _T_642 = _T_365 ? 1'h1 : _T_641; // @[Lookup.scala 11:37:@366.4]
  assign _T_643 = _T_361 ? 1'h1 : _T_642; // @[Lookup.scala 11:37:@367.4]
  assign _T_644 = _T_357 ? 1'h1 : _T_643; // @[Lookup.scala 11:37:@368.4]
  assign _T_645 = _T_353 ? 1'h1 : _T_644; // @[Lookup.scala 11:37:@369.4]
  assign _T_646 = _T_349 ? 1'h0 : _T_645; // @[Lookup.scala 11:37:@370.4]
  assign _T_647 = _T_345 ? 1'h1 : _T_646; // @[Lookup.scala 11:37:@371.4]
  assign _T_648 = _T_341 ? 1'h1 : _T_647; // @[Lookup.scala 11:37:@372.4]
  assign _T_649 = _T_337 ? 1'h1 : _T_648; // @[Lookup.scala 11:37:@373.4]
  assign _T_650 = _T_333 ? 1'h1 : _T_649; // @[Lookup.scala 11:37:@374.4]
  assign _T_651 = _T_329 ? 1'h1 : _T_650; // @[Lookup.scala 11:37:@375.4]
  assign _T_652 = _T_325 ? 1'h1 : _T_651; // @[Lookup.scala 11:37:@376.4]
  assign _T_653 = _T_321 ? 1'h1 : _T_652; // @[Lookup.scala 11:37:@377.4]
  assign _T_654 = _T_317 ? 1'h1 : _T_653; // @[Lookup.scala 11:37:@378.4]
  assign _T_655 = _T_313 ? 1'h1 : _T_654; // @[Lookup.scala 11:37:@379.4]
  assign _T_656 = _T_309 ? 1'h1 : _T_655; // @[Lookup.scala 11:37:@380.4]
  assign _T_657 = _T_305 ? 1'h1 : _T_656; // @[Lookup.scala 11:37:@381.4]
  assign _T_658 = _T_301 ? 1'h1 : _T_657; // @[Lookup.scala 11:37:@382.4]
  assign _T_659 = _T_297 ? 1'h1 : _T_658; // @[Lookup.scala 11:37:@383.4]
  assign _T_660 = _T_293 ? 1'h1 : _T_659; // @[Lookup.scala 11:37:@384.4]
  assign _T_661 = _T_289 ? 1'h1 : _T_660; // @[Lookup.scala 11:37:@385.4]
  assign _T_662 = _T_285 ? 1'h1 : _T_661; // @[Lookup.scala 11:37:@386.4]
  assign _T_663 = _T_281 ? 1'h1 : _T_662; // @[Lookup.scala 11:37:@387.4]
  assign _T_664 = _T_277 ? 1'h1 : _T_663; // @[Lookup.scala 11:37:@388.4]
  assign _T_665 = _T_273 ? 1'h1 : _T_664; // @[Lookup.scala 11:37:@389.4]
  assign _T_666 = _T_269 ? 1'h0 : _T_665; // @[Lookup.scala 11:37:@390.4]
  assign _T_667 = _T_265 ? 1'h0 : _T_666; // @[Lookup.scala 11:37:@391.4]
  assign _T_668 = _T_261 ? 1'h1 : _T_667; // @[Lookup.scala 11:37:@392.4]
  assign _T_669 = _T_257 ? 1'h1 : _T_668; // @[Lookup.scala 11:37:@393.4]
  assign _T_670 = _T_253 ? 1'h1 : _T_669; // @[Lookup.scala 11:37:@394.4]
  assign _T_671 = _T_249 ? 1'h1 : _T_670; // @[Lookup.scala 11:37:@395.4]
  assign _T_672 = _T_245 ? 1'h1 : _T_671; // @[Lookup.scala 11:37:@396.4]
  assign _T_673 = _T_241 ? 1'h1 : _T_672; // @[Lookup.scala 11:37:@397.4]
  assign _T_674 = _T_237 ? 1'h1 : _T_673; // @[Lookup.scala 11:37:@398.4]
  assign cs_rs1_oen = _T_233 ? 1'h1 : _T_674; // @[Lookup.scala 11:37:@399.4]
  assign _T_694 = _T_353 ? 1'h0 : _T_644; // @[Lookup.scala 11:37:@419.4]
  assign _T_695 = _T_349 ? 1'h0 : _T_694; // @[Lookup.scala 11:37:@420.4]
  assign _T_696 = _T_345 ? 1'h1 : _T_695; // @[Lookup.scala 11:37:@421.4]
  assign _T_697 = _T_341 ? 1'h1 : _T_696; // @[Lookup.scala 11:37:@422.4]
  assign _T_698 = _T_337 ? 1'h1 : _T_697; // @[Lookup.scala 11:37:@423.4]
  assign _T_699 = _T_333 ? 1'h1 : _T_698; // @[Lookup.scala 11:37:@424.4]
  assign _T_700 = _T_329 ? 1'h1 : _T_699; // @[Lookup.scala 11:37:@425.4]
  assign _T_701 = _T_325 ? 1'h1 : _T_700; // @[Lookup.scala 11:37:@426.4]
  assign _T_702 = _T_321 ? 1'h1 : _T_701; // @[Lookup.scala 11:37:@427.4]
  assign _T_703 = _T_317 ? 1'h1 : _T_702; // @[Lookup.scala 11:37:@428.4]
  assign _T_704 = _T_313 ? 1'h1 : _T_703; // @[Lookup.scala 11:37:@429.4]
  assign _T_705 = _T_309 ? 1'h1 : _T_704; // @[Lookup.scala 11:37:@430.4]
  assign _T_706 = _T_305 ? 1'h0 : _T_705; // @[Lookup.scala 11:37:@431.4]
  assign _T_707 = _T_301 ? 1'h0 : _T_706; // @[Lookup.scala 11:37:@432.4]
  assign _T_708 = _T_297 ? 1'h0 : _T_707; // @[Lookup.scala 11:37:@433.4]
  assign _T_709 = _T_293 ? 1'h0 : _T_708; // @[Lookup.scala 11:37:@434.4]
  assign _T_710 = _T_289 ? 1'h0 : _T_709; // @[Lookup.scala 11:37:@435.4]
  assign _T_711 = _T_285 ? 1'h0 : _T_710; // @[Lookup.scala 11:37:@436.4]
  assign _T_712 = _T_281 ? 1'h0 : _T_711; // @[Lookup.scala 11:37:@437.4]
  assign _T_713 = _T_277 ? 1'h0 : _T_712; // @[Lookup.scala 11:37:@438.4]
  assign _T_714 = _T_273 ? 1'h0 : _T_713; // @[Lookup.scala 11:37:@439.4]
  assign _T_715 = _T_269 ? 1'h0 : _T_714; // @[Lookup.scala 11:37:@440.4]
  assign _T_716 = _T_265 ? 1'h0 : _T_715; // @[Lookup.scala 11:37:@441.4]
  assign _T_717 = _T_261 ? 1'h1 : _T_716; // @[Lookup.scala 11:37:@442.4]
  assign _T_718 = _T_257 ? 1'h1 : _T_717; // @[Lookup.scala 11:37:@443.4]
  assign _T_719 = _T_253 ? 1'h1 : _T_718; // @[Lookup.scala 11:37:@444.4]
  assign _T_720 = _T_249 ? 1'h0 : _T_719; // @[Lookup.scala 11:37:@445.4]
  assign _T_721 = _T_245 ? 1'h0 : _T_720; // @[Lookup.scala 11:37:@446.4]
  assign _T_722 = _T_241 ? 1'h0 : _T_721; // @[Lookup.scala 11:37:@447.4]
  assign _T_723 = _T_237 ? 1'h0 : _T_722; // @[Lookup.scala 11:37:@448.4]
  assign cs_rs2_oen = _T_233 ? 1'h0 : _T_723; // @[Lookup.scala 11:37:@449.4]
  assign _T_731 = _T_401 ? 4'ha : 4'h0; // @[Lookup.scala 11:37:@457.4]
  assign _T_732 = _T_397 ? 4'ha : _T_731; // @[Lookup.scala 11:37:@458.4]
  assign _T_733 = _T_393 ? 4'ha : _T_732; // @[Lookup.scala 11:37:@459.4]
  assign _T_734 = _T_389 ? 4'ha : _T_733; // @[Lookup.scala 11:37:@460.4]
  assign _T_735 = _T_385 ? 4'ha : _T_734; // @[Lookup.scala 11:37:@461.4]
  assign _T_736 = _T_381 ? 4'ha : _T_735; // @[Lookup.scala 11:37:@462.4]
  assign _T_737 = _T_377 ? 4'h0 : _T_736; // @[Lookup.scala 11:37:@463.4]
  assign _T_738 = _T_373 ? 4'h0 : _T_737; // @[Lookup.scala 11:37:@464.4]
  assign _T_739 = _T_369 ? 4'h0 : _T_738; // @[Lookup.scala 11:37:@465.4]
  assign _T_740 = _T_365 ? 4'h0 : _T_739; // @[Lookup.scala 11:37:@466.4]
  assign _T_741 = _T_361 ? 4'h0 : _T_740; // @[Lookup.scala 11:37:@467.4]
  assign _T_742 = _T_357 ? 4'h0 : _T_741; // @[Lookup.scala 11:37:@468.4]
  assign _T_743 = _T_353 ? 4'h0 : _T_742; // @[Lookup.scala 11:37:@469.4]
  assign _T_744 = _T_349 ? 4'h0 : _T_743; // @[Lookup.scala 11:37:@470.4]
  assign _T_745 = _T_345 ? 4'h3 : _T_744; // @[Lookup.scala 11:37:@471.4]
  assign _T_746 = _T_341 ? 4'h4 : _T_745; // @[Lookup.scala 11:37:@472.4]
  assign _T_747 = _T_337 ? 4'h7 : _T_746; // @[Lookup.scala 11:37:@473.4]
  assign _T_748 = _T_333 ? 4'h6 : _T_747; // @[Lookup.scala 11:37:@474.4]
  assign _T_749 = _T_329 ? 4'h5 : _T_748; // @[Lookup.scala 11:37:@475.4]
  assign _T_750 = _T_325 ? 4'h9 : _T_749; // @[Lookup.scala 11:37:@476.4]
  assign _T_751 = _T_321 ? 4'h8 : _T_750; // @[Lookup.scala 11:37:@477.4]
  assign _T_752 = _T_317 ? 4'h1 : _T_751; // @[Lookup.scala 11:37:@478.4]
  assign _T_753 = _T_313 ? 4'h0 : _T_752; // @[Lookup.scala 11:37:@479.4]
  assign _T_754 = _T_309 ? 4'h2 : _T_753; // @[Lookup.scala 11:37:@480.4]
  assign _T_755 = _T_305 ? 4'h3 : _T_754; // @[Lookup.scala 11:37:@481.4]
  assign _T_756 = _T_301 ? 4'h4 : _T_755; // @[Lookup.scala 11:37:@482.4]
  assign _T_757 = _T_297 ? 4'h2 : _T_756; // @[Lookup.scala 11:37:@483.4]
  assign _T_758 = _T_293 ? 4'h9 : _T_757; // @[Lookup.scala 11:37:@484.4]
  assign _T_759 = _T_289 ? 4'h8 : _T_758; // @[Lookup.scala 11:37:@485.4]
  assign _T_760 = _T_285 ? 4'h7 : _T_759; // @[Lookup.scala 11:37:@486.4]
  assign _T_761 = _T_281 ? 4'h6 : _T_760; // @[Lookup.scala 11:37:@487.4]
  assign _T_762 = _T_277 ? 4'h5 : _T_761; // @[Lookup.scala 11:37:@488.4]
  assign _T_763 = _T_273 ? 4'h0 : _T_762; // @[Lookup.scala 11:37:@489.4]
  assign _T_764 = _T_269 ? 4'hb : _T_763; // @[Lookup.scala 11:37:@490.4]
  assign _T_765 = _T_265 ? 4'h0 : _T_764; // @[Lookup.scala 11:37:@491.4]
  assign _T_766 = _T_261 ? 4'h0 : _T_765; // @[Lookup.scala 11:37:@492.4]
  assign _T_767 = _T_257 ? 4'h0 : _T_766; // @[Lookup.scala 11:37:@493.4]
  assign _T_768 = _T_253 ? 4'h0 : _T_767; // @[Lookup.scala 11:37:@494.4]
  assign _T_769 = _T_249 ? 4'h0 : _T_768; // @[Lookup.scala 11:37:@495.4]
  assign _T_770 = _T_245 ? 4'h0 : _T_769; // @[Lookup.scala 11:37:@496.4]
  assign _T_771 = _T_241 ? 4'h0 : _T_770; // @[Lookup.scala 11:37:@497.4]
  assign _T_772 = _T_237 ? 4'h0 : _T_771; // @[Lookup.scala 11:37:@498.4]
  assign _T_780 = _T_401 ? 2'h3 : 2'h0; // @[Lookup.scala 11:37:@507.4]
  assign _T_781 = _T_397 ? 2'h3 : _T_780; // @[Lookup.scala 11:37:@508.4]
  assign _T_782 = _T_393 ? 2'h3 : _T_781; // @[Lookup.scala 11:37:@509.4]
  assign _T_783 = _T_389 ? 2'h3 : _T_782; // @[Lookup.scala 11:37:@510.4]
  assign _T_784 = _T_385 ? 2'h3 : _T_783; // @[Lookup.scala 11:37:@511.4]
  assign _T_785 = _T_381 ? 2'h3 : _T_784; // @[Lookup.scala 11:37:@512.4]
  assign _T_786 = _T_377 ? 2'h0 : _T_785; // @[Lookup.scala 11:37:@513.4]
  assign _T_787 = _T_373 ? 2'h0 : _T_786; // @[Lookup.scala 11:37:@514.4]
  assign _T_788 = _T_369 ? 2'h0 : _T_787; // @[Lookup.scala 11:37:@515.4]
  assign _T_789 = _T_365 ? 2'h0 : _T_788; // @[Lookup.scala 11:37:@516.4]
  assign _T_790 = _T_361 ? 2'h0 : _T_789; // @[Lookup.scala 11:37:@517.4]
  assign _T_791 = _T_357 ? 2'h0 : _T_790; // @[Lookup.scala 11:37:@518.4]
  assign _T_792 = _T_353 ? 2'h2 : _T_791; // @[Lookup.scala 11:37:@519.4]
  assign _T_793 = _T_349 ? 2'h2 : _T_792; // @[Lookup.scala 11:37:@520.4]
  assign _T_794 = _T_345 ? 2'h0 : _T_793; // @[Lookup.scala 11:37:@521.4]
  assign _T_795 = _T_341 ? 2'h0 : _T_794; // @[Lookup.scala 11:37:@522.4]
  assign _T_796 = _T_337 ? 2'h0 : _T_795; // @[Lookup.scala 11:37:@523.4]
  assign _T_797 = _T_333 ? 2'h0 : _T_796; // @[Lookup.scala 11:37:@524.4]
  assign _T_798 = _T_329 ? 2'h0 : _T_797; // @[Lookup.scala 11:37:@525.4]
  assign _T_799 = _T_325 ? 2'h0 : _T_798; // @[Lookup.scala 11:37:@526.4]
  assign _T_800 = _T_321 ? 2'h0 : _T_799; // @[Lookup.scala 11:37:@527.4]
  assign _T_801 = _T_317 ? 2'h0 : _T_800; // @[Lookup.scala 11:37:@528.4]
  assign _T_802 = _T_313 ? 2'h0 : _T_801; // @[Lookup.scala 11:37:@529.4]
  assign _T_803 = _T_309 ? 2'h0 : _T_802; // @[Lookup.scala 11:37:@530.4]
  assign _T_804 = _T_305 ? 2'h0 : _T_803; // @[Lookup.scala 11:37:@531.4]
  assign _T_805 = _T_301 ? 2'h0 : _T_804; // @[Lookup.scala 11:37:@532.4]
  assign _T_806 = _T_297 ? 2'h0 : _T_805; // @[Lookup.scala 11:37:@533.4]
  assign _T_807 = _T_293 ? 2'h0 : _T_806; // @[Lookup.scala 11:37:@534.4]
  assign _T_808 = _T_289 ? 2'h0 : _T_807; // @[Lookup.scala 11:37:@535.4]
  assign _T_809 = _T_285 ? 2'h0 : _T_808; // @[Lookup.scala 11:37:@536.4]
  assign _T_810 = _T_281 ? 2'h0 : _T_809; // @[Lookup.scala 11:37:@537.4]
  assign _T_811 = _T_277 ? 2'h0 : _T_810; // @[Lookup.scala 11:37:@538.4]
  assign _T_812 = _T_273 ? 2'h0 : _T_811; // @[Lookup.scala 11:37:@539.4]
  assign _T_813 = _T_269 ? 2'h0 : _T_812; // @[Lookup.scala 11:37:@540.4]
  assign _T_814 = _T_265 ? 2'h0 : _T_813; // @[Lookup.scala 11:37:@541.4]
  assign _T_815 = _T_261 ? 2'h0 : _T_814; // @[Lookup.scala 11:37:@542.4]
  assign _T_816 = _T_257 ? 2'h0 : _T_815; // @[Lookup.scala 11:37:@543.4]
  assign _T_817 = _T_253 ? 2'h0 : _T_816; // @[Lookup.scala 11:37:@544.4]
  assign _T_818 = _T_249 ? 2'h1 : _T_817; // @[Lookup.scala 11:37:@545.4]
  assign _T_819 = _T_245 ? 2'h1 : _T_818; // @[Lookup.scala 11:37:@546.4]
  assign _T_820 = _T_241 ? 2'h1 : _T_819; // @[Lookup.scala 11:37:@547.4]
  assign _T_821 = _T_237 ? 2'h1 : _T_820; // @[Lookup.scala 11:37:@548.4]
  assign _T_835 = _T_377 ? 1'h0 : _T_638; // @[Lookup.scala 11:37:@563.4]
  assign _T_836 = _T_373 ? 1'h0 : _T_835; // @[Lookup.scala 11:37:@564.4]
  assign _T_837 = _T_369 ? 1'h0 : _T_836; // @[Lookup.scala 11:37:@565.4]
  assign _T_838 = _T_365 ? 1'h0 : _T_837; // @[Lookup.scala 11:37:@566.4]
  assign _T_839 = _T_361 ? 1'h0 : _T_838; // @[Lookup.scala 11:37:@567.4]
  assign _T_840 = _T_357 ? 1'h0 : _T_839; // @[Lookup.scala 11:37:@568.4]
  assign _T_841 = _T_353 ? 1'h1 : _T_840; // @[Lookup.scala 11:37:@569.4]
  assign _T_842 = _T_349 ? 1'h1 : _T_841; // @[Lookup.scala 11:37:@570.4]
  assign _T_843 = _T_345 ? 1'h1 : _T_842; // @[Lookup.scala 11:37:@571.4]
  assign _T_844 = _T_341 ? 1'h1 : _T_843; // @[Lookup.scala 11:37:@572.4]
  assign _T_845 = _T_337 ? 1'h1 : _T_844; // @[Lookup.scala 11:37:@573.4]
  assign _T_846 = _T_333 ? 1'h1 : _T_845; // @[Lookup.scala 11:37:@574.4]
  assign _T_847 = _T_329 ? 1'h1 : _T_846; // @[Lookup.scala 11:37:@575.4]
  assign _T_848 = _T_325 ? 1'h1 : _T_847; // @[Lookup.scala 11:37:@576.4]
  assign _T_849 = _T_321 ? 1'h1 : _T_848; // @[Lookup.scala 11:37:@577.4]
  assign _T_850 = _T_317 ? 1'h1 : _T_849; // @[Lookup.scala 11:37:@578.4]
  assign _T_851 = _T_313 ? 1'h1 : _T_850; // @[Lookup.scala 11:37:@579.4]
  assign _T_852 = _T_309 ? 1'h1 : _T_851; // @[Lookup.scala 11:37:@580.4]
  assign _T_853 = _T_305 ? 1'h1 : _T_852; // @[Lookup.scala 11:37:@581.4]
  assign _T_854 = _T_301 ? 1'h1 : _T_853; // @[Lookup.scala 11:37:@582.4]
  assign _T_855 = _T_297 ? 1'h1 : _T_854; // @[Lookup.scala 11:37:@583.4]
  assign _T_856 = _T_293 ? 1'h1 : _T_855; // @[Lookup.scala 11:37:@584.4]
  assign _T_857 = _T_289 ? 1'h1 : _T_856; // @[Lookup.scala 11:37:@585.4]
  assign _T_858 = _T_285 ? 1'h1 : _T_857; // @[Lookup.scala 11:37:@586.4]
  assign _T_859 = _T_281 ? 1'h1 : _T_858; // @[Lookup.scala 11:37:@587.4]
  assign _T_860 = _T_277 ? 1'h1 : _T_859; // @[Lookup.scala 11:37:@588.4]
  assign _T_861 = _T_273 ? 1'h1 : _T_860; // @[Lookup.scala 11:37:@589.4]
  assign _T_862 = _T_269 ? 1'h1 : _T_861; // @[Lookup.scala 11:37:@590.4]
  assign _T_863 = _T_265 ? 1'h1 : _T_862; // @[Lookup.scala 11:37:@591.4]
  assign _T_864 = _T_261 ? 1'h0 : _T_863; // @[Lookup.scala 11:37:@592.4]
  assign _T_865 = _T_257 ? 1'h0 : _T_864; // @[Lookup.scala 11:37:@593.4]
  assign _T_866 = _T_253 ? 1'h0 : _T_865; // @[Lookup.scala 11:37:@594.4]
  assign _T_867 = _T_249 ? 1'h1 : _T_866; // @[Lookup.scala 11:37:@595.4]
  assign _T_868 = _T_245 ? 1'h1 : _T_867; // @[Lookup.scala 11:37:@596.4]
  assign _T_869 = _T_241 ? 1'h1 : _T_868; // @[Lookup.scala 11:37:@597.4]
  assign _T_870 = _T_237 ? 1'h1 : _T_869; // @[Lookup.scala 11:37:@598.4]
  assign _T_872 = _T_425 ? 1'h0 : _T_429; // @[Lookup.scala 11:37:@601.4]
  assign _T_873 = _T_421 ? 1'h0 : _T_872; // @[Lookup.scala 11:37:@602.4]
  assign _T_874 = _T_417 ? 1'h0 : _T_873; // @[Lookup.scala 11:37:@603.4]
  assign _T_875 = _T_413 ? 1'h0 : _T_874; // @[Lookup.scala 11:37:@604.4]
  assign _T_876 = _T_409 ? 1'h0 : _T_875; // @[Lookup.scala 11:37:@605.4]
  assign _T_877 = _T_405 ? 1'h0 : _T_876; // @[Lookup.scala 11:37:@606.4]
  assign _T_878 = _T_401 ? 1'h0 : _T_877; // @[Lookup.scala 11:37:@607.4]
  assign _T_879 = _T_397 ? 1'h0 : _T_878; // @[Lookup.scala 11:37:@608.4]
  assign _T_880 = _T_393 ? 1'h0 : _T_879; // @[Lookup.scala 11:37:@609.4]
  assign _T_881 = _T_389 ? 1'h0 : _T_880; // @[Lookup.scala 11:37:@610.4]
  assign _T_882 = _T_385 ? 1'h0 : _T_881; // @[Lookup.scala 11:37:@611.4]
  assign _T_883 = _T_381 ? 1'h0 : _T_882; // @[Lookup.scala 11:37:@612.4]
  assign _T_884 = _T_377 ? 1'h0 : _T_883; // @[Lookup.scala 11:37:@613.4]
  assign _T_885 = _T_373 ? 1'h0 : _T_884; // @[Lookup.scala 11:37:@614.4]
  assign _T_886 = _T_369 ? 1'h0 : _T_885; // @[Lookup.scala 11:37:@615.4]
  assign _T_887 = _T_365 ? 1'h0 : _T_886; // @[Lookup.scala 11:37:@616.4]
  assign _T_888 = _T_361 ? 1'h0 : _T_887; // @[Lookup.scala 11:37:@617.4]
  assign _T_889 = _T_357 ? 1'h0 : _T_888; // @[Lookup.scala 11:37:@618.4]
  assign _T_890 = _T_353 ? 1'h0 : _T_889; // @[Lookup.scala 11:37:@619.4]
  assign _T_891 = _T_349 ? 1'h0 : _T_890; // @[Lookup.scala 11:37:@620.4]
  assign _T_892 = _T_345 ? 1'h0 : _T_891; // @[Lookup.scala 11:37:@621.4]
  assign _T_893 = _T_341 ? 1'h0 : _T_892; // @[Lookup.scala 11:37:@622.4]
  assign _T_894 = _T_337 ? 1'h0 : _T_893; // @[Lookup.scala 11:37:@623.4]
  assign _T_895 = _T_333 ? 1'h0 : _T_894; // @[Lookup.scala 11:37:@624.4]
  assign _T_896 = _T_329 ? 1'h0 : _T_895; // @[Lookup.scala 11:37:@625.4]
  assign _T_897 = _T_325 ? 1'h0 : _T_896; // @[Lookup.scala 11:37:@626.4]
  assign _T_898 = _T_321 ? 1'h0 : _T_897; // @[Lookup.scala 11:37:@627.4]
  assign _T_899 = _T_317 ? 1'h0 : _T_898; // @[Lookup.scala 11:37:@628.4]
  assign _T_900 = _T_313 ? 1'h0 : _T_899; // @[Lookup.scala 11:37:@629.4]
  assign _T_901 = _T_309 ? 1'h0 : _T_900; // @[Lookup.scala 11:37:@630.4]
  assign _T_902 = _T_305 ? 1'h0 : _T_901; // @[Lookup.scala 11:37:@631.4]
  assign _T_903 = _T_301 ? 1'h0 : _T_902; // @[Lookup.scala 11:37:@632.4]
  assign _T_904 = _T_297 ? 1'h0 : _T_903; // @[Lookup.scala 11:37:@633.4]
  assign _T_905 = _T_293 ? 1'h0 : _T_904; // @[Lookup.scala 11:37:@634.4]
  assign _T_906 = _T_289 ? 1'h0 : _T_905; // @[Lookup.scala 11:37:@635.4]
  assign _T_907 = _T_285 ? 1'h0 : _T_906; // @[Lookup.scala 11:37:@636.4]
  assign _T_908 = _T_281 ? 1'h0 : _T_907; // @[Lookup.scala 11:37:@637.4]
  assign _T_909 = _T_277 ? 1'h0 : _T_908; // @[Lookup.scala 11:37:@638.4]
  assign _T_910 = _T_273 ? 1'h0 : _T_909; // @[Lookup.scala 11:37:@639.4]
  assign _T_911 = _T_269 ? 1'h0 : _T_910; // @[Lookup.scala 11:37:@640.4]
  assign _T_912 = _T_265 ? 1'h0 : _T_911; // @[Lookup.scala 11:37:@641.4]
  assign _T_913 = _T_261 ? 1'h1 : _T_912; // @[Lookup.scala 11:37:@642.4]
  assign _T_914 = _T_257 ? 1'h1 : _T_913; // @[Lookup.scala 11:37:@643.4]
  assign _T_915 = _T_253 ? 1'h1 : _T_914; // @[Lookup.scala 11:37:@644.4]
  assign _T_916 = _T_249 ? 1'h1 : _T_915; // @[Lookup.scala 11:37:@645.4]
  assign _T_917 = _T_245 ? 1'h1 : _T_916; // @[Lookup.scala 11:37:@646.4]
  assign _T_918 = _T_241 ? 1'h1 : _T_917; // @[Lookup.scala 11:37:@647.4]
  assign _T_919 = _T_237 ? 1'h1 : _T_918; // @[Lookup.scala 11:37:@648.4]
  assign cs0_3 = _T_233 ? 1'h1 : _T_919; // @[Lookup.scala 11:37:@649.4]
  assign _T_963 = _T_257 ? 1'h1 : _T_261; // @[Lookup.scala 11:37:@693.4]
  assign _T_964 = _T_253 ? 1'h1 : _T_963; // @[Lookup.scala 11:37:@694.4]
  assign _T_965 = _T_249 ? 1'h0 : _T_964; // @[Lookup.scala 11:37:@695.4]
  assign _T_966 = _T_245 ? 1'h0 : _T_965; // @[Lookup.scala 11:37:@696.4]
  assign _T_967 = _T_241 ? 1'h0 : _T_966; // @[Lookup.scala 11:37:@697.4]
  assign _T_968 = _T_237 ? 1'h0 : _T_967; // @[Lookup.scala 11:37:@698.4]
  assign cs0_4 = _T_233 ? 1'h0 : _T_968; // @[Lookup.scala 11:37:@699.4]
  assign _T_1011 = _T_261 ? 3'h2 : 3'h0; // @[Lookup.scala 11:37:@742.4]
  assign _T_1012 = _T_257 ? 3'h1 : _T_1011; // @[Lookup.scala 11:37:@743.4]
  assign _T_1013 = _T_253 ? 3'h3 : _T_1012; // @[Lookup.scala 11:37:@744.4]
  assign _T_1014 = _T_249 ? 3'h6 : _T_1013; // @[Lookup.scala 11:37:@745.4]
  assign _T_1015 = _T_245 ? 3'h2 : _T_1014; // @[Lookup.scala 11:37:@746.4]
  assign _T_1016 = _T_241 ? 3'h5 : _T_1015; // @[Lookup.scala 11:37:@747.4]
  assign _T_1017 = _T_237 ? 3'h1 : _T_1016; // @[Lookup.scala 11:37:@748.4]
  assign _T_1021 = _T_417 ? 3'h4 : 3'h0; // @[Lookup.scala 11:37:@753.4]
  assign _T_1022 = _T_413 ? 3'h4 : _T_1021; // @[Lookup.scala 11:37:@754.4]
  assign _T_1023 = _T_409 ? 3'h4 : _T_1022; // @[Lookup.scala 11:37:@755.4]
  assign _T_1024 = _T_405 ? 3'h4 : _T_1023; // @[Lookup.scala 11:37:@756.4]
  assign _T_1025 = _T_401 ? 3'h3 : _T_1024; // @[Lookup.scala 11:37:@757.4]
  assign _T_1026 = _T_397 ? 3'h3 : _T_1025; // @[Lookup.scala 11:37:@758.4]
  assign _T_1027 = _T_393 ? 3'h2 : _T_1026; // @[Lookup.scala 11:37:@759.4]
  assign _T_1028 = _T_389 ? 3'h1 : _T_1027; // @[Lookup.scala 11:37:@760.4]
  assign _T_1029 = _T_385 ? 3'h2 : _T_1028; // @[Lookup.scala 11:37:@761.4]
  assign _T_1030 = _T_381 ? 3'h1 : _T_1029; // @[Lookup.scala 11:37:@762.4]
  assign _T_1031 = _T_377 ? 3'h0 : _T_1030; // @[Lookup.scala 11:37:@763.4]
  assign _T_1032 = _T_373 ? 3'h0 : _T_1031; // @[Lookup.scala 11:37:@764.4]
  assign _T_1033 = _T_369 ? 3'h0 : _T_1032; // @[Lookup.scala 11:37:@765.4]
  assign _T_1034 = _T_365 ? 3'h0 : _T_1033; // @[Lookup.scala 11:37:@766.4]
  assign _T_1035 = _T_361 ? 3'h0 : _T_1034; // @[Lookup.scala 11:37:@767.4]
  assign _T_1036 = _T_357 ? 3'h0 : _T_1035; // @[Lookup.scala 11:37:@768.4]
  assign _T_1037 = _T_353 ? 3'h0 : _T_1036; // @[Lookup.scala 11:37:@769.4]
  assign _T_1038 = _T_349 ? 3'h0 : _T_1037; // @[Lookup.scala 11:37:@770.4]
  assign _T_1039 = _T_345 ? 3'h0 : _T_1038; // @[Lookup.scala 11:37:@771.4]
  assign _T_1040 = _T_341 ? 3'h0 : _T_1039; // @[Lookup.scala 11:37:@772.4]
  assign _T_1041 = _T_337 ? 3'h0 : _T_1040; // @[Lookup.scala 11:37:@773.4]
  assign _T_1042 = _T_333 ? 3'h0 : _T_1041; // @[Lookup.scala 11:37:@774.4]
  assign _T_1043 = _T_329 ? 3'h0 : _T_1042; // @[Lookup.scala 11:37:@775.4]
  assign _T_1044 = _T_325 ? 3'h0 : _T_1043; // @[Lookup.scala 11:37:@776.4]
  assign _T_1045 = _T_321 ? 3'h0 : _T_1044; // @[Lookup.scala 11:37:@777.4]
  assign _T_1046 = _T_317 ? 3'h0 : _T_1045; // @[Lookup.scala 11:37:@778.4]
  assign _T_1047 = _T_313 ? 3'h0 : _T_1046; // @[Lookup.scala 11:37:@779.4]
  assign _T_1048 = _T_309 ? 3'h0 : _T_1047; // @[Lookup.scala 11:37:@780.4]
  assign _T_1049 = _T_305 ? 3'h0 : _T_1048; // @[Lookup.scala 11:37:@781.4]
  assign _T_1050 = _T_301 ? 3'h0 : _T_1049; // @[Lookup.scala 11:37:@782.4]
  assign _T_1051 = _T_297 ? 3'h0 : _T_1050; // @[Lookup.scala 11:37:@783.4]
  assign _T_1052 = _T_293 ? 3'h0 : _T_1051; // @[Lookup.scala 11:37:@784.4]
  assign _T_1053 = _T_289 ? 3'h0 : _T_1052; // @[Lookup.scala 11:37:@785.4]
  assign _T_1054 = _T_285 ? 3'h0 : _T_1053; // @[Lookup.scala 11:37:@786.4]
  assign _T_1055 = _T_281 ? 3'h0 : _T_1054; // @[Lookup.scala 11:37:@787.4]
  assign _T_1056 = _T_277 ? 3'h0 : _T_1055; // @[Lookup.scala 11:37:@788.4]
  assign _T_1057 = _T_273 ? 3'h0 : _T_1056; // @[Lookup.scala 11:37:@789.4]
  assign _T_1058 = _T_269 ? 3'h0 : _T_1057; // @[Lookup.scala 11:37:@790.4]
  assign _T_1059 = _T_265 ? 3'h0 : _T_1058; // @[Lookup.scala 11:37:@791.4]
  assign _T_1060 = _T_261 ? 3'h0 : _T_1059; // @[Lookup.scala 11:37:@792.4]
  assign _T_1061 = _T_257 ? 3'h0 : _T_1060; // @[Lookup.scala 11:37:@793.4]
  assign _T_1062 = _T_253 ? 3'h0 : _T_1061; // @[Lookup.scala 11:37:@794.4]
  assign _T_1063 = _T_249 ? 3'h0 : _T_1062; // @[Lookup.scala 11:37:@795.4]
  assign _T_1064 = _T_245 ? 3'h0 : _T_1063; // @[Lookup.scala 11:37:@796.4]
  assign _T_1065 = _T_241 ? 3'h0 : _T_1064; // @[Lookup.scala 11:37:@797.4]
  assign _T_1066 = _T_237 ? 3'h0 : _T_1065; // @[Lookup.scala 11:37:@798.4]
  assign cs0_6 = _T_233 ? 3'h0 : _T_1066; // @[Lookup.scala 11:37:@799.4]
  assign _T_1069 = _T_421 ? 1'h0 : _T_425; // @[Lookup.scala 11:37:@802.4]
  assign _T_1070 = _T_417 ? 1'h0 : _T_1069; // @[Lookup.scala 11:37:@803.4]
  assign _T_1071 = _T_413 ? 1'h0 : _T_1070; // @[Lookup.scala 11:37:@804.4]
  assign _T_1072 = _T_409 ? 1'h0 : _T_1071; // @[Lookup.scala 11:37:@805.4]
  assign _T_1073 = _T_405 ? 1'h0 : _T_1072; // @[Lookup.scala 11:37:@806.4]
  assign _T_1074 = _T_401 ? 1'h0 : _T_1073; // @[Lookup.scala 11:37:@807.4]
  assign _T_1075 = _T_397 ? 1'h0 : _T_1074; // @[Lookup.scala 11:37:@808.4]
  assign _T_1076 = _T_393 ? 1'h0 : _T_1075; // @[Lookup.scala 11:37:@809.4]
  assign _T_1077 = _T_389 ? 1'h0 : _T_1076; // @[Lookup.scala 11:37:@810.4]
  assign _T_1078 = _T_385 ? 1'h0 : _T_1077; // @[Lookup.scala 11:37:@811.4]
  assign _T_1079 = _T_381 ? 1'h0 : _T_1078; // @[Lookup.scala 11:37:@812.4]
  assign _T_1080 = _T_377 ? 1'h0 : _T_1079; // @[Lookup.scala 11:37:@813.4]
  assign _T_1081 = _T_373 ? 1'h0 : _T_1080; // @[Lookup.scala 11:37:@814.4]
  assign _T_1082 = _T_369 ? 1'h0 : _T_1081; // @[Lookup.scala 11:37:@815.4]
  assign _T_1083 = _T_365 ? 1'h0 : _T_1082; // @[Lookup.scala 11:37:@816.4]
  assign _T_1084 = _T_361 ? 1'h0 : _T_1083; // @[Lookup.scala 11:37:@817.4]
  assign _T_1085 = _T_357 ? 1'h0 : _T_1084; // @[Lookup.scala 11:37:@818.4]
  assign _T_1086 = _T_353 ? 1'h0 : _T_1085; // @[Lookup.scala 11:37:@819.4]
  assign _T_1087 = _T_349 ? 1'h0 : _T_1086; // @[Lookup.scala 11:37:@820.4]
  assign _T_1088 = _T_345 ? 1'h0 : _T_1087; // @[Lookup.scala 11:37:@821.4]
  assign _T_1089 = _T_341 ? 1'h0 : _T_1088; // @[Lookup.scala 11:37:@822.4]
  assign _T_1090 = _T_337 ? 1'h0 : _T_1089; // @[Lookup.scala 11:37:@823.4]
  assign _T_1091 = _T_333 ? 1'h0 : _T_1090; // @[Lookup.scala 11:37:@824.4]
  assign _T_1092 = _T_329 ? 1'h0 : _T_1091; // @[Lookup.scala 11:37:@825.4]
  assign _T_1093 = _T_325 ? 1'h0 : _T_1092; // @[Lookup.scala 11:37:@826.4]
  assign _T_1094 = _T_321 ? 1'h0 : _T_1093; // @[Lookup.scala 11:37:@827.4]
  assign _T_1095 = _T_317 ? 1'h0 : _T_1094; // @[Lookup.scala 11:37:@828.4]
  assign _T_1096 = _T_313 ? 1'h0 : _T_1095; // @[Lookup.scala 11:37:@829.4]
  assign _T_1097 = _T_309 ? 1'h0 : _T_1096; // @[Lookup.scala 11:37:@830.4]
  assign _T_1098 = _T_305 ? 1'h0 : _T_1097; // @[Lookup.scala 11:37:@831.4]
  assign _T_1099 = _T_301 ? 1'h0 : _T_1098; // @[Lookup.scala 11:37:@832.4]
  assign _T_1100 = _T_297 ? 1'h0 : _T_1099; // @[Lookup.scala 11:37:@833.4]
  assign _T_1101 = _T_293 ? 1'h0 : _T_1100; // @[Lookup.scala 11:37:@834.4]
  assign _T_1102 = _T_289 ? 1'h0 : _T_1101; // @[Lookup.scala 11:37:@835.4]
  assign _T_1103 = _T_285 ? 1'h0 : _T_1102; // @[Lookup.scala 11:37:@836.4]
  assign _T_1104 = _T_281 ? 1'h0 : _T_1103; // @[Lookup.scala 11:37:@837.4]
  assign _T_1105 = _T_277 ? 1'h0 : _T_1104; // @[Lookup.scala 11:37:@838.4]
  assign _T_1106 = _T_273 ? 1'h0 : _T_1105; // @[Lookup.scala 11:37:@839.4]
  assign _T_1107 = _T_269 ? 1'h0 : _T_1106; // @[Lookup.scala 11:37:@840.4]
  assign _T_1108 = _T_265 ? 1'h0 : _T_1107; // @[Lookup.scala 11:37:@841.4]
  assign _T_1109 = _T_261 ? 1'h0 : _T_1108; // @[Lookup.scala 11:37:@842.4]
  assign _T_1110 = _T_257 ? 1'h0 : _T_1109; // @[Lookup.scala 11:37:@843.4]
  assign _T_1111 = _T_253 ? 1'h0 : _T_1110; // @[Lookup.scala 11:37:@844.4]
  assign _T_1112 = _T_249 ? 1'h0 : _T_1111; // @[Lookup.scala 11:37:@845.4]
  assign _T_1113 = _T_245 ? 1'h0 : _T_1112; // @[Lookup.scala 11:37:@846.4]
  assign _T_1114 = _T_241 ? 1'h0 : _T_1113; // @[Lookup.scala 11:37:@847.4]
  assign _T_1115 = _T_237 ? 1'h0 : _T_1114; // @[Lookup.scala 11:37:@848.4]
  assign cs0_7 = _T_233 ? 1'h0 : _T_1115; // @[Lookup.scala 11:37:@849.4]
  assign _T_1116 = io_dat_exe_br_type == 4'h0; // @[Cpath.scala 132:49:@850.4]
  assign _T_1117 = io_dat_exe_br_type == 4'h1; // @[Cpath.scala 133:49:@851.4]
  assign _T_1119 = io_dat_exe_br_eq == 1'h0; // @[Cpath.scala 133:65:@852.4]
  assign _T_1120 = _T_1119 ? 2'h1 : 2'h0; // @[Cpath.scala 133:64:@853.4]
  assign _T_1121 = io_dat_exe_br_type == 4'h2; // @[Cpath.scala 134:49:@854.4]
  assign _T_1122 = io_dat_exe_br_eq ? 2'h1 : 2'h0; // @[Cpath.scala 134:64:@855.4]
  assign _T_1123 = io_dat_exe_br_type == 4'h3; // @[Cpath.scala 135:49:@856.4]
  assign _T_1125 = io_dat_exe_br_lt == 1'h0; // @[Cpath.scala 135:65:@857.4]
  assign _T_1126 = _T_1125 ? 2'h1 : 2'h0; // @[Cpath.scala 135:64:@858.4]
  assign _T_1127 = io_dat_exe_br_type == 4'h4; // @[Cpath.scala 136:49:@859.4]
  assign _T_1129 = io_dat_exe_br_ltu == 1'h0; // @[Cpath.scala 136:65:@860.4]
  assign _T_1130 = _T_1129 ? 2'h1 : 2'h0; // @[Cpath.scala 136:64:@861.4]
  assign _T_1131 = io_dat_exe_br_type == 4'h5; // @[Cpath.scala 137:49:@862.4]
  assign _T_1132 = io_dat_exe_br_lt ? 2'h1 : 2'h0; // @[Cpath.scala 137:64:@863.4]
  assign _T_1133 = io_dat_exe_br_type == 4'h6; // @[Cpath.scala 138:49:@864.4]
  assign _T_1134 = io_dat_exe_br_ltu ? 2'h1 : 2'h0; // @[Cpath.scala 138:64:@865.4]
  assign _T_1135 = io_dat_exe_br_type == 4'h7; // @[Cpath.scala 139:49:@866.4]
  assign _T_1136 = io_dat_exe_br_type == 4'h8; // @[Cpath.scala 140:49:@867.4]
  assign _T_1137 = _T_1136 ? 2'h2 : 2'h0; // @[Cpath.scala 140:29:@868.4]
  assign _T_1138 = _T_1135 ? 2'h1 : _T_1137; // @[Cpath.scala 139:29:@869.4]
  assign _T_1139 = _T_1133 ? _T_1134 : _T_1138; // @[Cpath.scala 138:29:@870.4]
  assign _T_1140 = _T_1131 ? _T_1132 : _T_1139; // @[Cpath.scala 137:29:@871.4]
  assign _T_1141 = _T_1127 ? _T_1130 : _T_1140; // @[Cpath.scala 136:29:@872.4]
  assign _T_1142 = _T_1123 ? _T_1126 : _T_1141; // @[Cpath.scala 135:29:@873.4]
  assign _T_1143 = _T_1121 ? _T_1122 : _T_1142; // @[Cpath.scala 134:29:@874.4]
  assign _T_1144 = _T_1117 ? _T_1120 : _T_1143; // @[Cpath.scala 133:29:@875.4]
  assign _T_1145 = _T_1116 ? 2'h0 : _T_1144; // @[Cpath.scala 132:29:@876.4]
  assign ctrl_exe_pc_sel = io_ctl_pipeline_kill ? 2'h3 : _T_1145; // @[Cpath.scala 131:29:@877.4]
  assign _T_1146 = ctrl_exe_pc_sel != 2'h0; // @[Cpath.scala 144:35:@878.4]
  assign _T_1150 = _T_1146 | cs0_7; // @[Cpath.scala 144:68:@881.4]
  assign dec_exception = cs_val_inst == 1'h0; // @[Cpath.scala 151:25:@888.4]
  assign dec_rs1_addr = io_dat_dec_inst[19:15]; // @[Cpath.scala 156:38:@891.4]
  assign dec_rs2_addr = io_dat_dec_inst[24:20]; // @[Cpath.scala 157:38:@892.4]
  assign dec_wbaddr = io_dat_dec_inst[11:7]; // @[Cpath.scala 158:38:@893.4]
  assign dec_rs1_oen = _T_1146 ? 1'h0 : cs_rs1_oen; // @[Cpath.scala 159:26:@894.4]
  assign dec_rs2_oen = _T_1146 ? 1'h0 : cs_rs2_oen; // @[Cpath.scala 160:26:@895.4]
  assign _T_1198 = exe_reg_wbaddr == dec_rs1_addr; // @[Cpath.scala 217:53:@945.4]
  assign _T_1199 = exe_inst_is_load & _T_1198; // @[Cpath.scala 217:34:@946.4]
  assign _T_1201 = exe_reg_wbaddr != 5'h0; // @[Cpath.scala 217:90:@947.4]
  assign _T_1202 = _T_1199 & _T_1201; // @[Cpath.scala 217:71:@948.4]
  assign _T_1203 = _T_1202 & dec_rs1_oen; // @[Cpath.scala 217:99:@949.4]
  assign _T_1204 = exe_reg_wbaddr == dec_rs2_addr; // @[Cpath.scala 218:53:@950.4]
  assign _T_1205 = exe_inst_is_load & _T_1204; // @[Cpath.scala 218:34:@951.4]
  assign _T_1208 = _T_1205 & _T_1201; // @[Cpath.scala 218:71:@953.4]
  assign _T_1209 = _T_1208 & dec_rs2_oen; // @[Cpath.scala 218:99:@954.4]
  assign _T_1210 = _T_1203 | _T_1209; // @[Cpath.scala 217:115:@955.4]
  assign stall = _T_1210 | exe_reg_is_csr; // @[Cpath.scala 218:115:@956.4]
  assign _T_1174 = stall == 1'h0; // @[Cpath.scala 174:10:@905.4]
  assign _T_1214 = io_dat_mem_ctrl_dmem_val & io_dmem_resp_valid; // @[Cpath.scala 225:53:@959.4]
  assign _T_1216 = io_dat_mem_ctrl_dmem_val == 1'h0; // @[Cpath.scala 225:79:@960.4]
  assign _T_1217 = _T_1214 | _T_1216; // @[Cpath.scala 225:76:@961.4]
  assign full_stall = _T_1217 == 1'h0; // @[Cpath.scala 225:41:@962.4]
  assign _T_1176 = full_stall == 1'h0; // @[Cpath.scala 174:20:@906.4]
  assign _T_1177 = _T_1174 & _T_1176; // @[Cpath.scala 174:17:@907.4]
  assign _T_1182 = cs0_6 != 3'h0; // @[Cpath.scala 187:44:@918.8]
  assign _T_1183 = cs0_6 != 3'h4; // @[Cpath.scala 187:68:@919.8]
  assign _T_1184 = _T_1182 & _T_1183; // @[Cpath.scala 187:54:@920.8]
  assign _GEN_0 = _T_1146 ? 5'h0 : dec_wbaddr; // @[Cpath.scala 177:7:@909.6]
  assign _GEN_2 = _T_1146 ? 1'h0 : _T_1184; // @[Cpath.scala 177:7:@909.6]
  assign _GEN_3 = _T_1146 ? 1'h0 : dec_exception; // @[Cpath.scala 177:7:@909.6]
  assign _T_1187 = stall & _T_1176; // @[Cpath.scala 191:21:@927.6]
  assign _GEN_4 = _T_1187 ? 5'h0 : exe_reg_wbaddr; // @[Cpath.scala 192:4:@928.6]
  assign _GEN_6 = _T_1187 ? 1'h0 : exe_reg_is_csr; // @[Cpath.scala 192:4:@928.6]
  assign _GEN_7 = _T_1187 ? 1'h0 : exe_reg_exception; // @[Cpath.scala 192:4:@928.6]
  assign _GEN_10 = _T_1177 ? _GEN_2 : _GEN_6; // @[Cpath.scala 175:4:@908.4]
  assign _GEN_11 = _T_1177 ? _GEN_3 : _GEN_7; // @[Cpath.scala 175:4:@908.4]
  assign _T_1196 = cs0_4 == 1'h0; // @[Cpath.scala 209:52:@941.6]
  assign _T_1197 = cs0_3 & _T_1196; // @[Cpath.scala 209:37:@942.6]
  assign _GEN_12 = _T_1176 ? _T_1197 : exe_inst_is_load; // @[Cpath.scala 208:4:@940.4]
  assign _T_1226 = cs0_6 == 3'h2; // @[Cpath.scala 249:30:@984.4]
  assign _T_1227 = cs0_6 == 3'h3; // @[Cpath.scala 249:54:@985.4]
  assign _T_1228 = _T_1226 | _T_1227; // @[Cpath.scala 249:40:@986.4]
  assign _T_1230 = dec_rs1_addr == 5'h0; // @[Cpath.scala 249:77:@987.4]
  assign csr_ren = _T_1228 & _T_1230; // @[Cpath.scala 249:65:@988.4]
  assign io_ctl_dec_stall = _T_1210 | exe_reg_is_csr; // @[Cpath.scala 228:22:@965.4]
  assign io_ctl_full_stall = _T_1217 == 1'h0; // @[Cpath.scala 229:22:@966.4]
  assign io_ctl_exe_pc_sel = io_ctl_pipeline_kill ? 2'h3 : _T_1145; // @[Cpath.scala 230:22:@967.4]
  assign io_ctl_br_type = _T_233 ? 4'h0 : _T_527; // @[Cpath.scala 231:22:@968.4]
  assign io_ctl_if_kill = _T_1150 | _T_1152; // @[Cpath.scala 232:22:@969.4]
  assign io_ctl_dec_kill = ctrl_exe_pc_sel != 2'h0; // @[Cpath.scala 233:22:@970.4]
  assign io_ctl_op1_sel = _T_233 ? 2'h0 : _T_576; // @[Cpath.scala 234:22:@971.4]
  assign io_ctl_op2_sel = _T_233 ? 3'h1 : _T_625; // @[Cpath.scala 235:22:@972.4]
  assign io_ctl_alu_fun = _T_233 ? 4'h0 : _T_772; // @[Cpath.scala 236:22:@973.4]
  assign io_ctl_wb_sel = _T_233 ? 2'h1 : _T_821; // @[Cpath.scala 237:22:@974.4]
  assign io_ctl_rf_wen = _T_233 ? 1'h1 : _T_870; // @[Cpath.scala 238:22:@975.4]
  assign io_ctl_mem_val = _T_233 ? 1'h1 : _T_919; // @[Cpath.scala 255:22:@994.4]
  assign io_ctl_mem_fcn = {{1'd0}, cs0_4}; // @[Cpath.scala 256:22:@995.4]
  assign io_ctl_mem_typ = _T_233 ? 3'h3 : _T_1017; // @[Cpath.scala 257:21:@996.4]
  assign io_ctl_csr_cmd = csr_ren ? 3'h5 : cs0_6; // @[Cpath.scala 250:19:@990.4]
  assign io_ctl_fencei = cs0_7 | _T_1222; // @[Cpath.scala 242:22:@979.4]
  assign io_ctl_pipeline_kill = io_dat_csr_eret | io_ctl_mem_exception; // @[Cpath.scala 149:25:@887.4]
  assign io_ctl_mem_exception = _T_1225; // @[Cpath.scala 244:25:@982.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  _T_1152 = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  exe_reg_wbaddr = _RAND_1[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  exe_reg_exception = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  exe_reg_is_csr = _RAND_3[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  exe_inst_is_load = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  _T_1222 = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  _T_1225 = _RAND_6[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (_T_233) begin
      _T_1152 <= 1'h0;
    end else begin
      if (_T_237) begin
        _T_1152 <= 1'h0;
      end else begin
        if (_T_241) begin
          _T_1152 <= 1'h0;
        end else begin
          if (_T_245) begin
            _T_1152 <= 1'h0;
          end else begin
            if (_T_249) begin
              _T_1152 <= 1'h0;
            end else begin
              if (_T_253) begin
                _T_1152 <= 1'h0;
              end else begin
                if (_T_257) begin
                  _T_1152 <= 1'h0;
                end else begin
                  if (_T_261) begin
                    _T_1152 <= 1'h0;
                  end else begin
                    if (_T_265) begin
                      _T_1152 <= 1'h0;
                    end else begin
                      if (_T_269) begin
                        _T_1152 <= 1'h0;
                      end else begin
                        if (_T_273) begin
                          _T_1152 <= 1'h0;
                        end else begin
                          if (_T_277) begin
                            _T_1152 <= 1'h0;
                          end else begin
                            if (_T_281) begin
                              _T_1152 <= 1'h0;
                            end else begin
                              if (_T_285) begin
                                _T_1152 <= 1'h0;
                              end else begin
                                if (_T_289) begin
                                  _T_1152 <= 1'h0;
                                end else begin
                                  if (_T_293) begin
                                    _T_1152 <= 1'h0;
                                  end else begin
                                    if (_T_297) begin
                                      _T_1152 <= 1'h0;
                                    end else begin
                                      if (_T_301) begin
                                        _T_1152 <= 1'h0;
                                      end else begin
                                        if (_T_305) begin
                                          _T_1152 <= 1'h0;
                                        end else begin
                                          if (_T_309) begin
                                            _T_1152 <= 1'h0;
                                          end else begin
                                            if (_T_313) begin
                                              _T_1152 <= 1'h0;
                                            end else begin
                                              if (_T_317) begin
                                                _T_1152 <= 1'h0;
                                              end else begin
                                                if (_T_321) begin
                                                  _T_1152 <= 1'h0;
                                                end else begin
                                                  if (_T_325) begin
                                                    _T_1152 <= 1'h0;
                                                  end else begin
                                                    if (_T_329) begin
                                                      _T_1152 <= 1'h0;
                                                    end else begin
                                                      if (_T_333) begin
                                                        _T_1152 <= 1'h0;
                                                      end else begin
                                                        if (_T_337) begin
                                                          _T_1152 <= 1'h0;
                                                        end else begin
                                                          if (_T_341) begin
                                                            _T_1152 <= 1'h0;
                                                          end else begin
                                                            if (_T_345) begin
                                                              _T_1152 <= 1'h0;
                                                            end else begin
                                                              if (_T_349) begin
                                                                _T_1152 <= 1'h0;
                                                              end else begin
                                                                if (_T_353) begin
                                                                  _T_1152 <= 1'h0;
                                                                end else begin
                                                                  if (_T_357) begin
                                                                    _T_1152 <= 1'h0;
                                                                  end else begin
                                                                    if (_T_361) begin
                                                                      _T_1152 <= 1'h0;
                                                                    end else begin
                                                                      if (_T_365) begin
                                                                        _T_1152 <= 1'h0;
                                                                      end else begin
                                                                        if (_T_369) begin
                                                                          _T_1152 <= 1'h0;
                                                                        end else begin
                                                                          if (_T_373) begin
                                                                            _T_1152 <= 1'h0;
                                                                          end else begin
                                                                            if (_T_377) begin
                                                                              _T_1152 <= 1'h0;
                                                                            end else begin
                                                                              if (_T_381) begin
                                                                                _T_1152 <= 1'h0;
                                                                              end else begin
                                                                                if (_T_385) begin
                                                                                  _T_1152 <= 1'h0;
                                                                                end else begin
                                                                                  if (_T_389) begin
                                                                                    _T_1152 <= 1'h0;
                                                                                  end else begin
                                                                                    if (_T_393) begin
                                                                                      _T_1152 <= 1'h0;
                                                                                    end else begin
                                                                                      if (_T_397) begin
                                                                                        _T_1152 <= 1'h0;
                                                                                      end else begin
                                                                                        if (_T_401) begin
                                                                                          _T_1152 <= 1'h0;
                                                                                        end else begin
                                                                                          if (_T_405) begin
                                                                                            _T_1152 <= 1'h0;
                                                                                          end else begin
                                                                                            if (_T_409) begin
                                                                                              _T_1152 <= 1'h0;
                                                                                            end else begin
                                                                                              if (_T_413) begin
                                                                                                _T_1152 <= 1'h0;
                                                                                              end else begin
                                                                                                if (_T_417) begin
                                                                                                  _T_1152 <= 1'h0;
                                                                                                end else begin
                                                                                                  if (_T_421) begin
                                                                                                    _T_1152 <= 1'h0;
                                                                                                  end else begin
                                                                                                    _T_1152 <= _T_425;
                                                                                                  end
                                                                                                end
                                                                                              end
                                                                                            end
                                                                                          end
                                                                                        end
                                                                                      end
                                                                                    end
                                                                                  end
                                                                                end
                                                                              end
                                                                            end
                                                                          end
                                                                        end
                                                                      end
                                                                    end
                                                                  end
                                                                end
                                                              end
                                                            end
                                                          end
                                                        end
                                                      end
                                                    end
                                                  end
                                                end
                                              end
                                            end
                                          end
                                        end
                                      end
                                    end
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (_T_1177) begin
      if (_T_1146) begin
        exe_reg_wbaddr <= 5'h0;
      end else begin
        exe_reg_wbaddr <= dec_wbaddr;
      end
    end else begin
      if (_T_1187) begin
        exe_reg_wbaddr <= 5'h0;
      end
    end
    if (reset) begin
      exe_reg_exception <= 1'h0;
    end else begin
      if (_T_1177) begin
        if (_T_1146) begin
          exe_reg_exception <= 1'h0;
        end else begin
          exe_reg_exception <= dec_exception;
        end
      end else begin
        if (_T_1187) begin
          exe_reg_exception <= 1'h0;
        end
      end
    end
    if (reset) begin
      exe_reg_is_csr <= 1'h0;
    end else begin
      if (_T_1177) begin
        if (_T_1146) begin
          exe_reg_is_csr <= 1'h0;
        end else begin
          exe_reg_is_csr <= _T_1184;
        end
      end else begin
        if (_T_1187) begin
          exe_reg_is_csr <= 1'h0;
        end
      end
    end
    if (reset) begin
      exe_inst_is_load <= 1'h0;
    end else begin
      if (_T_1176) begin
        exe_inst_is_load <= _T_1197;
      end
    end
    if (_T_233) begin
      _T_1222 <= 1'h0;
    end else begin
      if (_T_237) begin
        _T_1222 <= 1'h0;
      end else begin
        if (_T_241) begin
          _T_1222 <= 1'h0;
        end else begin
          if (_T_245) begin
            _T_1222 <= 1'h0;
          end else begin
            if (_T_249) begin
              _T_1222 <= 1'h0;
            end else begin
              if (_T_253) begin
                _T_1222 <= 1'h0;
              end else begin
                if (_T_257) begin
                  _T_1222 <= 1'h0;
                end else begin
                  if (_T_261) begin
                    _T_1222 <= 1'h0;
                  end else begin
                    if (_T_265) begin
                      _T_1222 <= 1'h0;
                    end else begin
                      if (_T_269) begin
                        _T_1222 <= 1'h0;
                      end else begin
                        if (_T_273) begin
                          _T_1222 <= 1'h0;
                        end else begin
                          if (_T_277) begin
                            _T_1222 <= 1'h0;
                          end else begin
                            if (_T_281) begin
                              _T_1222 <= 1'h0;
                            end else begin
                              if (_T_285) begin
                                _T_1222 <= 1'h0;
                              end else begin
                                if (_T_289) begin
                                  _T_1222 <= 1'h0;
                                end else begin
                                  if (_T_293) begin
                                    _T_1222 <= 1'h0;
                                  end else begin
                                    if (_T_297) begin
                                      _T_1222 <= 1'h0;
                                    end else begin
                                      if (_T_301) begin
                                        _T_1222 <= 1'h0;
                                      end else begin
                                        if (_T_305) begin
                                          _T_1222 <= 1'h0;
                                        end else begin
                                          if (_T_309) begin
                                            _T_1222 <= 1'h0;
                                          end else begin
                                            if (_T_313) begin
                                              _T_1222 <= 1'h0;
                                            end else begin
                                              if (_T_317) begin
                                                _T_1222 <= 1'h0;
                                              end else begin
                                                if (_T_321) begin
                                                  _T_1222 <= 1'h0;
                                                end else begin
                                                  if (_T_325) begin
                                                    _T_1222 <= 1'h0;
                                                  end else begin
                                                    if (_T_329) begin
                                                      _T_1222 <= 1'h0;
                                                    end else begin
                                                      if (_T_333) begin
                                                        _T_1222 <= 1'h0;
                                                      end else begin
                                                        if (_T_337) begin
                                                          _T_1222 <= 1'h0;
                                                        end else begin
                                                          if (_T_341) begin
                                                            _T_1222 <= 1'h0;
                                                          end else begin
                                                            if (_T_345) begin
                                                              _T_1222 <= 1'h0;
                                                            end else begin
                                                              if (_T_349) begin
                                                                _T_1222 <= 1'h0;
                                                              end else begin
                                                                if (_T_353) begin
                                                                  _T_1222 <= 1'h0;
                                                                end else begin
                                                                  if (_T_357) begin
                                                                    _T_1222 <= 1'h0;
                                                                  end else begin
                                                                    if (_T_361) begin
                                                                      _T_1222 <= 1'h0;
                                                                    end else begin
                                                                      if (_T_365) begin
                                                                        _T_1222 <= 1'h0;
                                                                      end else begin
                                                                        if (_T_369) begin
                                                                          _T_1222 <= 1'h0;
                                                                        end else begin
                                                                          if (_T_373) begin
                                                                            _T_1222 <= 1'h0;
                                                                          end else begin
                                                                            if (_T_377) begin
                                                                              _T_1222 <= 1'h0;
                                                                            end else begin
                                                                              if (_T_381) begin
                                                                                _T_1222 <= 1'h0;
                                                                              end else begin
                                                                                if (_T_385) begin
                                                                                  _T_1222 <= 1'h0;
                                                                                end else begin
                                                                                  if (_T_389) begin
                                                                                    _T_1222 <= 1'h0;
                                                                                  end else begin
                                                                                    if (_T_393) begin
                                                                                      _T_1222 <= 1'h0;
                                                                                    end else begin
                                                                                      if (_T_397) begin
                                                                                        _T_1222 <= 1'h0;
                                                                                      end else begin
                                                                                        if (_T_401) begin
                                                                                          _T_1222 <= 1'h0;
                                                                                        end else begin
                                                                                          if (_T_405) begin
                                                                                            _T_1222 <= 1'h0;
                                                                                          end else begin
                                                                                            if (_T_409) begin
                                                                                              _T_1222 <= 1'h0;
                                                                                            end else begin
                                                                                              if (_T_413) begin
                                                                                                _T_1222 <= 1'h0;
                                                                                              end else begin
                                                                                                if (_T_417) begin
                                                                                                  _T_1222 <= 1'h0;
                                                                                                end else begin
                                                                                                  if (_T_421) begin
                                                                                                    _T_1222 <= 1'h0;
                                                                                                  end else begin
                                                                                                    _T_1222 <= _T_425;
                                                                                                  end
                                                                                                end
                                                                                              end
                                                                                            end
                                                                                          end
                                                                                        end
                                                                                      end
                                                                                    end
                                                                                  end
                                                                                end
                                                                              end
                                                                            end
                                                                          end
                                                                        end
                                                                      end
                                                                    end
                                                                  end
                                                                end
                                                              end
                                                            end
                                                          end
                                                        end
                                                      end
                                                    end
                                                  end
                                                end
                                              end
                                            end
                                          end
                                        end
                                      end
                                    end
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    _T_1225 <= exe_reg_exception;
  end
endmodule
module RegisterFile( // @[:@998.2]
  input         clock, // @[:@999.4]
  input  [4:0]  io_rs1_addr, // @[:@1001.4]
  output [31:0] io_rs1_data, // @[:@1001.4]
  input  [4:0]  io_rs2_addr, // @[:@1001.4]
  output [31:0] io_rs2_data, // @[:@1001.4]
  input  [4:0]  io_dm_addr, // @[:@1001.4]
  output [31:0] io_dm_rdata, // @[:@1001.4]
  input  [31:0] io_dm_wdata, // @[:@1001.4]
  input  [4:0]  io_waddr, // @[:@1001.4]
  input  [31:0] io_wdata, // @[:@1001.4]
  input         io_wen // @[:@1001.4]
);
  reg [31:0] regfile [0:31]; // @[Regfile.scala 31:21:@1003.4]
  reg [31:0] _RAND_0;
  wire [31:0] regfile__T_39_data; // @[Regfile.scala 31:21:@1003.4]
  wire [4:0] regfile__T_39_addr; // @[Regfile.scala 31:21:@1003.4]
  wire [31:0] regfile__T_44_data; // @[Regfile.scala 31:21:@1003.4]
  wire [4:0] regfile__T_44_addr; // @[Regfile.scala 31:21:@1003.4]
  wire [31:0] regfile__T_49_data; // @[Regfile.scala 31:21:@1003.4]
  wire [4:0] regfile__T_49_addr; // @[Regfile.scala 31:21:@1003.4]
  wire [31:0] regfile__T_32_data; // @[Regfile.scala 31:21:@1003.4]
  wire [4:0] regfile__T_32_addr; // @[Regfile.scala 31:21:@1003.4]
  wire  regfile__T_32_mask; // @[Regfile.scala 31:21:@1003.4]
  wire  regfile__T_32_en; // @[Regfile.scala 31:21:@1003.4]
  wire [31:0] regfile__T_36_data; // @[Regfile.scala 31:21:@1003.4]
  wire [4:0] regfile__T_36_addr; // @[Regfile.scala 31:21:@1003.4]
  wire  regfile__T_36_mask; // @[Regfile.scala 31:21:@1003.4]
  wire  regfile__T_36_en; // @[Regfile.scala 31:21:@1003.4]
  wire  _T_30; // @[Regfile.scala 33:30:@1004.4]
  wire  _T_34; // @[Regfile.scala 38:34:@1010.4]
  wire  _T_38; // @[Regfile.scala 43:35:@1016.4]
  wire  _T_43; // @[Regfile.scala 44:35:@1020.4]
  assign regfile__T_39_addr = io_rs1_addr;
  assign regfile__T_39_data = regfile[regfile__T_39_addr]; // @[Regfile.scala 31:21:@1003.4]
  assign regfile__T_44_addr = io_rs2_addr;
  assign regfile__T_44_data = regfile[regfile__T_44_addr]; // @[Regfile.scala 31:21:@1003.4]
  assign regfile__T_49_addr = io_dm_addr;
  assign regfile__T_49_data = regfile[regfile__T_49_addr]; // @[Regfile.scala 31:21:@1003.4]
  assign regfile__T_32_data = io_wdata;
  assign regfile__T_32_addr = io_waddr;
  assign regfile__T_32_mask = 1'h1;
  assign regfile__T_32_en = io_wen & _T_30;
  assign regfile__T_36_data = io_dm_wdata;
  assign regfile__T_36_addr = io_dm_addr;
  assign regfile__T_36_mask = 1'h1;
  assign regfile__T_36_en = io_dm_addr != 5'h0;
  assign _T_30 = io_waddr != 5'h0; // @[Regfile.scala 33:30:@1004.4]
  assign _T_34 = io_dm_addr != 5'h0; // @[Regfile.scala 38:34:@1010.4]
  assign _T_38 = io_rs1_addr != 5'h0; // @[Regfile.scala 43:35:@1016.4]
  assign _T_43 = io_rs2_addr != 5'h0; // @[Regfile.scala 44:35:@1020.4]
  assign io_rs1_data = _T_38 ? regfile__T_39_data : 32'h0; // @[Regfile.scala 43:16:@1019.4]
  assign io_rs2_data = _T_43 ? regfile__T_44_data : 32'h0; // @[Regfile.scala 44:16:@1023.4]
  assign io_dm_rdata = _T_34 ? regfile__T_49_data : 32'h0; // @[Regfile.scala 45:16:@1027.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  _RAND_0 = {1{`RANDOM}};
  `ifdef RANDOMIZE_MEM_INIT
  for (initvar = 0; initvar < 32; initvar = initvar+1)
    regfile[initvar] = _RAND_0[31:0];
  `endif // RANDOMIZE_MEM_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if(regfile__T_32_en & regfile__T_32_mask) begin
      regfile[regfile__T_32_addr] <= regfile__T_32_data; // @[Regfile.scala 31:21:@1003.4]
    end
    if(regfile__T_36_en & regfile__T_36_mask) begin
      regfile[regfile__T_36_addr] <= regfile__T_36_data; // @[Regfile.scala 31:21:@1003.4]
    end
  end
endmodule
module CSRFile( // @[:@1029.2]
  input         clock, // @[:@1030.4]
  input         reset, // @[:@1031.4]
  input  [2:0]  io_rw_cmd, // @[:@1032.4]
  output [31:0] io_rw_rdata, // @[:@1032.4]
  input  [31:0] io_rw_wdata, // @[:@1032.4]
  output        io_eret, // @[:@1032.4]
  input  [11:0] io_decode_csr, // @[:@1032.4]
  output        io_status_debug, // @[:@1032.4]
  output [1:0]  io_status_prv, // @[:@1032.4]
  output        io_status_sd, // @[:@1032.4]
  output [7:0]  io_status_zero1, // @[:@1032.4]
  output        io_status_tsr, // @[:@1032.4]
  output        io_status_tw, // @[:@1032.4]
  output        io_status_tvm, // @[:@1032.4]
  output        io_status_mxr, // @[:@1032.4]
  output        io_status_sum, // @[:@1032.4]
  output        io_status_mprv, // @[:@1032.4]
  output [1:0]  io_status_xs, // @[:@1032.4]
  output [1:0]  io_status_fs, // @[:@1032.4]
  output [1:0]  io_status_mpp, // @[:@1032.4]
  output [1:0]  io_status_hpp, // @[:@1032.4]
  output        io_status_spp, // @[:@1032.4]
  output        io_status_mpie, // @[:@1032.4]
  output        io_status_hpie, // @[:@1032.4]
  output        io_status_spie, // @[:@1032.4]
  output        io_status_upie, // @[:@1032.4]
  output        io_status_mie, // @[:@1032.4]
  output        io_status_hie, // @[:@1032.4]
  output        io_status_sie, // @[:@1032.4]
  output        io_status_uie, // @[:@1032.4]
  output [31:0] io_evec, // @[:@1032.4]
  input         io_exception, // @[:@1032.4]
  input         io_retire, // @[:@1032.4]
  input  [31:0] io_pc, // @[:@1032.4]
  output [31:0] io_time // @[:@1032.4]
);
  reg [1:0] reg_mstatus_prv; // @[CSR.scala 159:28:@1208.4]
  reg [31:0] _RAND_0;
  reg  reg_mstatus_mpie; // @[CSR.scala 159:28:@1208.4]
  reg [31:0] _RAND_1;
  reg  reg_mstatus_mie; // @[CSR.scala 159:28:@1208.4]
  reg [31:0] _RAND_2;
  reg [31:0] reg_mepc; // @[CSR.scala 160:21:@1209.4]
  reg [31:0] _RAND_3;
  reg [31:0] reg_mcause; // @[CSR.scala 161:23:@1210.4]
  reg [31:0] _RAND_4;
  reg [31:0] reg_mtval; // @[CSR.scala 162:22:@1211.4]
  reg [31:0] _RAND_5;
  reg [31:0] reg_mscratch; // @[CSR.scala 163:25:@1212.4]
  reg [31:0] _RAND_6;
  reg [31:0] reg_medeleg; // @[CSR.scala 165:24:@1214.4]
  reg [31:0] _RAND_7;
  reg  reg_mip_mtip; // @[CSR.scala 167:24:@1250.4]
  reg [31:0] _RAND_8;
  reg  reg_mip_msip; // @[CSR.scala 167:24:@1250.4]
  reg [31:0] _RAND_9;
  reg  reg_mie_mtip; // @[CSR.scala 168:24:@1286.4]
  reg [31:0] _RAND_10;
  reg  reg_mie_msip; // @[CSR.scala 168:24:@1286.4]
  reg [31:0] _RAND_11;
  reg [5:0] _T_258; // @[Util.scala 112:41:@1289.4]
  reg [31:0] _RAND_12;
  wire [6:0] _T_259; // @[Util.scala 113:33:@1290.4]
  reg [57:0] _T_262; // @[Util.scala 117:31:@1292.4]
  reg [63:0] _RAND_13;
  wire  _T_263; // @[Util.scala 118:20:@1293.4]
  wire [58:0] _T_265; // @[Util.scala 118:43:@1295.6]
  wire [57:0] _T_266; // @[Util.scala 118:43:@1296.6]
  wire [57:0] _GEN_0; // @[Util.scala 118:34:@1294.4]
  wire [63:0] _T_267; // @[Cat.scala 30:58:@1299.4]
  reg [5:0] _T_270; // @[Util.scala 112:41:@1300.4]
  reg [31:0] _RAND_14;
  wire [5:0] _GEN_153; // @[Util.scala 113:33:@1301.4]
  wire [6:0] _T_271; // @[Util.scala 113:33:@1301.4]
  reg [57:0] _T_274; // @[Util.scala 117:31:@1303.4]
  reg [63:0] _RAND_15;
  wire  _T_275; // @[Util.scala 118:20:@1304.4]
  wire [58:0] _T_277; // @[Util.scala 118:43:@1306.6]
  wire [57:0] _T_278; // @[Util.scala 118:43:@1307.6]
  wire [57:0] _GEN_1; // @[Util.scala 118:34:@1305.4]
  wire [63:0] _T_279; // @[Cat.scala 30:58:@1310.4]
  reg [39:0] _T_282; // @[Util.scala 112:74:@1312.4]
  reg [63:0] _RAND_16;
  wire [40:0] _T_283; // @[Util.scala 113:33:@1313.4]
  reg [39:0] _T_285; // @[Util.scala 112:74:@1315.4]
  reg [63:0] _RAND_17;
  wire [40:0] _T_286; // @[Util.scala 113:33:@1316.4]
  reg [39:0] _T_288; // @[Util.scala 112:74:@1318.4]
  reg [63:0] _RAND_18;
  wire [40:0] _T_289; // @[Util.scala 113:33:@1319.4]
  reg [39:0] _T_291; // @[Util.scala 112:74:@1321.4]
  reg [63:0] _RAND_19;
  wire [40:0] _T_292; // @[Util.scala 113:33:@1322.4]
  reg [39:0] _T_294; // @[Util.scala 112:74:@1324.4]
  reg [63:0] _RAND_20;
  wire [40:0] _T_295; // @[Util.scala 113:33:@1325.4]
  reg [39:0] _T_297; // @[Util.scala 112:74:@1327.4]
  reg [63:0] _RAND_21;
  wire [40:0] _T_298; // @[Util.scala 113:33:@1328.4]
  reg [39:0] _T_300; // @[Util.scala 112:74:@1330.4]
  reg [63:0] _RAND_22;
  wire [40:0] _T_301; // @[Util.scala 113:33:@1331.4]
  reg [39:0] _T_303; // @[Util.scala 112:74:@1333.4]
  reg [63:0] _RAND_23;
  wire [40:0] _T_304; // @[Util.scala 113:33:@1334.4]
  reg [39:0] _T_306; // @[Util.scala 112:74:@1336.4]
  reg [63:0] _RAND_24;
  wire [40:0] _T_307; // @[Util.scala 113:33:@1337.4]
  reg [39:0] _T_309; // @[Util.scala 112:74:@1339.4]
  reg [63:0] _RAND_25;
  wire [40:0] _T_310; // @[Util.scala 113:33:@1340.4]
  reg [39:0] _T_312; // @[Util.scala 112:74:@1342.4]
  reg [63:0] _RAND_26;
  wire [40:0] _T_313; // @[Util.scala 113:33:@1343.4]
  reg [39:0] _T_315; // @[Util.scala 112:74:@1345.4]
  reg [63:0] _RAND_27;
  wire [40:0] _T_316; // @[Util.scala 113:33:@1346.4]
  reg [39:0] _T_318; // @[Util.scala 112:74:@1348.4]
  reg [63:0] _RAND_28;
  wire [40:0] _T_319; // @[Util.scala 113:33:@1349.4]
  reg [39:0] _T_321; // @[Util.scala 112:74:@1351.4]
  reg [63:0] _RAND_29;
  wire [40:0] _T_322; // @[Util.scala 113:33:@1352.4]
  reg [39:0] _T_324; // @[Util.scala 112:74:@1354.4]
  reg [63:0] _RAND_30;
  wire [40:0] _T_325; // @[Util.scala 113:33:@1355.4]
  reg [39:0] _T_327; // @[Util.scala 112:74:@1357.4]
  reg [63:0] _RAND_31;
  wire [40:0] _T_328; // @[Util.scala 113:33:@1358.4]
  reg [39:0] _T_330; // @[Util.scala 112:74:@1360.4]
  reg [63:0] _RAND_32;
  wire [40:0] _T_331; // @[Util.scala 113:33:@1361.4]
  reg [39:0] _T_333; // @[Util.scala 112:74:@1363.4]
  reg [63:0] _RAND_33;
  wire [40:0] _T_334; // @[Util.scala 113:33:@1364.4]
  reg [39:0] _T_336; // @[Util.scala 112:74:@1366.4]
  reg [63:0] _RAND_34;
  wire [40:0] _T_337; // @[Util.scala 113:33:@1367.4]
  reg [39:0] _T_339; // @[Util.scala 112:74:@1369.4]
  reg [63:0] _RAND_35;
  wire [40:0] _T_340; // @[Util.scala 113:33:@1370.4]
  reg [39:0] _T_342; // @[Util.scala 112:74:@1372.4]
  reg [63:0] _RAND_36;
  wire [40:0] _T_343; // @[Util.scala 113:33:@1373.4]
  reg [39:0] _T_345; // @[Util.scala 112:74:@1375.4]
  reg [63:0] _RAND_37;
  wire [40:0] _T_346; // @[Util.scala 113:33:@1376.4]
  reg [39:0] _T_348; // @[Util.scala 112:74:@1378.4]
  reg [63:0] _RAND_38;
  wire [40:0] _T_349; // @[Util.scala 113:33:@1379.4]
  reg [39:0] _T_351; // @[Util.scala 112:74:@1381.4]
  reg [63:0] _RAND_39;
  wire [40:0] _T_352; // @[Util.scala 113:33:@1382.4]
  reg [39:0] _T_354; // @[Util.scala 112:74:@1384.4]
  reg [63:0] _RAND_40;
  wire [40:0] _T_355; // @[Util.scala 113:33:@1385.4]
  reg [39:0] _T_357; // @[Util.scala 112:74:@1387.4]
  reg [63:0] _RAND_41;
  wire [40:0] _T_358; // @[Util.scala 113:33:@1388.4]
  reg [39:0] _T_360; // @[Util.scala 112:74:@1390.4]
  reg [63:0] _RAND_42;
  wire [40:0] _T_361; // @[Util.scala 113:33:@1391.4]
  reg [39:0] _T_363; // @[Util.scala 112:74:@1393.4]
  reg [63:0] _RAND_43;
  wire [40:0] _T_364; // @[Util.scala 113:33:@1394.4]
  reg [39:0] _T_366; // @[Util.scala 112:74:@1396.4]
  reg [63:0] _RAND_44;
  wire [40:0] _T_367; // @[Util.scala 113:33:@1397.4]
  reg [39:0] _T_369; // @[Util.scala 112:74:@1399.4]
  reg [63:0] _RAND_45;
  wire [40:0] _T_370; // @[Util.scala 113:33:@1400.4]
  reg [39:0] _T_372; // @[Util.scala 112:74:@1402.4]
  reg [63:0] _RAND_46;
  wire [40:0] _T_373; // @[Util.scala 113:33:@1403.4]
  reg [39:0] _T_375; // @[Util.scala 112:74:@1405.4]
  reg [63:0] _RAND_47;
  wire [40:0] _T_376; // @[Util.scala 113:33:@1406.4]
  reg [31:0] reg_dpc; // @[CSR.scala 184:20:@1496.4]
  reg [31:0] _RAND_48;
  reg [31:0] reg_dscratch; // @[CSR.scala 185:25:@1497.4]
  reg [31:0] _RAND_49;
  reg  reg_dcsr_ebreakm; // @[CSR.scala 190:25:@1550.4]
  reg [31:0] _RAND_50;
  reg  reg_dcsr_step; // @[CSR.scala 190:25:@1550.4]
  reg [31:0] _RAND_51;
  wire  system_insn; // @[CSR.scala 192:31:@1551.4]
  wire  _T_492; // @[CSR.scala 193:27:@1552.4]
  wire  _T_494; // @[CSR.scala 193:40:@1553.4]
  wire  cpu_ren; // @[CSR.scala 193:37:@1554.4]
  wire [4:0] _T_498; // @[CSR.scala 195:38:@1558.4]
  wire [12:0] _T_504; // @[CSR.scala 195:38:@1564.4]
  wire [7:0] _T_509; // @[CSR.scala 195:38:@1569.4]
  wire [34:0] read_mstatus; // @[CSR.scala 195:38:@1576.4]
  wire [15:0] _T_536; // @[CSR.scala 211:31:@1591.4]
  wire [15:0] _T_551; // @[CSR.scala 212:31:@1606.4]
  wire [31:0] _T_565; // @[CSR.scala 218:27:@1620.4]
  wire  _T_569; // @[CSR.scala 255:76:@1621.4]
  wire  _T_571; // @[CSR.scala 255:76:@1622.4]
  wire  _T_573; // @[CSR.scala 255:76:@1623.4]
  wire  _T_579; // @[CSR.scala 255:76:@1626.4]
  wire  _T_581; // @[CSR.scala 255:76:@1627.4]
  wire  _T_583; // @[CSR.scala 255:76:@1628.4]
  wire  _T_585; // @[CSR.scala 255:76:@1629.4]
  wire  _T_587; // @[CSR.scala 255:76:@1630.4]
  wire  _T_589; // @[CSR.scala 255:76:@1631.4]
  wire  _T_591; // @[CSR.scala 255:76:@1632.4]
  wire  _T_593; // @[CSR.scala 255:76:@1633.4]
  wire  _T_595; // @[CSR.scala 255:76:@1634.4]
  wire  _T_599; // @[CSR.scala 255:76:@1636.4]
  wire  _T_601; // @[CSR.scala 255:76:@1637.4]
  wire  _T_603; // @[CSR.scala 255:76:@1638.4]
  wire  _T_605; // @[CSR.scala 255:76:@1639.4]
  wire  _T_607; // @[CSR.scala 255:76:@1640.4]
  wire  _T_609; // @[CSR.scala 255:76:@1641.4]
  wire  _T_611; // @[CSR.scala 255:76:@1642.4]
  wire  _T_613; // @[CSR.scala 255:76:@1643.4]
  wire  _T_615; // @[CSR.scala 255:76:@1644.4]
  wire  _T_617; // @[CSR.scala 255:76:@1645.4]
  wire  _T_619; // @[CSR.scala 255:76:@1646.4]
  wire  _T_621; // @[CSR.scala 255:76:@1647.4]
  wire  _T_623; // @[CSR.scala 255:76:@1648.4]
  wire  _T_625; // @[CSR.scala 255:76:@1649.4]
  wire  _T_627; // @[CSR.scala 255:76:@1650.4]
  wire  _T_629; // @[CSR.scala 255:76:@1651.4]
  wire  _T_631; // @[CSR.scala 255:76:@1652.4]
  wire  _T_633; // @[CSR.scala 255:76:@1653.4]
  wire  _T_635; // @[CSR.scala 255:76:@1654.4]
  wire  _T_637; // @[CSR.scala 255:76:@1655.4]
  wire  _T_639; // @[CSR.scala 255:76:@1656.4]
  wire  _T_641; // @[CSR.scala 255:76:@1657.4]
  wire  _T_643; // @[CSR.scala 255:76:@1658.4]
  wire  _T_645; // @[CSR.scala 255:76:@1659.4]
  wire  _T_647; // @[CSR.scala 255:76:@1660.4]
  wire  _T_649; // @[CSR.scala 255:76:@1661.4]
  wire  _T_651; // @[CSR.scala 255:76:@1662.4]
  wire  _T_653; // @[CSR.scala 255:76:@1663.4]
  wire  _T_655; // @[CSR.scala 255:76:@1664.4]
  wire  _T_657; // @[CSR.scala 255:76:@1665.4]
  wire  _T_659; // @[CSR.scala 255:76:@1666.4]
  wire  _T_661; // @[CSR.scala 255:76:@1667.4]
  wire  _T_663; // @[CSR.scala 255:76:@1668.4]
  wire  _T_665; // @[CSR.scala 255:76:@1669.4]
  wire  _T_667; // @[CSR.scala 255:76:@1670.4]
  wire  _T_669; // @[CSR.scala 255:76:@1671.4]
  wire  _T_671; // @[CSR.scala 255:76:@1672.4]
  wire  _T_673; // @[CSR.scala 255:76:@1673.4]
  wire  _T_675; // @[CSR.scala 255:76:@1674.4]
  wire  _T_677; // @[CSR.scala 255:76:@1675.4]
  wire  _T_679; // @[CSR.scala 255:76:@1676.4]
  wire  _T_681; // @[CSR.scala 255:76:@1677.4]
  wire  _T_683; // @[CSR.scala 255:76:@1678.4]
  wire  _T_685; // @[CSR.scala 255:76:@1679.4]
  wire  _T_687; // @[CSR.scala 255:76:@1680.4]
  wire  _T_689; // @[CSR.scala 255:76:@1681.4]
  wire  _T_691; // @[CSR.scala 255:76:@1682.4]
  wire  _T_693; // @[CSR.scala 255:76:@1683.4]
  wire  _T_695; // @[CSR.scala 255:76:@1684.4]
  wire  _T_697; // @[CSR.scala 255:76:@1685.4]
  wire  _T_699; // @[CSR.scala 255:76:@1686.4]
  wire  _T_701; // @[CSR.scala 255:76:@1687.4]
  wire  _T_703; // @[CSR.scala 255:76:@1688.4]
  wire  _T_705; // @[CSR.scala 255:76:@1689.4]
  wire  _T_707; // @[CSR.scala 255:76:@1690.4]
  wire  _T_709; // @[CSR.scala 255:76:@1691.4]
  wire  _T_711; // @[CSR.scala 255:76:@1692.4]
  wire  _T_713; // @[CSR.scala 255:76:@1693.4]
  wire  _T_715; // @[CSR.scala 255:76:@1694.4]
  wire  _T_717; // @[CSR.scala 255:76:@1695.4]
  wire  _T_719; // @[CSR.scala 255:76:@1696.4]
  wire  _T_721; // @[CSR.scala 255:76:@1697.4]
  wire  _T_723; // @[CSR.scala 255:76:@1698.4]
  wire  _T_725; // @[CSR.scala 255:76:@1699.4]
  wire  _T_727; // @[CSR.scala 255:76:@1700.4]
  wire  _T_729; // @[CSR.scala 255:76:@1701.4]
  wire  _T_731; // @[CSR.scala 255:76:@1702.4]
  wire  _T_733; // @[CSR.scala 255:76:@1703.4]
  wire  _T_735; // @[CSR.scala 255:76:@1704.4]
  wire  _T_737; // @[CSR.scala 255:76:@1705.4]
  wire [1:0] _T_738; // @[CSR.scala 257:57:@1706.4]
  wire  priv_sufficient; // @[CSR.scala 257:41:@1707.4]
  wire [1:0] _T_739; // @[CSR.scala 258:32:@1708.4]
  wire [1:0] _T_740; // @[CSR.scala 258:40:@1709.4]
  wire  read_only; // @[CSR.scala 258:40:@1710.4]
  wire  _T_742; // @[CSR.scala 259:38:@1711.4]
  wire  _T_743; // @[CSR.scala 259:25:@1712.4]
  wire  cpu_wen; // @[CSR.scala 259:48:@1713.4]
  wire  _T_745; // @[CSR.scala 260:24:@1714.4]
  wire  wen; // @[CSR.scala 260:21:@1715.4]
  wire  _T_746; // @[Util.scala 23:47:@1716.4]
  wire  _T_747; // @[Util.scala 23:47:@1717.4]
  wire  _T_748; // @[Util.scala 23:62:@1718.4]
  wire [31:0] _T_750; // @[CSR.scala 386:9:@1719.4]
  wire [31:0] _T_751; // @[CSR.scala 386:49:@1720.4]
  wire [31:0] _T_754; // @[CSR.scala 386:64:@1722.4]
  wire [31:0] _T_755; // @[CSR.scala 386:60:@1723.4]
  wire [31:0] wdata; // @[CSR.scala 386:58:@1724.4]
  wire [2:0] _T_757; // @[CSR.scala 263:36:@1725.4]
  wire [7:0] opcode; // @[CSR.scala 263:20:@1726.4]
  wire  _T_758; // @[CSR.scala 264:40:@1727.4]
  wire  insn_call; // @[CSR.scala 264:31:@1728.4]
  wire  _T_759; // @[CSR.scala 265:41:@1729.4]
  wire  insn_break; // @[CSR.scala 265:32:@1730.4]
  wire  _T_760; // @[CSR.scala 266:39:@1731.4]
  wire  _T_761; // @[CSR.scala 266:30:@1732.4]
  wire  insn_ret; // @[CSR.scala 266:43:@1733.4]
  wire  _T_1044; // @[CSR.scala 278:24:@1951.4]
  wire [31:0] _GEN_2; // @[CSR.scala 281:23:@1954.4]
  wire [31:0] _GEN_4; // @[CSR.scala 281:23:@1954.4]
  wire [1:0] _T_1048; // @[Bitwise.scala 48:55:@1959.4]
  wire  _T_1050; // @[CSR.scala 287:52:@1960.4]
  wire  _T_1052; // @[CSR.scala 287:9:@1962.4]
  wire  _T_1054; // @[CSR.scala 287:9:@1963.4]
  wire  _T_1057; // @[CSR.scala 294:33:@1972.4]
  wire  _T_1058; // @[CSR.scala 294:17:@1973.4]
  wire [1:0] _GEN_6; // @[CSR.scala 294:38:@1974.4]
  wire [31:0] _GEN_8; // @[CSR.scala 294:38:@1974.4]
  wire  _T_1062; // @[CSR.scala 301:21:@1980.4]
  wire  _T_1063; // @[CSR.scala 301:18:@1981.4]
  wire  _GEN_9; // @[CSR.scala 301:41:@1982.4]
  wire  _GEN_10; // @[CSR.scala 301:41:@1982.4]
  wire [1:0] new_prv; // @[CSR.scala 301:41:@1982.4]
  wire [31:0] _GEN_12; // @[CSR.scala 301:41:@1982.4]
  wire [3:0] _GEN_154; // @[CSR.scala 311:35:@1990.6]
  wire [4:0] _T_1067; // @[CSR.scala 311:35:@1990.6]
  wire [3:0] _T_1068; // @[CSR.scala 311:35:@1991.6]
  wire [31:0] _GEN_13; // @[CSR.scala 309:18:@1988.4]
  wire [31:0] _GEN_14; // @[CSR.scala 309:18:@1988.4]
  wire [31:0] _GEN_16; // @[CSR.scala 315:19:@1994.4]
  wire [63:0] _T_1073; // @[Mux.scala 19:72:@2000.4]
  wire [63:0] _T_1075; // @[Mux.scala 19:72:@2001.4]
  wire [15:0] _T_1077; // @[Mux.scala 19:72:@2002.4]
  wire [8:0] _T_1083; // @[Mux.scala 19:72:@2005.4]
  wire [34:0] _T_1085; // @[Mux.scala 19:72:@2006.4]
  wire [8:0] _T_1087; // @[Mux.scala 19:72:@2007.4]
  wire [15:0] _T_1089; // @[Mux.scala 19:72:@2008.4]
  wire [15:0] _T_1091; // @[Mux.scala 19:72:@2009.4]
  wire [31:0] _T_1093; // @[Mux.scala 19:72:@2010.4]
  wire [31:0] _T_1095; // @[Mux.scala 19:72:@2011.4]
  wire [31:0] _T_1097; // @[Mux.scala 19:72:@2012.4]
  wire [31:0] _T_1099; // @[Mux.scala 19:72:@2013.4]
  wire [31:0] _T_1103; // @[Mux.scala 19:72:@2015.4]
  wire [31:0] _T_1105; // @[Mux.scala 19:72:@2016.4]
  wire [31:0] _T_1107; // @[Mux.scala 19:72:@2017.4]
  wire [31:0] _T_1109; // @[Mux.scala 19:72:@2018.4]
  wire [39:0] _T_1111; // @[Mux.scala 19:72:@2019.4]
  wire [39:0] _T_1113; // @[Mux.scala 19:72:@2020.4]
  wire [39:0] _T_1115; // @[Mux.scala 19:72:@2021.4]
  wire [39:0] _T_1117; // @[Mux.scala 19:72:@2022.4]
  wire [39:0] _T_1119; // @[Mux.scala 19:72:@2023.4]
  wire [39:0] _T_1121; // @[Mux.scala 19:72:@2024.4]
  wire [39:0] _T_1123; // @[Mux.scala 19:72:@2025.4]
  wire [39:0] _T_1125; // @[Mux.scala 19:72:@2026.4]
  wire [39:0] _T_1127; // @[Mux.scala 19:72:@2027.4]
  wire [39:0] _T_1129; // @[Mux.scala 19:72:@2028.4]
  wire [39:0] _T_1131; // @[Mux.scala 19:72:@2029.4]
  wire [39:0] _T_1133; // @[Mux.scala 19:72:@2030.4]
  wire [39:0] _T_1135; // @[Mux.scala 19:72:@2031.4]
  wire [39:0] _T_1137; // @[Mux.scala 19:72:@2032.4]
  wire [39:0] _T_1139; // @[Mux.scala 19:72:@2033.4]
  wire [39:0] _T_1141; // @[Mux.scala 19:72:@2034.4]
  wire [39:0] _T_1143; // @[Mux.scala 19:72:@2035.4]
  wire [39:0] _T_1145; // @[Mux.scala 19:72:@2036.4]
  wire [39:0] _T_1147; // @[Mux.scala 19:72:@2037.4]
  wire [39:0] _T_1149; // @[Mux.scala 19:72:@2038.4]
  wire [39:0] _T_1151; // @[Mux.scala 19:72:@2039.4]
  wire [39:0] _T_1153; // @[Mux.scala 19:72:@2040.4]
  wire [39:0] _T_1155; // @[Mux.scala 19:72:@2041.4]
  wire [39:0] _T_1157; // @[Mux.scala 19:72:@2042.4]
  wire [39:0] _T_1159; // @[Mux.scala 19:72:@2043.4]
  wire [39:0] _T_1161; // @[Mux.scala 19:72:@2044.4]
  wire [39:0] _T_1163; // @[Mux.scala 19:72:@2045.4]
  wire [39:0] _T_1165; // @[Mux.scala 19:72:@2046.4]
  wire [39:0] _T_1167; // @[Mux.scala 19:72:@2047.4]
  wire [39:0] _T_1169; // @[Mux.scala 19:72:@2048.4]
  wire [39:0] _T_1171; // @[Mux.scala 19:72:@2049.4]
  wire [39:0] _T_1173; // @[Mux.scala 19:72:@2050.4]
  wire [39:0] _T_1175; // @[Mux.scala 19:72:@2051.4]
  wire [39:0] _T_1177; // @[Mux.scala 19:72:@2052.4]
  wire [39:0] _T_1179; // @[Mux.scala 19:72:@2053.4]
  wire [39:0] _T_1181; // @[Mux.scala 19:72:@2054.4]
  wire [39:0] _T_1183; // @[Mux.scala 19:72:@2055.4]
  wire [39:0] _T_1185; // @[Mux.scala 19:72:@2056.4]
  wire [39:0] _T_1187; // @[Mux.scala 19:72:@2057.4]
  wire [39:0] _T_1189; // @[Mux.scala 19:72:@2058.4]
  wire [39:0] _T_1191; // @[Mux.scala 19:72:@2059.4]
  wire [39:0] _T_1193; // @[Mux.scala 19:72:@2060.4]
  wire [39:0] _T_1195; // @[Mux.scala 19:72:@2061.4]
  wire [39:0] _T_1197; // @[Mux.scala 19:72:@2062.4]
  wire [39:0] _T_1199; // @[Mux.scala 19:72:@2063.4]
  wire [39:0] _T_1201; // @[Mux.scala 19:72:@2064.4]
  wire [39:0] _T_1203; // @[Mux.scala 19:72:@2065.4]
  wire [39:0] _T_1205; // @[Mux.scala 19:72:@2066.4]
  wire [39:0] _T_1207; // @[Mux.scala 19:72:@2067.4]
  wire [39:0] _T_1209; // @[Mux.scala 19:72:@2068.4]
  wire [39:0] _T_1211; // @[Mux.scala 19:72:@2069.4]
  wire [39:0] _T_1213; // @[Mux.scala 19:72:@2070.4]
  wire [39:0] _T_1215; // @[Mux.scala 19:72:@2071.4]
  wire [39:0] _T_1217; // @[Mux.scala 19:72:@2072.4]
  wire [39:0] _T_1219; // @[Mux.scala 19:72:@2073.4]
  wire [39:0] _T_1221; // @[Mux.scala 19:72:@2074.4]
  wire [39:0] _T_1223; // @[Mux.scala 19:72:@2075.4]
  wire [39:0] _T_1225; // @[Mux.scala 19:72:@2076.4]
  wire [39:0] _T_1227; // @[Mux.scala 19:72:@2077.4]
  wire [39:0] _T_1229; // @[Mux.scala 19:72:@2078.4]
  wire [39:0] _T_1231; // @[Mux.scala 19:72:@2079.4]
  wire [39:0] _T_1233; // @[Mux.scala 19:72:@2080.4]
  wire [39:0] _T_1235; // @[Mux.scala 19:72:@2081.4]
  wire [39:0] _T_1237; // @[Mux.scala 19:72:@2082.4]
  wire [63:0] _T_1242; // @[Mux.scala 19:72:@2085.4]
  wire [63:0] _GEN_155; // @[Mux.scala 19:72:@2086.4]
  wire [63:0] _T_1243; // @[Mux.scala 19:72:@2086.4]
  wire [63:0] _GEN_156; // @[Mux.scala 19:72:@2089.4]
  wire [63:0] _T_1246; // @[Mux.scala 19:72:@2089.4]
  wire [63:0] _GEN_157; // @[Mux.scala 19:72:@2090.4]
  wire [63:0] _T_1247; // @[Mux.scala 19:72:@2090.4]
  wire [63:0] _GEN_158; // @[Mux.scala 19:72:@2091.4]
  wire [63:0] _T_1248; // @[Mux.scala 19:72:@2091.4]
  wire [63:0] _GEN_159; // @[Mux.scala 19:72:@2092.4]
  wire [63:0] _T_1249; // @[Mux.scala 19:72:@2092.4]
  wire [63:0] _GEN_160; // @[Mux.scala 19:72:@2093.4]
  wire [63:0] _T_1250; // @[Mux.scala 19:72:@2093.4]
  wire [63:0] _GEN_161; // @[Mux.scala 19:72:@2094.4]
  wire [63:0] _T_1251; // @[Mux.scala 19:72:@2094.4]
  wire [63:0] _GEN_162; // @[Mux.scala 19:72:@2095.4]
  wire [63:0] _T_1252; // @[Mux.scala 19:72:@2095.4]
  wire [63:0] _GEN_163; // @[Mux.scala 19:72:@2096.4]
  wire [63:0] _T_1253; // @[Mux.scala 19:72:@2096.4]
  wire [63:0] _GEN_164; // @[Mux.scala 19:72:@2097.4]
  wire [63:0] _T_1254; // @[Mux.scala 19:72:@2097.4]
  wire [63:0] _GEN_165; // @[Mux.scala 19:72:@2099.4]
  wire [63:0] _T_1256; // @[Mux.scala 19:72:@2099.4]
  wire [63:0] _GEN_166; // @[Mux.scala 19:72:@2100.4]
  wire [63:0] _T_1257; // @[Mux.scala 19:72:@2100.4]
  wire [63:0] _GEN_167; // @[Mux.scala 19:72:@2101.4]
  wire [63:0] _T_1258; // @[Mux.scala 19:72:@2101.4]
  wire [63:0] _GEN_168; // @[Mux.scala 19:72:@2102.4]
  wire [63:0] _T_1259; // @[Mux.scala 19:72:@2102.4]
  wire [63:0] _GEN_169; // @[Mux.scala 19:72:@2103.4]
  wire [63:0] _T_1260; // @[Mux.scala 19:72:@2103.4]
  wire [63:0] _GEN_170; // @[Mux.scala 19:72:@2104.4]
  wire [63:0] _T_1261; // @[Mux.scala 19:72:@2104.4]
  wire [63:0] _GEN_171; // @[Mux.scala 19:72:@2105.4]
  wire [63:0] _T_1262; // @[Mux.scala 19:72:@2105.4]
  wire [63:0] _GEN_172; // @[Mux.scala 19:72:@2106.4]
  wire [63:0] _T_1263; // @[Mux.scala 19:72:@2106.4]
  wire [63:0] _GEN_173; // @[Mux.scala 19:72:@2107.4]
  wire [63:0] _T_1264; // @[Mux.scala 19:72:@2107.4]
  wire [63:0] _GEN_174; // @[Mux.scala 19:72:@2108.4]
  wire [63:0] _T_1265; // @[Mux.scala 19:72:@2108.4]
  wire [63:0] _GEN_175; // @[Mux.scala 19:72:@2109.4]
  wire [63:0] _T_1266; // @[Mux.scala 19:72:@2109.4]
  wire [63:0] _GEN_176; // @[Mux.scala 19:72:@2110.4]
  wire [63:0] _T_1267; // @[Mux.scala 19:72:@2110.4]
  wire [63:0] _GEN_177; // @[Mux.scala 19:72:@2111.4]
  wire [63:0] _T_1268; // @[Mux.scala 19:72:@2111.4]
  wire [63:0] _GEN_178; // @[Mux.scala 19:72:@2112.4]
  wire [63:0] _T_1269; // @[Mux.scala 19:72:@2112.4]
  wire [63:0] _GEN_179; // @[Mux.scala 19:72:@2113.4]
  wire [63:0] _T_1270; // @[Mux.scala 19:72:@2113.4]
  wire [63:0] _GEN_180; // @[Mux.scala 19:72:@2114.4]
  wire [63:0] _T_1271; // @[Mux.scala 19:72:@2114.4]
  wire [63:0] _GEN_181; // @[Mux.scala 19:72:@2115.4]
  wire [63:0] _T_1272; // @[Mux.scala 19:72:@2115.4]
  wire [63:0] _GEN_182; // @[Mux.scala 19:72:@2116.4]
  wire [63:0] _T_1273; // @[Mux.scala 19:72:@2116.4]
  wire [63:0] _GEN_183; // @[Mux.scala 19:72:@2117.4]
  wire [63:0] _T_1274; // @[Mux.scala 19:72:@2117.4]
  wire [63:0] _GEN_184; // @[Mux.scala 19:72:@2118.4]
  wire [63:0] _T_1275; // @[Mux.scala 19:72:@2118.4]
  wire [63:0] _GEN_185; // @[Mux.scala 19:72:@2119.4]
  wire [63:0] _T_1276; // @[Mux.scala 19:72:@2119.4]
  wire [63:0] _GEN_186; // @[Mux.scala 19:72:@2120.4]
  wire [63:0] _T_1277; // @[Mux.scala 19:72:@2120.4]
  wire [63:0] _GEN_187; // @[Mux.scala 19:72:@2121.4]
  wire [63:0] _T_1278; // @[Mux.scala 19:72:@2121.4]
  wire [63:0] _GEN_188; // @[Mux.scala 19:72:@2122.4]
  wire [63:0] _T_1279; // @[Mux.scala 19:72:@2122.4]
  wire [63:0] _GEN_189; // @[Mux.scala 19:72:@2123.4]
  wire [63:0] _T_1280; // @[Mux.scala 19:72:@2123.4]
  wire [63:0] _GEN_190; // @[Mux.scala 19:72:@2124.4]
  wire [63:0] _T_1281; // @[Mux.scala 19:72:@2124.4]
  wire [63:0] _GEN_191; // @[Mux.scala 19:72:@2125.4]
  wire [63:0] _T_1282; // @[Mux.scala 19:72:@2125.4]
  wire [63:0] _GEN_192; // @[Mux.scala 19:72:@2126.4]
  wire [63:0] _T_1283; // @[Mux.scala 19:72:@2126.4]
  wire [63:0] _GEN_193; // @[Mux.scala 19:72:@2127.4]
  wire [63:0] _T_1284; // @[Mux.scala 19:72:@2127.4]
  wire [63:0] _GEN_194; // @[Mux.scala 19:72:@2128.4]
  wire [63:0] _T_1285; // @[Mux.scala 19:72:@2128.4]
  wire [63:0] _GEN_195; // @[Mux.scala 19:72:@2129.4]
  wire [63:0] _T_1286; // @[Mux.scala 19:72:@2129.4]
  wire [63:0] _GEN_196; // @[Mux.scala 19:72:@2130.4]
  wire [63:0] _T_1287; // @[Mux.scala 19:72:@2130.4]
  wire [63:0] _GEN_197; // @[Mux.scala 19:72:@2131.4]
  wire [63:0] _T_1288; // @[Mux.scala 19:72:@2131.4]
  wire [63:0] _GEN_198; // @[Mux.scala 19:72:@2132.4]
  wire [63:0] _T_1289; // @[Mux.scala 19:72:@2132.4]
  wire [63:0] _GEN_199; // @[Mux.scala 19:72:@2133.4]
  wire [63:0] _T_1290; // @[Mux.scala 19:72:@2133.4]
  wire [63:0] _GEN_200; // @[Mux.scala 19:72:@2134.4]
  wire [63:0] _T_1291; // @[Mux.scala 19:72:@2134.4]
  wire [63:0] _GEN_201; // @[Mux.scala 19:72:@2135.4]
  wire [63:0] _T_1292; // @[Mux.scala 19:72:@2135.4]
  wire [63:0] _GEN_202; // @[Mux.scala 19:72:@2136.4]
  wire [63:0] _T_1293; // @[Mux.scala 19:72:@2136.4]
  wire [63:0] _GEN_203; // @[Mux.scala 19:72:@2137.4]
  wire [63:0] _T_1294; // @[Mux.scala 19:72:@2137.4]
  wire [63:0] _GEN_204; // @[Mux.scala 19:72:@2138.4]
  wire [63:0] _T_1295; // @[Mux.scala 19:72:@2138.4]
  wire [63:0] _GEN_205; // @[Mux.scala 19:72:@2139.4]
  wire [63:0] _T_1296; // @[Mux.scala 19:72:@2139.4]
  wire [63:0] _GEN_206; // @[Mux.scala 19:72:@2140.4]
  wire [63:0] _T_1297; // @[Mux.scala 19:72:@2140.4]
  wire [63:0] _GEN_207; // @[Mux.scala 19:72:@2141.4]
  wire [63:0] _T_1298; // @[Mux.scala 19:72:@2141.4]
  wire [63:0] _GEN_208; // @[Mux.scala 19:72:@2142.4]
  wire [63:0] _T_1299; // @[Mux.scala 19:72:@2142.4]
  wire [63:0] _GEN_209; // @[Mux.scala 19:72:@2143.4]
  wire [63:0] _T_1300; // @[Mux.scala 19:72:@2143.4]
  wire [63:0] _GEN_210; // @[Mux.scala 19:72:@2144.4]
  wire [63:0] _T_1301; // @[Mux.scala 19:72:@2144.4]
  wire [63:0] _GEN_211; // @[Mux.scala 19:72:@2145.4]
  wire [63:0] _T_1302; // @[Mux.scala 19:72:@2145.4]
  wire [63:0] _GEN_212; // @[Mux.scala 19:72:@2146.4]
  wire [63:0] _T_1303; // @[Mux.scala 19:72:@2146.4]
  wire [63:0] _GEN_213; // @[Mux.scala 19:72:@2147.4]
  wire [63:0] _T_1304; // @[Mux.scala 19:72:@2147.4]
  wire [63:0] _GEN_214; // @[Mux.scala 19:72:@2148.4]
  wire [63:0] _T_1305; // @[Mux.scala 19:72:@2148.4]
  wire [63:0] _GEN_215; // @[Mux.scala 19:72:@2149.4]
  wire [63:0] _T_1306; // @[Mux.scala 19:72:@2149.4]
  wire [63:0] _GEN_216; // @[Mux.scala 19:72:@2150.4]
  wire [63:0] _T_1307; // @[Mux.scala 19:72:@2150.4]
  wire [63:0] _GEN_217; // @[Mux.scala 19:72:@2151.4]
  wire [63:0] _T_1308; // @[Mux.scala 19:72:@2151.4]
  wire [63:0] _GEN_218; // @[Mux.scala 19:72:@2152.4]
  wire [63:0] _T_1309; // @[Mux.scala 19:72:@2152.4]
  wire [63:0] _GEN_219; // @[Mux.scala 19:72:@2153.4]
  wire [63:0] _T_1310; // @[Mux.scala 19:72:@2153.4]
  wire [63:0] _GEN_220; // @[Mux.scala 19:72:@2154.4]
  wire [63:0] _T_1311; // @[Mux.scala 19:72:@2154.4]
  wire [63:0] _GEN_221; // @[Mux.scala 19:72:@2155.4]
  wire [63:0] _T_1312; // @[Mux.scala 19:72:@2155.4]
  wire [63:0] _GEN_222; // @[Mux.scala 19:72:@2156.4]
  wire [63:0] _T_1313; // @[Mux.scala 19:72:@2156.4]
  wire [63:0] _GEN_223; // @[Mux.scala 19:72:@2157.4]
  wire [63:0] _T_1314; // @[Mux.scala 19:72:@2157.4]
  wire [63:0] _GEN_224; // @[Mux.scala 19:72:@2158.4]
  wire [63:0] _T_1315; // @[Mux.scala 19:72:@2158.4]
  wire [63:0] _GEN_225; // @[Mux.scala 19:72:@2159.4]
  wire [63:0] _T_1316; // @[Mux.scala 19:72:@2159.4]
  wire [63:0] _GEN_226; // @[Mux.scala 19:72:@2160.4]
  wire [63:0] _T_1317; // @[Mux.scala 19:72:@2160.4]
  wire [63:0] _GEN_227; // @[Mux.scala 19:72:@2161.4]
  wire [63:0] _T_1318; // @[Mux.scala 19:72:@2161.4]
  wire [63:0] _GEN_228; // @[Mux.scala 19:72:@2162.4]
  wire [63:0] _T_1319; // @[Mux.scala 19:72:@2162.4]
  wire [63:0] _GEN_229; // @[Mux.scala 19:72:@2163.4]
  wire [63:0] _T_1320; // @[Mux.scala 19:72:@2163.4]
  wire [63:0] _GEN_230; // @[Mux.scala 19:72:@2164.4]
  wire [63:0] _T_1321; // @[Mux.scala 19:72:@2164.4]
  wire [63:0] _GEN_231; // @[Mux.scala 19:72:@2165.4]
  wire [63:0] _T_1322; // @[Mux.scala 19:72:@2165.4]
  wire [63:0] _GEN_232; // @[Mux.scala 19:72:@2166.4]
  wire [63:0] _T_1323; // @[Mux.scala 19:72:@2166.4]
  wire  _T_1334; // @[CSR.scala 330:38:@2179.8]
  wire  _T_1344; // @[CSR.scala 330:38:@2199.8]
  wire  _GEN_17; // @[CSR.scala 329:36:@2173.6]
  wire  _GEN_18; // @[CSR.scala 329:36:@2173.6]
  wire [34:0] _T_1352; // @[:@2212.8 :@2213.8]
  wire  _T_1356; // @[CSR.scala 337:39:@2220.8]
  wire  _T_1360; // @[CSR.scala 337:39:@2228.8]
  wire  _GEN_19; // @[CSR.scala 336:39:@2210.6]
  wire  _GEN_20; // @[CSR.scala 336:39:@2210.6]
  wire [15:0] _T_1380; // @[:@2265.8 :@2266.8]
  wire  _T_1384; // @[CSR.scala 342:35:@2273.8]
  wire  _T_1388; // @[CSR.scala 342:35:@2281.8]
  wire  _GEN_21; // @[CSR.scala 341:35:@2263.6]
  wire  _GEN_22; // @[CSR.scala 345:35:@2301.6]
  wire  _GEN_23; // @[CSR.scala 345:35:@2301.6]
  wire [7:0] _T_1418; // @[CSR.scala 382:47:@2341.8]
  wire [31:0] _T_1419; // @[CSR.scala 382:72:@2342.8]
  wire [39:0] _T_1420; // @[Cat.scala 30:58:@2343.8]
  wire [40:0] _GEN_24; // @[CSR.scala 382:29:@2340.6]
  wire [7:0] _T_1421; // @[CSR.scala 383:45:@2347.8]
  wire [39:0] _T_1422; // @[Cat.scala 30:58:@2348.8]
  wire [40:0] _GEN_25; // @[CSR.scala 383:29:@2346.6]
  wire [31:0] _T_1424; // @[CSR.scala 382:72:@2353.8]
  wire [39:0] _T_1425; // @[Cat.scala 30:58:@2354.8]
  wire [40:0] _GEN_26; // @[CSR.scala 382:29:@2351.6]
  wire [7:0] _T_1426; // @[CSR.scala 383:45:@2358.8]
  wire [39:0] _T_1427; // @[Cat.scala 30:58:@2359.8]
  wire [40:0] _GEN_27; // @[CSR.scala 383:29:@2357.6]
  wire [31:0] _T_1429; // @[CSR.scala 382:72:@2364.8]
  wire [39:0] _T_1430; // @[Cat.scala 30:58:@2365.8]
  wire [40:0] _GEN_28; // @[CSR.scala 382:29:@2362.6]
  wire [7:0] _T_1431; // @[CSR.scala 383:45:@2369.8]
  wire [39:0] _T_1432; // @[Cat.scala 30:58:@2370.8]
  wire [40:0] _GEN_29; // @[CSR.scala 383:29:@2368.6]
  wire [31:0] _T_1434; // @[CSR.scala 382:72:@2375.8]
  wire [39:0] _T_1435; // @[Cat.scala 30:58:@2376.8]
  wire [40:0] _GEN_30; // @[CSR.scala 382:29:@2373.6]
  wire [7:0] _T_1436; // @[CSR.scala 383:45:@2380.8]
  wire [39:0] _T_1437; // @[Cat.scala 30:58:@2381.8]
  wire [40:0] _GEN_31; // @[CSR.scala 383:29:@2379.6]
  wire [31:0] _T_1439; // @[CSR.scala 382:72:@2386.8]
  wire [39:0] _T_1440; // @[Cat.scala 30:58:@2387.8]
  wire [40:0] _GEN_32; // @[CSR.scala 382:29:@2384.6]
  wire [7:0] _T_1441; // @[CSR.scala 383:45:@2391.8]
  wire [39:0] _T_1442; // @[Cat.scala 30:58:@2392.8]
  wire [40:0] _GEN_33; // @[CSR.scala 383:29:@2390.6]
  wire [31:0] _T_1444; // @[CSR.scala 382:72:@2397.8]
  wire [39:0] _T_1445; // @[Cat.scala 30:58:@2398.8]
  wire [40:0] _GEN_34; // @[CSR.scala 382:29:@2395.6]
  wire [7:0] _T_1446; // @[CSR.scala 383:45:@2402.8]
  wire [39:0] _T_1447; // @[Cat.scala 30:58:@2403.8]
  wire [40:0] _GEN_35; // @[CSR.scala 383:29:@2401.6]
  wire [31:0] _T_1449; // @[CSR.scala 382:72:@2408.8]
  wire [39:0] _T_1450; // @[Cat.scala 30:58:@2409.8]
  wire [40:0] _GEN_36; // @[CSR.scala 382:29:@2406.6]
  wire [7:0] _T_1451; // @[CSR.scala 383:45:@2413.8]
  wire [39:0] _T_1452; // @[Cat.scala 30:58:@2414.8]
  wire [40:0] _GEN_37; // @[CSR.scala 383:29:@2412.6]
  wire [31:0] _T_1454; // @[CSR.scala 382:72:@2419.8]
  wire [39:0] _T_1455; // @[Cat.scala 30:58:@2420.8]
  wire [40:0] _GEN_38; // @[CSR.scala 382:29:@2417.6]
  wire [7:0] _T_1456; // @[CSR.scala 383:45:@2424.8]
  wire [39:0] _T_1457; // @[Cat.scala 30:58:@2425.8]
  wire [40:0] _GEN_39; // @[CSR.scala 383:29:@2423.6]
  wire [31:0] _T_1459; // @[CSR.scala 382:72:@2430.8]
  wire [39:0] _T_1460; // @[Cat.scala 30:58:@2431.8]
  wire [40:0] _GEN_40; // @[CSR.scala 382:29:@2428.6]
  wire [7:0] _T_1461; // @[CSR.scala 383:45:@2435.8]
  wire [39:0] _T_1462; // @[Cat.scala 30:58:@2436.8]
  wire [40:0] _GEN_41; // @[CSR.scala 383:29:@2434.6]
  wire [31:0] _T_1464; // @[CSR.scala 382:72:@2441.8]
  wire [39:0] _T_1465; // @[Cat.scala 30:58:@2442.8]
  wire [40:0] _GEN_42; // @[CSR.scala 382:29:@2439.6]
  wire [7:0] _T_1466; // @[CSR.scala 383:45:@2446.8]
  wire [39:0] _T_1467; // @[Cat.scala 30:58:@2447.8]
  wire [40:0] _GEN_43; // @[CSR.scala 383:29:@2445.6]
  wire [31:0] _T_1469; // @[CSR.scala 382:72:@2452.8]
  wire [39:0] _T_1470; // @[Cat.scala 30:58:@2453.8]
  wire [40:0] _GEN_44; // @[CSR.scala 382:29:@2450.6]
  wire [7:0] _T_1471; // @[CSR.scala 383:45:@2457.8]
  wire [39:0] _T_1472; // @[Cat.scala 30:58:@2458.8]
  wire [40:0] _GEN_45; // @[CSR.scala 383:29:@2456.6]
  wire [31:0] _T_1474; // @[CSR.scala 382:72:@2463.8]
  wire [39:0] _T_1475; // @[Cat.scala 30:58:@2464.8]
  wire [40:0] _GEN_46; // @[CSR.scala 382:29:@2461.6]
  wire [7:0] _T_1476; // @[CSR.scala 383:45:@2468.8]
  wire [39:0] _T_1477; // @[Cat.scala 30:58:@2469.8]
  wire [40:0] _GEN_47; // @[CSR.scala 383:29:@2467.6]
  wire [31:0] _T_1479; // @[CSR.scala 382:72:@2474.8]
  wire [39:0] _T_1480; // @[Cat.scala 30:58:@2475.8]
  wire [40:0] _GEN_48; // @[CSR.scala 382:29:@2472.6]
  wire [7:0] _T_1481; // @[CSR.scala 383:45:@2479.8]
  wire [39:0] _T_1482; // @[Cat.scala 30:58:@2480.8]
  wire [40:0] _GEN_49; // @[CSR.scala 383:29:@2478.6]
  wire [31:0] _T_1484; // @[CSR.scala 382:72:@2485.8]
  wire [39:0] _T_1485; // @[Cat.scala 30:58:@2486.8]
  wire [40:0] _GEN_50; // @[CSR.scala 382:29:@2483.6]
  wire [7:0] _T_1486; // @[CSR.scala 383:45:@2490.8]
  wire [39:0] _T_1487; // @[Cat.scala 30:58:@2491.8]
  wire [40:0] _GEN_51; // @[CSR.scala 383:29:@2489.6]
  wire [31:0] _T_1489; // @[CSR.scala 382:72:@2496.8]
  wire [39:0] _T_1490; // @[Cat.scala 30:58:@2497.8]
  wire [40:0] _GEN_52; // @[CSR.scala 382:29:@2494.6]
  wire [7:0] _T_1491; // @[CSR.scala 383:45:@2501.8]
  wire [39:0] _T_1492; // @[Cat.scala 30:58:@2502.8]
  wire [40:0] _GEN_53; // @[CSR.scala 383:29:@2500.6]
  wire [31:0] _T_1494; // @[CSR.scala 382:72:@2507.8]
  wire [39:0] _T_1495; // @[Cat.scala 30:58:@2508.8]
  wire [40:0] _GEN_54; // @[CSR.scala 382:29:@2505.6]
  wire [7:0] _T_1496; // @[CSR.scala 383:45:@2512.8]
  wire [39:0] _T_1497; // @[Cat.scala 30:58:@2513.8]
  wire [40:0] _GEN_55; // @[CSR.scala 383:29:@2511.6]
  wire [31:0] _T_1499; // @[CSR.scala 382:72:@2518.8]
  wire [39:0] _T_1500; // @[Cat.scala 30:58:@2519.8]
  wire [40:0] _GEN_56; // @[CSR.scala 382:29:@2516.6]
  wire [7:0] _T_1501; // @[CSR.scala 383:45:@2523.8]
  wire [39:0] _T_1502; // @[Cat.scala 30:58:@2524.8]
  wire [40:0] _GEN_57; // @[CSR.scala 383:29:@2522.6]
  wire [31:0] _T_1504; // @[CSR.scala 382:72:@2529.8]
  wire [39:0] _T_1505; // @[Cat.scala 30:58:@2530.8]
  wire [40:0] _GEN_58; // @[CSR.scala 382:29:@2527.6]
  wire [7:0] _T_1506; // @[CSR.scala 383:45:@2534.8]
  wire [39:0] _T_1507; // @[Cat.scala 30:58:@2535.8]
  wire [40:0] _GEN_59; // @[CSR.scala 383:29:@2533.6]
  wire [31:0] _T_1509; // @[CSR.scala 382:72:@2540.8]
  wire [39:0] _T_1510; // @[Cat.scala 30:58:@2541.8]
  wire [40:0] _GEN_60; // @[CSR.scala 382:29:@2538.6]
  wire [7:0] _T_1511; // @[CSR.scala 383:45:@2545.8]
  wire [39:0] _T_1512; // @[Cat.scala 30:58:@2546.8]
  wire [40:0] _GEN_61; // @[CSR.scala 383:29:@2544.6]
  wire [31:0] _T_1514; // @[CSR.scala 382:72:@2551.8]
  wire [39:0] _T_1515; // @[Cat.scala 30:58:@2552.8]
  wire [40:0] _GEN_62; // @[CSR.scala 382:29:@2549.6]
  wire [7:0] _T_1516; // @[CSR.scala 383:45:@2556.8]
  wire [39:0] _T_1517; // @[Cat.scala 30:58:@2557.8]
  wire [40:0] _GEN_63; // @[CSR.scala 383:29:@2555.6]
  wire [31:0] _T_1519; // @[CSR.scala 382:72:@2562.8]
  wire [39:0] _T_1520; // @[Cat.scala 30:58:@2563.8]
  wire [40:0] _GEN_64; // @[CSR.scala 382:29:@2560.6]
  wire [7:0] _T_1521; // @[CSR.scala 383:45:@2567.8]
  wire [39:0] _T_1522; // @[Cat.scala 30:58:@2568.8]
  wire [40:0] _GEN_65; // @[CSR.scala 383:29:@2566.6]
  wire [31:0] _T_1524; // @[CSR.scala 382:72:@2573.8]
  wire [39:0] _T_1525; // @[Cat.scala 30:58:@2574.8]
  wire [40:0] _GEN_66; // @[CSR.scala 382:29:@2571.6]
  wire [7:0] _T_1526; // @[CSR.scala 383:45:@2578.8]
  wire [39:0] _T_1527; // @[Cat.scala 30:58:@2579.8]
  wire [40:0] _GEN_67; // @[CSR.scala 383:29:@2577.6]
  wire [31:0] _T_1529; // @[CSR.scala 382:72:@2584.8]
  wire [39:0] _T_1530; // @[Cat.scala 30:58:@2585.8]
  wire [40:0] _GEN_68; // @[CSR.scala 382:29:@2582.6]
  wire [7:0] _T_1531; // @[CSR.scala 383:45:@2589.8]
  wire [39:0] _T_1532; // @[Cat.scala 30:58:@2590.8]
  wire [40:0] _GEN_69; // @[CSR.scala 383:29:@2588.6]
  wire [31:0] _T_1534; // @[CSR.scala 382:72:@2595.8]
  wire [39:0] _T_1535; // @[Cat.scala 30:58:@2596.8]
  wire [40:0] _GEN_70; // @[CSR.scala 382:29:@2593.6]
  wire [7:0] _T_1536; // @[CSR.scala 383:45:@2600.8]
  wire [39:0] _T_1537; // @[Cat.scala 30:58:@2601.8]
  wire [40:0] _GEN_71; // @[CSR.scala 383:29:@2599.6]
  wire [31:0] _T_1539; // @[CSR.scala 382:72:@2606.8]
  wire [39:0] _T_1540; // @[Cat.scala 30:58:@2607.8]
  wire [40:0] _GEN_72; // @[CSR.scala 382:29:@2604.6]
  wire [7:0] _T_1541; // @[CSR.scala 383:45:@2611.8]
  wire [39:0] _T_1542; // @[Cat.scala 30:58:@2612.8]
  wire [40:0] _GEN_73; // @[CSR.scala 383:29:@2610.6]
  wire [31:0] _T_1544; // @[CSR.scala 382:72:@2617.8]
  wire [39:0] _T_1545; // @[Cat.scala 30:58:@2618.8]
  wire [40:0] _GEN_74; // @[CSR.scala 382:29:@2615.6]
  wire [7:0] _T_1546; // @[CSR.scala 383:45:@2622.8]
  wire [39:0] _T_1547; // @[Cat.scala 30:58:@2623.8]
  wire [40:0] _GEN_75; // @[CSR.scala 383:29:@2621.6]
  wire [31:0] _T_1549; // @[CSR.scala 382:72:@2628.8]
  wire [39:0] _T_1550; // @[Cat.scala 30:58:@2629.8]
  wire [40:0] _GEN_76; // @[CSR.scala 382:29:@2626.6]
  wire [7:0] _T_1551; // @[CSR.scala 383:45:@2633.8]
  wire [39:0] _T_1552; // @[Cat.scala 30:58:@2634.8]
  wire [40:0] _GEN_77; // @[CSR.scala 383:29:@2632.6]
  wire [31:0] _T_1554; // @[CSR.scala 382:72:@2639.8]
  wire [39:0] _T_1555; // @[Cat.scala 30:58:@2640.8]
  wire [40:0] _GEN_78; // @[CSR.scala 382:29:@2637.6]
  wire [7:0] _T_1556; // @[CSR.scala 383:45:@2644.8]
  wire [39:0] _T_1557; // @[Cat.scala 30:58:@2645.8]
  wire [40:0] _GEN_79; // @[CSR.scala 383:29:@2643.6]
  wire [31:0] _T_1559; // @[CSR.scala 382:72:@2650.8]
  wire [39:0] _T_1560; // @[Cat.scala 30:58:@2651.8]
  wire [40:0] _GEN_80; // @[CSR.scala 382:29:@2648.6]
  wire [7:0] _T_1561; // @[CSR.scala 383:45:@2655.8]
  wire [39:0] _T_1562; // @[Cat.scala 30:58:@2656.8]
  wire [40:0] _GEN_81; // @[CSR.scala 383:29:@2654.6]
  wire [31:0] _T_1564; // @[CSR.scala 382:72:@2661.8]
  wire [39:0] _T_1565; // @[Cat.scala 30:58:@2662.8]
  wire [40:0] _GEN_82; // @[CSR.scala 382:29:@2659.6]
  wire [7:0] _T_1566; // @[CSR.scala 383:45:@2666.8]
  wire [39:0] _T_1567; // @[Cat.scala 30:58:@2667.8]
  wire [40:0] _GEN_83; // @[CSR.scala 383:29:@2665.6]
  wire [31:0] _T_1569; // @[CSR.scala 382:72:@2672.8]
  wire [39:0] _T_1570; // @[Cat.scala 30:58:@2673.8]
  wire [40:0] _GEN_84; // @[CSR.scala 382:29:@2670.6]
  wire [7:0] _T_1571; // @[CSR.scala 383:45:@2677.8]
  wire [39:0] _T_1572; // @[Cat.scala 30:58:@2678.8]
  wire [40:0] _GEN_85; // @[CSR.scala 383:29:@2676.6]
  wire [31:0] _T_1574; // @[CSR.scala 382:72:@2683.8]
  wire [39:0] _T_1575; // @[Cat.scala 30:58:@2684.8]
  wire [40:0] _GEN_86; // @[CSR.scala 382:29:@2681.6]
  wire [7:0] _T_1576; // @[CSR.scala 383:45:@2688.8]
  wire [39:0] _T_1577; // @[Cat.scala 30:58:@2689.8]
  wire [40:0] _GEN_87; // @[CSR.scala 383:29:@2687.6]
  wire [31:0] _T_1579; // @[CSR.scala 382:72:@2694.8]
  wire [63:0] _T_1580; // @[Cat.scala 30:58:@2695.8]
  wire [57:0] _T_1581; // @[Util.scala 133:28:@2697.8]
  wire [63:0] _GEN_88; // @[CSR.scala 382:29:@2692.6]
  wire [57:0] _GEN_89; // @[CSR.scala 382:29:@2692.6]
  wire [31:0] _T_1582; // @[CSR.scala 383:45:@2701.8]
  wire [63:0] _T_1583; // @[Cat.scala 30:58:@2702.8]
  wire [57:0] _T_1584; // @[Util.scala 133:28:@2704.8]
  wire [63:0] _GEN_90; // @[CSR.scala 383:29:@2700.6]
  wire [57:0] _GEN_91; // @[CSR.scala 383:29:@2700.6]
  wire [31:0] _T_1586; // @[CSR.scala 382:72:@2709.8]
  wire [63:0] _T_1587; // @[Cat.scala 30:58:@2710.8]
  wire [57:0] _T_1588; // @[Util.scala 133:28:@2712.8]
  wire [63:0] _GEN_92; // @[CSR.scala 382:29:@2707.6]
  wire [57:0] _GEN_93; // @[CSR.scala 382:29:@2707.6]
  wire [31:0] _T_1589; // @[CSR.scala 383:45:@2716.8]
  wire [63:0] _T_1590; // @[Cat.scala 30:58:@2717.8]
  wire [57:0] _T_1591; // @[Util.scala 133:28:@2719.8]
  wire [63:0] _GEN_94; // @[CSR.scala 383:29:@2715.6]
  wire [57:0] _GEN_95; // @[CSR.scala 383:29:@2715.6]
  wire [31:0] _GEN_96; // @[CSR.scala 361:40:@2722.6]
  wire [31:0] _GEN_97; // @[CSR.scala 362:40:@2725.6]
  wire [31:0] _T_1594; // @[CSR.scala 364:78:@2730.8]
  wire [34:0] _GEN_233; // @[CSR.scala 364:86:@2731.8]
  wire [34:0] _T_1596; // @[CSR.scala 364:86:@2731.8]
  wire [34:0] _GEN_98; // @[CSR.scala 364:40:@2728.6]
  wire [31:0] _GEN_99; // @[CSR.scala 365:40:@2734.6]
  wire [31:0] _T_1598; // @[CSR.scala 366:62:@2738.8]
  wire [31:0] _GEN_100; // @[CSR.scala 366:40:@2737.6]
  wire [31:0] _GEN_101; // @[CSR.scala 367:40:@2741.6]
  wire [31:0] _GEN_102; // @[CSR.scala 368:42:@2745.6]
  wire  _GEN_103; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_104; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_105; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_106; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_107; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_108; // @[CSR.scala 327:14:@2172.4]
  wire  _GEN_109; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_110; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_111; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_112; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_113; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_114; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_115; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_116; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_117; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_118; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_119; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_120; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_121; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_122; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_123; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_124; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_125; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_126; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_127; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_128; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_129; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_130; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_131; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_132; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_133; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_134; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_135; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_136; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_137; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_138; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_139; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_140; // @[CSR.scala 327:14:@2172.4]
  wire [40:0] _GEN_141; // @[CSR.scala 327:14:@2172.4]
  wire [63:0] _GEN_142; // @[CSR.scala 327:14:@2172.4]
  wire [57:0] _GEN_143; // @[CSR.scala 327:14:@2172.4]
  wire [63:0] _GEN_144; // @[CSR.scala 327:14:@2172.4]
  wire [57:0] _GEN_145; // @[CSR.scala 327:14:@2172.4]
  wire [34:0] _GEN_148; // @[CSR.scala 327:14:@2172.4]
  assign _T_259 = _T_258 + 6'h1; // @[Util.scala 113:33:@1290.4]
  assign _T_263 = _T_259[6]; // @[Util.scala 118:20:@1293.4]
  assign _T_265 = _T_262 + 58'h1; // @[Util.scala 118:43:@1295.6]
  assign _T_266 = _T_262 + 58'h1; // @[Util.scala 118:43:@1296.6]
  assign _GEN_0 = _T_263 ? _T_266 : _T_262; // @[Util.scala 118:34:@1294.4]
  assign _T_267 = {_T_262,_T_258}; // @[Cat.scala 30:58:@1299.4]
  assign _GEN_153 = {{5'd0}, io_retire}; // @[Util.scala 113:33:@1301.4]
  assign _T_271 = _T_270 + _GEN_153; // @[Util.scala 113:33:@1301.4]
  assign _T_275 = _T_271[6]; // @[Util.scala 118:20:@1304.4]
  assign _T_277 = _T_274 + 58'h1; // @[Util.scala 118:43:@1306.6]
  assign _T_278 = _T_274 + 58'h1; // @[Util.scala 118:43:@1307.6]
  assign _GEN_1 = _T_275 ? _T_278 : _T_274; // @[Util.scala 118:34:@1305.4]
  assign _T_279 = {_T_274,_T_270}; // @[Cat.scala 30:58:@1310.4]
  assign _T_283 = {{1'd0}, _T_282}; // @[Util.scala 113:33:@1313.4]
  assign _T_286 = {{1'd0}, _T_285}; // @[Util.scala 113:33:@1316.4]
  assign _T_289 = {{1'd0}, _T_288}; // @[Util.scala 113:33:@1319.4]
  assign _T_292 = {{1'd0}, _T_291}; // @[Util.scala 113:33:@1322.4]
  assign _T_295 = {{1'd0}, _T_294}; // @[Util.scala 113:33:@1325.4]
  assign _T_298 = {{1'd0}, _T_297}; // @[Util.scala 113:33:@1328.4]
  assign _T_301 = {{1'd0}, _T_300}; // @[Util.scala 113:33:@1331.4]
  assign _T_304 = {{1'd0}, _T_303}; // @[Util.scala 113:33:@1334.4]
  assign _T_307 = {{1'd0}, _T_306}; // @[Util.scala 113:33:@1337.4]
  assign _T_310 = {{1'd0}, _T_309}; // @[Util.scala 113:33:@1340.4]
  assign _T_313 = {{1'd0}, _T_312}; // @[Util.scala 113:33:@1343.4]
  assign _T_316 = {{1'd0}, _T_315}; // @[Util.scala 113:33:@1346.4]
  assign _T_319 = {{1'd0}, _T_318}; // @[Util.scala 113:33:@1349.4]
  assign _T_322 = {{1'd0}, _T_321}; // @[Util.scala 113:33:@1352.4]
  assign _T_325 = {{1'd0}, _T_324}; // @[Util.scala 113:33:@1355.4]
  assign _T_328 = {{1'd0}, _T_327}; // @[Util.scala 113:33:@1358.4]
  assign _T_331 = {{1'd0}, _T_330}; // @[Util.scala 113:33:@1361.4]
  assign _T_334 = {{1'd0}, _T_333}; // @[Util.scala 113:33:@1364.4]
  assign _T_337 = {{1'd0}, _T_336}; // @[Util.scala 113:33:@1367.4]
  assign _T_340 = {{1'd0}, _T_339}; // @[Util.scala 113:33:@1370.4]
  assign _T_343 = {{1'd0}, _T_342}; // @[Util.scala 113:33:@1373.4]
  assign _T_346 = {{1'd0}, _T_345}; // @[Util.scala 113:33:@1376.4]
  assign _T_349 = {{1'd0}, _T_348}; // @[Util.scala 113:33:@1379.4]
  assign _T_352 = {{1'd0}, _T_351}; // @[Util.scala 113:33:@1382.4]
  assign _T_355 = {{1'd0}, _T_354}; // @[Util.scala 113:33:@1385.4]
  assign _T_358 = {{1'd0}, _T_357}; // @[Util.scala 113:33:@1388.4]
  assign _T_361 = {{1'd0}, _T_360}; // @[Util.scala 113:33:@1391.4]
  assign _T_364 = {{1'd0}, _T_363}; // @[Util.scala 113:33:@1394.4]
  assign _T_367 = {{1'd0}, _T_366}; // @[Util.scala 113:33:@1397.4]
  assign _T_370 = {{1'd0}, _T_369}; // @[Util.scala 113:33:@1400.4]
  assign _T_373 = {{1'd0}, _T_372}; // @[Util.scala 113:33:@1403.4]
  assign _T_376 = {{1'd0}, _T_375}; // @[Util.scala 113:33:@1406.4]
  assign system_insn = io_rw_cmd == 3'h4; // @[CSR.scala 192:31:@1551.4]
  assign _T_492 = io_rw_cmd != 3'h0; // @[CSR.scala 193:27:@1552.4]
  assign _T_494 = system_insn == 1'h0; // @[CSR.scala 193:40:@1553.4]
  assign cpu_ren = _T_492 & _T_494; // @[CSR.scala 193:37:@1554.4]
  assign _T_498 = {io_status_upie,io_status_mie,io_status_hie,io_status_sie,io_status_uie}; // @[CSR.scala 195:38:@1558.4]
  assign _T_504 = {io_status_mpp,io_status_hpp,io_status_spp,io_status_mpie,io_status_hpie,io_status_spie,_T_498}; // @[CSR.scala 195:38:@1564.4]
  assign _T_509 = {io_status_tvm,io_status_mxr,io_status_sum,io_status_mprv,io_status_xs,io_status_fs}; // @[CSR.scala 195:38:@1569.4]
  assign read_mstatus = {io_status_debug,io_status_prv,io_status_sd,io_status_zero1,io_status_tsr,io_status_tw,_T_509,_T_504}; // @[CSR.scala 195:38:@1576.4]
  assign _T_536 = {8'h0,reg_mip_mtip,1'h0,2'h0,reg_mip_msip,1'h0,2'h0}; // @[CSR.scala 211:31:@1591.4]
  assign _T_551 = {8'h0,reg_mie_mtip,1'h0,2'h0,reg_mie_msip,1'h0,2'h0}; // @[CSR.scala 212:31:@1606.4]
  assign _T_565 = {4'h4,12'h0,reg_dcsr_ebreakm,4'h0,6'h0,2'h0,reg_dcsr_step,2'h3}; // @[CSR.scala 218:27:@1620.4]
  assign _T_569 = io_decode_csr == 12'hb00; // @[CSR.scala 255:76:@1621.4]
  assign _T_571 = io_decode_csr == 12'hb02; // @[CSR.scala 255:76:@1622.4]
  assign _T_573 = io_decode_csr == 12'hf13; // @[CSR.scala 255:76:@1623.4]
  assign _T_579 = io_decode_csr == 12'h301; // @[CSR.scala 255:76:@1626.4]
  assign _T_581 = io_decode_csr == 12'h300; // @[CSR.scala 255:76:@1627.4]
  assign _T_583 = io_decode_csr == 12'h305; // @[CSR.scala 255:76:@1628.4]
  assign _T_585 = io_decode_csr == 12'h344; // @[CSR.scala 255:76:@1629.4]
  assign _T_587 = io_decode_csr == 12'h304; // @[CSR.scala 255:76:@1630.4]
  assign _T_589 = io_decode_csr == 12'h340; // @[CSR.scala 255:76:@1631.4]
  assign _T_591 = io_decode_csr == 12'h341; // @[CSR.scala 255:76:@1632.4]
  assign _T_593 = io_decode_csr == 12'h343; // @[CSR.scala 255:76:@1633.4]
  assign _T_595 = io_decode_csr == 12'h342; // @[CSR.scala 255:76:@1634.4]
  assign _T_599 = io_decode_csr == 12'h7b0; // @[CSR.scala 255:76:@1636.4]
  assign _T_601 = io_decode_csr == 12'h7b1; // @[CSR.scala 255:76:@1637.4]
  assign _T_603 = io_decode_csr == 12'h7b2; // @[CSR.scala 255:76:@1638.4]
  assign _T_605 = io_decode_csr == 12'h302; // @[CSR.scala 255:76:@1639.4]
  assign _T_607 = io_decode_csr == 12'hb03; // @[CSR.scala 255:76:@1640.4]
  assign _T_609 = io_decode_csr == 12'hb83; // @[CSR.scala 255:76:@1641.4]
  assign _T_611 = io_decode_csr == 12'hb04; // @[CSR.scala 255:76:@1642.4]
  assign _T_613 = io_decode_csr == 12'hb84; // @[CSR.scala 255:76:@1643.4]
  assign _T_615 = io_decode_csr == 12'hb05; // @[CSR.scala 255:76:@1644.4]
  assign _T_617 = io_decode_csr == 12'hb85; // @[CSR.scala 255:76:@1645.4]
  assign _T_619 = io_decode_csr == 12'hb06; // @[CSR.scala 255:76:@1646.4]
  assign _T_621 = io_decode_csr == 12'hb86; // @[CSR.scala 255:76:@1647.4]
  assign _T_623 = io_decode_csr == 12'hb07; // @[CSR.scala 255:76:@1648.4]
  assign _T_625 = io_decode_csr == 12'hb87; // @[CSR.scala 255:76:@1649.4]
  assign _T_627 = io_decode_csr == 12'hb08; // @[CSR.scala 255:76:@1650.4]
  assign _T_629 = io_decode_csr == 12'hb88; // @[CSR.scala 255:76:@1651.4]
  assign _T_631 = io_decode_csr == 12'hb09; // @[CSR.scala 255:76:@1652.4]
  assign _T_633 = io_decode_csr == 12'hb89; // @[CSR.scala 255:76:@1653.4]
  assign _T_635 = io_decode_csr == 12'hb0a; // @[CSR.scala 255:76:@1654.4]
  assign _T_637 = io_decode_csr == 12'hb8a; // @[CSR.scala 255:76:@1655.4]
  assign _T_639 = io_decode_csr == 12'hb0b; // @[CSR.scala 255:76:@1656.4]
  assign _T_641 = io_decode_csr == 12'hb8b; // @[CSR.scala 255:76:@1657.4]
  assign _T_643 = io_decode_csr == 12'hb0c; // @[CSR.scala 255:76:@1658.4]
  assign _T_645 = io_decode_csr == 12'hb8c; // @[CSR.scala 255:76:@1659.4]
  assign _T_647 = io_decode_csr == 12'hb0d; // @[CSR.scala 255:76:@1660.4]
  assign _T_649 = io_decode_csr == 12'hb8d; // @[CSR.scala 255:76:@1661.4]
  assign _T_651 = io_decode_csr == 12'hb0e; // @[CSR.scala 255:76:@1662.4]
  assign _T_653 = io_decode_csr == 12'hb8e; // @[CSR.scala 255:76:@1663.4]
  assign _T_655 = io_decode_csr == 12'hb0f; // @[CSR.scala 255:76:@1664.4]
  assign _T_657 = io_decode_csr == 12'hb8f; // @[CSR.scala 255:76:@1665.4]
  assign _T_659 = io_decode_csr == 12'hb10; // @[CSR.scala 255:76:@1666.4]
  assign _T_661 = io_decode_csr == 12'hb90; // @[CSR.scala 255:76:@1667.4]
  assign _T_663 = io_decode_csr == 12'hb11; // @[CSR.scala 255:76:@1668.4]
  assign _T_665 = io_decode_csr == 12'hb91; // @[CSR.scala 255:76:@1669.4]
  assign _T_667 = io_decode_csr == 12'hb12; // @[CSR.scala 255:76:@1670.4]
  assign _T_669 = io_decode_csr == 12'hb92; // @[CSR.scala 255:76:@1671.4]
  assign _T_671 = io_decode_csr == 12'hb13; // @[CSR.scala 255:76:@1672.4]
  assign _T_673 = io_decode_csr == 12'hb93; // @[CSR.scala 255:76:@1673.4]
  assign _T_675 = io_decode_csr == 12'hb14; // @[CSR.scala 255:76:@1674.4]
  assign _T_677 = io_decode_csr == 12'hb94; // @[CSR.scala 255:76:@1675.4]
  assign _T_679 = io_decode_csr == 12'hb15; // @[CSR.scala 255:76:@1676.4]
  assign _T_681 = io_decode_csr == 12'hb95; // @[CSR.scala 255:76:@1677.4]
  assign _T_683 = io_decode_csr == 12'hb16; // @[CSR.scala 255:76:@1678.4]
  assign _T_685 = io_decode_csr == 12'hb96; // @[CSR.scala 255:76:@1679.4]
  assign _T_687 = io_decode_csr == 12'hb17; // @[CSR.scala 255:76:@1680.4]
  assign _T_689 = io_decode_csr == 12'hb97; // @[CSR.scala 255:76:@1681.4]
  assign _T_691 = io_decode_csr == 12'hb18; // @[CSR.scala 255:76:@1682.4]
  assign _T_693 = io_decode_csr == 12'hb98; // @[CSR.scala 255:76:@1683.4]
  assign _T_695 = io_decode_csr == 12'hb19; // @[CSR.scala 255:76:@1684.4]
  assign _T_697 = io_decode_csr == 12'hb99; // @[CSR.scala 255:76:@1685.4]
  assign _T_699 = io_decode_csr == 12'hb1a; // @[CSR.scala 255:76:@1686.4]
  assign _T_701 = io_decode_csr == 12'hb9a; // @[CSR.scala 255:76:@1687.4]
  assign _T_703 = io_decode_csr == 12'hb1b; // @[CSR.scala 255:76:@1688.4]
  assign _T_705 = io_decode_csr == 12'hb9b; // @[CSR.scala 255:76:@1689.4]
  assign _T_707 = io_decode_csr == 12'hb1c; // @[CSR.scala 255:76:@1690.4]
  assign _T_709 = io_decode_csr == 12'hb9c; // @[CSR.scala 255:76:@1691.4]
  assign _T_711 = io_decode_csr == 12'hb1d; // @[CSR.scala 255:76:@1692.4]
  assign _T_713 = io_decode_csr == 12'hb9d; // @[CSR.scala 255:76:@1693.4]
  assign _T_715 = io_decode_csr == 12'hb1e; // @[CSR.scala 255:76:@1694.4]
  assign _T_717 = io_decode_csr == 12'hb9e; // @[CSR.scala 255:76:@1695.4]
  assign _T_719 = io_decode_csr == 12'hb1f; // @[CSR.scala 255:76:@1696.4]
  assign _T_721 = io_decode_csr == 12'hb9f; // @[CSR.scala 255:76:@1697.4]
  assign _T_723 = io_decode_csr == 12'hb20; // @[CSR.scala 255:76:@1698.4]
  assign _T_725 = io_decode_csr == 12'hba0; // @[CSR.scala 255:76:@1699.4]
  assign _T_727 = io_decode_csr == 12'hb21; // @[CSR.scala 255:76:@1700.4]
  assign _T_729 = io_decode_csr == 12'hba1; // @[CSR.scala 255:76:@1701.4]
  assign _T_731 = io_decode_csr == 12'hb22; // @[CSR.scala 255:76:@1702.4]
  assign _T_733 = io_decode_csr == 12'hba2; // @[CSR.scala 255:76:@1703.4]
  assign _T_735 = io_decode_csr == 12'hb80; // @[CSR.scala 255:76:@1704.4]
  assign _T_737 = io_decode_csr == 12'hb82; // @[CSR.scala 255:76:@1705.4]
  assign _T_738 = io_decode_csr[9:8]; // @[CSR.scala 257:57:@1706.4]
  assign priv_sufficient = reg_mstatus_prv >= _T_738; // @[CSR.scala 257:41:@1707.4]
  assign _T_739 = io_decode_csr[11:10]; // @[CSR.scala 258:32:@1708.4]
  assign _T_740 = ~ _T_739; // @[CSR.scala 258:40:@1709.4]
  assign read_only = _T_740 == 2'h0; // @[CSR.scala 258:40:@1710.4]
  assign _T_742 = io_rw_cmd != 3'h5; // @[CSR.scala 259:38:@1711.4]
  assign _T_743 = cpu_ren & _T_742; // @[CSR.scala 259:25:@1712.4]
  assign cpu_wen = _T_743 & priv_sufficient; // @[CSR.scala 259:48:@1713.4]
  assign _T_745 = read_only == 1'h0; // @[CSR.scala 260:24:@1714.4]
  assign wen = cpu_wen & _T_745; // @[CSR.scala 260:21:@1715.4]
  assign _T_746 = io_rw_cmd == 3'h2; // @[Util.scala 23:47:@1716.4]
  assign _T_747 = io_rw_cmd == 3'h3; // @[Util.scala 23:47:@1717.4]
  assign _T_748 = _T_746 | _T_747; // @[Util.scala 23:62:@1718.4]
  assign _T_750 = _T_748 ? io_rw_rdata : 32'h0; // @[CSR.scala 386:9:@1719.4]
  assign _T_751 = _T_750 | io_rw_wdata; // @[CSR.scala 386:49:@1720.4]
  assign _T_754 = _T_747 ? io_rw_wdata : 32'h0; // @[CSR.scala 386:64:@1722.4]
  assign _T_755 = ~ _T_754; // @[CSR.scala 386:60:@1723.4]
  assign wdata = _T_751 & _T_755; // @[CSR.scala 386:58:@1724.4]
  assign _T_757 = io_decode_csr[2:0]; // @[CSR.scala 263:36:@1725.4]
  assign opcode = 8'h1 << _T_757; // @[CSR.scala 263:20:@1726.4]
  assign _T_758 = opcode[0]; // @[CSR.scala 264:40:@1727.4]
  assign insn_call = system_insn & _T_758; // @[CSR.scala 264:31:@1728.4]
  assign _T_759 = opcode[1]; // @[CSR.scala 265:41:@1729.4]
  assign insn_break = system_insn & _T_759; // @[CSR.scala 265:32:@1730.4]
  assign _T_760 = opcode[2]; // @[CSR.scala 266:39:@1731.4]
  assign _T_761 = system_insn & _T_760; // @[CSR.scala 266:30:@1732.4]
  assign insn_ret = _T_761 & priv_sufficient; // @[CSR.scala 266:43:@1733.4]
  assign _T_1044 = insn_call | insn_break; // @[CSR.scala 278:24:@1951.4]
  assign _GEN_2 = io_exception ? 32'h2 : reg_mcause; // @[CSR.scala 281:23:@1954.4]
  assign _GEN_4 = io_exception ? io_pc : reg_mepc; // @[CSR.scala 281:23:@1954.4]
  assign _T_1048 = insn_ret + io_exception; // @[Bitwise.scala 48:55:@1959.4]
  assign _T_1050 = _T_1048 <= 2'h1; // @[CSR.scala 287:52:@1960.4]
  assign _T_1052 = _T_1050 | reset; // @[CSR.scala 287:9:@1962.4]
  assign _T_1054 = _T_1052 == 1'h0; // @[CSR.scala 287:9:@1963.4]
  assign _T_1057 = io_decode_csr[10]; // @[CSR.scala 294:33:@1972.4]
  assign _T_1058 = insn_ret & _T_1057; // @[CSR.scala 294:17:@1973.4]
  assign _GEN_6 = _T_1058 ? 2'h3 : reg_mstatus_prv; // @[CSR.scala 294:38:@1974.4]
  assign _GEN_8 = _T_1058 ? reg_dpc : 32'h80000004; // @[CSR.scala 294:38:@1974.4]
  assign _T_1062 = _T_1057 == 1'h0; // @[CSR.scala 301:21:@1980.4]
  assign _T_1063 = insn_ret & _T_1062; // @[CSR.scala 301:18:@1981.4]
  assign _GEN_9 = _T_1063 ? reg_mstatus_mpie : reg_mstatus_mie; // @[CSR.scala 301:41:@1982.4]
  assign _GEN_10 = _T_1063 ? 1'h1 : reg_mstatus_mpie; // @[CSR.scala 301:41:@1982.4]
  assign new_prv = _T_1063 ? 2'h3 : _GEN_6; // @[CSR.scala 301:41:@1982.4]
  assign _GEN_12 = _T_1063 ? reg_mepc : _GEN_8; // @[CSR.scala 301:41:@1982.4]
  assign _GEN_154 = {{2'd0}, reg_mstatus_prv}; // @[CSR.scala 311:35:@1990.6]
  assign _T_1067 = _GEN_154 + 4'h8; // @[CSR.scala 311:35:@1990.6]
  assign _T_1068 = _GEN_154 + 4'h8; // @[CSR.scala 311:35:@1991.6]
  assign _GEN_13 = insn_call ? 32'h80000004 : _GEN_12; // @[CSR.scala 309:18:@1988.4]
  assign _GEN_14 = insn_call ? {{28'd0}, _T_1068} : _GEN_2; // @[CSR.scala 309:18:@1988.4]
  assign _GEN_16 = insn_break ? 32'h3 : _GEN_14; // @[CSR.scala 315:19:@1994.4]
  assign _T_1073 = _T_569 ? _T_267 : 64'h0; // @[Mux.scala 19:72:@2000.4]
  assign _T_1075 = _T_571 ? _T_279 : 64'h0; // @[Mux.scala 19:72:@2001.4]
  assign _T_1077 = _T_573 ? 16'h8000 : 16'h0; // @[Mux.scala 19:72:@2002.4]
  assign _T_1083 = _T_579 ? 9'h100 : 9'h0; // @[Mux.scala 19:72:@2005.4]
  assign _T_1085 = _T_581 ? read_mstatus : 35'h0; // @[Mux.scala 19:72:@2006.4]
  assign _T_1087 = _T_583 ? 9'h100 : 9'h0; // @[Mux.scala 19:72:@2007.4]
  assign _T_1089 = _T_585 ? _T_536 : 16'h0; // @[Mux.scala 19:72:@2008.4]
  assign _T_1091 = _T_587 ? _T_551 : 16'h0; // @[Mux.scala 19:72:@2009.4]
  assign _T_1093 = _T_589 ? reg_mscratch : 32'h0; // @[Mux.scala 19:72:@2010.4]
  assign _T_1095 = _T_591 ? reg_mepc : 32'h0; // @[Mux.scala 19:72:@2011.4]
  assign _T_1097 = _T_593 ? reg_mtval : 32'h0; // @[Mux.scala 19:72:@2012.4]
  assign _T_1099 = _T_595 ? reg_mcause : 32'h0; // @[Mux.scala 19:72:@2013.4]
  assign _T_1103 = _T_599 ? _T_565 : 32'h0; // @[Mux.scala 19:72:@2015.4]
  assign _T_1105 = _T_601 ? reg_dpc : 32'h0; // @[Mux.scala 19:72:@2016.4]
  assign _T_1107 = _T_603 ? reg_dscratch : 32'h0; // @[Mux.scala 19:72:@2017.4]
  assign _T_1109 = _T_605 ? reg_medeleg : 32'h0; // @[Mux.scala 19:72:@2018.4]
  assign _T_1111 = _T_607 ? _T_282 : 40'h0; // @[Mux.scala 19:72:@2019.4]
  assign _T_1113 = _T_609 ? _T_282 : 40'h0; // @[Mux.scala 19:72:@2020.4]
  assign _T_1115 = _T_611 ? _T_285 : 40'h0; // @[Mux.scala 19:72:@2021.4]
  assign _T_1117 = _T_613 ? _T_285 : 40'h0; // @[Mux.scala 19:72:@2022.4]
  assign _T_1119 = _T_615 ? _T_288 : 40'h0; // @[Mux.scala 19:72:@2023.4]
  assign _T_1121 = _T_617 ? _T_288 : 40'h0; // @[Mux.scala 19:72:@2024.4]
  assign _T_1123 = _T_619 ? _T_291 : 40'h0; // @[Mux.scala 19:72:@2025.4]
  assign _T_1125 = _T_621 ? _T_291 : 40'h0; // @[Mux.scala 19:72:@2026.4]
  assign _T_1127 = _T_623 ? _T_294 : 40'h0; // @[Mux.scala 19:72:@2027.4]
  assign _T_1129 = _T_625 ? _T_294 : 40'h0; // @[Mux.scala 19:72:@2028.4]
  assign _T_1131 = _T_627 ? _T_297 : 40'h0; // @[Mux.scala 19:72:@2029.4]
  assign _T_1133 = _T_629 ? _T_297 : 40'h0; // @[Mux.scala 19:72:@2030.4]
  assign _T_1135 = _T_631 ? _T_300 : 40'h0; // @[Mux.scala 19:72:@2031.4]
  assign _T_1137 = _T_633 ? _T_300 : 40'h0; // @[Mux.scala 19:72:@2032.4]
  assign _T_1139 = _T_635 ? _T_303 : 40'h0; // @[Mux.scala 19:72:@2033.4]
  assign _T_1141 = _T_637 ? _T_303 : 40'h0; // @[Mux.scala 19:72:@2034.4]
  assign _T_1143 = _T_639 ? _T_306 : 40'h0; // @[Mux.scala 19:72:@2035.4]
  assign _T_1145 = _T_641 ? _T_306 : 40'h0; // @[Mux.scala 19:72:@2036.4]
  assign _T_1147 = _T_643 ? _T_309 : 40'h0; // @[Mux.scala 19:72:@2037.4]
  assign _T_1149 = _T_645 ? _T_309 : 40'h0; // @[Mux.scala 19:72:@2038.4]
  assign _T_1151 = _T_647 ? _T_312 : 40'h0; // @[Mux.scala 19:72:@2039.4]
  assign _T_1153 = _T_649 ? _T_312 : 40'h0; // @[Mux.scala 19:72:@2040.4]
  assign _T_1155 = _T_651 ? _T_315 : 40'h0; // @[Mux.scala 19:72:@2041.4]
  assign _T_1157 = _T_653 ? _T_315 : 40'h0; // @[Mux.scala 19:72:@2042.4]
  assign _T_1159 = _T_655 ? _T_318 : 40'h0; // @[Mux.scala 19:72:@2043.4]
  assign _T_1161 = _T_657 ? _T_318 : 40'h0; // @[Mux.scala 19:72:@2044.4]
  assign _T_1163 = _T_659 ? _T_321 : 40'h0; // @[Mux.scala 19:72:@2045.4]
  assign _T_1165 = _T_661 ? _T_321 : 40'h0; // @[Mux.scala 19:72:@2046.4]
  assign _T_1167 = _T_663 ? _T_324 : 40'h0; // @[Mux.scala 19:72:@2047.4]
  assign _T_1169 = _T_665 ? _T_324 : 40'h0; // @[Mux.scala 19:72:@2048.4]
  assign _T_1171 = _T_667 ? _T_327 : 40'h0; // @[Mux.scala 19:72:@2049.4]
  assign _T_1173 = _T_669 ? _T_327 : 40'h0; // @[Mux.scala 19:72:@2050.4]
  assign _T_1175 = _T_671 ? _T_330 : 40'h0; // @[Mux.scala 19:72:@2051.4]
  assign _T_1177 = _T_673 ? _T_330 : 40'h0; // @[Mux.scala 19:72:@2052.4]
  assign _T_1179 = _T_675 ? _T_333 : 40'h0; // @[Mux.scala 19:72:@2053.4]
  assign _T_1181 = _T_677 ? _T_333 : 40'h0; // @[Mux.scala 19:72:@2054.4]
  assign _T_1183 = _T_679 ? _T_336 : 40'h0; // @[Mux.scala 19:72:@2055.4]
  assign _T_1185 = _T_681 ? _T_336 : 40'h0; // @[Mux.scala 19:72:@2056.4]
  assign _T_1187 = _T_683 ? _T_339 : 40'h0; // @[Mux.scala 19:72:@2057.4]
  assign _T_1189 = _T_685 ? _T_339 : 40'h0; // @[Mux.scala 19:72:@2058.4]
  assign _T_1191 = _T_687 ? _T_342 : 40'h0; // @[Mux.scala 19:72:@2059.4]
  assign _T_1193 = _T_689 ? _T_342 : 40'h0; // @[Mux.scala 19:72:@2060.4]
  assign _T_1195 = _T_691 ? _T_345 : 40'h0; // @[Mux.scala 19:72:@2061.4]
  assign _T_1197 = _T_693 ? _T_345 : 40'h0; // @[Mux.scala 19:72:@2062.4]
  assign _T_1199 = _T_695 ? _T_348 : 40'h0; // @[Mux.scala 19:72:@2063.4]
  assign _T_1201 = _T_697 ? _T_348 : 40'h0; // @[Mux.scala 19:72:@2064.4]
  assign _T_1203 = _T_699 ? _T_351 : 40'h0; // @[Mux.scala 19:72:@2065.4]
  assign _T_1205 = _T_701 ? _T_351 : 40'h0; // @[Mux.scala 19:72:@2066.4]
  assign _T_1207 = _T_703 ? _T_354 : 40'h0; // @[Mux.scala 19:72:@2067.4]
  assign _T_1209 = _T_705 ? _T_354 : 40'h0; // @[Mux.scala 19:72:@2068.4]
  assign _T_1211 = _T_707 ? _T_357 : 40'h0; // @[Mux.scala 19:72:@2069.4]
  assign _T_1213 = _T_709 ? _T_357 : 40'h0; // @[Mux.scala 19:72:@2070.4]
  assign _T_1215 = _T_711 ? _T_360 : 40'h0; // @[Mux.scala 19:72:@2071.4]
  assign _T_1217 = _T_713 ? _T_360 : 40'h0; // @[Mux.scala 19:72:@2072.4]
  assign _T_1219 = _T_715 ? _T_363 : 40'h0; // @[Mux.scala 19:72:@2073.4]
  assign _T_1221 = _T_717 ? _T_363 : 40'h0; // @[Mux.scala 19:72:@2074.4]
  assign _T_1223 = _T_719 ? _T_366 : 40'h0; // @[Mux.scala 19:72:@2075.4]
  assign _T_1225 = _T_721 ? _T_366 : 40'h0; // @[Mux.scala 19:72:@2076.4]
  assign _T_1227 = _T_723 ? _T_369 : 40'h0; // @[Mux.scala 19:72:@2077.4]
  assign _T_1229 = _T_725 ? _T_369 : 40'h0; // @[Mux.scala 19:72:@2078.4]
  assign _T_1231 = _T_727 ? _T_372 : 40'h0; // @[Mux.scala 19:72:@2079.4]
  assign _T_1233 = _T_729 ? _T_372 : 40'h0; // @[Mux.scala 19:72:@2080.4]
  assign _T_1235 = _T_731 ? _T_375 : 40'h0; // @[Mux.scala 19:72:@2081.4]
  assign _T_1237 = _T_733 ? _T_375 : 40'h0; // @[Mux.scala 19:72:@2082.4]
  assign _T_1242 = _T_1073 | _T_1075; // @[Mux.scala 19:72:@2085.4]
  assign _GEN_155 = {{48'd0}, _T_1077}; // @[Mux.scala 19:72:@2086.4]
  assign _T_1243 = _T_1242 | _GEN_155; // @[Mux.scala 19:72:@2086.4]
  assign _GEN_156 = {{55'd0}, _T_1083}; // @[Mux.scala 19:72:@2089.4]
  assign _T_1246 = _T_1243 | _GEN_156; // @[Mux.scala 19:72:@2089.4]
  assign _GEN_157 = {{29'd0}, _T_1085}; // @[Mux.scala 19:72:@2090.4]
  assign _T_1247 = _T_1246 | _GEN_157; // @[Mux.scala 19:72:@2090.4]
  assign _GEN_158 = {{55'd0}, _T_1087}; // @[Mux.scala 19:72:@2091.4]
  assign _T_1248 = _T_1247 | _GEN_158; // @[Mux.scala 19:72:@2091.4]
  assign _GEN_159 = {{48'd0}, _T_1089}; // @[Mux.scala 19:72:@2092.4]
  assign _T_1249 = _T_1248 | _GEN_159; // @[Mux.scala 19:72:@2092.4]
  assign _GEN_160 = {{48'd0}, _T_1091}; // @[Mux.scala 19:72:@2093.4]
  assign _T_1250 = _T_1249 | _GEN_160; // @[Mux.scala 19:72:@2093.4]
  assign _GEN_161 = {{32'd0}, _T_1093}; // @[Mux.scala 19:72:@2094.4]
  assign _T_1251 = _T_1250 | _GEN_161; // @[Mux.scala 19:72:@2094.4]
  assign _GEN_162 = {{32'd0}, _T_1095}; // @[Mux.scala 19:72:@2095.4]
  assign _T_1252 = _T_1251 | _GEN_162; // @[Mux.scala 19:72:@2095.4]
  assign _GEN_163 = {{32'd0}, _T_1097}; // @[Mux.scala 19:72:@2096.4]
  assign _T_1253 = _T_1252 | _GEN_163; // @[Mux.scala 19:72:@2096.4]
  assign _GEN_164 = {{32'd0}, _T_1099}; // @[Mux.scala 19:72:@2097.4]
  assign _T_1254 = _T_1253 | _GEN_164; // @[Mux.scala 19:72:@2097.4]
  assign _GEN_165 = {{32'd0}, _T_1103}; // @[Mux.scala 19:72:@2099.4]
  assign _T_1256 = _T_1254 | _GEN_165; // @[Mux.scala 19:72:@2099.4]
  assign _GEN_166 = {{32'd0}, _T_1105}; // @[Mux.scala 19:72:@2100.4]
  assign _T_1257 = _T_1256 | _GEN_166; // @[Mux.scala 19:72:@2100.4]
  assign _GEN_167 = {{32'd0}, _T_1107}; // @[Mux.scala 19:72:@2101.4]
  assign _T_1258 = _T_1257 | _GEN_167; // @[Mux.scala 19:72:@2101.4]
  assign _GEN_168 = {{32'd0}, _T_1109}; // @[Mux.scala 19:72:@2102.4]
  assign _T_1259 = _T_1258 | _GEN_168; // @[Mux.scala 19:72:@2102.4]
  assign _GEN_169 = {{24'd0}, _T_1111}; // @[Mux.scala 19:72:@2103.4]
  assign _T_1260 = _T_1259 | _GEN_169; // @[Mux.scala 19:72:@2103.4]
  assign _GEN_170 = {{24'd0}, _T_1113}; // @[Mux.scala 19:72:@2104.4]
  assign _T_1261 = _T_1260 | _GEN_170; // @[Mux.scala 19:72:@2104.4]
  assign _GEN_171 = {{24'd0}, _T_1115}; // @[Mux.scala 19:72:@2105.4]
  assign _T_1262 = _T_1261 | _GEN_171; // @[Mux.scala 19:72:@2105.4]
  assign _GEN_172 = {{24'd0}, _T_1117}; // @[Mux.scala 19:72:@2106.4]
  assign _T_1263 = _T_1262 | _GEN_172; // @[Mux.scala 19:72:@2106.4]
  assign _GEN_173 = {{24'd0}, _T_1119}; // @[Mux.scala 19:72:@2107.4]
  assign _T_1264 = _T_1263 | _GEN_173; // @[Mux.scala 19:72:@2107.4]
  assign _GEN_174 = {{24'd0}, _T_1121}; // @[Mux.scala 19:72:@2108.4]
  assign _T_1265 = _T_1264 | _GEN_174; // @[Mux.scala 19:72:@2108.4]
  assign _GEN_175 = {{24'd0}, _T_1123}; // @[Mux.scala 19:72:@2109.4]
  assign _T_1266 = _T_1265 | _GEN_175; // @[Mux.scala 19:72:@2109.4]
  assign _GEN_176 = {{24'd0}, _T_1125}; // @[Mux.scala 19:72:@2110.4]
  assign _T_1267 = _T_1266 | _GEN_176; // @[Mux.scala 19:72:@2110.4]
  assign _GEN_177 = {{24'd0}, _T_1127}; // @[Mux.scala 19:72:@2111.4]
  assign _T_1268 = _T_1267 | _GEN_177; // @[Mux.scala 19:72:@2111.4]
  assign _GEN_178 = {{24'd0}, _T_1129}; // @[Mux.scala 19:72:@2112.4]
  assign _T_1269 = _T_1268 | _GEN_178; // @[Mux.scala 19:72:@2112.4]
  assign _GEN_179 = {{24'd0}, _T_1131}; // @[Mux.scala 19:72:@2113.4]
  assign _T_1270 = _T_1269 | _GEN_179; // @[Mux.scala 19:72:@2113.4]
  assign _GEN_180 = {{24'd0}, _T_1133}; // @[Mux.scala 19:72:@2114.4]
  assign _T_1271 = _T_1270 | _GEN_180; // @[Mux.scala 19:72:@2114.4]
  assign _GEN_181 = {{24'd0}, _T_1135}; // @[Mux.scala 19:72:@2115.4]
  assign _T_1272 = _T_1271 | _GEN_181; // @[Mux.scala 19:72:@2115.4]
  assign _GEN_182 = {{24'd0}, _T_1137}; // @[Mux.scala 19:72:@2116.4]
  assign _T_1273 = _T_1272 | _GEN_182; // @[Mux.scala 19:72:@2116.4]
  assign _GEN_183 = {{24'd0}, _T_1139}; // @[Mux.scala 19:72:@2117.4]
  assign _T_1274 = _T_1273 | _GEN_183; // @[Mux.scala 19:72:@2117.4]
  assign _GEN_184 = {{24'd0}, _T_1141}; // @[Mux.scala 19:72:@2118.4]
  assign _T_1275 = _T_1274 | _GEN_184; // @[Mux.scala 19:72:@2118.4]
  assign _GEN_185 = {{24'd0}, _T_1143}; // @[Mux.scala 19:72:@2119.4]
  assign _T_1276 = _T_1275 | _GEN_185; // @[Mux.scala 19:72:@2119.4]
  assign _GEN_186 = {{24'd0}, _T_1145}; // @[Mux.scala 19:72:@2120.4]
  assign _T_1277 = _T_1276 | _GEN_186; // @[Mux.scala 19:72:@2120.4]
  assign _GEN_187 = {{24'd0}, _T_1147}; // @[Mux.scala 19:72:@2121.4]
  assign _T_1278 = _T_1277 | _GEN_187; // @[Mux.scala 19:72:@2121.4]
  assign _GEN_188 = {{24'd0}, _T_1149}; // @[Mux.scala 19:72:@2122.4]
  assign _T_1279 = _T_1278 | _GEN_188; // @[Mux.scala 19:72:@2122.4]
  assign _GEN_189 = {{24'd0}, _T_1151}; // @[Mux.scala 19:72:@2123.4]
  assign _T_1280 = _T_1279 | _GEN_189; // @[Mux.scala 19:72:@2123.4]
  assign _GEN_190 = {{24'd0}, _T_1153}; // @[Mux.scala 19:72:@2124.4]
  assign _T_1281 = _T_1280 | _GEN_190; // @[Mux.scala 19:72:@2124.4]
  assign _GEN_191 = {{24'd0}, _T_1155}; // @[Mux.scala 19:72:@2125.4]
  assign _T_1282 = _T_1281 | _GEN_191; // @[Mux.scala 19:72:@2125.4]
  assign _GEN_192 = {{24'd0}, _T_1157}; // @[Mux.scala 19:72:@2126.4]
  assign _T_1283 = _T_1282 | _GEN_192; // @[Mux.scala 19:72:@2126.4]
  assign _GEN_193 = {{24'd0}, _T_1159}; // @[Mux.scala 19:72:@2127.4]
  assign _T_1284 = _T_1283 | _GEN_193; // @[Mux.scala 19:72:@2127.4]
  assign _GEN_194 = {{24'd0}, _T_1161}; // @[Mux.scala 19:72:@2128.4]
  assign _T_1285 = _T_1284 | _GEN_194; // @[Mux.scala 19:72:@2128.4]
  assign _GEN_195 = {{24'd0}, _T_1163}; // @[Mux.scala 19:72:@2129.4]
  assign _T_1286 = _T_1285 | _GEN_195; // @[Mux.scala 19:72:@2129.4]
  assign _GEN_196 = {{24'd0}, _T_1165}; // @[Mux.scala 19:72:@2130.4]
  assign _T_1287 = _T_1286 | _GEN_196; // @[Mux.scala 19:72:@2130.4]
  assign _GEN_197 = {{24'd0}, _T_1167}; // @[Mux.scala 19:72:@2131.4]
  assign _T_1288 = _T_1287 | _GEN_197; // @[Mux.scala 19:72:@2131.4]
  assign _GEN_198 = {{24'd0}, _T_1169}; // @[Mux.scala 19:72:@2132.4]
  assign _T_1289 = _T_1288 | _GEN_198; // @[Mux.scala 19:72:@2132.4]
  assign _GEN_199 = {{24'd0}, _T_1171}; // @[Mux.scala 19:72:@2133.4]
  assign _T_1290 = _T_1289 | _GEN_199; // @[Mux.scala 19:72:@2133.4]
  assign _GEN_200 = {{24'd0}, _T_1173}; // @[Mux.scala 19:72:@2134.4]
  assign _T_1291 = _T_1290 | _GEN_200; // @[Mux.scala 19:72:@2134.4]
  assign _GEN_201 = {{24'd0}, _T_1175}; // @[Mux.scala 19:72:@2135.4]
  assign _T_1292 = _T_1291 | _GEN_201; // @[Mux.scala 19:72:@2135.4]
  assign _GEN_202 = {{24'd0}, _T_1177}; // @[Mux.scala 19:72:@2136.4]
  assign _T_1293 = _T_1292 | _GEN_202; // @[Mux.scala 19:72:@2136.4]
  assign _GEN_203 = {{24'd0}, _T_1179}; // @[Mux.scala 19:72:@2137.4]
  assign _T_1294 = _T_1293 | _GEN_203; // @[Mux.scala 19:72:@2137.4]
  assign _GEN_204 = {{24'd0}, _T_1181}; // @[Mux.scala 19:72:@2138.4]
  assign _T_1295 = _T_1294 | _GEN_204; // @[Mux.scala 19:72:@2138.4]
  assign _GEN_205 = {{24'd0}, _T_1183}; // @[Mux.scala 19:72:@2139.4]
  assign _T_1296 = _T_1295 | _GEN_205; // @[Mux.scala 19:72:@2139.4]
  assign _GEN_206 = {{24'd0}, _T_1185}; // @[Mux.scala 19:72:@2140.4]
  assign _T_1297 = _T_1296 | _GEN_206; // @[Mux.scala 19:72:@2140.4]
  assign _GEN_207 = {{24'd0}, _T_1187}; // @[Mux.scala 19:72:@2141.4]
  assign _T_1298 = _T_1297 | _GEN_207; // @[Mux.scala 19:72:@2141.4]
  assign _GEN_208 = {{24'd0}, _T_1189}; // @[Mux.scala 19:72:@2142.4]
  assign _T_1299 = _T_1298 | _GEN_208; // @[Mux.scala 19:72:@2142.4]
  assign _GEN_209 = {{24'd0}, _T_1191}; // @[Mux.scala 19:72:@2143.4]
  assign _T_1300 = _T_1299 | _GEN_209; // @[Mux.scala 19:72:@2143.4]
  assign _GEN_210 = {{24'd0}, _T_1193}; // @[Mux.scala 19:72:@2144.4]
  assign _T_1301 = _T_1300 | _GEN_210; // @[Mux.scala 19:72:@2144.4]
  assign _GEN_211 = {{24'd0}, _T_1195}; // @[Mux.scala 19:72:@2145.4]
  assign _T_1302 = _T_1301 | _GEN_211; // @[Mux.scala 19:72:@2145.4]
  assign _GEN_212 = {{24'd0}, _T_1197}; // @[Mux.scala 19:72:@2146.4]
  assign _T_1303 = _T_1302 | _GEN_212; // @[Mux.scala 19:72:@2146.4]
  assign _GEN_213 = {{24'd0}, _T_1199}; // @[Mux.scala 19:72:@2147.4]
  assign _T_1304 = _T_1303 | _GEN_213; // @[Mux.scala 19:72:@2147.4]
  assign _GEN_214 = {{24'd0}, _T_1201}; // @[Mux.scala 19:72:@2148.4]
  assign _T_1305 = _T_1304 | _GEN_214; // @[Mux.scala 19:72:@2148.4]
  assign _GEN_215 = {{24'd0}, _T_1203}; // @[Mux.scala 19:72:@2149.4]
  assign _T_1306 = _T_1305 | _GEN_215; // @[Mux.scala 19:72:@2149.4]
  assign _GEN_216 = {{24'd0}, _T_1205}; // @[Mux.scala 19:72:@2150.4]
  assign _T_1307 = _T_1306 | _GEN_216; // @[Mux.scala 19:72:@2150.4]
  assign _GEN_217 = {{24'd0}, _T_1207}; // @[Mux.scala 19:72:@2151.4]
  assign _T_1308 = _T_1307 | _GEN_217; // @[Mux.scala 19:72:@2151.4]
  assign _GEN_218 = {{24'd0}, _T_1209}; // @[Mux.scala 19:72:@2152.4]
  assign _T_1309 = _T_1308 | _GEN_218; // @[Mux.scala 19:72:@2152.4]
  assign _GEN_219 = {{24'd0}, _T_1211}; // @[Mux.scala 19:72:@2153.4]
  assign _T_1310 = _T_1309 | _GEN_219; // @[Mux.scala 19:72:@2153.4]
  assign _GEN_220 = {{24'd0}, _T_1213}; // @[Mux.scala 19:72:@2154.4]
  assign _T_1311 = _T_1310 | _GEN_220; // @[Mux.scala 19:72:@2154.4]
  assign _GEN_221 = {{24'd0}, _T_1215}; // @[Mux.scala 19:72:@2155.4]
  assign _T_1312 = _T_1311 | _GEN_221; // @[Mux.scala 19:72:@2155.4]
  assign _GEN_222 = {{24'd0}, _T_1217}; // @[Mux.scala 19:72:@2156.4]
  assign _T_1313 = _T_1312 | _GEN_222; // @[Mux.scala 19:72:@2156.4]
  assign _GEN_223 = {{24'd0}, _T_1219}; // @[Mux.scala 19:72:@2157.4]
  assign _T_1314 = _T_1313 | _GEN_223; // @[Mux.scala 19:72:@2157.4]
  assign _GEN_224 = {{24'd0}, _T_1221}; // @[Mux.scala 19:72:@2158.4]
  assign _T_1315 = _T_1314 | _GEN_224; // @[Mux.scala 19:72:@2158.4]
  assign _GEN_225 = {{24'd0}, _T_1223}; // @[Mux.scala 19:72:@2159.4]
  assign _T_1316 = _T_1315 | _GEN_225; // @[Mux.scala 19:72:@2159.4]
  assign _GEN_226 = {{24'd0}, _T_1225}; // @[Mux.scala 19:72:@2160.4]
  assign _T_1317 = _T_1316 | _GEN_226; // @[Mux.scala 19:72:@2160.4]
  assign _GEN_227 = {{24'd0}, _T_1227}; // @[Mux.scala 19:72:@2161.4]
  assign _T_1318 = _T_1317 | _GEN_227; // @[Mux.scala 19:72:@2161.4]
  assign _GEN_228 = {{24'd0}, _T_1229}; // @[Mux.scala 19:72:@2162.4]
  assign _T_1319 = _T_1318 | _GEN_228; // @[Mux.scala 19:72:@2162.4]
  assign _GEN_229 = {{24'd0}, _T_1231}; // @[Mux.scala 19:72:@2163.4]
  assign _T_1320 = _T_1319 | _GEN_229; // @[Mux.scala 19:72:@2163.4]
  assign _GEN_230 = {{24'd0}, _T_1233}; // @[Mux.scala 19:72:@2164.4]
  assign _T_1321 = _T_1320 | _GEN_230; // @[Mux.scala 19:72:@2164.4]
  assign _GEN_231 = {{24'd0}, _T_1235}; // @[Mux.scala 19:72:@2165.4]
  assign _T_1322 = _T_1321 | _GEN_231; // @[Mux.scala 19:72:@2165.4]
  assign _GEN_232 = {{24'd0}, _T_1237}; // @[Mux.scala 19:72:@2166.4]
  assign _T_1323 = _T_1322 | _GEN_232; // @[Mux.scala 19:72:@2166.4]
  assign _T_1334 = wdata[2]; // @[CSR.scala 330:38:@2179.8]
  assign _T_1344 = wdata[15]; // @[CSR.scala 330:38:@2199.8]
  assign _GEN_17 = _T_599 ? _T_1334 : reg_dcsr_step; // @[CSR.scala 329:36:@2173.6]
  assign _GEN_18 = _T_599 ? _T_1344 : reg_dcsr_ebreakm; // @[CSR.scala 329:36:@2173.6]
  assign _T_1352 = {{3'd0}, wdata}; // @[:@2212.8 :@2213.8]
  assign _T_1356 = _T_1352[3]; // @[CSR.scala 337:39:@2220.8]
  assign _T_1360 = _T_1352[7]; // @[CSR.scala 337:39:@2228.8]
  assign _GEN_19 = _T_581 ? _T_1356 : _GEN_9; // @[CSR.scala 336:39:@2210.6]
  assign _GEN_20 = _T_581 ? _T_1360 : _GEN_10; // @[CSR.scala 336:39:@2210.6]
  assign _T_1380 = wdata[15:0]; // @[:@2265.8 :@2266.8]
  assign _T_1384 = _T_1380[3]; // @[CSR.scala 342:35:@2273.8]
  assign _T_1388 = _T_1380[7]; // @[CSR.scala 342:35:@2281.8]
  assign _GEN_21 = _T_585 ? _T_1384 : reg_mip_msip; // @[CSR.scala 341:35:@2263.6]
  assign _GEN_22 = _T_587 ? _T_1384 : reg_mie_msip; // @[CSR.scala 345:35:@2301.6]
  assign _GEN_23 = _T_587 ? _T_1388 : reg_mie_mtip; // @[CSR.scala 345:35:@2301.6]
  assign _T_1418 = wdata[7:0]; // @[CSR.scala 382:47:@2341.8]
  assign _T_1419 = _T_282[31:0]; // @[CSR.scala 382:72:@2342.8]
  assign _T_1420 = {_T_1418,_T_1419}; // @[Cat.scala 30:58:@2343.8]
  assign _GEN_24 = _T_609 ? {{1'd0}, _T_1420} : _T_283; // @[CSR.scala 382:29:@2340.6]
  assign _T_1421 = _T_282[39:32]; // @[CSR.scala 383:45:@2347.8]
  assign _T_1422 = {_T_1421,wdata}; // @[Cat.scala 30:58:@2348.8]
  assign _GEN_25 = _T_607 ? {{1'd0}, _T_1422} : _GEN_24; // @[CSR.scala 383:29:@2346.6]
  assign _T_1424 = _T_285[31:0]; // @[CSR.scala 382:72:@2353.8]
  assign _T_1425 = {_T_1418,_T_1424}; // @[Cat.scala 30:58:@2354.8]
  assign _GEN_26 = _T_613 ? {{1'd0}, _T_1425} : _T_286; // @[CSR.scala 382:29:@2351.6]
  assign _T_1426 = _T_285[39:32]; // @[CSR.scala 383:45:@2358.8]
  assign _T_1427 = {_T_1426,wdata}; // @[Cat.scala 30:58:@2359.8]
  assign _GEN_27 = _T_611 ? {{1'd0}, _T_1427} : _GEN_26; // @[CSR.scala 383:29:@2357.6]
  assign _T_1429 = _T_288[31:0]; // @[CSR.scala 382:72:@2364.8]
  assign _T_1430 = {_T_1418,_T_1429}; // @[Cat.scala 30:58:@2365.8]
  assign _GEN_28 = _T_617 ? {{1'd0}, _T_1430} : _T_289; // @[CSR.scala 382:29:@2362.6]
  assign _T_1431 = _T_288[39:32]; // @[CSR.scala 383:45:@2369.8]
  assign _T_1432 = {_T_1431,wdata}; // @[Cat.scala 30:58:@2370.8]
  assign _GEN_29 = _T_615 ? {{1'd0}, _T_1432} : _GEN_28; // @[CSR.scala 383:29:@2368.6]
  assign _T_1434 = _T_291[31:0]; // @[CSR.scala 382:72:@2375.8]
  assign _T_1435 = {_T_1418,_T_1434}; // @[Cat.scala 30:58:@2376.8]
  assign _GEN_30 = _T_621 ? {{1'd0}, _T_1435} : _T_292; // @[CSR.scala 382:29:@2373.6]
  assign _T_1436 = _T_291[39:32]; // @[CSR.scala 383:45:@2380.8]
  assign _T_1437 = {_T_1436,wdata}; // @[Cat.scala 30:58:@2381.8]
  assign _GEN_31 = _T_619 ? {{1'd0}, _T_1437} : _GEN_30; // @[CSR.scala 383:29:@2379.6]
  assign _T_1439 = _T_294[31:0]; // @[CSR.scala 382:72:@2386.8]
  assign _T_1440 = {_T_1418,_T_1439}; // @[Cat.scala 30:58:@2387.8]
  assign _GEN_32 = _T_625 ? {{1'd0}, _T_1440} : _T_295; // @[CSR.scala 382:29:@2384.6]
  assign _T_1441 = _T_294[39:32]; // @[CSR.scala 383:45:@2391.8]
  assign _T_1442 = {_T_1441,wdata}; // @[Cat.scala 30:58:@2392.8]
  assign _GEN_33 = _T_623 ? {{1'd0}, _T_1442} : _GEN_32; // @[CSR.scala 383:29:@2390.6]
  assign _T_1444 = _T_297[31:0]; // @[CSR.scala 382:72:@2397.8]
  assign _T_1445 = {_T_1418,_T_1444}; // @[Cat.scala 30:58:@2398.8]
  assign _GEN_34 = _T_629 ? {{1'd0}, _T_1445} : _T_298; // @[CSR.scala 382:29:@2395.6]
  assign _T_1446 = _T_297[39:32]; // @[CSR.scala 383:45:@2402.8]
  assign _T_1447 = {_T_1446,wdata}; // @[Cat.scala 30:58:@2403.8]
  assign _GEN_35 = _T_627 ? {{1'd0}, _T_1447} : _GEN_34; // @[CSR.scala 383:29:@2401.6]
  assign _T_1449 = _T_300[31:0]; // @[CSR.scala 382:72:@2408.8]
  assign _T_1450 = {_T_1418,_T_1449}; // @[Cat.scala 30:58:@2409.8]
  assign _GEN_36 = _T_633 ? {{1'd0}, _T_1450} : _T_301; // @[CSR.scala 382:29:@2406.6]
  assign _T_1451 = _T_300[39:32]; // @[CSR.scala 383:45:@2413.8]
  assign _T_1452 = {_T_1451,wdata}; // @[Cat.scala 30:58:@2414.8]
  assign _GEN_37 = _T_631 ? {{1'd0}, _T_1452} : _GEN_36; // @[CSR.scala 383:29:@2412.6]
  assign _T_1454 = _T_303[31:0]; // @[CSR.scala 382:72:@2419.8]
  assign _T_1455 = {_T_1418,_T_1454}; // @[Cat.scala 30:58:@2420.8]
  assign _GEN_38 = _T_637 ? {{1'd0}, _T_1455} : _T_304; // @[CSR.scala 382:29:@2417.6]
  assign _T_1456 = _T_303[39:32]; // @[CSR.scala 383:45:@2424.8]
  assign _T_1457 = {_T_1456,wdata}; // @[Cat.scala 30:58:@2425.8]
  assign _GEN_39 = _T_635 ? {{1'd0}, _T_1457} : _GEN_38; // @[CSR.scala 383:29:@2423.6]
  assign _T_1459 = _T_306[31:0]; // @[CSR.scala 382:72:@2430.8]
  assign _T_1460 = {_T_1418,_T_1459}; // @[Cat.scala 30:58:@2431.8]
  assign _GEN_40 = _T_641 ? {{1'd0}, _T_1460} : _T_307; // @[CSR.scala 382:29:@2428.6]
  assign _T_1461 = _T_306[39:32]; // @[CSR.scala 383:45:@2435.8]
  assign _T_1462 = {_T_1461,wdata}; // @[Cat.scala 30:58:@2436.8]
  assign _GEN_41 = _T_639 ? {{1'd0}, _T_1462} : _GEN_40; // @[CSR.scala 383:29:@2434.6]
  assign _T_1464 = _T_309[31:0]; // @[CSR.scala 382:72:@2441.8]
  assign _T_1465 = {_T_1418,_T_1464}; // @[Cat.scala 30:58:@2442.8]
  assign _GEN_42 = _T_645 ? {{1'd0}, _T_1465} : _T_310; // @[CSR.scala 382:29:@2439.6]
  assign _T_1466 = _T_309[39:32]; // @[CSR.scala 383:45:@2446.8]
  assign _T_1467 = {_T_1466,wdata}; // @[Cat.scala 30:58:@2447.8]
  assign _GEN_43 = _T_643 ? {{1'd0}, _T_1467} : _GEN_42; // @[CSR.scala 383:29:@2445.6]
  assign _T_1469 = _T_312[31:0]; // @[CSR.scala 382:72:@2452.8]
  assign _T_1470 = {_T_1418,_T_1469}; // @[Cat.scala 30:58:@2453.8]
  assign _GEN_44 = _T_649 ? {{1'd0}, _T_1470} : _T_313; // @[CSR.scala 382:29:@2450.6]
  assign _T_1471 = _T_312[39:32]; // @[CSR.scala 383:45:@2457.8]
  assign _T_1472 = {_T_1471,wdata}; // @[Cat.scala 30:58:@2458.8]
  assign _GEN_45 = _T_647 ? {{1'd0}, _T_1472} : _GEN_44; // @[CSR.scala 383:29:@2456.6]
  assign _T_1474 = _T_315[31:0]; // @[CSR.scala 382:72:@2463.8]
  assign _T_1475 = {_T_1418,_T_1474}; // @[Cat.scala 30:58:@2464.8]
  assign _GEN_46 = _T_653 ? {{1'd0}, _T_1475} : _T_316; // @[CSR.scala 382:29:@2461.6]
  assign _T_1476 = _T_315[39:32]; // @[CSR.scala 383:45:@2468.8]
  assign _T_1477 = {_T_1476,wdata}; // @[Cat.scala 30:58:@2469.8]
  assign _GEN_47 = _T_651 ? {{1'd0}, _T_1477} : _GEN_46; // @[CSR.scala 383:29:@2467.6]
  assign _T_1479 = _T_318[31:0]; // @[CSR.scala 382:72:@2474.8]
  assign _T_1480 = {_T_1418,_T_1479}; // @[Cat.scala 30:58:@2475.8]
  assign _GEN_48 = _T_657 ? {{1'd0}, _T_1480} : _T_319; // @[CSR.scala 382:29:@2472.6]
  assign _T_1481 = _T_318[39:32]; // @[CSR.scala 383:45:@2479.8]
  assign _T_1482 = {_T_1481,wdata}; // @[Cat.scala 30:58:@2480.8]
  assign _GEN_49 = _T_655 ? {{1'd0}, _T_1482} : _GEN_48; // @[CSR.scala 383:29:@2478.6]
  assign _T_1484 = _T_321[31:0]; // @[CSR.scala 382:72:@2485.8]
  assign _T_1485 = {_T_1418,_T_1484}; // @[Cat.scala 30:58:@2486.8]
  assign _GEN_50 = _T_661 ? {{1'd0}, _T_1485} : _T_322; // @[CSR.scala 382:29:@2483.6]
  assign _T_1486 = _T_321[39:32]; // @[CSR.scala 383:45:@2490.8]
  assign _T_1487 = {_T_1486,wdata}; // @[Cat.scala 30:58:@2491.8]
  assign _GEN_51 = _T_659 ? {{1'd0}, _T_1487} : _GEN_50; // @[CSR.scala 383:29:@2489.6]
  assign _T_1489 = _T_324[31:0]; // @[CSR.scala 382:72:@2496.8]
  assign _T_1490 = {_T_1418,_T_1489}; // @[Cat.scala 30:58:@2497.8]
  assign _GEN_52 = _T_665 ? {{1'd0}, _T_1490} : _T_325; // @[CSR.scala 382:29:@2494.6]
  assign _T_1491 = _T_324[39:32]; // @[CSR.scala 383:45:@2501.8]
  assign _T_1492 = {_T_1491,wdata}; // @[Cat.scala 30:58:@2502.8]
  assign _GEN_53 = _T_663 ? {{1'd0}, _T_1492} : _GEN_52; // @[CSR.scala 383:29:@2500.6]
  assign _T_1494 = _T_327[31:0]; // @[CSR.scala 382:72:@2507.8]
  assign _T_1495 = {_T_1418,_T_1494}; // @[Cat.scala 30:58:@2508.8]
  assign _GEN_54 = _T_669 ? {{1'd0}, _T_1495} : _T_328; // @[CSR.scala 382:29:@2505.6]
  assign _T_1496 = _T_327[39:32]; // @[CSR.scala 383:45:@2512.8]
  assign _T_1497 = {_T_1496,wdata}; // @[Cat.scala 30:58:@2513.8]
  assign _GEN_55 = _T_667 ? {{1'd0}, _T_1497} : _GEN_54; // @[CSR.scala 383:29:@2511.6]
  assign _T_1499 = _T_330[31:0]; // @[CSR.scala 382:72:@2518.8]
  assign _T_1500 = {_T_1418,_T_1499}; // @[Cat.scala 30:58:@2519.8]
  assign _GEN_56 = _T_673 ? {{1'd0}, _T_1500} : _T_331; // @[CSR.scala 382:29:@2516.6]
  assign _T_1501 = _T_330[39:32]; // @[CSR.scala 383:45:@2523.8]
  assign _T_1502 = {_T_1501,wdata}; // @[Cat.scala 30:58:@2524.8]
  assign _GEN_57 = _T_671 ? {{1'd0}, _T_1502} : _GEN_56; // @[CSR.scala 383:29:@2522.6]
  assign _T_1504 = _T_333[31:0]; // @[CSR.scala 382:72:@2529.8]
  assign _T_1505 = {_T_1418,_T_1504}; // @[Cat.scala 30:58:@2530.8]
  assign _GEN_58 = _T_677 ? {{1'd0}, _T_1505} : _T_334; // @[CSR.scala 382:29:@2527.6]
  assign _T_1506 = _T_333[39:32]; // @[CSR.scala 383:45:@2534.8]
  assign _T_1507 = {_T_1506,wdata}; // @[Cat.scala 30:58:@2535.8]
  assign _GEN_59 = _T_675 ? {{1'd0}, _T_1507} : _GEN_58; // @[CSR.scala 383:29:@2533.6]
  assign _T_1509 = _T_336[31:0]; // @[CSR.scala 382:72:@2540.8]
  assign _T_1510 = {_T_1418,_T_1509}; // @[Cat.scala 30:58:@2541.8]
  assign _GEN_60 = _T_681 ? {{1'd0}, _T_1510} : _T_337; // @[CSR.scala 382:29:@2538.6]
  assign _T_1511 = _T_336[39:32]; // @[CSR.scala 383:45:@2545.8]
  assign _T_1512 = {_T_1511,wdata}; // @[Cat.scala 30:58:@2546.8]
  assign _GEN_61 = _T_679 ? {{1'd0}, _T_1512} : _GEN_60; // @[CSR.scala 383:29:@2544.6]
  assign _T_1514 = _T_339[31:0]; // @[CSR.scala 382:72:@2551.8]
  assign _T_1515 = {_T_1418,_T_1514}; // @[Cat.scala 30:58:@2552.8]
  assign _GEN_62 = _T_685 ? {{1'd0}, _T_1515} : _T_340; // @[CSR.scala 382:29:@2549.6]
  assign _T_1516 = _T_339[39:32]; // @[CSR.scala 383:45:@2556.8]
  assign _T_1517 = {_T_1516,wdata}; // @[Cat.scala 30:58:@2557.8]
  assign _GEN_63 = _T_683 ? {{1'd0}, _T_1517} : _GEN_62; // @[CSR.scala 383:29:@2555.6]
  assign _T_1519 = _T_342[31:0]; // @[CSR.scala 382:72:@2562.8]
  assign _T_1520 = {_T_1418,_T_1519}; // @[Cat.scala 30:58:@2563.8]
  assign _GEN_64 = _T_689 ? {{1'd0}, _T_1520} : _T_343; // @[CSR.scala 382:29:@2560.6]
  assign _T_1521 = _T_342[39:32]; // @[CSR.scala 383:45:@2567.8]
  assign _T_1522 = {_T_1521,wdata}; // @[Cat.scala 30:58:@2568.8]
  assign _GEN_65 = _T_687 ? {{1'd0}, _T_1522} : _GEN_64; // @[CSR.scala 383:29:@2566.6]
  assign _T_1524 = _T_345[31:0]; // @[CSR.scala 382:72:@2573.8]
  assign _T_1525 = {_T_1418,_T_1524}; // @[Cat.scala 30:58:@2574.8]
  assign _GEN_66 = _T_693 ? {{1'd0}, _T_1525} : _T_346; // @[CSR.scala 382:29:@2571.6]
  assign _T_1526 = _T_345[39:32]; // @[CSR.scala 383:45:@2578.8]
  assign _T_1527 = {_T_1526,wdata}; // @[Cat.scala 30:58:@2579.8]
  assign _GEN_67 = _T_691 ? {{1'd0}, _T_1527} : _GEN_66; // @[CSR.scala 383:29:@2577.6]
  assign _T_1529 = _T_348[31:0]; // @[CSR.scala 382:72:@2584.8]
  assign _T_1530 = {_T_1418,_T_1529}; // @[Cat.scala 30:58:@2585.8]
  assign _GEN_68 = _T_697 ? {{1'd0}, _T_1530} : _T_349; // @[CSR.scala 382:29:@2582.6]
  assign _T_1531 = _T_348[39:32]; // @[CSR.scala 383:45:@2589.8]
  assign _T_1532 = {_T_1531,wdata}; // @[Cat.scala 30:58:@2590.8]
  assign _GEN_69 = _T_695 ? {{1'd0}, _T_1532} : _GEN_68; // @[CSR.scala 383:29:@2588.6]
  assign _T_1534 = _T_351[31:0]; // @[CSR.scala 382:72:@2595.8]
  assign _T_1535 = {_T_1418,_T_1534}; // @[Cat.scala 30:58:@2596.8]
  assign _GEN_70 = _T_701 ? {{1'd0}, _T_1535} : _T_352; // @[CSR.scala 382:29:@2593.6]
  assign _T_1536 = _T_351[39:32]; // @[CSR.scala 383:45:@2600.8]
  assign _T_1537 = {_T_1536,wdata}; // @[Cat.scala 30:58:@2601.8]
  assign _GEN_71 = _T_699 ? {{1'd0}, _T_1537} : _GEN_70; // @[CSR.scala 383:29:@2599.6]
  assign _T_1539 = _T_354[31:0]; // @[CSR.scala 382:72:@2606.8]
  assign _T_1540 = {_T_1418,_T_1539}; // @[Cat.scala 30:58:@2607.8]
  assign _GEN_72 = _T_705 ? {{1'd0}, _T_1540} : _T_355; // @[CSR.scala 382:29:@2604.6]
  assign _T_1541 = _T_354[39:32]; // @[CSR.scala 383:45:@2611.8]
  assign _T_1542 = {_T_1541,wdata}; // @[Cat.scala 30:58:@2612.8]
  assign _GEN_73 = _T_703 ? {{1'd0}, _T_1542} : _GEN_72; // @[CSR.scala 383:29:@2610.6]
  assign _T_1544 = _T_357[31:0]; // @[CSR.scala 382:72:@2617.8]
  assign _T_1545 = {_T_1418,_T_1544}; // @[Cat.scala 30:58:@2618.8]
  assign _GEN_74 = _T_709 ? {{1'd0}, _T_1545} : _T_358; // @[CSR.scala 382:29:@2615.6]
  assign _T_1546 = _T_357[39:32]; // @[CSR.scala 383:45:@2622.8]
  assign _T_1547 = {_T_1546,wdata}; // @[Cat.scala 30:58:@2623.8]
  assign _GEN_75 = _T_707 ? {{1'd0}, _T_1547} : _GEN_74; // @[CSR.scala 383:29:@2621.6]
  assign _T_1549 = _T_360[31:0]; // @[CSR.scala 382:72:@2628.8]
  assign _T_1550 = {_T_1418,_T_1549}; // @[Cat.scala 30:58:@2629.8]
  assign _GEN_76 = _T_713 ? {{1'd0}, _T_1550} : _T_361; // @[CSR.scala 382:29:@2626.6]
  assign _T_1551 = _T_360[39:32]; // @[CSR.scala 383:45:@2633.8]
  assign _T_1552 = {_T_1551,wdata}; // @[Cat.scala 30:58:@2634.8]
  assign _GEN_77 = _T_711 ? {{1'd0}, _T_1552} : _GEN_76; // @[CSR.scala 383:29:@2632.6]
  assign _T_1554 = _T_363[31:0]; // @[CSR.scala 382:72:@2639.8]
  assign _T_1555 = {_T_1418,_T_1554}; // @[Cat.scala 30:58:@2640.8]
  assign _GEN_78 = _T_717 ? {{1'd0}, _T_1555} : _T_364; // @[CSR.scala 382:29:@2637.6]
  assign _T_1556 = _T_363[39:32]; // @[CSR.scala 383:45:@2644.8]
  assign _T_1557 = {_T_1556,wdata}; // @[Cat.scala 30:58:@2645.8]
  assign _GEN_79 = _T_715 ? {{1'd0}, _T_1557} : _GEN_78; // @[CSR.scala 383:29:@2643.6]
  assign _T_1559 = _T_366[31:0]; // @[CSR.scala 382:72:@2650.8]
  assign _T_1560 = {_T_1418,_T_1559}; // @[Cat.scala 30:58:@2651.8]
  assign _GEN_80 = _T_721 ? {{1'd0}, _T_1560} : _T_367; // @[CSR.scala 382:29:@2648.6]
  assign _T_1561 = _T_366[39:32]; // @[CSR.scala 383:45:@2655.8]
  assign _T_1562 = {_T_1561,wdata}; // @[Cat.scala 30:58:@2656.8]
  assign _GEN_81 = _T_719 ? {{1'd0}, _T_1562} : _GEN_80; // @[CSR.scala 383:29:@2654.6]
  assign _T_1564 = _T_369[31:0]; // @[CSR.scala 382:72:@2661.8]
  assign _T_1565 = {_T_1418,_T_1564}; // @[Cat.scala 30:58:@2662.8]
  assign _GEN_82 = _T_725 ? {{1'd0}, _T_1565} : _T_370; // @[CSR.scala 382:29:@2659.6]
  assign _T_1566 = _T_369[39:32]; // @[CSR.scala 383:45:@2666.8]
  assign _T_1567 = {_T_1566,wdata}; // @[Cat.scala 30:58:@2667.8]
  assign _GEN_83 = _T_723 ? {{1'd0}, _T_1567} : _GEN_82; // @[CSR.scala 383:29:@2665.6]
  assign _T_1569 = _T_372[31:0]; // @[CSR.scala 382:72:@2672.8]
  assign _T_1570 = {_T_1418,_T_1569}; // @[Cat.scala 30:58:@2673.8]
  assign _GEN_84 = _T_729 ? {{1'd0}, _T_1570} : _T_373; // @[CSR.scala 382:29:@2670.6]
  assign _T_1571 = _T_372[39:32]; // @[CSR.scala 383:45:@2677.8]
  assign _T_1572 = {_T_1571,wdata}; // @[Cat.scala 30:58:@2678.8]
  assign _GEN_85 = _T_727 ? {{1'd0}, _T_1572} : _GEN_84; // @[CSR.scala 383:29:@2676.6]
  assign _T_1574 = _T_375[31:0]; // @[CSR.scala 382:72:@2683.8]
  assign _T_1575 = {_T_1418,_T_1574}; // @[Cat.scala 30:58:@2684.8]
  assign _GEN_86 = _T_733 ? {{1'd0}, _T_1575} : _T_376; // @[CSR.scala 382:29:@2681.6]
  assign _T_1576 = _T_375[39:32]; // @[CSR.scala 383:45:@2688.8]
  assign _T_1577 = {_T_1576,wdata}; // @[Cat.scala 30:58:@2689.8]
  assign _GEN_87 = _T_731 ? {{1'd0}, _T_1577} : _GEN_86; // @[CSR.scala 383:29:@2687.6]
  assign _T_1579 = _T_267[31:0]; // @[CSR.scala 382:72:@2694.8]
  assign _T_1580 = {wdata,_T_1579}; // @[Cat.scala 30:58:@2695.8]
  assign _T_1581 = _T_1580[63:6]; // @[Util.scala 133:28:@2697.8]
  assign _GEN_88 = _T_735 ? _T_1580 : {{57'd0}, _T_259}; // @[CSR.scala 382:29:@2692.6]
  assign _GEN_89 = _T_735 ? _T_1581 : _GEN_0; // @[CSR.scala 382:29:@2692.6]
  assign _T_1582 = _T_267[63:32]; // @[CSR.scala 383:45:@2701.8]
  assign _T_1583 = {_T_1582,wdata}; // @[Cat.scala 30:58:@2702.8]
  assign _T_1584 = _T_1583[63:6]; // @[Util.scala 133:28:@2704.8]
  assign _GEN_90 = _T_569 ? _T_1583 : _GEN_88; // @[CSR.scala 383:29:@2700.6]
  assign _GEN_91 = _T_569 ? _T_1584 : _GEN_89; // @[CSR.scala 383:29:@2700.6]
  assign _T_1586 = _T_279[31:0]; // @[CSR.scala 382:72:@2709.8]
  assign _T_1587 = {wdata,_T_1586}; // @[Cat.scala 30:58:@2710.8]
  assign _T_1588 = _T_1587[63:6]; // @[Util.scala 133:28:@2712.8]
  assign _GEN_92 = _T_737 ? _T_1587 : {{57'd0}, _T_271}; // @[CSR.scala 382:29:@2707.6]
  assign _GEN_93 = _T_737 ? _T_1588 : _GEN_1; // @[CSR.scala 382:29:@2707.6]
  assign _T_1589 = _T_279[63:32]; // @[CSR.scala 383:45:@2716.8]
  assign _T_1590 = {_T_1589,wdata}; // @[Cat.scala 30:58:@2717.8]
  assign _T_1591 = _T_1590[63:6]; // @[Util.scala 133:28:@2719.8]
  assign _GEN_94 = _T_571 ? _T_1590 : _GEN_92; // @[CSR.scala 383:29:@2715.6]
  assign _GEN_95 = _T_571 ? _T_1591 : _GEN_93; // @[CSR.scala 383:29:@2715.6]
  assign _GEN_96 = _T_601 ? wdata : reg_dpc; // @[CSR.scala 361:40:@2722.6]
  assign _GEN_97 = _T_603 ? wdata : reg_dscratch; // @[CSR.scala 362:40:@2725.6]
  assign _T_1594 = wdata >> 2'h2; // @[CSR.scala 364:78:@2730.8]
  assign _GEN_233 = {{3'd0}, _T_1594}; // @[CSR.scala 364:86:@2731.8]
  assign _T_1596 = _GEN_233 << 2'h2; // @[CSR.scala 364:86:@2731.8]
  assign _GEN_98 = _T_591 ? _T_1596 : {{3'd0}, _GEN_4}; // @[CSR.scala 364:40:@2728.6]
  assign _GEN_99 = _T_589 ? wdata : reg_mscratch; // @[CSR.scala 365:40:@2734.6]
  assign _T_1598 = wdata & 32'h8000001f; // @[CSR.scala 366:62:@2738.8]
  assign _GEN_100 = _T_595 ? _T_1598 : _GEN_16; // @[CSR.scala 366:40:@2737.6]
  assign _GEN_101 = _T_593 ? wdata : reg_mtval; // @[CSR.scala 367:40:@2741.6]
  assign _GEN_102 = _T_605 ? wdata : reg_medeleg; // @[CSR.scala 368:42:@2745.6]
  assign _GEN_103 = wen ? _GEN_17 : reg_dcsr_step; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_104 = wen ? _GEN_18 : reg_dcsr_ebreakm; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_105 = wen ? _GEN_19 : _GEN_9; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_106 = wen ? _GEN_20 : _GEN_10; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_107 = wen ? _GEN_21 : reg_mip_msip; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_108 = wen ? _GEN_22 : reg_mie_msip; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_109 = wen ? _GEN_23 : reg_mie_mtip; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_110 = wen ? _GEN_25 : _T_283; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_111 = wen ? _GEN_27 : _T_286; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_112 = wen ? _GEN_29 : _T_289; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_113 = wen ? _GEN_31 : _T_292; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_114 = wen ? _GEN_33 : _T_295; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_115 = wen ? _GEN_35 : _T_298; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_116 = wen ? _GEN_37 : _T_301; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_117 = wen ? _GEN_39 : _T_304; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_118 = wen ? _GEN_41 : _T_307; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_119 = wen ? _GEN_43 : _T_310; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_120 = wen ? _GEN_45 : _T_313; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_121 = wen ? _GEN_47 : _T_316; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_122 = wen ? _GEN_49 : _T_319; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_123 = wen ? _GEN_51 : _T_322; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_124 = wen ? _GEN_53 : _T_325; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_125 = wen ? _GEN_55 : _T_328; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_126 = wen ? _GEN_57 : _T_331; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_127 = wen ? _GEN_59 : _T_334; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_128 = wen ? _GEN_61 : _T_337; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_129 = wen ? _GEN_63 : _T_340; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_130 = wen ? _GEN_65 : _T_343; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_131 = wen ? _GEN_67 : _T_346; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_132 = wen ? _GEN_69 : _T_349; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_133 = wen ? _GEN_71 : _T_352; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_134 = wen ? _GEN_73 : _T_355; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_135 = wen ? _GEN_75 : _T_358; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_136 = wen ? _GEN_77 : _T_361; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_137 = wen ? _GEN_79 : _T_364; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_138 = wen ? _GEN_81 : _T_367; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_139 = wen ? _GEN_83 : _T_370; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_140 = wen ? _GEN_85 : _T_373; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_141 = wen ? _GEN_87 : _T_376; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_142 = wen ? _GEN_90 : {{57'd0}, _T_259}; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_143 = wen ? _GEN_91 : _GEN_0; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_144 = wen ? _GEN_94 : {{57'd0}, _T_271}; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_145 = wen ? _GEN_95 : _GEN_1; // @[CSR.scala 327:14:@2172.4]
  assign _GEN_148 = wen ? _GEN_98 : {{3'd0}, _GEN_4}; // @[CSR.scala 327:14:@2172.4]
  assign io_rw_rdata = _T_1323[31:0]; // @[CSR.scala 325:15:@2171.4]
  assign io_eret = _T_1044 | insn_ret; // @[CSR.scala 278:11:@1953.4]
  assign io_status_debug = 1'h0; // @[CSR.scala 276:13:@1950.4]
  assign io_status_prv = reg_mstatus_prv; // @[CSR.scala 276:13:@1949.4]
  assign io_status_sd = 1'h0; // @[CSR.scala 276:13:@1948.4]
  assign io_status_zero1 = 8'h0; // @[CSR.scala 276:13:@1947.4]
  assign io_status_tsr = 1'h0; // @[CSR.scala 276:13:@1946.4]
  assign io_status_tw = 1'h0; // @[CSR.scala 276:13:@1945.4]
  assign io_status_tvm = 1'h0; // @[CSR.scala 276:13:@1944.4]
  assign io_status_mxr = 1'h0; // @[CSR.scala 276:13:@1943.4]
  assign io_status_sum = 1'h0; // @[CSR.scala 276:13:@1942.4]
  assign io_status_mprv = 1'h0; // @[CSR.scala 276:13:@1941.4]
  assign io_status_xs = 2'h0; // @[CSR.scala 276:13:@1940.4]
  assign io_status_fs = 2'h0; // @[CSR.scala 276:13:@1939.4]
  assign io_status_mpp = 2'h3; // @[CSR.scala 276:13:@1938.4]
  assign io_status_hpp = 2'h0; // @[CSR.scala 276:13:@1937.4]
  assign io_status_spp = 1'h0; // @[CSR.scala 276:13:@1936.4]
  assign io_status_mpie = reg_mstatus_mpie; // @[CSR.scala 276:13:@1935.4]
  assign io_status_hpie = 1'h0; // @[CSR.scala 276:13:@1934.4]
  assign io_status_spie = 1'h0; // @[CSR.scala 276:13:@1933.4]
  assign io_status_upie = 1'h0; // @[CSR.scala 276:13:@1932.4]
  assign io_status_mie = reg_mstatus_mie; // @[CSR.scala 276:13:@1931.4]
  assign io_status_hie = 1'h0; // @[CSR.scala 276:13:@1930.4]
  assign io_status_sie = 1'h0; // @[CSR.scala 276:13:@1929.4]
  assign io_status_uie = 1'h0; // @[CSR.scala 276:13:@1928.4]
  assign io_evec = insn_break ? 32'h80000004 : _GEN_13; // @[CSR.scala 283:13:@1956.6 CSR.scala 297:13:@1977.6 CSR.scala 305:13:@1986.6 CSR.scala 310:13:@1989.6 CSR.scala 316:13:@1995.6]
  assign io_time = _T_267[31:0]; // @[CSR.scala 321:11:@1998.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  reg_mstatus_prv = _RAND_0[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  reg_mstatus_mpie = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  reg_mstatus_mie = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  reg_mepc = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  reg_mcause = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  reg_mtval = _RAND_5[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  reg_mscratch = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  reg_medeleg = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  reg_mip_mtip = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  reg_mip_msip = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  reg_mie_mtip = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  reg_mie_msip = _RAND_11[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  _T_258 = _RAND_12[5:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {2{`RANDOM}};
  _T_262 = _RAND_13[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  _T_270 = _RAND_14[5:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {2{`RANDOM}};
  _T_274 = _RAND_15[57:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {2{`RANDOM}};
  _T_282 = _RAND_16[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {2{`RANDOM}};
  _T_285 = _RAND_17[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {2{`RANDOM}};
  _T_288 = _RAND_18[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {2{`RANDOM}};
  _T_291 = _RAND_19[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {2{`RANDOM}};
  _T_294 = _RAND_20[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {2{`RANDOM}};
  _T_297 = _RAND_21[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {2{`RANDOM}};
  _T_300 = _RAND_22[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {2{`RANDOM}};
  _T_303 = _RAND_23[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {2{`RANDOM}};
  _T_306 = _RAND_24[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {2{`RANDOM}};
  _T_309 = _RAND_25[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {2{`RANDOM}};
  _T_312 = _RAND_26[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {2{`RANDOM}};
  _T_315 = _RAND_27[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {2{`RANDOM}};
  _T_318 = _RAND_28[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {2{`RANDOM}};
  _T_321 = _RAND_29[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {2{`RANDOM}};
  _T_324 = _RAND_30[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {2{`RANDOM}};
  _T_327 = _RAND_31[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_32 = {2{`RANDOM}};
  _T_330 = _RAND_32[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_33 = {2{`RANDOM}};
  _T_333 = _RAND_33[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_34 = {2{`RANDOM}};
  _T_336 = _RAND_34[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_35 = {2{`RANDOM}};
  _T_339 = _RAND_35[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_36 = {2{`RANDOM}};
  _T_342 = _RAND_36[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_37 = {2{`RANDOM}};
  _T_345 = _RAND_37[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_38 = {2{`RANDOM}};
  _T_348 = _RAND_38[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_39 = {2{`RANDOM}};
  _T_351 = _RAND_39[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_40 = {2{`RANDOM}};
  _T_354 = _RAND_40[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_41 = {2{`RANDOM}};
  _T_357 = _RAND_41[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_42 = {2{`RANDOM}};
  _T_360 = _RAND_42[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_43 = {2{`RANDOM}};
  _T_363 = _RAND_43[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_44 = {2{`RANDOM}};
  _T_366 = _RAND_44[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_45 = {2{`RANDOM}};
  _T_369 = _RAND_45[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_46 = {2{`RANDOM}};
  _T_372 = _RAND_46[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_47 = {2{`RANDOM}};
  _T_375 = _RAND_47[39:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_48 = {1{`RANDOM}};
  reg_dpc = _RAND_48[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_49 = {1{`RANDOM}};
  reg_dscratch = _RAND_49[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_50 = {1{`RANDOM}};
  reg_dcsr_ebreakm = _RAND_50[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_51 = {1{`RANDOM}};
  reg_dcsr_step = _RAND_51[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      reg_mstatus_prv <= 2'h3;
    end else begin
      if (_T_1063) begin
        reg_mstatus_prv <= 2'h3;
      end else begin
        if (_T_1058) begin
          reg_mstatus_prv <= 2'h3;
        end
      end
    end
    if (reset) begin
      reg_mstatus_mpie <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_581) begin
          reg_mstatus_mpie <= _T_1360;
        end else begin
          if (_T_1063) begin
            reg_mstatus_mpie <= 1'h1;
          end
        end
      end else begin
        if (_T_1063) begin
          reg_mstatus_mpie <= 1'h1;
        end
      end
    end
    if (reset) begin
      reg_mstatus_mie <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_581) begin
          reg_mstatus_mie <= _T_1356;
        end else begin
          if (_T_1063) begin
            reg_mstatus_mie <= reg_mstatus_mpie;
          end
        end
      end else begin
        if (_T_1063) begin
          reg_mstatus_mie <= reg_mstatus_mpie;
        end
      end
    end
    reg_mepc <= _GEN_148[31:0];
    if (wen) begin
      if (_T_595) begin
        reg_mcause <= _T_1598;
      end else begin
        if (insn_break) begin
          reg_mcause <= 32'h3;
        end else begin
          if (insn_call) begin
            reg_mcause <= {{28'd0}, _T_1068};
          end else begin
            if (io_exception) begin
              reg_mcause <= 32'h2;
            end
          end
        end
      end
    end else begin
      if (insn_break) begin
        reg_mcause <= 32'h3;
      end else begin
        if (insn_call) begin
          reg_mcause <= {{28'd0}, _T_1068};
        end else begin
          if (io_exception) begin
            reg_mcause <= 32'h2;
          end
        end
      end
    end
    if (wen) begin
      if (_T_593) begin
        reg_mtval <= wdata;
      end
    end
    if (wen) begin
      if (_T_589) begin
        reg_mscratch <= wdata;
      end
    end
    if (wen) begin
      if (_T_605) begin
        reg_medeleg <= wdata;
      end
    end
    if (reset) begin
      reg_mip_mtip <= 1'h0;
    end else begin
      reg_mip_mtip <= 1'h1;
    end
    if (reset) begin
      reg_mip_msip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_585) begin
          reg_mip_msip <= _T_1384;
        end
      end
    end
    if (reset) begin
      reg_mie_mtip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_587) begin
          reg_mie_mtip <= _T_1388;
        end
      end
    end
    if (reset) begin
      reg_mie_msip <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_587) begin
          reg_mie_msip <= _T_1384;
        end
      end
    end
    if (reset) begin
      _T_258 <= 6'h0;
    end else begin
      _T_258 <= _GEN_142[5:0];
    end
    if (reset) begin
      _T_262 <= 58'h0;
    end else begin
      if (wen) begin
        if (_T_569) begin
          _T_262 <= _T_1584;
        end else begin
          if (_T_735) begin
            _T_262 <= _T_1581;
          end else begin
            if (_T_263) begin
              _T_262 <= _T_266;
            end
          end
        end
      end else begin
        if (_T_263) begin
          _T_262 <= _T_266;
        end
      end
    end
    if (reset) begin
      _T_270 <= 6'h0;
    end else begin
      _T_270 <= _GEN_144[5:0];
    end
    if (reset) begin
      _T_274 <= 58'h0;
    end else begin
      if (wen) begin
        if (_T_571) begin
          _T_274 <= _T_1591;
        end else begin
          if (_T_737) begin
            _T_274 <= _T_1588;
          end else begin
            if (_T_275) begin
              _T_274 <= _T_278;
            end
          end
        end
      end else begin
        if (_T_275) begin
          _T_274 <= _T_278;
        end
      end
    end
    _T_282 <= _GEN_110[39:0];
    _T_285 <= _GEN_111[39:0];
    _T_288 <= _GEN_112[39:0];
    _T_291 <= _GEN_113[39:0];
    _T_294 <= _GEN_114[39:0];
    _T_297 <= _GEN_115[39:0];
    _T_300 <= _GEN_116[39:0];
    _T_303 <= _GEN_117[39:0];
    _T_306 <= _GEN_118[39:0];
    _T_309 <= _GEN_119[39:0];
    _T_312 <= _GEN_120[39:0];
    _T_315 <= _GEN_121[39:0];
    _T_318 <= _GEN_122[39:0];
    _T_321 <= _GEN_123[39:0];
    _T_324 <= _GEN_124[39:0];
    _T_327 <= _GEN_125[39:0];
    _T_330 <= _GEN_126[39:0];
    _T_333 <= _GEN_127[39:0];
    _T_336 <= _GEN_128[39:0];
    _T_339 <= _GEN_129[39:0];
    _T_342 <= _GEN_130[39:0];
    _T_345 <= _GEN_131[39:0];
    _T_348 <= _GEN_132[39:0];
    _T_351 <= _GEN_133[39:0];
    _T_354 <= _GEN_134[39:0];
    _T_357 <= _GEN_135[39:0];
    _T_360 <= _GEN_136[39:0];
    _T_363 <= _GEN_137[39:0];
    _T_366 <= _GEN_138[39:0];
    _T_369 <= _GEN_139[39:0];
    _T_372 <= _GEN_140[39:0];
    _T_375 <= _GEN_141[39:0];
    if (wen) begin
      if (_T_601) begin
        reg_dpc <= wdata;
      end
    end
    if (wen) begin
      if (_T_603) begin
        reg_dscratch <= wdata;
      end
    end
    if (reset) begin
      reg_dcsr_ebreakm <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_599) begin
          reg_dcsr_ebreakm <= _T_1344;
        end
      end
    end
    if (reset) begin
      reg_dcsr_step <= 1'h0;
    end else begin
      if (wen) begin
        if (_T_599) begin
          reg_dcsr_step <= _T_1334;
        end
      end
    end
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_1054) begin
          $fwrite(32'h80000002,"Assertion failed: these conditions must be mutually exclusive\n    at CSR.scala:287 assert(PopCount(insn_ret :: io.exception :: Nil) <= 1, \"these conditions must be mutually exclusive\")\n"); // @[CSR.scala 287:9:@1965.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
    `ifndef SYNTHESIS
    `ifdef STOP_COND
      if (`STOP_COND) begin
    `endif
        if (_T_1054) begin
          $fatal; // @[CSR.scala 287:9:@1966.6]
        end
    `ifdef STOP_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module DatPath( // @[:@2752.2]
  input         clock, // @[:@2753.4]
  input         reset, // @[:@2754.4]
  input  [4:0]  io_ddpath_addr, // @[:@2755.4]
  input  [31:0] io_ddpath_wdata, // @[:@2755.4]
  output [31:0] io_ddpath_rdata, // @[:@2755.4]
  output [31:0] io_imem_req_bits_addr, // @[:@2755.4]
  input  [31:0] io_imem_resp_bits_data, // @[:@2755.4]
  output        io_dmem_req_valid, // @[:@2755.4]
  output [31:0] io_dmem_req_bits_addr, // @[:@2755.4]
  output [31:0] io_dmem_req_bits_data, // @[:@2755.4]
  output        io_dmem_req_bits_fcn, // @[:@2755.4]
  output [2:0]  io_dmem_req_bits_typ, // @[:@2755.4]
  input  [31:0] io_dmem_resp_bits_data, // @[:@2755.4]
  input         io_ctl_dec_stall, // @[:@2755.4]
  input         io_ctl_full_stall, // @[:@2755.4]
  input  [1:0]  io_ctl_exe_pc_sel, // @[:@2755.4]
  input  [3:0]  io_ctl_br_type, // @[:@2755.4]
  input         io_ctl_if_kill, // @[:@2755.4]
  input         io_ctl_dec_kill, // @[:@2755.4]
  input  [1:0]  io_ctl_op1_sel, // @[:@2755.4]
  input  [2:0]  io_ctl_op2_sel, // @[:@2755.4]
  input  [3:0]  io_ctl_alu_fun, // @[:@2755.4]
  input  [1:0]  io_ctl_wb_sel, // @[:@2755.4]
  input         io_ctl_rf_wen, // @[:@2755.4]
  input         io_ctl_mem_val, // @[:@2755.4]
  input  [1:0]  io_ctl_mem_fcn, // @[:@2755.4]
  input  [2:0]  io_ctl_mem_typ, // @[:@2755.4]
  input  [2:0]  io_ctl_csr_cmd, // @[:@2755.4]
  input         io_ctl_fencei, // @[:@2755.4]
  input         io_ctl_pipeline_kill, // @[:@2755.4]
  input         io_ctl_mem_exception, // @[:@2755.4]
  output [31:0] io_dat_dec_inst, // @[:@2755.4]
  output        io_dat_exe_br_eq, // @[:@2755.4]
  output        io_dat_exe_br_lt, // @[:@2755.4]
  output        io_dat_exe_br_ltu, // @[:@2755.4]
  output [3:0]  io_dat_exe_br_type, // @[:@2755.4]
  output        io_dat_mem_ctrl_dmem_val, // @[:@2755.4]
  output        io_dat_csr_eret // @[:@2755.4]
);
  wire  regfile_clock; // @[Dpath.scala 154:24:@2892.4]
  wire [4:0] regfile_io_rs1_addr; // @[Dpath.scala 154:24:@2892.4]
  wire [31:0] regfile_io_rs1_data; // @[Dpath.scala 154:24:@2892.4]
  wire [4:0] regfile_io_rs2_addr; // @[Dpath.scala 154:24:@2892.4]
  wire [31:0] regfile_io_rs2_data; // @[Dpath.scala 154:24:@2892.4]
  wire [4:0] regfile_io_dm_addr; // @[Dpath.scala 154:24:@2892.4]
  wire [31:0] regfile_io_dm_rdata; // @[Dpath.scala 154:24:@2892.4]
  wire [31:0] regfile_io_dm_wdata; // @[Dpath.scala 154:24:@2892.4]
  wire [4:0] regfile_io_waddr; // @[Dpath.scala 154:24:@2892.4]
  wire [31:0] regfile_io_wdata; // @[Dpath.scala 154:24:@2892.4]
  wire  regfile_io_wen; // @[Dpath.scala 154:24:@2892.4]
  wire  csr_clock; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_reset; // @[Dpath.scala 341:20:@3146.4]
  wire [2:0] csr_io_rw_cmd; // @[Dpath.scala 341:20:@3146.4]
  wire [31:0] csr_io_rw_rdata; // @[Dpath.scala 341:20:@3146.4]
  wire [31:0] csr_io_rw_wdata; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_eret; // @[Dpath.scala 341:20:@3146.4]
  wire [11:0] csr_io_decode_csr; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_debug; // @[Dpath.scala 341:20:@3146.4]
  wire [1:0] csr_io_status_prv; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_sd; // @[Dpath.scala 341:20:@3146.4]
  wire [7:0] csr_io_status_zero1; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_tsr; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_tw; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_tvm; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_mxr; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_sum; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_mprv; // @[Dpath.scala 341:20:@3146.4]
  wire [1:0] csr_io_status_xs; // @[Dpath.scala 341:20:@3146.4]
  wire [1:0] csr_io_status_fs; // @[Dpath.scala 341:20:@3146.4]
  wire [1:0] csr_io_status_mpp; // @[Dpath.scala 341:20:@3146.4]
  wire [1:0] csr_io_status_hpp; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_spp; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_mpie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_hpie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_spie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_upie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_mie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_hie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_sie; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_status_uie; // @[Dpath.scala 341:20:@3146.4]
  wire [31:0] csr_io_evec; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_exception; // @[Dpath.scala 341:20:@3146.4]
  wire  csr_io_retire; // @[Dpath.scala 341:20:@3146.4]
  wire [31:0] csr_io_pc; // @[Dpath.scala 341:20:@3146.4]
  wire [31:0] csr_io_time; // @[Dpath.scala 341:20:@3146.4]
  reg [31:0] if_reg_pc; // @[Dpath.scala 49:39:@2803.4]
  reg [31:0] _RAND_0;
  reg [31:0] dec_reg_inst; // @[Dpath.scala 52:39:@2804.4]
  reg [31:0] _RAND_1;
  reg [31:0] dec_reg_pc; // @[Dpath.scala 53:39:@2805.4]
  reg [31:0] _RAND_2;
  reg [31:0] exe_reg_inst; // @[Dpath.scala 56:39:@2806.4]
  reg [31:0] _RAND_3;
  reg [31:0] exe_reg_pc; // @[Dpath.scala 57:39:@2807.4]
  reg [31:0] _RAND_4;
  reg [4:0] exe_reg_wbaddr; // @[Dpath.scala 58:35:@2808.4]
  reg [31:0] _RAND_5;
  reg [31:0] exe_alu_op1; // @[Dpath.scala 61:35:@2811.4]
  reg [31:0] _RAND_6;
  reg [31:0] brjmp_offset; // @[Dpath.scala 62:35:@2812.4]
  reg [31:0] _RAND_7;
  reg [31:0] exe_reg_rs2_data; // @[Dpath.scala 63:35:@2813.4]
  reg [31:0] _RAND_8;
  reg [3:0] exe_reg_ctrl_br_type; // @[Dpath.scala 64:39:@2814.4]
  reg [31:0] _RAND_9;
  reg [3:0] exe_reg_ctrl_alu_fun; // @[Dpath.scala 66:35:@2816.4]
  reg [31:0] _RAND_10;
  reg [1:0] exe_reg_ctrl_wb_sel; // @[Dpath.scala 67:35:@2817.4]
  reg [31:0] _RAND_11;
  reg  exe_reg_ctrl_rf_wen; // @[Dpath.scala 68:39:@2818.4]
  reg [31:0] _RAND_12;
  reg  exe_reg_ctrl_mem_val; // @[Dpath.scala 69:39:@2819.4]
  reg [31:0] _RAND_13;
  reg  exe_reg_ctrl_mem_fcn; // @[Dpath.scala 70:39:@2820.4]
  reg [31:0] _RAND_14;
  reg [2:0] exe_reg_ctrl_mem_typ; // @[Dpath.scala 71:39:@2821.4]
  reg [31:0] _RAND_15;
  reg [2:0] exe_reg_ctrl_csr_cmd; // @[Dpath.scala 72:39:@2822.4]
  reg [31:0] _RAND_16;
  reg [31:0] mem_reg_pc; // @[Dpath.scala 75:35:@2823.4]
  reg [31:0] _RAND_17;
  reg [31:0] mem_reg_inst; // @[Dpath.scala 76:35:@2824.4]
  reg [31:0] _RAND_18;
  reg [31:0] mem_reg_alu_out; // @[Dpath.scala 77:35:@2825.4]
  reg [31:0] _RAND_19;
  reg [4:0] mem_reg_wbaddr; // @[Dpath.scala 78:35:@2826.4]
  reg [31:0] _RAND_20;
  reg [31:0] mem_reg_rs2_data; // @[Dpath.scala 83:35:@2831.4]
  reg [31:0] _RAND_21;
  reg  mem_reg_ctrl_rf_wen; // @[Dpath.scala 84:39:@2832.4]
  reg [31:0] _RAND_22;
  reg  mem_reg_ctrl_mem_val; // @[Dpath.scala 85:39:@2833.4]
  reg [31:0] _RAND_23;
  reg  mem_reg_ctrl_mem_fcn; // @[Dpath.scala 86:39:@2834.4]
  reg [31:0] _RAND_24;
  reg [2:0] mem_reg_ctrl_mem_typ; // @[Dpath.scala 87:39:@2835.4]
  reg [31:0] _RAND_25;
  reg [1:0] mem_reg_ctrl_wb_sel; // @[Dpath.scala 88:35:@2836.4]
  reg [31:0] _RAND_26;
  reg [2:0] mem_reg_ctrl_csr_cmd; // @[Dpath.scala 89:39:@2837.4]
  reg [31:0] _RAND_27;
  reg [4:0] wb_reg_wbaddr; // @[Dpath.scala 92:35:@2838.4]
  reg [31:0] _RAND_28;
  reg [31:0] wb_reg_wbdata; // @[Dpath.scala 93:35:@2839.4]
  reg [31:0] _RAND_29;
  reg  wb_reg_ctrl_rf_wen; // @[Dpath.scala 94:39:@2840.4]
  reg [31:0] _RAND_30;
  wire  _T_237; // @[Dpath.scala 104:11:@2845.4]
  wire  _T_239; // @[Dpath.scala 104:32:@2846.4]
  wire  _T_240; // @[Dpath.scala 104:29:@2847.4]
  wire  _T_241; // @[Dpath.scala 104:52:@2848.4]
  wire  _T_250; // @[Dpath.scala 117:45:@2861.4]
  wire  _T_251; // @[Dpath.scala 117:24:@2862.4]
  wire  _T_254; // @[Dpath.scala 117:54:@2864.4]
  wire  _T_257; // @[Dpath.scala 118:28:@2866.4]
  wire  _T_259; // @[Dpath.scala 118:53:@2867.4]
  wire  _T_260; // @[Dpath.scala 118:50:@2868.4]
  wire [32:0] _T_243; // @[Dpath.scala 109:33:@2852.4]
  wire [31:0] if_pc_plus4; // @[Dpath.scala 109:33:@2853.4]
  wire  _T_245; // @[Dpath.scala 112:40:@2855.4]
  wire [32:0] _T_453; // @[Dpath.scala 305:38:@3112.4]
  wire [31:0] exe_brjmp_target; // @[Dpath.scala 305:38:@3113.4]
  wire  _T_246; // @[Dpath.scala 113:40:@2856.4]
  wire [32:0] _T_411; // @[Dpath.scala 285:37:@3068.4]
  wire [31:0] exe_adder_out; // @[Dpath.scala 285:37:@3069.4]
  wire [31:0] exception_target; // @[Dpath.scala 102:34:@2844.4 Dpath.scala 350:21:@3258.4]
  wire [31:0] _T_247; // @[Dpath.scala 113:21:@2857.4]
  wire [31:0] _T_248; // @[Dpath.scala 112:21:@2858.4]
  wire [31:0] _T_249; // @[Dpath.scala 111:21:@2859.4]
  wire [31:0] if_pc_next; // @[Dpath.scala 119:4:@2869.4]
  wire [31:0] _GEN_0; // @[Dpath.scala 105:4:@2849.4]
  wire [31:0] _GEN_2; // @[Dpath.scala 134:7:@2881.8]
  wire [31:0] _GEN_3; // @[Dpath.scala 132:4:@2880.6]
  wire [31:0] _GEN_4; // @[Dpath.scala 132:4:@2880.6]
  wire [31:0] _GEN_5; // @[Dpath.scala 128:4:@2873.4]
  wire [31:0] _GEN_6; // @[Dpath.scala 128:4:@2873.4]
  wire [4:0] dec_rs1_addr; // @[Dpath.scala 148:35:@2889.4]
  wire [4:0] dec_rs2_addr; // @[Dpath.scala 149:35:@2890.4]
  wire [4:0] dec_wbaddr; // @[Dpath.scala 150:35:@2891.4]
  wire [11:0] imm_itype; // @[Dpath.scala 171:33:@2904.4]
  wire [6:0] _T_266; // @[Dpath.scala 172:37:@2905.4]
  wire [11:0] imm_stype; // @[Cat.scala 30:58:@2907.4]
  wire  _T_268; // @[Dpath.scala 173:37:@2908.4]
  wire  _T_269; // @[Dpath.scala 173:55:@2909.4]
  wire [5:0] _T_270; // @[Dpath.scala 173:72:@2910.4]
  wire [3:0] _T_271; // @[Dpath.scala 173:94:@2911.4]
  wire [11:0] imm_sbtype; // @[Cat.scala 30:58:@2914.4]
  wire [19:0] imm_utype; // @[Dpath.scala 174:33:@2915.4]
  wire [7:0] _T_275; // @[Dpath.scala 175:55:@2917.4]
  wire  _T_276; // @[Dpath.scala 175:76:@2918.4]
  wire [9:0] _T_277; // @[Dpath.scala 175:94:@2919.4]
  wire [19:0] imm_ujtype; // @[Cat.scala 30:58:@2922.4]
  wire [31:0] imm_z; // @[Cat.scala 30:58:@2925.4]
  wire  _T_286; // @[Dpath.scala 180:47:@2926.4]
  wire [19:0] _T_290; // @[Bitwise.scala 72:12:@2928.4]
  wire [31:0] imm_itype_sext; // @[Cat.scala 30:58:@2929.4]
  wire  _T_291; // @[Dpath.scala 181:47:@2930.4]
  wire [19:0] _T_295; // @[Bitwise.scala 72:12:@2932.4]
  wire [31:0] imm_stype_sext; // @[Cat.scala 30:58:@2933.4]
  wire  _T_296; // @[Dpath.scala 182:48:@2934.4]
  wire [18:0] _T_300; // @[Bitwise.scala 72:12:@2936.4]
  wire [31:0] imm_sbtype_sext; // @[Cat.scala 30:58:@2938.4]
  wire [31:0] imm_utype_sext; // @[Cat.scala 30:58:@2940.4]
  wire  _T_308; // @[Dpath.scala 184:48:@2941.4]
  wire [10:0] _T_312; // @[Bitwise.scala 72:12:@2943.4]
  wire [31:0] imm_ujtype_sext; // @[Cat.scala 30:58:@2945.4]
  wire  _T_316; // @[Dpath.scala 188:32:@2946.4]
  wire  _T_317; // @[Dpath.scala 189:32:@2947.4]
  wire  _T_318; // @[Dpath.scala 190:32:@2948.4]
  wire  _T_319; // @[Dpath.scala 191:32:@2949.4]
  wire  _T_320; // @[Dpath.scala 192:32:@2950.4]
  wire  _T_321; // @[Dpath.scala 193:32:@2951.4]
  wire [31:0] _T_322; // @[Mux.scala 61:16:@2952.4]
  wire [31:0] _T_323; // @[Mux.scala 61:16:@2953.4]
  wire [31:0] _T_324; // @[Mux.scala 61:16:@2954.4]
  wire [31:0] _T_325; // @[Mux.scala 61:16:@2955.4]
  wire [31:0] _T_326; // @[Mux.scala 61:16:@2956.4]
  wire [31:0] dec_alu_op2; // @[Mux.scala 61:16:@2957.4]
  wire  _T_332; // @[Dpath.scala 208:42:@2963.4]
  wire  _T_333; // @[Dpath.scala 209:42:@2964.4]
  wire  _T_334; // @[Dpath.scala 210:42:@2965.4]
  wire  _T_336; // @[Dpath.scala 210:77:@2966.4]
  wire  _T_337; // @[Dpath.scala 210:60:@2967.4]
  wire  _T_338; // @[Dpath.scala 210:86:@2968.4]
  wire  _T_339; // @[Dpath.scala 211:42:@2969.4]
  wire  _T_342; // @[Dpath.scala 211:60:@2971.4]
  wire  _T_343; // @[Dpath.scala 211:86:@2972.4]
  wire  _T_344; // @[Dpath.scala 212:42:@2973.4]
  wire  _T_347; // @[Dpath.scala 212:60:@2975.4]
  wire  _T_348; // @[Dpath.scala 212:86:@2976.4]
  wire [31:0] _T_349; // @[Mux.scala 61:16:@2977.4]
  wire  _T_531; // @[Dpath.scala 361:40:@3320.4]
  wire  _T_532; // @[Dpath.scala 362:40:@3321.4]
  wire  _T_533; // @[Dpath.scala 363:40:@3322.4]
  wire  _T_534; // @[Dpath.scala 364:40:@3323.4]
  wire [31:0] _T_535; // @[Mux.scala 61:16:@3324.4]
  wire [31:0] _T_536; // @[Mux.scala 61:16:@3325.4]
  wire [31:0] _T_537; // @[Mux.scala 61:16:@3326.4]
  wire [31:0] mem_wbdata; // @[Mux.scala 61:16:@3327.4]
  wire [31:0] _T_350; // @[Mux.scala 61:16:@2978.4]
  wire  _T_413; // @[Dpath.scala 289:41:@3071.4]
  wire  _T_414; // @[Dpath.scala 290:41:@3072.4]
  wire [32:0] _T_415; // @[Dpath.scala 290:71:@3073.4]
  wire [32:0] _T_416; // @[Dpath.scala 290:71:@3074.4]
  wire [31:0] _T_417; // @[Dpath.scala 290:71:@3075.4]
  wire  _T_418; // @[Dpath.scala 291:41:@3076.4]
  wire [31:0] _T_419; // @[Dpath.scala 291:71:@3077.4]
  wire  _T_420; // @[Dpath.scala 292:41:@3078.4]
  wire [31:0] _T_421; // @[Dpath.scala 292:71:@3079.4]
  wire  _T_422; // @[Dpath.scala 293:41:@3080.4]
  wire [31:0] _T_423; // @[Dpath.scala 293:71:@3081.4]
  wire  _T_424; // @[Dpath.scala 294:41:@3082.4]
  wire [31:0] _T_425; // @[Dpath.scala 294:77:@3083.4]
  wire [31:0] _T_426; // @[Dpath.scala 294:100:@3084.4]
  wire  _T_427; // @[Dpath.scala 294:80:@3085.4]
  wire  _T_428; // @[Dpath.scala 295:41:@3086.4]
  wire  _T_429; // @[Dpath.scala 295:71:@3087.4]
  wire  _T_430; // @[Dpath.scala 296:41:@3088.4]
  wire [4:0] alu_shamt; // @[Dpath.scala 284:35:@3067.4]
  wire [62:0] _GEN_82; // @[Dpath.scala 296:72:@3089.4]
  wire [62:0] _T_431; // @[Dpath.scala 296:72:@3089.4]
  wire [31:0] _T_432; // @[Dpath.scala 296:85:@3090.4]
  wire  _T_433; // @[Dpath.scala 297:41:@3091.4]
  wire [31:0] _T_435; // @[Dpath.scala 297:80:@3093.4]
  wire [31:0] _T_436; // @[Dpath.scala 297:100:@3094.4]
  wire  _T_437; // @[Dpath.scala 298:41:@3095.4]
  wire [31:0] _T_438; // @[Dpath.scala 298:71:@3096.4]
  wire  _T_439; // @[Dpath.scala 299:41:@3097.4]
  wire  _T_440; // @[Dpath.scala 300:41:@3098.4]
  wire [31:0] _T_441; // @[Mux.scala 61:16:@3099.4]
  wire [31:0] _T_442; // @[Mux.scala 61:16:@3100.4]
  wire [31:0] _T_443; // @[Mux.scala 61:16:@3101.4]
  wire [31:0] _T_444; // @[Mux.scala 61:16:@3102.4]
  wire [31:0] _T_445; // @[Mux.scala 61:16:@3103.4]
  wire [31:0] _T_446; // @[Mux.scala 61:16:@3104.4]
  wire [31:0] _T_447; // @[Mux.scala 61:16:@3105.4]
  wire [31:0] _T_448; // @[Mux.scala 61:16:@3106.4]
  wire [31:0] _T_449; // @[Mux.scala 61:16:@3107.4]
  wire [31:0] _T_450; // @[Mux.scala 61:16:@3108.4]
  wire [31:0] _T_451; // @[Mux.scala 61:16:@3109.4]
  wire [31:0] exe_alu_out; // @[Mux.scala 61:16:@3110.4]
  wire [31:0] _T_351; // @[Mux.scala 61:16:@2979.4]
  wire [31:0] _T_352; // @[Mux.scala 61:16:@2980.4]
  wire [31:0] dec_op1_data; // @[Mux.scala 61:16:@2981.4]
  wire  _T_354; // @[Dpath.scala 216:42:@2983.4]
  wire  _T_356; // @[Dpath.scala 216:77:@2984.4]
  wire  _T_357; // @[Dpath.scala 216:60:@2985.4]
  wire  _T_358; // @[Dpath.scala 216:86:@2986.4]
  wire  _T_360; // @[Dpath.scala 216:109:@2988.4]
  wire  _T_361; // @[Dpath.scala 217:42:@2989.4]
  wire  _T_364; // @[Dpath.scala 217:60:@2991.4]
  wire  _T_365; // @[Dpath.scala 217:86:@2992.4]
  wire  _T_367; // @[Dpath.scala 217:109:@2994.4]
  wire  _T_368; // @[Dpath.scala 218:42:@2995.4]
  wire  _T_371; // @[Dpath.scala 218:60:@2997.4]
  wire  _T_372; // @[Dpath.scala 218:86:@2998.4]
  wire  _T_374; // @[Dpath.scala 218:109:@3000.4]
  wire [31:0] _T_375; // @[Mux.scala 61:16:@3001.4]
  wire [31:0] _T_376; // @[Mux.scala 61:16:@3002.4]
  wire [31:0] dec_op2_data; // @[Mux.scala 61:16:@3003.4]
  wire [31:0] _T_393; // @[Mux.scala 61:16:@3017.4]
  wire [31:0] _T_394; // @[Mux.scala 61:16:@3018.4]
  wire [31:0] dec_rs2_data; // @[Mux.scala 61:16:@3019.4]
  wire  _T_398; // @[Dpath.scala 229:28:@3022.4]
  wire  _T_399; // @[Dpath.scala 229:51:@3023.4]
  wire [31:0] _GEN_7; // @[Dpath.scala 255:7:@3047.8]
  wire [4:0] _GEN_8; // @[Dpath.scala 255:7:@3047.8]
  wire  _GEN_9; // @[Dpath.scala 255:7:@3047.8]
  wire  _GEN_10; // @[Dpath.scala 255:7:@3047.8]
  wire [1:0] _GEN_11; // @[Dpath.scala 255:7:@3047.8]
  wire [2:0] _GEN_12; // @[Dpath.scala 255:7:@3047.8]
  wire [3:0] _GEN_13; // @[Dpath.scala 255:7:@3047.8]
  wire [2:0] _GEN_14; // @[Dpath.scala 255:7:@3047.8]
  wire [31:0] _GEN_15; // @[Dpath.scala 242:4:@3037.6]
  wire [31:0] _GEN_18; // @[Dpath.scala 242:4:@3037.6]
  wire [31:0] _GEN_19; // @[Dpath.scala 242:4:@3037.6]
  wire [31:0] _GEN_20; // @[Dpath.scala 242:4:@3037.6]
  wire [3:0] _GEN_22; // @[Dpath.scala 242:4:@3037.6]
  wire [1:0] _GEN_23; // @[Dpath.scala 242:4:@3037.6]
  wire [31:0] _GEN_24; // @[Dpath.scala 242:4:@3037.6]
  wire [4:0] _GEN_25; // @[Dpath.scala 242:4:@3037.6]
  wire  _GEN_26; // @[Dpath.scala 242:4:@3037.6]
  wire  _GEN_27; // @[Dpath.scala 242:4:@3037.6]
  wire [1:0] _GEN_28; // @[Dpath.scala 242:4:@3037.6]
  wire [2:0] _GEN_29; // @[Dpath.scala 242:4:@3037.6]
  wire [3:0] _GEN_30; // @[Dpath.scala 242:4:@3037.6]
  wire [2:0] _GEN_31; // @[Dpath.scala 242:4:@3037.6]
  wire [31:0] _GEN_32; // @[Dpath.scala 230:4:@3024.4]
  wire  _GEN_34; // @[Dpath.scala 230:4:@3024.4]
  wire  _GEN_35; // @[Dpath.scala 230:4:@3024.4]
  wire [1:0] _GEN_36; // @[Dpath.scala 230:4:@3024.4]
  wire [2:0] _GEN_37; // @[Dpath.scala 230:4:@3024.4]
  wire [3:0] _GEN_38; // @[Dpath.scala 230:4:@3024.4]
  wire [31:0] _GEN_39; // @[Dpath.scala 230:4:@3024.4]
  wire [2:0] _GEN_48; // @[Dpath.scala 230:4:@3024.4]
  wire [32:0] _T_456; // @[Dpath.scala 308:38:@3116.4]
  wire [31:0] exe_pc_plus4; // @[Dpath.scala 308:38:@3117.4]
  wire  _T_463; // @[Dpath.scala 321:57:@3130.8]
  wire [31:0] _T_464; // @[Dpath.scala 321:35:@3131.8]
  wire [31:0] _GEN_49; // @[Dpath.scala 318:4:@3127.6]
  wire [31:0] _GEN_50; // @[Dpath.scala 318:4:@3127.6]
  wire [31:0] _GEN_51; // @[Dpath.scala 318:4:@3127.6]
  wire [4:0] _GEN_52; // @[Dpath.scala 318:4:@3127.6]
  wire [31:0] _GEN_57; // @[Dpath.scala 318:4:@3127.6]
  wire  _GEN_58; // @[Dpath.scala 318:4:@3127.6]
  wire  _GEN_59; // @[Dpath.scala 318:4:@3127.6]
  wire  _GEN_60; // @[Dpath.scala 318:4:@3127.6]
  wire [2:0] _GEN_61; // @[Dpath.scala 318:4:@3127.6]
  wire [1:0] _GEN_62; // @[Dpath.scala 318:4:@3127.6]
  wire [2:0] _GEN_63; // @[Dpath.scala 318:4:@3127.6]
  wire  _GEN_65; // @[Dpath.scala 311:4:@3119.4]
  wire  _GEN_66; // @[Dpath.scala 311:4:@3119.4]
  wire [2:0] _GEN_67; // @[Dpath.scala 311:4:@3119.4]
  wire  _GEN_76; // @[Dpath.scala 311:4:@3119.4]
  wire [2:0] _GEN_77; // @[Dpath.scala 311:4:@3119.4]
  wire  _T_542; // @[Dpath.scala 375:34:@3333.6]
  wire  _GEN_81; // @[Dpath.scala 372:4:@3330.4]
  wire [31:0] _T_546; // @[Dpath.scala 390:77:@3343.4]
  wire [31:0] _T_549; // @[Dpath.scala 405:20:@3355.4]
  reg [31:0] _T_551; // @[Dpath.scala 409:16:@3356.4]
  reg [31:0] _RAND_31;
  reg [31:0] _T_553; // @[Dpath.scala 410:24:@3358.4]
  reg [31:0] _RAND_32;
  reg [31:0] _T_555; // @[Dpath.scala 410:16:@3360.4]
  reg [31:0] _RAND_33;
  wire [7:0] _T_558; // @[Dpath.scala 411:12:@3362.4]
  wire [7:0] _T_561; // @[Dpath.scala 412:12:@3363.4]
  wire [7:0] _T_565; // @[Dpath.scala 416:12:@3364.4]
  wire [7:0] _T_566; // @[Dpath.scala 415:12:@3365.4]
  wire  _T_574; // @[Dpath.scala 419:31:@3368.4]
  wire [7:0] _T_580; // @[Dpath.scala 420:12:@3370.4]
  wire [7:0] _T_581; // @[Dpath.scala 419:12:@3371.4]
  wire [7:0] _T_582; // @[Dpath.scala 418:12:@3372.4]
  wire [7:0] _T_583; // @[Dpath.scala 417:12:@3373.4]
  wire [7:0] _T_586; // @[Dpath.scala 421:12:@3374.4]
  wire [31:0] _T_587; // @[Dpath.scala 422:12:@3375.4]
  wire  _T_590; // @[Dpath.scala 404:10:@3377.4]
  RegisterFile regfile ( // @[Dpath.scala 154:24:@2892.4]
    .clock(regfile_clock),
    .io_rs1_addr(regfile_io_rs1_addr),
    .io_rs1_data(regfile_io_rs1_data),
    .io_rs2_addr(regfile_io_rs2_addr),
    .io_rs2_data(regfile_io_rs2_data),
    .io_dm_addr(regfile_io_dm_addr),
    .io_dm_rdata(regfile_io_dm_rdata),
    .io_dm_wdata(regfile_io_dm_wdata),
    .io_waddr(regfile_io_waddr),
    .io_wdata(regfile_io_wdata),
    .io_wen(regfile_io_wen)
  );
  CSRFile csr ( // @[Dpath.scala 341:20:@3146.4]
    .clock(csr_clock),
    .reset(csr_reset),
    .io_rw_cmd(csr_io_rw_cmd),
    .io_rw_rdata(csr_io_rw_rdata),
    .io_rw_wdata(csr_io_rw_wdata),
    .io_eret(csr_io_eret),
    .io_decode_csr(csr_io_decode_csr),
    .io_status_debug(csr_io_status_debug),
    .io_status_prv(csr_io_status_prv),
    .io_status_sd(csr_io_status_sd),
    .io_status_zero1(csr_io_status_zero1),
    .io_status_tsr(csr_io_status_tsr),
    .io_status_tw(csr_io_status_tw),
    .io_status_tvm(csr_io_status_tvm),
    .io_status_mxr(csr_io_status_mxr),
    .io_status_sum(csr_io_status_sum),
    .io_status_mprv(csr_io_status_mprv),
    .io_status_xs(csr_io_status_xs),
    .io_status_fs(csr_io_status_fs),
    .io_status_mpp(csr_io_status_mpp),
    .io_status_hpp(csr_io_status_hpp),
    .io_status_spp(csr_io_status_spp),
    .io_status_mpie(csr_io_status_mpie),
    .io_status_hpie(csr_io_status_hpie),
    .io_status_spie(csr_io_status_spie),
    .io_status_upie(csr_io_status_upie),
    .io_status_mie(csr_io_status_mie),
    .io_status_hie(csr_io_status_hie),
    .io_status_sie(csr_io_status_sie),
    .io_status_uie(csr_io_status_uie),
    .io_evec(csr_io_evec),
    .io_exception(csr_io_exception),
    .io_retire(csr_io_retire),
    .io_pc(csr_io_pc),
    .io_time(csr_io_time)
  );
  assign _T_237 = io_ctl_dec_stall == 1'h0; // @[Dpath.scala 104:11:@2845.4]
  assign _T_239 = io_ctl_full_stall == 1'h0; // @[Dpath.scala 104:32:@2846.4]
  assign _T_240 = _T_237 & _T_239; // @[Dpath.scala 104:29:@2847.4]
  assign _T_241 = _T_240 | io_ctl_pipeline_kill; // @[Dpath.scala 104:52:@2848.4]
  assign _T_250 = io_ctl_exe_pc_sel == 2'h0; // @[Dpath.scala 117:45:@2861.4]
  assign _T_251 = io_ctl_fencei & _T_250; // @[Dpath.scala 117:24:@2862.4]
  assign _T_254 = _T_251 & _T_237; // @[Dpath.scala 117:54:@2864.4]
  assign _T_257 = _T_254 & _T_239; // @[Dpath.scala 118:28:@2866.4]
  assign _T_259 = io_ctl_pipeline_kill == 1'h0; // @[Dpath.scala 118:53:@2867.4]
  assign _T_260 = _T_257 & _T_259; // @[Dpath.scala 118:50:@2868.4]
  assign _T_243 = if_reg_pc + 32'h4; // @[Dpath.scala 109:33:@2852.4]
  assign if_pc_plus4 = if_reg_pc + 32'h4; // @[Dpath.scala 109:33:@2853.4]
  assign _T_245 = io_ctl_exe_pc_sel == 2'h1; // @[Dpath.scala 112:40:@2855.4]
  assign _T_453 = exe_reg_pc + brjmp_offset; // @[Dpath.scala 305:38:@3112.4]
  assign exe_brjmp_target = exe_reg_pc + brjmp_offset; // @[Dpath.scala 305:38:@3113.4]
  assign _T_246 = io_ctl_exe_pc_sel == 2'h2; // @[Dpath.scala 113:40:@2856.4]
  assign _T_411 = exe_alu_op1 + brjmp_offset; // @[Dpath.scala 285:37:@3068.4]
  assign exe_adder_out = exe_alu_op1 + brjmp_offset; // @[Dpath.scala 285:37:@3069.4]
  assign exception_target = csr_io_evec; // @[Dpath.scala 102:34:@2844.4 Dpath.scala 350:21:@3258.4]
  assign _T_247 = _T_246 ? exe_adder_out : exception_target; // @[Dpath.scala 113:21:@2857.4]
  assign _T_248 = _T_245 ? exe_brjmp_target : _T_247; // @[Dpath.scala 112:21:@2858.4]
  assign _T_249 = _T_250 ? if_pc_plus4 : _T_248; // @[Dpath.scala 111:21:@2859.4]
  assign if_pc_next = _T_260 ? if_reg_pc : _T_249; // @[Dpath.scala 119:4:@2869.4]
  assign _GEN_0 = _T_241 ? if_pc_next : if_reg_pc; // @[Dpath.scala 105:4:@2849.4]
  assign _GEN_2 = io_ctl_if_kill ? 32'h4033 : io_imem_resp_bits_data; // @[Dpath.scala 134:7:@2881.8]
  assign _GEN_3 = _T_240 ? _GEN_2 : dec_reg_inst; // @[Dpath.scala 132:4:@2880.6]
  assign _GEN_4 = _T_240 ? if_reg_pc : dec_reg_pc; // @[Dpath.scala 132:4:@2880.6]
  assign _GEN_5 = io_ctl_pipeline_kill ? 32'h4033 : _GEN_3; // @[Dpath.scala 128:4:@2873.4]
  assign _GEN_6 = io_ctl_pipeline_kill ? dec_reg_pc : _GEN_4; // @[Dpath.scala 128:4:@2873.4]
  assign dec_rs1_addr = dec_reg_inst[19:15]; // @[Dpath.scala 148:35:@2889.4]
  assign dec_rs2_addr = dec_reg_inst[24:20]; // @[Dpath.scala 149:35:@2890.4]
  assign dec_wbaddr = dec_reg_inst[11:7]; // @[Dpath.scala 150:35:@2891.4]
  assign imm_itype = dec_reg_inst[31:20]; // @[Dpath.scala 171:33:@2904.4]
  assign _T_266 = dec_reg_inst[31:25]; // @[Dpath.scala 172:37:@2905.4]
  assign imm_stype = {_T_266,dec_wbaddr}; // @[Cat.scala 30:58:@2907.4]
  assign _T_268 = dec_reg_inst[31]; // @[Dpath.scala 173:37:@2908.4]
  assign _T_269 = dec_reg_inst[7]; // @[Dpath.scala 173:55:@2909.4]
  assign _T_270 = dec_reg_inst[30:25]; // @[Dpath.scala 173:72:@2910.4]
  assign _T_271 = dec_reg_inst[11:8]; // @[Dpath.scala 173:94:@2911.4]
  assign imm_sbtype = {_T_268,_T_269,_T_270,_T_271}; // @[Cat.scala 30:58:@2914.4]
  assign imm_utype = dec_reg_inst[31:12]; // @[Dpath.scala 174:33:@2915.4]
  assign _T_275 = dec_reg_inst[19:12]; // @[Dpath.scala 175:55:@2917.4]
  assign _T_276 = dec_reg_inst[20]; // @[Dpath.scala 175:76:@2918.4]
  assign _T_277 = dec_reg_inst[30:21]; // @[Dpath.scala 175:94:@2919.4]
  assign imm_ujtype = {_T_268,_T_275,_T_276,_T_277}; // @[Cat.scala 30:58:@2922.4]
  assign imm_z = {27'h0,dec_rs1_addr}; // @[Cat.scala 30:58:@2925.4]
  assign _T_286 = imm_itype[11]; // @[Dpath.scala 180:47:@2926.4]
  assign _T_290 = _T_286 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12:@2928.4]
  assign imm_itype_sext = {_T_290,imm_itype}; // @[Cat.scala 30:58:@2929.4]
  assign _T_291 = imm_stype[11]; // @[Dpath.scala 181:47:@2930.4]
  assign _T_295 = _T_291 ? 20'hfffff : 20'h0; // @[Bitwise.scala 72:12:@2932.4]
  assign imm_stype_sext = {_T_295,_T_266,dec_wbaddr}; // @[Cat.scala 30:58:@2933.4]
  assign _T_296 = imm_sbtype[11]; // @[Dpath.scala 182:48:@2934.4]
  assign _T_300 = _T_296 ? 19'h7ffff : 19'h0; // @[Bitwise.scala 72:12:@2936.4]
  assign imm_sbtype_sext = {_T_300,_T_268,_T_269,_T_270,_T_271,1'h0}; // @[Cat.scala 30:58:@2938.4]
  assign imm_utype_sext = {imm_utype,12'h0}; // @[Cat.scala 30:58:@2940.4]
  assign _T_308 = imm_ujtype[19]; // @[Dpath.scala 184:48:@2941.4]
  assign _T_312 = _T_308 ? 11'h7ff : 11'h0; // @[Bitwise.scala 72:12:@2943.4]
  assign imm_ujtype_sext = {_T_312,_T_268,_T_275,_T_276,_T_277,1'h0}; // @[Cat.scala 30:58:@2945.4]
  assign _T_316 = io_ctl_op2_sel == 3'h0; // @[Dpath.scala 188:32:@2946.4]
  assign _T_317 = io_ctl_op2_sel == 3'h1; // @[Dpath.scala 189:32:@2947.4]
  assign _T_318 = io_ctl_op2_sel == 3'h2; // @[Dpath.scala 190:32:@2948.4]
  assign _T_319 = io_ctl_op2_sel == 3'h3; // @[Dpath.scala 191:32:@2949.4]
  assign _T_320 = io_ctl_op2_sel == 3'h4; // @[Dpath.scala 192:32:@2950.4]
  assign _T_321 = io_ctl_op2_sel == 3'h5; // @[Dpath.scala 193:32:@2951.4]
  assign _T_322 = _T_321 ? imm_ujtype_sext : 32'h0; // @[Mux.scala 61:16:@2952.4]
  assign _T_323 = _T_320 ? imm_utype_sext : _T_322; // @[Mux.scala 61:16:@2953.4]
  assign _T_324 = _T_319 ? imm_sbtype_sext : _T_323; // @[Mux.scala 61:16:@2954.4]
  assign _T_325 = _T_318 ? imm_stype_sext : _T_324; // @[Mux.scala 61:16:@2955.4]
  assign _T_326 = _T_317 ? imm_itype_sext : _T_325; // @[Mux.scala 61:16:@2956.4]
  assign dec_alu_op2 = _T_316 ? regfile_io_rs2_data : _T_326; // @[Mux.scala 61:16:@2957.4]
  assign _T_332 = io_ctl_op1_sel == 2'h2; // @[Dpath.scala 208:42:@2963.4]
  assign _T_333 = io_ctl_op1_sel == 2'h1; // @[Dpath.scala 209:42:@2964.4]
  assign _T_334 = exe_reg_wbaddr == dec_rs1_addr; // @[Dpath.scala 210:42:@2965.4]
  assign _T_336 = dec_rs1_addr != 5'h0; // @[Dpath.scala 210:77:@2966.4]
  assign _T_337 = _T_334 & _T_336; // @[Dpath.scala 210:60:@2967.4]
  assign _T_338 = _T_337 & exe_reg_ctrl_rf_wen; // @[Dpath.scala 210:86:@2968.4]
  assign _T_339 = mem_reg_wbaddr == dec_rs1_addr; // @[Dpath.scala 211:42:@2969.4]
  assign _T_342 = _T_339 & _T_336; // @[Dpath.scala 211:60:@2971.4]
  assign _T_343 = _T_342 & mem_reg_ctrl_rf_wen; // @[Dpath.scala 211:86:@2972.4]
  assign _T_344 = wb_reg_wbaddr == dec_rs1_addr; // @[Dpath.scala 212:42:@2973.4]
  assign _T_347 = _T_344 & _T_336; // @[Dpath.scala 212:60:@2975.4]
  assign _T_348 = _T_347 & wb_reg_ctrl_rf_wen; // @[Dpath.scala 212:86:@2976.4]
  assign _T_349 = _T_348 ? wb_reg_wbdata : regfile_io_rs1_data; // @[Mux.scala 61:16:@2977.4]
  assign _T_531 = mem_reg_ctrl_wb_sel == 2'h0; // @[Dpath.scala 361:40:@3320.4]
  assign _T_532 = mem_reg_ctrl_wb_sel == 2'h2; // @[Dpath.scala 362:40:@3321.4]
  assign _T_533 = mem_reg_ctrl_wb_sel == 2'h1; // @[Dpath.scala 363:40:@3322.4]
  assign _T_534 = mem_reg_ctrl_wb_sel == 2'h3; // @[Dpath.scala 364:40:@3323.4]
  assign _T_535 = _T_534 ? csr_io_rw_rdata : mem_reg_alu_out; // @[Mux.scala 61:16:@3324.4]
  assign _T_536 = _T_533 ? io_dmem_resp_bits_data : _T_535; // @[Mux.scala 61:16:@3325.4]
  assign _T_537 = _T_532 ? mem_reg_alu_out : _T_536; // @[Mux.scala 61:16:@3326.4]
  assign mem_wbdata = _T_531 ? mem_reg_alu_out : _T_537; // @[Mux.scala 61:16:@3327.4]
  assign _T_350 = _T_343 ? mem_wbdata : _T_349; // @[Mux.scala 61:16:@2978.4]
  assign _T_413 = exe_reg_ctrl_alu_fun == 4'h0; // @[Dpath.scala 289:41:@3071.4]
  assign _T_414 = exe_reg_ctrl_alu_fun == 4'h1; // @[Dpath.scala 290:41:@3072.4]
  assign _T_415 = exe_alu_op1 - brjmp_offset; // @[Dpath.scala 290:71:@3073.4]
  assign _T_416 = $unsigned(_T_415); // @[Dpath.scala 290:71:@3074.4]
  assign _T_417 = _T_416[31:0]; // @[Dpath.scala 290:71:@3075.4]
  assign _T_418 = exe_reg_ctrl_alu_fun == 4'h5; // @[Dpath.scala 291:41:@3076.4]
  assign _T_419 = exe_alu_op1 & brjmp_offset; // @[Dpath.scala 291:71:@3077.4]
  assign _T_420 = exe_reg_ctrl_alu_fun == 4'h6; // @[Dpath.scala 292:41:@3078.4]
  assign _T_421 = exe_alu_op1 | brjmp_offset; // @[Dpath.scala 292:71:@3079.4]
  assign _T_422 = exe_reg_ctrl_alu_fun == 4'h7; // @[Dpath.scala 293:41:@3080.4]
  assign _T_423 = exe_alu_op1 ^ brjmp_offset; // @[Dpath.scala 293:71:@3081.4]
  assign _T_424 = exe_reg_ctrl_alu_fun == 4'h8; // @[Dpath.scala 294:41:@3082.4]
  assign _T_425 = $signed(exe_alu_op1); // @[Dpath.scala 294:77:@3083.4]
  assign _T_426 = $signed(brjmp_offset); // @[Dpath.scala 294:100:@3084.4]
  assign _T_427 = $signed(_T_425) < $signed(_T_426); // @[Dpath.scala 294:80:@3085.4]
  assign _T_428 = exe_reg_ctrl_alu_fun == 4'h9; // @[Dpath.scala 295:41:@3086.4]
  assign _T_429 = exe_alu_op1 < brjmp_offset; // @[Dpath.scala 295:71:@3087.4]
  assign _T_430 = exe_reg_ctrl_alu_fun == 4'h2; // @[Dpath.scala 296:41:@3088.4]
  assign alu_shamt = brjmp_offset[4:0]; // @[Dpath.scala 284:35:@3067.4]
  assign _GEN_82 = {{31'd0}, exe_alu_op1}; // @[Dpath.scala 296:72:@3089.4]
  assign _T_431 = _GEN_82 << alu_shamt; // @[Dpath.scala 296:72:@3089.4]
  assign _T_432 = _T_431[31:0]; // @[Dpath.scala 296:85:@3090.4]
  assign _T_433 = exe_reg_ctrl_alu_fun == 4'h4; // @[Dpath.scala 297:41:@3091.4]
  assign _T_435 = $signed(_T_425) >>> alu_shamt; // @[Dpath.scala 297:80:@3093.4]
  assign _T_436 = $unsigned(_T_435); // @[Dpath.scala 297:100:@3094.4]
  assign _T_437 = exe_reg_ctrl_alu_fun == 4'h3; // @[Dpath.scala 298:41:@3095.4]
  assign _T_438 = exe_alu_op1 >> alu_shamt; // @[Dpath.scala 298:71:@3096.4]
  assign _T_439 = exe_reg_ctrl_alu_fun == 4'ha; // @[Dpath.scala 299:41:@3097.4]
  assign _T_440 = exe_reg_ctrl_alu_fun == 4'hb; // @[Dpath.scala 300:41:@3098.4]
  assign _T_441 = _T_440 ? brjmp_offset : exe_reg_inst; // @[Mux.scala 61:16:@3099.4]
  assign _T_442 = _T_439 ? exe_alu_op1 : _T_441; // @[Mux.scala 61:16:@3100.4]
  assign _T_443 = _T_437 ? _T_438 : _T_442; // @[Mux.scala 61:16:@3101.4]
  assign _T_444 = _T_433 ? _T_436 : _T_443; // @[Mux.scala 61:16:@3102.4]
  assign _T_445 = _T_430 ? _T_432 : _T_444; // @[Mux.scala 61:16:@3103.4]
  assign _T_446 = _T_428 ? {{31'd0}, _T_429} : _T_445; // @[Mux.scala 61:16:@3104.4]
  assign _T_447 = _T_424 ? {{31'd0}, _T_427} : _T_446; // @[Mux.scala 61:16:@3105.4]
  assign _T_448 = _T_422 ? _T_423 : _T_447; // @[Mux.scala 61:16:@3106.4]
  assign _T_449 = _T_420 ? _T_421 : _T_448; // @[Mux.scala 61:16:@3107.4]
  assign _T_450 = _T_418 ? _T_419 : _T_449; // @[Mux.scala 61:16:@3108.4]
  assign _T_451 = _T_414 ? _T_417 : _T_450; // @[Mux.scala 61:16:@3109.4]
  assign exe_alu_out = _T_413 ? exe_adder_out : _T_451; // @[Mux.scala 61:16:@3110.4]
  assign _T_351 = _T_338 ? exe_alu_out : _T_350; // @[Mux.scala 61:16:@2979.4]
  assign _T_352 = _T_333 ? dec_reg_pc : _T_351; // @[Mux.scala 61:16:@2980.4]
  assign dec_op1_data = _T_332 ? imm_z : _T_352; // @[Mux.scala 61:16:@2981.4]
  assign _T_354 = exe_reg_wbaddr == dec_rs2_addr; // @[Dpath.scala 216:42:@2983.4]
  assign _T_356 = dec_rs2_addr != 5'h0; // @[Dpath.scala 216:77:@2984.4]
  assign _T_357 = _T_354 & _T_356; // @[Dpath.scala 216:60:@2985.4]
  assign _T_358 = _T_357 & exe_reg_ctrl_rf_wen; // @[Dpath.scala 216:86:@2986.4]
  assign _T_360 = _T_358 & _T_316; // @[Dpath.scala 216:109:@2988.4]
  assign _T_361 = mem_reg_wbaddr == dec_rs2_addr; // @[Dpath.scala 217:42:@2989.4]
  assign _T_364 = _T_361 & _T_356; // @[Dpath.scala 217:60:@2991.4]
  assign _T_365 = _T_364 & mem_reg_ctrl_rf_wen; // @[Dpath.scala 217:86:@2992.4]
  assign _T_367 = _T_365 & _T_316; // @[Dpath.scala 217:109:@2994.4]
  assign _T_368 = wb_reg_wbaddr == dec_rs2_addr; // @[Dpath.scala 218:42:@2995.4]
  assign _T_371 = _T_368 & _T_356; // @[Dpath.scala 218:60:@2997.4]
  assign _T_372 = _T_371 & wb_reg_ctrl_rf_wen; // @[Dpath.scala 218:86:@2998.4]
  assign _T_374 = _T_372 & _T_316; // @[Dpath.scala 218:109:@3000.4]
  assign _T_375 = _T_374 ? wb_reg_wbdata : dec_alu_op2; // @[Mux.scala 61:16:@3001.4]
  assign _T_376 = _T_367 ? mem_wbdata : _T_375; // @[Mux.scala 61:16:@3002.4]
  assign dec_op2_data = _T_360 ? exe_alu_out : _T_376; // @[Mux.scala 61:16:@3003.4]
  assign _T_393 = _T_372 ? wb_reg_wbdata : regfile_io_rs2_data; // @[Mux.scala 61:16:@3017.4]
  assign _T_394 = _T_365 ? mem_wbdata : _T_393; // @[Mux.scala 61:16:@3018.4]
  assign dec_rs2_data = _T_358 ? exe_alu_out : _T_394; // @[Mux.scala 61:16:@3019.4]
  assign _T_398 = io_ctl_dec_stall & _T_239; // @[Dpath.scala 229:28:@3022.4]
  assign _T_399 = _T_398 | io_ctl_pipeline_kill; // @[Dpath.scala 229:51:@3023.4]
  assign _GEN_7 = io_ctl_dec_kill ? 32'h4033 : dec_reg_inst; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_8 = io_ctl_dec_kill ? 5'h0 : dec_wbaddr; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_9 = io_ctl_dec_kill ? 1'h0 : io_ctl_rf_wen; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_10 = io_ctl_dec_kill ? 1'h0 : io_ctl_mem_val; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_11 = io_ctl_dec_kill ? 2'h0 : io_ctl_mem_fcn; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_12 = io_ctl_dec_kill ? 3'h0 : io_ctl_csr_cmd; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_13 = io_ctl_dec_kill ? 4'h0 : io_ctl_br_type; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_14 = io_ctl_dec_kill ? exe_reg_ctrl_mem_typ : io_ctl_mem_typ; // @[Dpath.scala 255:7:@3047.8]
  assign _GEN_15 = _T_240 ? dec_reg_pc : exe_reg_pc; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_18 = _T_240 ? dec_op1_data : exe_alu_op1; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_19 = _T_240 ? dec_op2_data : brjmp_offset; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_20 = _T_240 ? dec_rs2_data : exe_reg_rs2_data; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_22 = _T_240 ? io_ctl_alu_fun : exe_reg_ctrl_alu_fun; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_23 = _T_240 ? io_ctl_wb_sel : exe_reg_ctrl_wb_sel; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_24 = _T_240 ? _GEN_7 : exe_reg_inst; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_25 = _T_240 ? _GEN_8 : exe_reg_wbaddr; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_26 = _T_240 ? _GEN_9 : exe_reg_ctrl_rf_wen; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_27 = _T_240 ? _GEN_10 : exe_reg_ctrl_mem_val; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_28 = _T_240 ? _GEN_11 : {{1'd0}, exe_reg_ctrl_mem_fcn}; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_29 = _T_240 ? _GEN_12 : exe_reg_ctrl_csr_cmd; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_30 = _T_240 ? _GEN_13 : exe_reg_ctrl_br_type; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_31 = _T_240 ? _GEN_14 : exe_reg_ctrl_mem_typ; // @[Dpath.scala 242:4:@3037.6]
  assign _GEN_32 = _T_399 ? 32'h4033 : _GEN_24; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_34 = _T_399 ? 1'h0 : _GEN_26; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_35 = _T_399 ? 1'h0 : _GEN_27; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_36 = _T_399 ? 2'h0 : _GEN_28; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_37 = _T_399 ? 3'h0 : _GEN_29; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_38 = _T_399 ? 4'h0 : _GEN_30; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_39 = _T_399 ? exe_reg_pc : _GEN_15; // @[Dpath.scala 230:4:@3024.4]
  assign _GEN_48 = _T_399 ? exe_reg_ctrl_mem_typ : _GEN_31; // @[Dpath.scala 230:4:@3024.4]
  assign _T_456 = exe_reg_pc + 32'h4; // @[Dpath.scala 308:38:@3116.4]
  assign exe_pc_plus4 = exe_reg_pc + 32'h4; // @[Dpath.scala 308:38:@3117.4]
  assign _T_463 = exe_reg_ctrl_wb_sel == 2'h2; // @[Dpath.scala 321:57:@3130.8]
  assign _T_464 = _T_463 ? exe_pc_plus4 : exe_alu_out; // @[Dpath.scala 321:35:@3131.8]
  assign _GEN_49 = _T_239 ? exe_reg_pc : mem_reg_pc; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_50 = _T_239 ? exe_reg_inst : mem_reg_inst; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_51 = _T_239 ? _T_464 : mem_reg_alu_out; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_52 = _T_239 ? exe_reg_wbaddr : mem_reg_wbaddr; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_57 = _T_239 ? exe_reg_rs2_data : mem_reg_rs2_data; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_58 = _T_239 ? exe_reg_ctrl_rf_wen : mem_reg_ctrl_rf_wen; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_59 = _T_239 ? exe_reg_ctrl_mem_val : mem_reg_ctrl_mem_val; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_60 = _T_239 ? exe_reg_ctrl_mem_fcn : mem_reg_ctrl_mem_fcn; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_61 = _T_239 ? exe_reg_ctrl_mem_typ : mem_reg_ctrl_mem_typ; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_62 = _T_239 ? exe_reg_ctrl_wb_sel : mem_reg_ctrl_wb_sel; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_63 = _T_239 ? exe_reg_ctrl_csr_cmd : mem_reg_ctrl_csr_cmd; // @[Dpath.scala 318:4:@3127.6]
  assign _GEN_65 = io_ctl_pipeline_kill ? 1'h0 : _GEN_58; // @[Dpath.scala 311:4:@3119.4]
  assign _GEN_66 = io_ctl_pipeline_kill ? 1'h0 : _GEN_59; // @[Dpath.scala 311:4:@3119.4]
  assign _GEN_67 = io_ctl_pipeline_kill ? 3'h0 : _GEN_63; // @[Dpath.scala 311:4:@3119.4]
  assign _GEN_76 = io_ctl_pipeline_kill ? mem_reg_ctrl_mem_fcn : _GEN_60; // @[Dpath.scala 311:4:@3119.4]
  assign _GEN_77 = io_ctl_pipeline_kill ? mem_reg_ctrl_mem_typ : _GEN_61; // @[Dpath.scala 311:4:@3119.4]
  assign _T_542 = io_ctl_mem_exception ? 1'h0 : mem_reg_ctrl_rf_wen; // @[Dpath.scala 375:34:@3333.6]
  assign _GEN_81 = _T_239 ? _T_542 : 1'h0; // @[Dpath.scala 372:4:@3330.4]
  assign _T_546 = $signed(exe_reg_rs2_data); // @[Dpath.scala 390:77:@3343.4]
  assign _T_549 = csr_io_time; // @[Dpath.scala 405:20:@3355.4]
  assign _T_558 = wb_reg_ctrl_rf_wen ? 8'h4d : 8'h20; // @[Dpath.scala 411:12:@3362.4]
  assign _T_561 = mem_reg_ctrl_rf_wen ? 8'h5a : 8'h20; // @[Dpath.scala 412:12:@3363.4]
  assign _T_565 = io_ctl_dec_stall ? 8'h53 : 8'h20; // @[Dpath.scala 416:12:@3364.4]
  assign _T_566 = io_ctl_full_stall ? 8'h46 : _T_565; // @[Dpath.scala 415:12:@3365.4]
  assign _T_574 = io_ctl_exe_pc_sel == 2'h3; // @[Dpath.scala 419:31:@3368.4]
  assign _T_580 = _T_250 ? 8'h20 : 8'h3f; // @[Dpath.scala 420:12:@3370.4]
  assign _T_581 = _T_574 ? 8'h45 : _T_580; // @[Dpath.scala 419:12:@3371.4]
  assign _T_582 = _T_246 ? 8'h4a : _T_581; // @[Dpath.scala 418:12:@3372.4]
  assign _T_583 = _T_245 ? 8'h42 : _T_582; // @[Dpath.scala 417:12:@3373.4]
  assign _T_586 = csr_io_exception ? 8'h58 : 8'h20; // @[Dpath.scala 421:12:@3374.4]
  assign _T_587 = io_ctl_pipeline_kill ? 32'h4033 : exe_reg_inst; // @[Dpath.scala 422:12:@3375.4]
  assign _T_590 = reset == 1'h0; // @[Dpath.scala 404:10:@3377.4]
  assign io_ddpath_rdata = regfile_io_dm_rdata; // @[Dpath.scala 165:20:@2901.4]
  assign io_imem_req_bits_addr = if_reg_pc; // @[Dpath.scala 124:26:@2872.4]
  assign io_dmem_req_valid = mem_reg_ctrl_mem_val; // @[Dpath.scala 397:26:@3350.4]
  assign io_dmem_req_bits_addr = mem_reg_alu_out; // @[Dpath.scala 398:26:@3351.4]
  assign io_dmem_req_bits_data = mem_reg_rs2_data; // @[Dpath.scala 401:26:@3354.4]
  assign io_dmem_req_bits_fcn = mem_reg_ctrl_mem_fcn; // @[Dpath.scala 399:26:@3352.4]
  assign io_dmem_req_bits_typ = mem_reg_ctrl_mem_typ; // @[Dpath.scala 400:26:@3353.4]
  assign io_dat_dec_inst = dec_reg_inst; // @[Dpath.scala 388:22:@3339.4]
  assign io_dat_exe_br_eq = exe_alu_op1 == exe_reg_rs2_data; // @[Dpath.scala 389:22:@3341.4]
  assign io_dat_exe_br_lt = $signed(_T_425) < $signed(_T_546); // @[Dpath.scala 390:22:@3345.4]
  assign io_dat_exe_br_ltu = exe_alu_op1 < exe_reg_rs2_data; // @[Dpath.scala 391:22:@3347.4]
  assign io_dat_exe_br_type = exe_reg_ctrl_br_type; // @[Dpath.scala 392:22:@3348.4]
  assign io_dat_mem_ctrl_dmem_val = mem_reg_ctrl_mem_val; // @[Dpath.scala 394:29:@3349.4]
  assign io_dat_csr_eret = csr_io_eret; // @[Dpath.scala 352:20:@3259.4]
  assign regfile_clock = clock; // @[:@2893.4]
  assign regfile_io_rs1_addr = dec_reg_inst[19:15]; // @[Dpath.scala 155:24:@2895.4]
  assign regfile_io_rs2_addr = dec_reg_inst[24:20]; // @[Dpath.scala 156:24:@2896.4]
  assign regfile_io_dm_addr = io_ddpath_addr; // @[Dpath.scala 164:23:@2900.4]
  assign regfile_io_dm_wdata = io_ddpath_wdata; // @[Dpath.scala 167:24:@2903.4]
  assign regfile_io_waddr = wb_reg_wbaddr; // @[Dpath.scala 159:21:@2897.4]
  assign regfile_io_wdata = wb_reg_wbdata; // @[Dpath.scala 160:21:@2898.4]
  assign regfile_io_wen = wb_reg_ctrl_rf_wen; // @[Dpath.scala 161:21:@2899.4]
  assign csr_clock = clock; // @[:@3147.4]
  assign csr_reset = reset; // @[:@3148.4]
  assign csr_io_rw_cmd = mem_reg_ctrl_csr_cmd; // @[Dpath.scala 345:20:@3251.4]
  assign csr_io_rw_wdata = mem_reg_alu_out; // @[Dpath.scala 344:20:@3250.4]
  assign csr_io_decode_csr = mem_reg_inst[31:20]; // @[Dpath.scala 343:23:@3249.4]
  assign csr_io_exception = io_ctl_mem_exception; // @[Dpath.scala 348:21:@3256.4]
  assign csr_io_retire = _T_239 & _T_237; // @[Dpath.scala 347:21:@3255.4]
  assign csr_io_pc = mem_reg_pc; // @[Dpath.scala 349:21:@3257.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  if_reg_pc = _RAND_0[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  dec_reg_inst = _RAND_1[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  dec_reg_pc = _RAND_2[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  exe_reg_inst = _RAND_3[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  exe_reg_pc = _RAND_4[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  exe_reg_wbaddr = _RAND_5[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  exe_alu_op1 = _RAND_6[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  brjmp_offset = _RAND_7[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  exe_reg_rs2_data = _RAND_8[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  exe_reg_ctrl_br_type = _RAND_9[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  exe_reg_ctrl_alu_fun = _RAND_10[3:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  exe_reg_ctrl_wb_sel = _RAND_11[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  exe_reg_ctrl_rf_wen = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  exe_reg_ctrl_mem_val = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  exe_reg_ctrl_mem_fcn = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  exe_reg_ctrl_mem_typ = _RAND_15[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  exe_reg_ctrl_csr_cmd = _RAND_16[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  mem_reg_pc = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  mem_reg_inst = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  mem_reg_alu_out = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  mem_reg_wbaddr = _RAND_20[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  mem_reg_rs2_data = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  mem_reg_ctrl_rf_wen = _RAND_22[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  mem_reg_ctrl_mem_val = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  mem_reg_ctrl_mem_fcn = _RAND_24[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  mem_reg_ctrl_mem_typ = _RAND_25[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_26 = {1{`RANDOM}};
  mem_reg_ctrl_wb_sel = _RAND_26[1:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_27 = {1{`RANDOM}};
  mem_reg_ctrl_csr_cmd = _RAND_27[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_28 = {1{`RANDOM}};
  wb_reg_wbaddr = _RAND_28[4:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_29 = {1{`RANDOM}};
  wb_reg_wbdata = _RAND_29[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_30 = {1{`RANDOM}};
  wb_reg_ctrl_rf_wen = _RAND_30[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_31 = {1{`RANDOM}};
  _T_551 = _RAND_31[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_32 = {1{`RANDOM}};
  _T_553 = _RAND_32[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_33 = {1{`RANDOM}};
  _T_555 = _RAND_33[31:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      if_reg_pc <= 32'h80000000;
    end else begin
      if (_T_241) begin
        if (!(_T_260)) begin
          if (_T_250) begin
            if_reg_pc <= if_pc_plus4;
          end else begin
            if (_T_245) begin
              if_reg_pc <= exe_brjmp_target;
            end else begin
              if (_T_246) begin
                if_reg_pc <= exe_adder_out;
              end else begin
                if_reg_pc <= exception_target;
              end
            end
          end
        end
      end
    end
    if (reset) begin
      dec_reg_inst <= 32'h4033;
    end else begin
      if (io_ctl_pipeline_kill) begin
        dec_reg_inst <= 32'h4033;
      end else begin
        if (_T_240) begin
          if (io_ctl_if_kill) begin
            dec_reg_inst <= 32'h4033;
          end else begin
            dec_reg_inst <= io_imem_resp_bits_data;
          end
        end
      end
    end
    if (reset) begin
      dec_reg_pc <= 32'h0;
    end else begin
      if (!(io_ctl_pipeline_kill)) begin
        if (_T_240) begin
          dec_reg_pc <= if_reg_pc;
        end
      end
    end
    if (reset) begin
      exe_reg_inst <= 32'h4033;
    end else begin
      if (_T_399) begin
        exe_reg_inst <= 32'h4033;
      end else begin
        if (_T_240) begin
          if (io_ctl_dec_kill) begin
            exe_reg_inst <= 32'h4033;
          end else begin
            exe_reg_inst <= dec_reg_inst;
          end
        end
      end
    end
    if (reset) begin
      exe_reg_pc <= 32'h0;
    end else begin
      if (!(_T_399)) begin
        if (_T_240) begin
          exe_reg_pc <= dec_reg_pc;
        end
      end
    end
    if (_T_399) begin
      exe_reg_wbaddr <= 5'h0;
    end else begin
      if (_T_240) begin
        if (io_ctl_dec_kill) begin
          exe_reg_wbaddr <= 5'h0;
        end else begin
          exe_reg_wbaddr <= dec_wbaddr;
        end
      end
    end
    if (!(_T_399)) begin
      if (_T_240) begin
        if (_T_332) begin
          exe_alu_op1 <= imm_z;
        end else begin
          if (_T_333) begin
            exe_alu_op1 <= dec_reg_pc;
          end else begin
            if (_T_338) begin
              if (_T_413) begin
                exe_alu_op1 <= exe_adder_out;
              end else begin
                if (_T_414) begin
                  exe_alu_op1 <= _T_417;
                end else begin
                  if (_T_418) begin
                    exe_alu_op1 <= _T_419;
                  end else begin
                    if (_T_420) begin
                      exe_alu_op1 <= _T_421;
                    end else begin
                      if (_T_422) begin
                        exe_alu_op1 <= _T_423;
                      end else begin
                        if (_T_424) begin
                          exe_alu_op1 <= {{31'd0}, _T_427};
                        end else begin
                          if (_T_428) begin
                            exe_alu_op1 <= {{31'd0}, _T_429};
                          end else begin
                            if (_T_430) begin
                              exe_alu_op1 <= _T_432;
                            end else begin
                              if (_T_433) begin
                                exe_alu_op1 <= _T_436;
                              end else begin
                                if (_T_437) begin
                                  exe_alu_op1 <= _T_438;
                                end else begin
                                  if (!(_T_439)) begin
                                    if (_T_440) begin
                                      exe_alu_op1 <= brjmp_offset;
                                    end else begin
                                      exe_alu_op1 <= exe_reg_inst;
                                    end
                                  end
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end else begin
              if (_T_343) begin
                if (_T_531) begin
                  exe_alu_op1 <= mem_reg_alu_out;
                end else begin
                  if (_T_532) begin
                    exe_alu_op1 <= mem_reg_alu_out;
                  end else begin
                    if (_T_533) begin
                      exe_alu_op1 <= io_dmem_resp_bits_data;
                    end else begin
                      if (_T_534) begin
                        exe_alu_op1 <= csr_io_rw_rdata;
                      end else begin
                        exe_alu_op1 <= mem_reg_alu_out;
                      end
                    end
                  end
                end
              end else begin
                if (_T_348) begin
                  exe_alu_op1 <= wb_reg_wbdata;
                end else begin
                  exe_alu_op1 <= regfile_io_rs1_data;
                end
              end
            end
          end
        end
      end
    end
    if (!(_T_399)) begin
      if (_T_240) begin
        if (_T_360) begin
          if (_T_413) begin
            brjmp_offset <= exe_adder_out;
          end else begin
            if (_T_414) begin
              brjmp_offset <= _T_417;
            end else begin
              if (_T_418) begin
                brjmp_offset <= _T_419;
              end else begin
                if (_T_420) begin
                  brjmp_offset <= _T_421;
                end else begin
                  if (_T_422) begin
                    brjmp_offset <= _T_423;
                  end else begin
                    if (_T_424) begin
                      brjmp_offset <= {{31'd0}, _T_427};
                    end else begin
                      if (_T_428) begin
                        brjmp_offset <= {{31'd0}, _T_429};
                      end else begin
                        if (_T_430) begin
                          brjmp_offset <= _T_432;
                        end else begin
                          if (_T_433) begin
                            brjmp_offset <= _T_436;
                          end else begin
                            if (_T_437) begin
                              brjmp_offset <= _T_438;
                            end else begin
                              if (_T_439) begin
                                brjmp_offset <= exe_alu_op1;
                              end else begin
                                if (!(_T_440)) begin
                                  brjmp_offset <= exe_reg_inst;
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end else begin
          if (_T_367) begin
            if (_T_531) begin
              brjmp_offset <= mem_reg_alu_out;
            end else begin
              if (_T_532) begin
                brjmp_offset <= mem_reg_alu_out;
              end else begin
                if (_T_533) begin
                  brjmp_offset <= io_dmem_resp_bits_data;
                end else begin
                  if (_T_534) begin
                    brjmp_offset <= csr_io_rw_rdata;
                  end else begin
                    brjmp_offset <= mem_reg_alu_out;
                  end
                end
              end
            end
          end else begin
            if (_T_374) begin
              brjmp_offset <= wb_reg_wbdata;
            end else begin
              if (_T_316) begin
                brjmp_offset <= regfile_io_rs2_data;
              end else begin
                if (_T_317) begin
                  brjmp_offset <= imm_itype_sext;
                end else begin
                  if (_T_318) begin
                    brjmp_offset <= imm_stype_sext;
                  end else begin
                    if (_T_319) begin
                      brjmp_offset <= imm_sbtype_sext;
                    end else begin
                      if (_T_320) begin
                        brjmp_offset <= imm_utype_sext;
                      end else begin
                        if (_T_321) begin
                          brjmp_offset <= imm_ujtype_sext;
                        end else begin
                          brjmp_offset <= 32'h0;
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (!(_T_399)) begin
      if (_T_240) begin
        if (_T_358) begin
          if (_T_413) begin
            exe_reg_rs2_data <= exe_adder_out;
          end else begin
            if (_T_414) begin
              exe_reg_rs2_data <= _T_417;
            end else begin
              if (_T_418) begin
                exe_reg_rs2_data <= _T_419;
              end else begin
                if (_T_420) begin
                  exe_reg_rs2_data <= _T_421;
                end else begin
                  if (_T_422) begin
                    exe_reg_rs2_data <= _T_423;
                  end else begin
                    if (_T_424) begin
                      exe_reg_rs2_data <= {{31'd0}, _T_427};
                    end else begin
                      if (_T_428) begin
                        exe_reg_rs2_data <= {{31'd0}, _T_429};
                      end else begin
                        if (_T_430) begin
                          exe_reg_rs2_data <= _T_432;
                        end else begin
                          if (_T_433) begin
                            exe_reg_rs2_data <= _T_436;
                          end else begin
                            if (_T_437) begin
                              exe_reg_rs2_data <= _T_438;
                            end else begin
                              if (_T_439) begin
                                exe_reg_rs2_data <= exe_alu_op1;
                              end else begin
                                if (_T_440) begin
                                  exe_reg_rs2_data <= brjmp_offset;
                                end else begin
                                  exe_reg_rs2_data <= exe_reg_inst;
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end else begin
          if (_T_365) begin
            if (_T_531) begin
              exe_reg_rs2_data <= mem_reg_alu_out;
            end else begin
              if (_T_532) begin
                exe_reg_rs2_data <= mem_reg_alu_out;
              end else begin
                if (_T_533) begin
                  exe_reg_rs2_data <= io_dmem_resp_bits_data;
                end else begin
                  if (_T_534) begin
                    exe_reg_rs2_data <= csr_io_rw_rdata;
                  end else begin
                    exe_reg_rs2_data <= mem_reg_alu_out;
                  end
                end
              end
            end
          end else begin
            if (_T_372) begin
              exe_reg_rs2_data <= wb_reg_wbdata;
            end else begin
              exe_reg_rs2_data <= regfile_io_rs2_data;
            end
          end
        end
      end
    end
    if (reset) begin
      exe_reg_ctrl_br_type <= 4'h0;
    end else begin
      if (_T_399) begin
        exe_reg_ctrl_br_type <= 4'h0;
      end else begin
        if (_T_240) begin
          if (io_ctl_dec_kill) begin
            exe_reg_ctrl_br_type <= 4'h0;
          end else begin
            exe_reg_ctrl_br_type <= io_ctl_br_type;
          end
        end
      end
    end
    if (!(_T_399)) begin
      if (_T_240) begin
        exe_reg_ctrl_alu_fun <= io_ctl_alu_fun;
      end
    end
    if (!(_T_399)) begin
      if (_T_240) begin
        exe_reg_ctrl_wb_sel <= io_ctl_wb_sel;
      end
    end
    if (reset) begin
      exe_reg_ctrl_rf_wen <= 1'h0;
    end else begin
      if (_T_399) begin
        exe_reg_ctrl_rf_wen <= 1'h0;
      end else begin
        if (_T_240) begin
          if (io_ctl_dec_kill) begin
            exe_reg_ctrl_rf_wen <= 1'h0;
          end else begin
            exe_reg_ctrl_rf_wen <= io_ctl_rf_wen;
          end
        end
      end
    end
    if (reset) begin
      exe_reg_ctrl_mem_val <= 1'h0;
    end else begin
      if (_T_399) begin
        exe_reg_ctrl_mem_val <= 1'h0;
      end else begin
        if (_T_240) begin
          if (io_ctl_dec_kill) begin
            exe_reg_ctrl_mem_val <= 1'h0;
          end else begin
            exe_reg_ctrl_mem_val <= io_ctl_mem_val;
          end
        end
      end
    end
    if (reset) begin
      exe_reg_ctrl_mem_fcn <= 1'h0;
    end else begin
      exe_reg_ctrl_mem_fcn <= _GEN_36[0];
    end
    if (reset) begin
      exe_reg_ctrl_mem_typ <= 3'h0;
    end else begin
      if (!(_T_399)) begin
        if (_T_240) begin
          if (!(io_ctl_dec_kill)) begin
            exe_reg_ctrl_mem_typ <= io_ctl_mem_typ;
          end
        end
      end
    end
    if (reset) begin
      exe_reg_ctrl_csr_cmd <= 3'h0;
    end else begin
      if (_T_399) begin
        exe_reg_ctrl_csr_cmd <= 3'h0;
      end else begin
        if (_T_240) begin
          if (io_ctl_dec_kill) begin
            exe_reg_ctrl_csr_cmd <= 3'h0;
          end else begin
            exe_reg_ctrl_csr_cmd <= io_ctl_csr_cmd;
          end
        end
      end
    end
    if (io_ctl_pipeline_kill) begin
      mem_reg_pc <= 32'h4033;
    end else begin
      if (_T_239) begin
        mem_reg_pc <= exe_reg_pc;
      end
    end
    if (!(io_ctl_pipeline_kill)) begin
      if (_T_239) begin
        mem_reg_inst <= exe_reg_inst;
      end
    end
    if (!(io_ctl_pipeline_kill)) begin
      if (_T_239) begin
        if (_T_463) begin
          mem_reg_alu_out <= exe_pc_plus4;
        end else begin
          if (_T_413) begin
            mem_reg_alu_out <= exe_adder_out;
          end else begin
            if (_T_414) begin
              mem_reg_alu_out <= _T_417;
            end else begin
              if (_T_418) begin
                mem_reg_alu_out <= _T_419;
              end else begin
                if (_T_420) begin
                  mem_reg_alu_out <= _T_421;
                end else begin
                  if (_T_422) begin
                    mem_reg_alu_out <= _T_423;
                  end else begin
                    if (_T_424) begin
                      mem_reg_alu_out <= {{31'd0}, _T_427};
                    end else begin
                      if (_T_428) begin
                        mem_reg_alu_out <= {{31'd0}, _T_429};
                      end else begin
                        if (_T_430) begin
                          mem_reg_alu_out <= _T_432;
                        end else begin
                          if (_T_433) begin
                            mem_reg_alu_out <= _T_436;
                          end else begin
                            if (_T_437) begin
                              mem_reg_alu_out <= _T_438;
                            end else begin
                              if (_T_439) begin
                                mem_reg_alu_out <= exe_alu_op1;
                              end else begin
                                if (_T_440) begin
                                  mem_reg_alu_out <= brjmp_offset;
                                end else begin
                                  mem_reg_alu_out <= exe_reg_inst;
                                end
                              end
                            end
                          end
                        end
                      end
                    end
                  end
                end
              end
            end
          end
        end
      end
    end
    if (!(io_ctl_pipeline_kill)) begin
      if (_T_239) begin
        mem_reg_wbaddr <= exe_reg_wbaddr;
      end
    end
    if (!(io_ctl_pipeline_kill)) begin
      if (_T_239) begin
        mem_reg_rs2_data <= exe_reg_rs2_data;
      end
    end
    if (reset) begin
      mem_reg_ctrl_rf_wen <= 1'h0;
    end else begin
      if (io_ctl_pipeline_kill) begin
        mem_reg_ctrl_rf_wen <= 1'h0;
      end else begin
        if (_T_239) begin
          mem_reg_ctrl_rf_wen <= exe_reg_ctrl_rf_wen;
        end
      end
    end
    if (reset) begin
      mem_reg_ctrl_mem_val <= 1'h0;
    end else begin
      if (io_ctl_pipeline_kill) begin
        mem_reg_ctrl_mem_val <= 1'h0;
      end else begin
        if (_T_239) begin
          mem_reg_ctrl_mem_val <= exe_reg_ctrl_mem_val;
        end
      end
    end
    if (reset) begin
      mem_reg_ctrl_mem_fcn <= 1'h0;
    end else begin
      if (!(io_ctl_pipeline_kill)) begin
        if (_T_239) begin
          mem_reg_ctrl_mem_fcn <= exe_reg_ctrl_mem_fcn;
        end
      end
    end
    if (reset) begin
      mem_reg_ctrl_mem_typ <= 3'h0;
    end else begin
      if (!(io_ctl_pipeline_kill)) begin
        if (_T_239) begin
          mem_reg_ctrl_mem_typ <= exe_reg_ctrl_mem_typ;
        end
      end
    end
    if (!(io_ctl_pipeline_kill)) begin
      if (_T_239) begin
        mem_reg_ctrl_wb_sel <= exe_reg_ctrl_wb_sel;
      end
    end
    if (reset) begin
      mem_reg_ctrl_csr_cmd <= 3'h0;
    end else begin
      if (io_ctl_pipeline_kill) begin
        mem_reg_ctrl_csr_cmd <= 3'h0;
      end else begin
        if (_T_239) begin
          mem_reg_ctrl_csr_cmd <= exe_reg_ctrl_csr_cmd;
        end
      end
    end
    if (_T_239) begin
      wb_reg_wbaddr <= mem_reg_wbaddr;
    end
    if (_T_239) begin
      if (_T_531) begin
        wb_reg_wbdata <= mem_reg_alu_out;
      end else begin
        if (_T_532) begin
          wb_reg_wbdata <= mem_reg_alu_out;
        end else begin
          if (_T_533) begin
            wb_reg_wbdata <= io_dmem_resp_bits_data;
          end else begin
            if (_T_534) begin
              wb_reg_wbdata <= csr_io_rw_rdata;
            end else begin
              wb_reg_wbdata <= mem_reg_alu_out;
            end
          end
        end
      end
    end
    if (reset) begin
      wb_reg_ctrl_rf_wen <= 1'h0;
    end else begin
      if (_T_239) begin
        if (io_ctl_mem_exception) begin
          wb_reg_ctrl_rf_wen <= 1'h0;
        end else begin
          wb_reg_ctrl_rf_wen <= mem_reg_ctrl_rf_wen;
        end
      end else begin
        wb_reg_ctrl_rf_wen <= 1'h0;
      end
    end
    _T_551 <= exe_reg_pc;
    _T_553 <= exe_reg_pc;
    _T_555 <= _T_553;
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_590) begin
          $fwrite(32'h80000002,"Cyc= %d (0x%x, 0x%x, 0x%x, 0x%x, 0x%x) WB[%c%c %x: 0x%x] %c %c %c ExeInst: DASM(%x)\n",_T_549,if_reg_pc,dec_reg_pc,exe_reg_pc,_T_551,_T_555,_T_558,_T_561,wb_reg_wbaddr,wb_reg_wbdata,_T_566,_T_583,_T_586,_T_587); // @[Dpath.scala 404:10:@3379.6]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
module Core( // @[:@3382.2]
  input         clock, // @[:@3383.4]
  input         reset, // @[:@3384.4]
  input  [4:0]  io_ddpath_addr, // @[:@3385.4]
  input  [31:0] io_ddpath_wdata, // @[:@3385.4]
  output [31:0] io_ddpath_rdata, // @[:@3385.4]
  output [31:0] io_imem_req_bits_addr, // @[:@3385.4]
  input  [31:0] io_imem_resp_bits_data, // @[:@3385.4]
  output        io_dmem_req_valid, // @[:@3385.4]
  output [31:0] io_dmem_req_bits_addr, // @[:@3385.4]
  output [31:0] io_dmem_req_bits_data, // @[:@3385.4]
  output        io_dmem_req_bits_fcn, // @[:@3385.4]
  output [2:0]  io_dmem_req_bits_typ, // @[:@3385.4]
  input         io_dmem_resp_valid, // @[:@3385.4]
  input  [31:0] io_dmem_resp_bits_data // @[:@3385.4]
);
  wire  c_clock; // @[Core.scala 21:19:@3387.4]
  wire  c_reset; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dmem_resp_valid; // @[Core.scala 21:19:@3387.4]
  wire [31:0] c_io_dat_dec_inst; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dat_exe_br_eq; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dat_exe_br_lt; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dat_exe_br_ltu; // @[Core.scala 21:19:@3387.4]
  wire [3:0] c_io_dat_exe_br_type; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dat_mem_ctrl_dmem_val; // @[Core.scala 21:19:@3387.4]
  wire  c_io_dat_csr_eret; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_dec_stall; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_full_stall; // @[Core.scala 21:19:@3387.4]
  wire [1:0] c_io_ctl_exe_pc_sel; // @[Core.scala 21:19:@3387.4]
  wire [3:0] c_io_ctl_br_type; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_if_kill; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_dec_kill; // @[Core.scala 21:19:@3387.4]
  wire [1:0] c_io_ctl_op1_sel; // @[Core.scala 21:19:@3387.4]
  wire [2:0] c_io_ctl_op2_sel; // @[Core.scala 21:19:@3387.4]
  wire [3:0] c_io_ctl_alu_fun; // @[Core.scala 21:19:@3387.4]
  wire [1:0] c_io_ctl_wb_sel; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_rf_wen; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_mem_val; // @[Core.scala 21:19:@3387.4]
  wire [1:0] c_io_ctl_mem_fcn; // @[Core.scala 21:19:@3387.4]
  wire [2:0] c_io_ctl_mem_typ; // @[Core.scala 21:19:@3387.4]
  wire [2:0] c_io_ctl_csr_cmd; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_fencei; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_pipeline_kill; // @[Core.scala 21:19:@3387.4]
  wire  c_io_ctl_mem_exception; // @[Core.scala 21:19:@3387.4]
  wire  d_clock; // @[Core.scala 22:19:@3390.4]
  wire  d_reset; // @[Core.scala 22:19:@3390.4]
  wire [4:0] d_io_ddpath_addr; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_ddpath_wdata; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_ddpath_rdata; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_imem_req_bits_addr; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_imem_resp_bits_data; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dmem_req_valid; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_dmem_req_bits_addr; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_dmem_req_bits_data; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dmem_req_bits_fcn; // @[Core.scala 22:19:@3390.4]
  wire [2:0] d_io_dmem_req_bits_typ; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_dmem_resp_bits_data; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_dec_stall; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_full_stall; // @[Core.scala 22:19:@3390.4]
  wire [1:0] d_io_ctl_exe_pc_sel; // @[Core.scala 22:19:@3390.4]
  wire [3:0] d_io_ctl_br_type; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_if_kill; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_dec_kill; // @[Core.scala 22:19:@3390.4]
  wire [1:0] d_io_ctl_op1_sel; // @[Core.scala 22:19:@3390.4]
  wire [2:0] d_io_ctl_op2_sel; // @[Core.scala 22:19:@3390.4]
  wire [3:0] d_io_ctl_alu_fun; // @[Core.scala 22:19:@3390.4]
  wire [1:0] d_io_ctl_wb_sel; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_rf_wen; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_mem_val; // @[Core.scala 22:19:@3390.4]
  wire [1:0] d_io_ctl_mem_fcn; // @[Core.scala 22:19:@3390.4]
  wire [2:0] d_io_ctl_mem_typ; // @[Core.scala 22:19:@3390.4]
  wire [2:0] d_io_ctl_csr_cmd; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_fencei; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_pipeline_kill; // @[Core.scala 22:19:@3390.4]
  wire  d_io_ctl_mem_exception; // @[Core.scala 22:19:@3390.4]
  wire [31:0] d_io_dat_dec_inst; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dat_exe_br_eq; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dat_exe_br_lt; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dat_exe_br_ltu; // @[Core.scala 22:19:@3390.4]
  wire [3:0] d_io_dat_exe_br_type; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dat_mem_ctrl_dmem_val; // @[Core.scala 22:19:@3390.4]
  wire  d_io_dat_csr_eret; // @[Core.scala 22:19:@3390.4]
  CtlPath c ( // @[Core.scala 21:19:@3387.4]
    .clock(c_clock),
    .reset(c_reset),
    .io_dmem_resp_valid(c_io_dmem_resp_valid),
    .io_dat_dec_inst(c_io_dat_dec_inst),
    .io_dat_exe_br_eq(c_io_dat_exe_br_eq),
    .io_dat_exe_br_lt(c_io_dat_exe_br_lt),
    .io_dat_exe_br_ltu(c_io_dat_exe_br_ltu),
    .io_dat_exe_br_type(c_io_dat_exe_br_type),
    .io_dat_mem_ctrl_dmem_val(c_io_dat_mem_ctrl_dmem_val),
    .io_dat_csr_eret(c_io_dat_csr_eret),
    .io_ctl_dec_stall(c_io_ctl_dec_stall),
    .io_ctl_full_stall(c_io_ctl_full_stall),
    .io_ctl_exe_pc_sel(c_io_ctl_exe_pc_sel),
    .io_ctl_br_type(c_io_ctl_br_type),
    .io_ctl_if_kill(c_io_ctl_if_kill),
    .io_ctl_dec_kill(c_io_ctl_dec_kill),
    .io_ctl_op1_sel(c_io_ctl_op1_sel),
    .io_ctl_op2_sel(c_io_ctl_op2_sel),
    .io_ctl_alu_fun(c_io_ctl_alu_fun),
    .io_ctl_wb_sel(c_io_ctl_wb_sel),
    .io_ctl_rf_wen(c_io_ctl_rf_wen),
    .io_ctl_mem_val(c_io_ctl_mem_val),
    .io_ctl_mem_fcn(c_io_ctl_mem_fcn),
    .io_ctl_mem_typ(c_io_ctl_mem_typ),
    .io_ctl_csr_cmd(c_io_ctl_csr_cmd),
    .io_ctl_fencei(c_io_ctl_fencei),
    .io_ctl_pipeline_kill(c_io_ctl_pipeline_kill),
    .io_ctl_mem_exception(c_io_ctl_mem_exception)
  );
  DatPath d ( // @[Core.scala 22:19:@3390.4]
    .clock(d_clock),
    .reset(d_reset),
    .io_ddpath_addr(d_io_ddpath_addr),
    .io_ddpath_wdata(d_io_ddpath_wdata),
    .io_ddpath_rdata(d_io_ddpath_rdata),
    .io_imem_req_bits_addr(d_io_imem_req_bits_addr),
    .io_imem_resp_bits_data(d_io_imem_resp_bits_data),
    .io_dmem_req_valid(d_io_dmem_req_valid),
    .io_dmem_req_bits_addr(d_io_dmem_req_bits_addr),
    .io_dmem_req_bits_data(d_io_dmem_req_bits_data),
    .io_dmem_req_bits_fcn(d_io_dmem_req_bits_fcn),
    .io_dmem_req_bits_typ(d_io_dmem_req_bits_typ),
    .io_dmem_resp_bits_data(d_io_dmem_resp_bits_data),
    .io_ctl_dec_stall(d_io_ctl_dec_stall),
    .io_ctl_full_stall(d_io_ctl_full_stall),
    .io_ctl_exe_pc_sel(d_io_ctl_exe_pc_sel),
    .io_ctl_br_type(d_io_ctl_br_type),
    .io_ctl_if_kill(d_io_ctl_if_kill),
    .io_ctl_dec_kill(d_io_ctl_dec_kill),
    .io_ctl_op1_sel(d_io_ctl_op1_sel),
    .io_ctl_op2_sel(d_io_ctl_op2_sel),
    .io_ctl_alu_fun(d_io_ctl_alu_fun),
    .io_ctl_wb_sel(d_io_ctl_wb_sel),
    .io_ctl_rf_wen(d_io_ctl_rf_wen),
    .io_ctl_mem_val(d_io_ctl_mem_val),
    .io_ctl_mem_fcn(d_io_ctl_mem_fcn),
    .io_ctl_mem_typ(d_io_ctl_mem_typ),
    .io_ctl_csr_cmd(d_io_ctl_csr_cmd),
    .io_ctl_fencei(d_io_ctl_fencei),
    .io_ctl_pipeline_kill(d_io_ctl_pipeline_kill),
    .io_ctl_mem_exception(d_io_ctl_mem_exception),
    .io_dat_dec_inst(d_io_dat_dec_inst),
    .io_dat_exe_br_eq(d_io_dat_exe_br_eq),
    .io_dat_exe_br_lt(d_io_dat_exe_br_lt),
    .io_dat_exe_br_ltu(d_io_dat_exe_br_ltu),
    .io_dat_exe_br_type(d_io_dat_exe_br_type),
    .io_dat_mem_ctrl_dmem_val(d_io_dat_mem_ctrl_dmem_val),
    .io_dat_csr_eret(d_io_dat_csr_eret)
  );
  assign io_ddpath_rdata = d_io_ddpath_rdata; // @[Core.scala 34:16:@3452.4]
  assign io_imem_req_bits_addr = d_io_imem_req_bits_addr; // @[Core.scala 27:12:@3423.4 Core.scala 28:12:@3431.4]
  assign io_dmem_req_valid = d_io_dmem_req_valid; // @[Core.scala 31:12:@3441.4 Core.scala 32:12:@3449.4]
  assign io_dmem_req_bits_addr = d_io_dmem_req_bits_addr; // @[Core.scala 31:12:@3440.4 Core.scala 32:12:@3448.4]
  assign io_dmem_req_bits_data = d_io_dmem_req_bits_data; // @[Core.scala 31:12:@3439.4 Core.scala 32:12:@3447.4]
  assign io_dmem_req_bits_fcn = d_io_dmem_req_bits_fcn; // @[Core.scala 31:12:@3438.4 Core.scala 32:12:@3446.4]
  assign io_dmem_req_bits_typ = d_io_dmem_req_bits_typ; // @[Core.scala 31:12:@3437.4 Core.scala 32:12:@3445.4]
  assign c_clock = clock; // @[:@3388.4]
  assign c_reset = reset; // @[:@3389.4]
  assign c_io_dmem_resp_valid = io_dmem_resp_valid; // @[Core.scala 31:12:@3436.4]
  assign c_io_dat_dec_inst = d_io_dat_dec_inst; // @[Core.scala 25:14:@3417.4]
  assign c_io_dat_exe_br_eq = d_io_dat_exe_br_eq; // @[Core.scala 25:14:@3416.4]
  assign c_io_dat_exe_br_lt = d_io_dat_exe_br_lt; // @[Core.scala 25:14:@3415.4]
  assign c_io_dat_exe_br_ltu = d_io_dat_exe_br_ltu; // @[Core.scala 25:14:@3414.4]
  assign c_io_dat_exe_br_type = d_io_dat_exe_br_type; // @[Core.scala 25:14:@3413.4]
  assign c_io_dat_mem_ctrl_dmem_val = d_io_dat_mem_ctrl_dmem_val; // @[Core.scala 25:14:@3412.4]
  assign c_io_dat_csr_eret = d_io_dat_csr_eret; // @[Core.scala 25:14:@3411.4]
  assign d_clock = clock; // @[:@3391.4]
  assign d_reset = reset; // @[:@3392.4]
  assign d_io_ddpath_addr = io_ddpath_addr; // @[Core.scala 34:16:@3455.4]
  assign d_io_ddpath_wdata = io_ddpath_wdata; // @[Core.scala 34:16:@3454.4]
  assign d_io_imem_resp_bits_data = io_imem_resp_bits_data; // @[Core.scala 28:12:@3426.4]
  assign d_io_dmem_resp_bits_data = io_dmem_resp_bits_data; // @[Core.scala 32:12:@3443.4]
  assign d_io_ctl_dec_stall = c_io_ctl_dec_stall; // @[Core.scala 24:14:@3410.4]
  assign d_io_ctl_full_stall = c_io_ctl_full_stall; // @[Core.scala 24:14:@3409.4]
  assign d_io_ctl_exe_pc_sel = c_io_ctl_exe_pc_sel; // @[Core.scala 24:14:@3408.4]
  assign d_io_ctl_br_type = c_io_ctl_br_type; // @[Core.scala 24:14:@3407.4]
  assign d_io_ctl_if_kill = c_io_ctl_if_kill; // @[Core.scala 24:14:@3406.4]
  assign d_io_ctl_dec_kill = c_io_ctl_dec_kill; // @[Core.scala 24:14:@3405.4]
  assign d_io_ctl_op1_sel = c_io_ctl_op1_sel; // @[Core.scala 24:14:@3404.4]
  assign d_io_ctl_op2_sel = c_io_ctl_op2_sel; // @[Core.scala 24:14:@3403.4]
  assign d_io_ctl_alu_fun = c_io_ctl_alu_fun; // @[Core.scala 24:14:@3402.4]
  assign d_io_ctl_wb_sel = c_io_ctl_wb_sel; // @[Core.scala 24:14:@3401.4]
  assign d_io_ctl_rf_wen = c_io_ctl_rf_wen; // @[Core.scala 24:14:@3400.4]
  assign d_io_ctl_mem_val = c_io_ctl_mem_val; // @[Core.scala 24:14:@3399.4]
  assign d_io_ctl_mem_fcn = c_io_ctl_mem_fcn; // @[Core.scala 24:14:@3398.4]
  assign d_io_ctl_mem_typ = c_io_ctl_mem_typ; // @[Core.scala 24:14:@3397.4]
  assign d_io_ctl_csr_cmd = c_io_ctl_csr_cmd; // @[Core.scala 24:14:@3396.4]
  assign d_io_ctl_fencei = c_io_ctl_fencei; // @[Core.scala 24:14:@3395.4]
  assign d_io_ctl_pipeline_kill = c_io_ctl_pipeline_kill; // @[Core.scala 24:14:@3394.4]
  assign d_io_ctl_mem_exception = c_io_ctl_mem_exception; // @[Core.scala 24:14:@3393.4]
endmodule
module AsyncScratchPadMemory( // @[:@3468.2]
  input         clock, // @[:@3469.4]
  input         io_core_ports_0_req_valid, // @[:@3471.4]
  input  [31:0] io_core_ports_0_req_bits_addr, // @[:@3471.4]
  input  [31:0] io_core_ports_0_req_bits_data, // @[:@3471.4]
  input         io_core_ports_0_req_bits_fcn, // @[:@3471.4]
  input  [2:0]  io_core_ports_0_req_bits_typ, // @[:@3471.4]
  output        io_core_ports_0_resp_valid, // @[:@3471.4]
  output [31:0] io_core_ports_0_resp_bits_data, // @[:@3471.4]
  input  [31:0] io_core_ports_1_req_bits_addr, // @[:@3471.4]
  output [31:0] io_core_ports_1_resp_bits_data, // @[:@3471.4]
  input         io_debug_port_req_valid, // @[:@3471.4]
  input  [31:0] io_debug_port_req_bits_addr, // @[:@3471.4]
  input  [31:0] io_debug_port_req_bits_data, // @[:@3471.4]
  input         io_debug_port_req_bits_fcn, // @[:@3471.4]
  output        io_debug_port_resp_valid, // @[:@3471.4]
  output [31:0] io_debug_port_resp_bits_data // @[:@3471.4]
);
  wire  async_data_clk; // @[Memory.scala 110:27:@3473.4]
  wire [20:0] async_data_hr_addr; // @[Memory.scala 110:27:@3473.4]
  wire [31:0] async_data_hr_data; // @[Memory.scala 110:27:@3473.4]
  wire [20:0] async_data_dw_addr; // @[Memory.scala 110:27:@3473.4]
  wire [31:0] async_data_dw_data; // @[Memory.scala 110:27:@3473.4]
  wire [3:0] async_data_dw_mask; // @[Memory.scala 110:27:@3473.4]
  wire  async_data_dw_en; // @[Memory.scala 110:27:@3473.4]
  wire [20:0] async_data_hw_addr; // @[Memory.scala 110:27:@3473.4]
  wire [31:0] async_data_hw_data; // @[Memory.scala 110:27:@3473.4]
  wire [3:0] async_data_hw_mask; // @[Memory.scala 110:27:@3473.4]
  wire  async_data_hw_en; // @[Memory.scala 110:27:@3473.4]
  wire [20:0] async_data_dataInstr_0_addr; // @[Memory.scala 110:27:@3473.4]
  wire [31:0] async_data_dataInstr_0_data; // @[Memory.scala 110:27:@3473.4]
  wire [20:0] async_data_dataInstr_1_addr; // @[Memory.scala 110:27:@3473.4]
  wire [31:0] async_data_dataInstr_1_data; // @[Memory.scala 110:27:@3473.4]
  wire  _T_267; // @[Memory.scala 125:17:@3486.4]
  wire  _T_268; // @[Memory.scala 125:52:@3487.4]
  wire [23:0] _T_272; // @[Bitwise.scala 72:12:@3489.4]
  wire [7:0] _T_273; // @[Memory.scala 125:67:@3490.4]
  wire [31:0] _T_274; // @[Cat.scala 30:58:@3491.4]
  wire  _T_275; // @[Memory.scala 126:17:@3492.4]
  wire  _T_276; // @[Memory.scala 126:52:@3493.4]
  wire [15:0] _T_280; // @[Bitwise.scala 72:12:@3495.4]
  wire [15:0] _T_281; // @[Memory.scala 126:68:@3496.4]
  wire [31:0] _T_282; // @[Cat.scala 30:58:@3497.4]
  wire  _T_283; // @[Memory.scala 127:17:@3498.4]
  wire [31:0] _T_290; // @[Cat.scala 30:58:@3501.4]
  wire  _T_291; // @[Memory.scala 128:17:@3502.4]
  wire [31:0] _T_298; // @[Cat.scala 30:58:@3505.4]
  wire [31:0] _T_299; // @[Mux.scala 61:16:@3506.4]
  wire [31:0] _T_300; // @[Mux.scala 61:16:@3507.4]
  wire [31:0] _T_301; // @[Mux.scala 61:16:@3508.4]
  wire [1:0] _T_309; // @[Memory.scala 133:80:@3517.6]
  wire [4:0] _GEN_6; // @[Memory.scala 133:86:@3518.6]
  wire [4:0] _T_310; // @[Memory.scala 133:86:@3518.6]
  wire [62:0] _GEN_7; // @[Memory.scala 133:67:@3519.6]
  wire [62:0] _T_311; // @[Memory.scala 133:67:@3519.6]
  wire [29:0] _T_312; // @[Memory.scala 134:45:@3521.6]
  wire [31:0] _T_314; // @[Cat.scala 30:58:@3522.6]
  wire [3:0] _T_318; // @[Memory.scala 135:58:@3526.6]
  wire [4:0] _T_322; // @[Memory.scala 136:57:@3529.6]
  wire [4:0] _T_324; // @[Memory.scala 136:34:@3530.6]
  wire [4:0] _T_325; // @[Memory.scala 135:35:@3531.6]
  AsyncReadMem async_data ( // @[Memory.scala 110:27:@3473.4]
    .clk(async_data_clk),
    .hr_addr(async_data_hr_addr),
    .hr_data(async_data_hr_data),
    .dw_addr(async_data_dw_addr),
    .dw_data(async_data_dw_data),
    .dw_mask(async_data_dw_mask),
    .dw_en(async_data_dw_en),
    .hw_addr(async_data_hw_addr),
    .hw_data(async_data_hw_data),
    .hw_mask(async_data_hw_mask),
    .hw_en(async_data_hw_en),
    .dataInstr_0_addr(async_data_dataInstr_0_addr),
    .dataInstr_0_data(async_data_dataInstr_0_data),
    .dataInstr_1_addr(async_data_dataInstr_1_addr),
    .dataInstr_1_data(async_data_dataInstr_1_data)
  );
  assign _T_267 = io_core_ports_0_req_bits_typ == 3'h1; // @[Memory.scala 125:17:@3486.4]
  assign _T_268 = async_data_dataInstr_0_data[7]; // @[Memory.scala 125:52:@3487.4]
  assign _T_272 = _T_268 ? 24'hffffff : 24'h0; // @[Bitwise.scala 72:12:@3489.4]
  assign _T_273 = async_data_dataInstr_0_data[7:0]; // @[Memory.scala 125:67:@3490.4]
  assign _T_274 = {_T_272,_T_273}; // @[Cat.scala 30:58:@3491.4]
  assign _T_275 = io_core_ports_0_req_bits_typ == 3'h2; // @[Memory.scala 126:17:@3492.4]
  assign _T_276 = async_data_dataInstr_0_data[15]; // @[Memory.scala 126:52:@3493.4]
  assign _T_280 = _T_276 ? 16'hffff : 16'h0; // @[Bitwise.scala 72:12:@3495.4]
  assign _T_281 = async_data_dataInstr_0_data[15:0]; // @[Memory.scala 126:68:@3496.4]
  assign _T_282 = {_T_280,_T_281}; // @[Cat.scala 30:58:@3497.4]
  assign _T_283 = io_core_ports_0_req_bits_typ == 3'h5; // @[Memory.scala 127:17:@3498.4]
  assign _T_290 = {24'h0,_T_273}; // @[Cat.scala 30:58:@3501.4]
  assign _T_291 = io_core_ports_0_req_bits_typ == 3'h6; // @[Memory.scala 128:17:@3502.4]
  assign _T_298 = {16'h0,_T_281}; // @[Cat.scala 30:58:@3505.4]
  assign _T_299 = _T_291 ? _T_298 : async_data_dataInstr_0_data; // @[Mux.scala 61:16:@3506.4]
  assign _T_300 = _T_283 ? _T_290 : _T_299; // @[Mux.scala 61:16:@3507.4]
  assign _T_301 = _T_275 ? _T_282 : _T_300; // @[Mux.scala 61:16:@3508.4]
  assign _T_309 = io_core_ports_0_req_bits_addr[1:0]; // @[Memory.scala 133:80:@3517.6]
  assign _GEN_6 = {{3'd0}, _T_309}; // @[Memory.scala 133:86:@3518.6]
  assign _T_310 = _GEN_6 << 3; // @[Memory.scala 133:86:@3518.6]
  assign _GEN_7 = {{31'd0}, io_core_ports_0_req_bits_data}; // @[Memory.scala 133:67:@3519.6]
  assign _T_311 = _GEN_7 << _T_310; // @[Memory.scala 133:67:@3519.6]
  assign _T_312 = io_core_ports_0_req_bits_addr[31:2]; // @[Memory.scala 134:45:@3521.6]
  assign _T_314 = {_T_312,2'h0}; // @[Cat.scala 30:58:@3522.6]
  assign _T_318 = 4'h1 << _T_309; // @[Memory.scala 135:58:@3526.6]
  assign _T_322 = 5'h3 << _T_309; // @[Memory.scala 136:57:@3529.6]
  assign _T_324 = _T_275 ? _T_322 : 5'hf; // @[Memory.scala 136:34:@3530.6]
  assign _T_325 = _T_267 ? {{1'd0}, _T_318} : _T_324; // @[Memory.scala 135:35:@3531.6]
  assign io_core_ports_0_resp_valid = io_core_ports_0_req_valid; // @[Memory.scala 114:35:@3480.4]
  assign io_core_ports_0_resp_bits_data = _T_267 ? _T_274 : _T_301; // @[Memory.scala 124:40:@3510.4]
  assign io_core_ports_1_resp_bits_data = async_data_dataInstr_1_data; // @[Memory.scala 142:43:@3534.4]
  assign io_debug_port_resp_valid = io_debug_port_req_valid; // @[Memory.scala 148:29:@3536.4]
  assign io_debug_port_resp_bits_data = async_data_hr_data; // @[Memory.scala 151:33:@3538.4]
  assign async_data_clk = clock; // @[Memory.scala 111:22:@3479.4]
  assign async_data_hr_addr = io_debug_port_req_bits_addr[20:0]; // @[Memory.scala 150:26:@3537.4]
  assign async_data_dw_addr = _T_314[20:0]; // @[Memory.scala 134:29:@3523.6]
  assign async_data_dw_data = _T_311[31:0]; // @[Memory.scala 133:29:@3520.6]
  assign async_data_dw_mask = _T_325[3:0]; // @[Memory.scala 135:29:@3532.6]
  assign async_data_dw_en = io_core_ports_0_req_bits_fcn; // @[Memory.scala 130:24:@3513.4]
  assign async_data_hw_addr = io_debug_port_req_bits_addr[20:0]; // @[Memory.scala 155:29:@3545.6]
  assign async_data_hw_data = io_debug_port_req_bits_data; // @[Memory.scala 156:29:@3546.6]
  assign async_data_hw_mask = 4'hf; // @[Memory.scala 157:29:@3547.6]
  assign async_data_hw_en = io_debug_port_req_bits_fcn; // @[Memory.scala 152:24:@3541.4]
  assign async_data_dataInstr_0_addr = io_core_ports_0_req_bits_addr[20:0]; // @[Memory.scala 116:39:@3482.4]
  assign async_data_dataInstr_1_addr = io_core_ports_1_req_bits_addr[20:0]; // @[Memory.scala 116:39:@3485.4]
endmodule
module DebugModule( // @[:@3550.2]
  input         clock, // @[:@3551.4]
  input         reset, // @[:@3552.4]
  output        io_dmi_req_ready, // @[:@3553.4]
  input         io_dmi_req_valid, // @[:@3553.4]
  input  [1:0]  io_dmi_req_bits_op, // @[:@3553.4]
  input  [6:0]  io_dmi_req_bits_addr, // @[:@3553.4]
  input  [31:0] io_dmi_req_bits_data, // @[:@3553.4]
  output        io_dmi_resp_valid, // @[:@3553.4]
  output [31:0] io_dmi_resp_bits_data, // @[:@3553.4]
  output [4:0]  io_ddpath_addr, // @[:@3553.4]
  output [31:0] io_ddpath_wdata, // @[:@3553.4]
  input  [31:0] io_ddpath_rdata, // @[:@3553.4]
  output        io_debugmem_req_valid, // @[:@3553.4]
  output [31:0] io_debugmem_req_bits_addr, // @[:@3553.4]
  output [31:0] io_debugmem_req_bits_data, // @[:@3553.4]
  output        io_debugmem_req_bits_fcn, // @[:@3553.4]
  input         io_debugmem_resp_valid, // @[:@3553.4]
  input  [31:0] io_debugmem_resp_bits_data, // @[:@3553.4]
  output        io_resetcore // @[:@3553.4]
);
  reg  dmstatus_allrunning; // @[Debug.scala 117:25:@3601.4]
  reg [31:0] _RAND_0;
  reg  dmstatus_allhalted; // @[Debug.scala 117:25:@3601.4]
  reg [31:0] _RAND_1;
  reg  sbcs_sbsingleread; // @[Debug.scala 125:21:@3620.4]
  reg [31:0] _RAND_2;
  reg [2:0] sbcs_sbaccess; // @[Debug.scala 125:21:@3620.4]
  reg [31:0] _RAND_3;
  reg  sbcs_sbautoincrement; // @[Debug.scala 125:21:@3620.4]
  reg [31:0] _RAND_4;
  reg  sbcs_sbautoread; // @[Debug.scala 125:21:@3620.4]
  reg [31:0] _RAND_5;
  reg [2:0] sbcs_sberror; // @[Debug.scala 125:21:@3620.4]
  reg [31:0] _RAND_6;
  reg [2:0] abstractcs_cmderr; // @[Debug.scala 130:27:@3632.4]
  reg [31:0] _RAND_7;
  reg  command_postexec; // @[Debug.scala 131:20:@3633.4]
  reg [31:0] _RAND_8;
  reg  command_transfer; // @[Debug.scala 131:20:@3633.4]
  reg [31:0] _RAND_9;
  reg  command_write; // @[Debug.scala 131:20:@3633.4]
  reg [31:0] _RAND_10;
  reg [15:0] command_regno; // @[Debug.scala 131:20:@3633.4]
  reg [31:0] _RAND_11;
  reg  dmcontrol_haltreq; // @[Debug.scala 132:22:@3634.4]
  reg [31:0] _RAND_12;
  reg  dmcontrol_resumereq; // @[Debug.scala 132:22:@3634.4]
  reg [31:0] _RAND_13;
  reg  dmcontrol_hartreset; // @[Debug.scala 132:22:@3634.4]
  reg [31:0] _RAND_14;
  reg  dmcontrol_ndmreset; // @[Debug.scala 132:22:@3634.4]
  reg [31:0] _RAND_15;
  reg  dmcontrol_dmactive; // @[Debug.scala 132:22:@3634.4]
  reg [31:0] _RAND_16;
  reg [31:0] data0; // @[Debug.scala 134:18:@3636.4]
  reg [31:0] _RAND_17;
  reg [31:0] data1; // @[Debug.scala 135:18:@3637.4]
  reg [31:0] _RAND_18;
  reg [31:0] data2; // @[Debug.scala 136:18:@3638.4]
  reg [31:0] _RAND_19;
  reg [31:0] sbaddr; // @[Debug.scala 137:19:@3639.4]
  reg [31:0] _RAND_20;
  reg [31:0] sbdata; // @[Debug.scala 138:19:@3640.4]
  reg [31:0] _RAND_21;
  reg  memreadfire; // @[Debug.scala 139:28:@3641.4]
  reg [31:0] _RAND_22;
  reg  coreresetval; // @[Debug.scala 140:29:@3642.4]
  reg [31:0] _RAND_23;
  wire [31:0] _T_183; // @[Debug.scala 143:47:@3649.4]
  wire [31:0] _T_191; // @[Debug.scala 144:45:@3657.4]
  wire [31:0] _T_207; // @[Debug.scala 145:44:@3673.4]
  wire [31:0] _T_214; // @[Debug.scala 146:41:@3680.4]
  wire [31:0] _T_230; // @[Debug.scala 159:35:@3691.4]
  wire  _T_232; // @[Debug.scala 162:79:@3692.4]
  wire  _T_234; // @[Debug.scala 162:79:@3693.4]
  wire  _T_236; // @[Debug.scala 162:79:@3694.4]
  wire  _T_238; // @[Debug.scala 162:79:@3695.4]
  wire  _T_240; // @[Debug.scala 162:79:@3696.4]
  wire  _T_246; // @[Debug.scala 162:79:@3699.4]
  wire  _T_248; // @[Debug.scala 162:79:@3700.4]
  wire  _T_250; // @[Debug.scala 162:79:@3701.4]
  wire  _T_264; // @[Debug.scala 162:79:@3708.4]
  wire  _T_266; // @[Debug.scala 162:79:@3709.4]
  wire  _T_268; // @[Debug.scala 162:79:@3710.4]
  wire [31:0] _T_271; // @[Mux.scala 19:72:@3711.4]
  wire [31:0] _T_273; // @[Mux.scala 19:72:@3712.4]
  wire [31:0] _T_275; // @[Mux.scala 19:72:@3713.4]
  wire [31:0] _T_277; // @[Mux.scala 19:72:@3714.4]
  wire [20:0] _T_279; // @[Mux.scala 19:72:@3715.4]
  wire [31:0] _T_285; // @[Mux.scala 19:72:@3718.4]
  wire [31:0] _T_287; // @[Mux.scala 19:72:@3719.4]
  wire [31:0] _T_289; // @[Mux.scala 19:72:@3720.4]
  wire [31:0] _T_303; // @[Mux.scala 19:72:@3727.4]
  wire [31:0] _T_305; // @[Mux.scala 19:72:@3728.4]
  wire [31:0] _T_307; // @[Mux.scala 19:72:@3729.4]
  wire [31:0] _T_308; // @[Mux.scala 19:72:@3730.4]
  wire [31:0] _T_309; // @[Mux.scala 19:72:@3731.4]
  wire [31:0] _T_310; // @[Mux.scala 19:72:@3732.4]
  wire [31:0] _GEN_77; // @[Mux.scala 19:72:@3733.4]
  wire [31:0] _T_311; // @[Mux.scala 19:72:@3733.4]
  wire [31:0] _T_314; // @[Mux.scala 19:72:@3736.4]
  wire [31:0] _T_315; // @[Mux.scala 19:72:@3737.4]
  wire [31:0] _T_316; // @[Mux.scala 19:72:@3738.4]
  wire [31:0] _T_323; // @[Mux.scala 19:72:@3745.4]
  wire [31:0] _T_324; // @[Mux.scala 19:72:@3746.4]
  wire  _T_332; // @[Debug.scala 168:28:@3756.4]
  wire  _T_333; // @[Debug.scala 169:54:@3758.6]
  wire [2:0] _T_341; // @[Debug.scala 170:42:@3767.8]
  wire [2:0] _GEN_0; // @[Debug.scala 169:75:@3759.6]
  wire [15:0] _T_352; // @[Debug.scala 174:39:@3785.8]
  wire  _T_353; // @[Debug.scala 174:39:@3787.8]
  wire  _T_354; // @[Debug.scala 174:39:@3789.8]
  wire  _T_355; // @[Debug.scala 174:39:@3791.8]
  wire [2:0] _T_357; // @[Debug.scala 174:39:@3795.8]
  wire  _T_361; // @[Debug.scala 175:29:@3801.8]
  wire  _GEN_1; // @[Debug.scala 175:37:@3802.8]
  wire [15:0] _GEN_2; // @[Debug.scala 175:37:@3802.8]
  wire  _GEN_3; // @[Debug.scala 175:37:@3802.8]
  wire  _GEN_4; // @[Debug.scala 175:37:@3802.8]
  wire [1:0] _GEN_5; // @[Debug.scala 175:37:@3802.8]
  wire  _GEN_6; // @[Debug.scala 173:50:@3781.6]
  wire [15:0] _GEN_7; // @[Debug.scala 173:50:@3781.6]
  wire  _GEN_8; // @[Debug.scala 173:50:@3781.6]
  wire  _GEN_9; // @[Debug.scala 173:50:@3781.6]
  wire [2:0] _GEN_10; // @[Debug.scala 173:50:@3781.6]
  wire  _T_369; // @[Debug.scala 186:39:@3817.8]
  wire  _T_370; // @[Debug.scala 186:39:@3819.8]
  wire  _T_375; // @[Debug.scala 186:39:@3829.8]
  wire  _T_376; // @[Debug.scala 186:39:@3831.8]
  wire  _T_377; // @[Debug.scala 186:39:@3833.8]
  wire  _GEN_11; // @[Debug.scala 185:52:@3813.6]
  wire  _GEN_12; // @[Debug.scala 185:52:@3813.6]
  wire  _GEN_13; // @[Debug.scala 185:52:@3813.6]
  wire  _GEN_14; // @[Debug.scala 185:52:@3813.6]
  wire  _GEN_15; // @[Debug.scala 185:52:@3813.6]
  wire [2:0] _T_389; // @[Debug.scala 194:36:@3857.8]
  wire  _T_390; // @[Debug.scala 194:36:@3859.8]
  wire [2:0] _T_392; // @[Debug.scala 194:36:@3863.8]
  wire  _T_393; // @[Debug.scala 194:36:@3865.8]
  wire  _GEN_16; // @[Debug.scala 193:46:@3841.6]
  wire [2:0] _GEN_17; // @[Debug.scala 193:46:@3841.6]
  wire  _GEN_18; // @[Debug.scala 193:46:@3841.6]
  wire  _GEN_19; // @[Debug.scala 193:46:@3841.6]
  wire [2:0] _GEN_20; // @[Debug.scala 193:46:@3841.6]
  wire [31:0] _GEN_21; // @[Debug.scala 201:53:@3875.6]
  wire  _T_395; // @[Debug.scala 208:33:@3884.8]
  wire [32:0] _T_397; // @[Debug.scala 210:26:@3886.10]
  wire [31:0] _T_398; // @[Debug.scala 210:26:@3887.10]
  wire [31:0] _GEN_22; // @[Debug.scala 209:7:@3885.8]
  wire [31:0] _GEN_23; // @[Debug.scala 202:50:@3878.6]
  wire [31:0] _GEN_28; // @[Debug.scala 202:50:@3878.6]
  wire [31:0] _GEN_29; // @[Debug.scala 213:48:@3891.6]
  wire [31:0] _GEN_30; // @[Debug.scala 214:50:@3894.6]
  wire [31:0] _GEN_31; // @[Debug.scala 215:50:@3897.6]
  wire [2:0] _GEN_32; // @[Debug.scala 168:54:@3757.4]
  wire  _GEN_42; // @[Debug.scala 168:54:@3757.4]
  wire [2:0] _GEN_43; // @[Debug.scala 168:54:@3757.4]
  wire  _GEN_44; // @[Debug.scala 168:54:@3757.4]
  wire  _GEN_45; // @[Debug.scala 168:54:@3757.4]
  wire [2:0] _GEN_46; // @[Debug.scala 168:54:@3757.4]
  wire [31:0] _GEN_47; // @[Debug.scala 168:54:@3757.4]
  wire [31:0] _GEN_48; // @[Debug.scala 168:54:@3757.4]
  wire [31:0] _GEN_53; // @[Debug.scala 168:54:@3757.4]
  wire [15:0] _T_400; // @[Debug.scala 219:35:@3901.4]
  wire  _T_402; // @[Debug.scala 220:46:@3903.4]
  wire  _T_403; // @[Debug.scala 220:25:@3904.4]
  wire [31:0] _GEN_58; // @[Debug.scala 221:24:@3906.6]
  wire [2:0] _GEN_62; // @[Debug.scala 220:54:@3905.4]
  wire  _T_408; // @[Debug.scala 230:49:@3916.4]
  wire  _T_410; // @[Debug.scala 230:8:@3917.4]
  wire  _GEN_63; // @[Debug.scala 230:98:@3918.4]
  reg  firstreaddone; // @[Debug.scala 235:26:@3921.4]
  reg [31:0] _RAND_24;
  reg  _T_414; // @[Debug.scala 237:50:@3922.4]
  reg [31:0] _RAND_25;
  wire  _T_417; // @[Debug.scala 239:72:@3926.4]
  wire  _T_418; // @[Debug.scala 239:49:@3927.4]
  wire  _T_419; // @[Debug.scala 239:119:@3928.4]
  wire  _T_420; // @[Debug.scala 239:99:@3929.4]
  wire [31:0] _GEN_64; // @[Debug.scala 245:33:@3934.6]
  wire [31:0] _GEN_68; // @[Debug.scala 239:137:@3930.4]
  wire  _GEN_69; // @[Debug.scala 239:137:@3930.4]
  wire  _GEN_70; // @[Debug.scala 239:137:@3930.4]
  wire  _T_423; // @[Debug.scala 252:20:@3940.4]
  wire [31:0] _GEN_71; // @[Debug.scala 259:5:@3944.6]
  wire  _GEN_73; // @[Debug.scala 253:3:@3941.4]
  wire  _T_429; // @[Debug.scala 264:8:@3950.4]
  wire  _T_432; // @[Debug.scala 270:30:@3955.4]
  wire  _T_433; // @[Debug.scala 270:43:@3956.4]
  wire  _GEN_76; // @[Debug.scala 270:63:@3957.4]
  assign _T_183 = {20'h4000,1'h0,abstractcs_cmderr,8'h1}; // @[Debug.scala 143:47:@3649.4]
  assign _T_191 = {dmcontrol_haltreq,dmcontrol_resumereq,dmcontrol_hartreset,3'h0,24'h0,dmcontrol_ndmreset,dmcontrol_dmactive}; // @[Debug.scala 144:45:@3657.4]
  assign _T_207 = {18'h0,2'h0,dmstatus_allrunning,1'h0,dmstatus_allhalted,1'h0,2'h2,6'h2}; // @[Debug.scala 145:44:@3673.4]
  assign _T_214 = {13'h0,command_postexec,command_transfer,command_write,command_regno}; // @[Debug.scala 146:41:@3680.4]
  assign _T_230 = {11'h0,sbcs_sbsingleread,sbcs_sbaccess,sbcs_sbautoincrement,sbcs_sbautoread,sbcs_sberror,12'h404}; // @[Debug.scala 159:35:@3691.4]
  assign _T_232 = io_dmi_req_bits_addr == 7'h16; // @[Debug.scala 162:79:@3692.4]
  assign _T_234 = io_dmi_req_bits_addr == 7'h10; // @[Debug.scala 162:79:@3693.4]
  assign _T_236 = io_dmi_req_bits_addr == 7'h11; // @[Debug.scala 162:79:@3694.4]
  assign _T_238 = io_dmi_req_bits_addr == 7'h17; // @[Debug.scala 162:79:@3695.4]
  assign _T_240 = io_dmi_req_bits_addr == 7'h12; // @[Debug.scala 162:79:@3696.4]
  assign _T_246 = io_dmi_req_bits_addr == 7'h4; // @[Debug.scala 162:79:@3699.4]
  assign _T_248 = io_dmi_req_bits_addr == 7'h5; // @[Debug.scala 162:79:@3700.4]
  assign _T_250 = io_dmi_req_bits_addr == 7'h6; // @[Debug.scala 162:79:@3701.4]
  assign _T_264 = io_dmi_req_bits_addr == 7'h38; // @[Debug.scala 162:79:@3708.4]
  assign _T_266 = io_dmi_req_bits_addr == 7'h39; // @[Debug.scala 162:79:@3709.4]
  assign _T_268 = io_dmi_req_bits_addr == 7'h3c; // @[Debug.scala 162:79:@3710.4]
  assign _T_271 = _T_232 ? _T_183 : 32'h0; // @[Mux.scala 19:72:@3711.4]
  assign _T_273 = _T_234 ? _T_191 : 32'h0; // @[Mux.scala 19:72:@3712.4]
  assign _T_275 = _T_236 ? _T_207 : 32'h0; // @[Mux.scala 19:72:@3713.4]
  assign _T_277 = _T_238 ? _T_214 : 32'h0; // @[Mux.scala 19:72:@3714.4]
  assign _T_279 = _T_240 ? 21'h111bc0 : 21'h0; // @[Mux.scala 19:72:@3715.4]
  assign _T_285 = _T_246 ? data0 : 32'h0; // @[Mux.scala 19:72:@3718.4]
  assign _T_287 = _T_248 ? data1 : 32'h0; // @[Mux.scala 19:72:@3719.4]
  assign _T_289 = _T_250 ? data2 : 32'h0; // @[Mux.scala 19:72:@3720.4]
  assign _T_303 = _T_264 ? _T_230 : 32'h0; // @[Mux.scala 19:72:@3727.4]
  assign _T_305 = _T_266 ? sbaddr : 32'h0; // @[Mux.scala 19:72:@3728.4]
  assign _T_307 = _T_268 ? sbdata : 32'h0; // @[Mux.scala 19:72:@3729.4]
  assign _T_308 = _T_271 | _T_273; // @[Mux.scala 19:72:@3730.4]
  assign _T_309 = _T_308 | _T_275; // @[Mux.scala 19:72:@3731.4]
  assign _T_310 = _T_309 | _T_277; // @[Mux.scala 19:72:@3732.4]
  assign _GEN_77 = {{11'd0}, _T_279}; // @[Mux.scala 19:72:@3733.4]
  assign _T_311 = _T_310 | _GEN_77; // @[Mux.scala 19:72:@3733.4]
  assign _T_314 = _T_311 | _T_285; // @[Mux.scala 19:72:@3736.4]
  assign _T_315 = _T_314 | _T_287; // @[Mux.scala 19:72:@3737.4]
  assign _T_316 = _T_315 | _T_289; // @[Mux.scala 19:72:@3738.4]
  assign _T_323 = _T_316 | _T_303; // @[Mux.scala 19:72:@3745.4]
  assign _T_324 = _T_323 | _T_305; // @[Mux.scala 19:72:@3746.4]
  assign _T_332 = io_dmi_req_bits_op == 2'h2; // @[Debug.scala 168:28:@3756.4]
  assign _T_333 = _T_232 & io_dmi_req_valid; // @[Debug.scala 169:54:@3758.6]
  assign _T_341 = io_dmi_req_bits_data[10:8]; // @[Debug.scala 170:42:@3767.8]
  assign _GEN_0 = _T_333 ? _T_341 : abstractcs_cmderr; // @[Debug.scala 169:75:@3759.6]
  assign _T_352 = io_dmi_req_bits_data[15:0]; // @[Debug.scala 174:39:@3785.8]
  assign _T_353 = io_dmi_req_bits_data[16]; // @[Debug.scala 174:39:@3787.8]
  assign _T_354 = io_dmi_req_bits_data[17]; // @[Debug.scala 174:39:@3789.8]
  assign _T_355 = io_dmi_req_bits_data[18]; // @[Debug.scala 174:39:@3791.8]
  assign _T_357 = io_dmi_req_bits_data[22:20]; // @[Debug.scala 174:39:@3795.8]
  assign _T_361 = _T_357 == 3'h2; // @[Debug.scala 175:29:@3801.8]
  assign _GEN_1 = _T_361 ? _T_355 : command_postexec; // @[Debug.scala 175:37:@3802.8]
  assign _GEN_2 = _T_361 ? _T_352 : command_regno; // @[Debug.scala 175:37:@3802.8]
  assign _GEN_3 = _T_361 ? _T_354 : command_transfer; // @[Debug.scala 175:37:@3802.8]
  assign _GEN_4 = _T_361 ? _T_353 : command_write; // @[Debug.scala 175:37:@3802.8]
  assign _GEN_5 = _T_361 ? 2'h1 : 2'h2; // @[Debug.scala 175:37:@3802.8]
  assign _GEN_6 = _T_238 ? _GEN_1 : command_postexec; // @[Debug.scala 173:50:@3781.6]
  assign _GEN_7 = _T_238 ? _GEN_2 : command_regno; // @[Debug.scala 173:50:@3781.6]
  assign _GEN_8 = _T_238 ? _GEN_3 : command_transfer; // @[Debug.scala 173:50:@3781.6]
  assign _GEN_9 = _T_238 ? _GEN_4 : command_write; // @[Debug.scala 173:50:@3781.6]
  assign _GEN_10 = _T_238 ? {{1'd0}, _GEN_5} : _GEN_0; // @[Debug.scala 173:50:@3781.6]
  assign _T_369 = io_dmi_req_bits_data[0]; // @[Debug.scala 186:39:@3817.8]
  assign _T_370 = io_dmi_req_bits_data[1]; // @[Debug.scala 186:39:@3819.8]
  assign _T_375 = io_dmi_req_bits_data[29]; // @[Debug.scala 186:39:@3829.8]
  assign _T_376 = io_dmi_req_bits_data[30]; // @[Debug.scala 186:39:@3831.8]
  assign _T_377 = io_dmi_req_bits_data[31]; // @[Debug.scala 186:39:@3833.8]
  assign _GEN_11 = _T_234 ? _T_377 : dmcontrol_haltreq; // @[Debug.scala 185:52:@3813.6]
  assign _GEN_12 = _T_234 ? _T_376 : dmcontrol_resumereq; // @[Debug.scala 185:52:@3813.6]
  assign _GEN_13 = _T_234 ? _T_375 : dmcontrol_hartreset; // @[Debug.scala 185:52:@3813.6]
  assign _GEN_14 = _T_234 ? _T_370 : dmcontrol_ndmreset; // @[Debug.scala 185:52:@3813.6]
  assign _GEN_15 = _T_234 ? _T_369 : dmcontrol_dmactive; // @[Debug.scala 185:52:@3813.6]
  assign _T_389 = io_dmi_req_bits_data[14:12]; // @[Debug.scala 194:36:@3857.8]
  assign _T_390 = io_dmi_req_bits_data[15]; // @[Debug.scala 194:36:@3859.8]
  assign _T_392 = io_dmi_req_bits_data[19:17]; // @[Debug.scala 194:36:@3863.8]
  assign _T_393 = io_dmi_req_bits_data[20]; // @[Debug.scala 194:36:@3865.8]
  assign _GEN_16 = _T_264 ? _T_393 : sbcs_sbsingleread; // @[Debug.scala 193:46:@3841.6]
  assign _GEN_17 = _T_264 ? _T_392 : sbcs_sbaccess; // @[Debug.scala 193:46:@3841.6]
  assign _GEN_18 = _T_264 ? _T_353 : sbcs_sbautoincrement; // @[Debug.scala 193:46:@3841.6]
  assign _GEN_19 = _T_264 ? _T_390 : sbcs_sbautoread; // @[Debug.scala 193:46:@3841.6]
  assign _GEN_20 = _T_264 ? _T_389 : sbcs_sberror; // @[Debug.scala 193:46:@3841.6]
  assign _GEN_21 = _T_266 ? io_dmi_req_bits_data : sbaddr; // @[Debug.scala 201:53:@3875.6]
  assign _T_395 = sbcs_sbautoincrement & io_dmi_req_valid; // @[Debug.scala 208:33:@3884.8]
  assign _T_397 = sbaddr + 32'h4; // @[Debug.scala 210:26:@3886.10]
  assign _T_398 = sbaddr + 32'h4; // @[Debug.scala 210:26:@3887.10]
  assign _GEN_22 = _T_395 ? _T_398 : _GEN_21; // @[Debug.scala 209:7:@3885.8]
  assign _GEN_23 = _T_268 ? io_dmi_req_bits_data : sbdata; // @[Debug.scala 202:50:@3878.6]
  assign _GEN_28 = _T_268 ? _GEN_22 : _GEN_21; // @[Debug.scala 202:50:@3878.6]
  assign _GEN_29 = _T_246 ? io_dmi_req_bits_data : data0; // @[Debug.scala 213:48:@3891.6]
  assign _GEN_30 = _T_248 ? io_dmi_req_bits_data : data1; // @[Debug.scala 214:50:@3894.6]
  assign _GEN_31 = _T_250 ? io_dmi_req_bits_data : data2; // @[Debug.scala 215:50:@3897.6]
  assign _GEN_32 = _T_332 ? _GEN_10 : abstractcs_cmderr; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_42 = _T_332 ? _GEN_16 : sbcs_sbsingleread; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_43 = _T_332 ? _GEN_17 : sbcs_sbaccess; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_44 = _T_332 ? _GEN_18 : sbcs_sbautoincrement; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_45 = _T_332 ? _GEN_19 : sbcs_sbautoread; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_46 = _T_332 ? _GEN_20 : sbcs_sberror; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_47 = _T_332 ? _GEN_28 : sbaddr; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_48 = _T_332 ? _GEN_23 : sbdata; // @[Debug.scala 168:54:@3757.4]
  assign _GEN_53 = _T_332 ? _GEN_29 : data0; // @[Debug.scala 168:54:@3757.4]
  assign _T_400 = command_regno & 16'hfff; // @[Debug.scala 219:35:@3901.4]
  assign _T_402 = abstractcs_cmderr != 3'h0; // @[Debug.scala 220:46:@3903.4]
  assign _T_403 = command_transfer & _T_402; // @[Debug.scala 220:25:@3904.4]
  assign _GEN_58 = command_write ? _GEN_53 : io_ddpath_rdata; // @[Debug.scala 221:24:@3906.6]
  assign _GEN_62 = _T_403 ? 3'h0 : _GEN_32; // @[Debug.scala 220:54:@3905.4]
  assign _T_408 = _T_268 & _T_332; // @[Debug.scala 230:49:@3916.4]
  assign _T_410 = _T_408 == 1'h0; // @[Debug.scala 230:8:@3917.4]
  assign _GEN_63 = _T_410 ? 1'h0 : 1'h1; // @[Debug.scala 230:98:@3918.4]
  assign _T_417 = io_dmi_req_bits_op == 2'h1; // @[Debug.scala 239:72:@3926.4]
  assign _T_418 = _T_268 & _T_417; // @[Debug.scala 239:49:@3927.4]
  assign _T_419 = sbcs_sbautoread & firstreaddone; // @[Debug.scala 239:119:@3928.4]
  assign _T_420 = _T_418 | _T_419; // @[Debug.scala 239:99:@3929.4]
  assign _GEN_64 = io_debugmem_resp_valid ? io_debugmem_resp_bits_data : _GEN_48; // @[Debug.scala 245:33:@3934.6]
  assign _GEN_68 = _T_420 ? _GEN_64 : _GEN_48; // @[Debug.scala 239:137:@3930.4]
  assign _GEN_69 = _T_420 ? 1'h1 : memreadfire; // @[Debug.scala 239:137:@3930.4]
  assign _GEN_70 = _T_420 ? 1'h1 : firstreaddone; // @[Debug.scala 239:137:@3930.4]
  assign _T_423 = memreadfire & io_debugmem_resp_valid; // @[Debug.scala 252:20:@3940.4]
  assign _GEN_71 = sbcs_sbautoincrement ? _T_398 : _GEN_47; // @[Debug.scala 259:5:@3944.6]
  assign _GEN_73 = _T_423 ? 1'h0 : _GEN_69; // @[Debug.scala 253:3:@3941.4]
  assign _T_429 = _T_268 == 1'h0; // @[Debug.scala 264:8:@3950.4]
  assign _T_432 = io_dmi_req_bits_addr == 7'h44; // @[Debug.scala 270:30:@3955.4]
  assign _T_433 = _T_432 & io_dmi_req_valid; // @[Debug.scala 270:43:@3956.4]
  assign _GEN_76 = _T_433 ? 1'h0 : coreresetval; // @[Debug.scala 270:63:@3957.4]
  assign io_dmi_req_ready = io_dmi_req_valid; // @[Debug.scala 110:20:@3579.4]
  assign io_dmi_resp_valid = firstreaddone ? _T_414 : io_dmi_req_valid; // @[Debug.scala 237:21:@3925.4]
  assign io_dmi_resp_bits_data = _T_324 | _T_307; // @[Debug.scala 163:25:@3750.4]
  assign io_ddpath_addr = _T_400[4:0]; // @[Debug.scala 219:18:@3902.4]
  assign io_ddpath_wdata = data0; // @[Debug.scala 222:23:@3907.8]
  assign io_debugmem_req_valid = io_dmi_req_valid; // @[Debug.scala 207:29:@3883.8 Debug.scala 242:27:@3933.6]
  assign io_debugmem_req_bits_addr = sbaddr; // @[Debug.scala 204:33:@3880.8 Debug.scala 240:31:@3931.6]
  assign io_debugmem_req_bits_data = sbdata; // @[Debug.scala 205:33:@3881.8]
  assign io_debugmem_req_bits_fcn = _T_420 ? 1'h0 : _GEN_63; // @[Debug.scala 206:32:@3882.8 Debug.scala 231:30:@3919.6 Debug.scala 241:30:@3932.6]
  assign io_resetcore = coreresetval; // @[Debug.scala 268:16:@3954.4]
`ifdef RANDOMIZE_GARBAGE_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_INVALID_ASSIGN
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_REG_INIT
`define RANDOMIZE
`endif
`ifdef RANDOMIZE_MEM_INIT
`define RANDOMIZE
`endif
`ifndef RANDOM
`define RANDOM $random
`endif
`ifdef RANDOMIZE
  integer initvar;
  initial begin
    `ifdef INIT_RANDOM
      `INIT_RANDOM
    `endif
    `ifndef VERILATOR
      #0.002 begin end
    `endif
  `ifdef RANDOMIZE_REG_INIT
  _RAND_0 = {1{`RANDOM}};
  dmstatus_allrunning = _RAND_0[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_1 = {1{`RANDOM}};
  dmstatus_allhalted = _RAND_1[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_2 = {1{`RANDOM}};
  sbcs_sbsingleread = _RAND_2[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_3 = {1{`RANDOM}};
  sbcs_sbaccess = _RAND_3[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_4 = {1{`RANDOM}};
  sbcs_sbautoincrement = _RAND_4[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_5 = {1{`RANDOM}};
  sbcs_sbautoread = _RAND_5[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_6 = {1{`RANDOM}};
  sbcs_sberror = _RAND_6[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_7 = {1{`RANDOM}};
  abstractcs_cmderr = _RAND_7[2:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_8 = {1{`RANDOM}};
  command_postexec = _RAND_8[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_9 = {1{`RANDOM}};
  command_transfer = _RAND_9[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_10 = {1{`RANDOM}};
  command_write = _RAND_10[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_11 = {1{`RANDOM}};
  command_regno = _RAND_11[15:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_12 = {1{`RANDOM}};
  dmcontrol_haltreq = _RAND_12[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_13 = {1{`RANDOM}};
  dmcontrol_resumereq = _RAND_13[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_14 = {1{`RANDOM}};
  dmcontrol_hartreset = _RAND_14[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_15 = {1{`RANDOM}};
  dmcontrol_ndmreset = _RAND_15[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_16 = {1{`RANDOM}};
  dmcontrol_dmactive = _RAND_16[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_17 = {1{`RANDOM}};
  data0 = _RAND_17[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_18 = {1{`RANDOM}};
  data1 = _RAND_18[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_19 = {1{`RANDOM}};
  data2 = _RAND_19[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_20 = {1{`RANDOM}};
  sbaddr = _RAND_20[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_21 = {1{`RANDOM}};
  sbdata = _RAND_21[31:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_22 = {1{`RANDOM}};
  memreadfire = _RAND_22[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_23 = {1{`RANDOM}};
  coreresetval = _RAND_23[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_24 = {1{`RANDOM}};
  firstreaddone = _RAND_24[0:0];
  `endif // RANDOMIZE_REG_INIT
  `ifdef RANDOMIZE_REG_INIT
  _RAND_25 = {1{`RANDOM}};
  _T_414 = _RAND_25[0:0];
  `endif // RANDOMIZE_REG_INIT
  end
`endif // RANDOMIZE
  always @(posedge clock) begin
    if (reset) begin
      dmstatus_allrunning <= 1'h0;
    end else begin
      dmstatus_allrunning <= dmcontrol_resumereq;
    end
    if (reset) begin
      dmstatus_allhalted <= 1'h0;
    end else begin
      dmstatus_allhalted <= dmcontrol_haltreq;
    end
    if (reset) begin
      sbcs_sbsingleread <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbsingleread <= _T_393;
        end
      end
    end
    if (reset) begin
      sbcs_sbaccess <= 3'h2;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbaccess <= _T_392;
        end
      end
    end
    if (reset) begin
      sbcs_sbautoincrement <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbautoincrement <= _T_353;
        end
      end
    end
    if (reset) begin
      sbcs_sbautoread <= 1'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sbautoread <= _T_390;
        end
      end
    end
    if (reset) begin
      sbcs_sberror <= 3'h0;
    end else begin
      if (_T_332) begin
        if (_T_264) begin
          sbcs_sberror <= _T_389;
        end
      end
    end
    if (reset) begin
      abstractcs_cmderr <= 3'h0;
    end else begin
      if (_T_403) begin
        abstractcs_cmderr <= 3'h0;
      end else begin
        if (_T_332) begin
          if (_T_238) begin
            abstractcs_cmderr <= {{1'd0}, _GEN_5};
          end else begin
            if (_T_333) begin
              abstractcs_cmderr <= _T_341;
            end
          end
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_postexec <= _T_355;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_transfer <= _T_354;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_write <= _T_353;
        end
      end
    end
    if (_T_332) begin
      if (_T_238) begin
        if (_T_361) begin
          command_regno <= _T_352;
        end
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_haltreq <= _T_377;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_resumereq <= _T_376;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_hartreset <= _T_375;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_ndmreset <= _T_370;
      end
    end
    if (_T_332) begin
      if (_T_234) begin
        dmcontrol_dmactive <= _T_369;
      end
    end
    if (_T_403) begin
      if (command_write) begin
        if (_T_332) begin
          if (_T_246) begin
            data0 <= io_dmi_req_bits_data;
          end
        end
      end else begin
        data0 <= io_ddpath_rdata;
      end
    end else begin
      if (_T_332) begin
        if (_T_246) begin
          data0 <= io_dmi_req_bits_data;
        end
      end
    end
    if (_T_332) begin
      if (_T_248) begin
        data1 <= io_dmi_req_bits_data;
      end
    end
    if (_T_332) begin
      if (_T_250) begin
        data2 <= io_dmi_req_bits_data;
      end
    end
    if (_T_423) begin
      if (sbcs_sbautoincrement) begin
        sbaddr <= _T_398;
      end else begin
        if (_T_332) begin
          if (_T_268) begin
            if (_T_395) begin
              sbaddr <= _T_398;
            end else begin
              if (_T_266) begin
                sbaddr <= io_dmi_req_bits_data;
              end
            end
          end else begin
            if (_T_266) begin
              sbaddr <= io_dmi_req_bits_data;
            end
          end
        end
      end
    end else begin
      if (_T_332) begin
        if (_T_268) begin
          if (_T_395) begin
            sbaddr <= _T_398;
          end else begin
            if (_T_266) begin
              sbaddr <= io_dmi_req_bits_data;
            end
          end
        end else begin
          if (_T_266) begin
            sbaddr <= io_dmi_req_bits_data;
          end
        end
      end
    end
    if (_T_423) begin
      sbdata <= io_debugmem_resp_bits_data;
    end else begin
      if (_T_420) begin
        if (io_debugmem_resp_valid) begin
          sbdata <= io_debugmem_resp_bits_data;
        end else begin
          if (_T_332) begin
            if (_T_268) begin
              sbdata <= io_dmi_req_bits_data;
            end
          end
        end
      end else begin
        if (_T_332) begin
          if (_T_268) begin
            sbdata <= io_dmi_req_bits_data;
          end
        end
      end
    end
    if (reset) begin
      memreadfire <= 1'h0;
    end else begin
      if (_T_423) begin
        memreadfire <= 1'h0;
      end else begin
        if (_T_420) begin
          memreadfire <= 1'h1;
        end
      end
    end
    if (reset) begin
      coreresetval <= 1'h1;
    end else begin
      if (_T_433) begin
        coreresetval <= 1'h0;
      end
    end
    if (_T_429) begin
      firstreaddone <= 1'h0;
    end else begin
      if (_T_420) begin
        firstreaddone <= 1'h1;
      end
    end
    _T_414 <= io_debugmem_resp_valid;
  end
endmodule
module Tile( // @[:@3961.2]
  input         clock, // @[:@3962.4]
  input         reset, // @[:@3963.4]
  output        io_dmi_req_ready, // @[:@3964.4]
  input         io_dmi_req_valid, // @[:@3964.4]
  input  [1:0]  io_dmi_req_bits_op, // @[:@3964.4]
  input  [6:0]  io_dmi_req_bits_addr, // @[:@3964.4]
  input  [31:0] io_dmi_req_bits_data, // @[:@3964.4]
  output        io_dmi_resp_valid, // @[:@3964.4]
  output [31:0] io_dmi_resp_bits_data // @[:@3964.4]
);
  wire  core_clock; // @[Tile.scala 18:23:@3966.4]
  wire  core_reset; // @[Tile.scala 18:23:@3966.4]
  wire [4:0] core_io_ddpath_addr; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_ddpath_wdata; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_ddpath_rdata; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_imem_req_bits_addr; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_imem_resp_bits_data; // @[Tile.scala 18:23:@3966.4]
  wire  core_io_dmem_req_valid; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_dmem_req_bits_addr; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_dmem_req_bits_data; // @[Tile.scala 18:23:@3966.4]
  wire  core_io_dmem_req_bits_fcn; // @[Tile.scala 18:23:@3966.4]
  wire [2:0] core_io_dmem_req_bits_typ; // @[Tile.scala 18:23:@3966.4]
  wire  core_io_dmem_resp_valid; // @[Tile.scala 18:23:@3966.4]
  wire [31:0] core_io_dmem_resp_bits_data; // @[Tile.scala 18:23:@3966.4]
  wire  memory_clock; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_core_ports_0_req_valid; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_core_ports_0_req_bits_addr; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_core_ports_0_req_bits_data; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_core_ports_0_req_bits_fcn; // @[Tile.scala 20:23:@3991.4]
  wire [2:0] memory_io_core_ports_0_req_bits_typ; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_core_ports_0_resp_valid; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_core_ports_0_resp_bits_data; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_core_ports_1_req_bits_addr; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_core_ports_1_resp_bits_data; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_debug_port_req_valid; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_debug_port_req_bits_addr; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_debug_port_req_bits_data; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_debug_port_req_bits_fcn; // @[Tile.scala 20:23:@3991.4]
  wire  memory_io_debug_port_resp_valid; // @[Tile.scala 20:23:@3991.4]
  wire [31:0] memory_io_debug_port_resp_bits_data; // @[Tile.scala 20:23:@3991.4]
  wire  debug_clock; // @[Tile.scala 21:22:@3994.4]
  wire  debug_reset; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_dmi_req_ready; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_dmi_req_valid; // @[Tile.scala 21:22:@3994.4]
  wire [1:0] debug_io_dmi_req_bits_op; // @[Tile.scala 21:22:@3994.4]
  wire [6:0] debug_io_dmi_req_bits_addr; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_dmi_req_bits_data; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_dmi_resp_valid; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_dmi_resp_bits_data; // @[Tile.scala 21:22:@3994.4]
  wire [4:0] debug_io_ddpath_addr; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_ddpath_wdata; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_ddpath_rdata; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_debugmem_req_valid; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_debugmem_req_bits_addr; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_debugmem_req_bits_data; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_debugmem_req_bits_fcn; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_debugmem_resp_valid; // @[Tile.scala 21:22:@3994.4]
  wire [31:0] debug_io_debugmem_resp_bits_data; // @[Tile.scala 21:22:@3994.4]
  wire  debug_io_resetcore; // @[Tile.scala 21:22:@3994.4]
  Core core ( // @[Tile.scala 18:23:@3966.4]
    .clock(core_clock),
    .reset(core_reset),
    .io_ddpath_addr(core_io_ddpath_addr),
    .io_ddpath_wdata(core_io_ddpath_wdata),
    .io_ddpath_rdata(core_io_ddpath_rdata),
    .io_imem_req_bits_addr(core_io_imem_req_bits_addr),
    .io_imem_resp_bits_data(core_io_imem_resp_bits_data),
    .io_dmem_req_valid(core_io_dmem_req_valid),
    .io_dmem_req_bits_addr(core_io_dmem_req_bits_addr),
    .io_dmem_req_bits_data(core_io_dmem_req_bits_data),
    .io_dmem_req_bits_fcn(core_io_dmem_req_bits_fcn),
    .io_dmem_req_bits_typ(core_io_dmem_req_bits_typ),
    .io_dmem_resp_valid(core_io_dmem_resp_valid),
    .io_dmem_resp_bits_data(core_io_dmem_resp_bits_data)
  );
  AsyncScratchPadMemory memory ( // @[Tile.scala 20:23:@3991.4]
    .clock(memory_clock),
    .io_core_ports_0_req_valid(memory_io_core_ports_0_req_valid),
    .io_core_ports_0_req_bits_addr(memory_io_core_ports_0_req_bits_addr),
    .io_core_ports_0_req_bits_data(memory_io_core_ports_0_req_bits_data),
    .io_core_ports_0_req_bits_fcn(memory_io_core_ports_0_req_bits_fcn),
    .io_core_ports_0_req_bits_typ(memory_io_core_ports_0_req_bits_typ),
    .io_core_ports_0_resp_valid(memory_io_core_ports_0_resp_valid),
    .io_core_ports_0_resp_bits_data(memory_io_core_ports_0_resp_bits_data),
    .io_core_ports_1_req_bits_addr(memory_io_core_ports_1_req_bits_addr),
    .io_core_ports_1_resp_bits_data(memory_io_core_ports_1_resp_bits_data),
    .io_debug_port_req_valid(memory_io_debug_port_req_valid),
    .io_debug_port_req_bits_addr(memory_io_debug_port_req_bits_addr),
    .io_debug_port_req_bits_data(memory_io_debug_port_req_bits_data),
    .io_debug_port_req_bits_fcn(memory_io_debug_port_req_bits_fcn),
    .io_debug_port_resp_valid(memory_io_debug_port_resp_valid),
    .io_debug_port_resp_bits_data(memory_io_debug_port_resp_bits_data)
  );
  DebugModule debug ( // @[Tile.scala 21:22:@3994.4]
    .clock(debug_clock),
    .reset(debug_reset),
    .io_dmi_req_ready(debug_io_dmi_req_ready),
    .io_dmi_req_valid(debug_io_dmi_req_valid),
    .io_dmi_req_bits_op(debug_io_dmi_req_bits_op),
    .io_dmi_req_bits_addr(debug_io_dmi_req_bits_addr),
    .io_dmi_req_bits_data(debug_io_dmi_req_bits_data),
    .io_dmi_resp_valid(debug_io_dmi_resp_valid),
    .io_dmi_resp_bits_data(debug_io_dmi_resp_bits_data),
    .io_ddpath_addr(debug_io_ddpath_addr),
    .io_ddpath_wdata(debug_io_ddpath_wdata),
    .io_ddpath_rdata(debug_io_ddpath_rdata),
    .io_debugmem_req_valid(debug_io_debugmem_req_valid),
    .io_debugmem_req_bits_addr(debug_io_debugmem_req_bits_addr),
    .io_debugmem_req_bits_data(debug_io_debugmem_req_bits_data),
    .io_debugmem_req_bits_fcn(debug_io_debugmem_req_bits_fcn),
    .io_debugmem_resp_valid(debug_io_debugmem_resp_valid),
    .io_debugmem_resp_bits_data(debug_io_debugmem_resp_bits_data),
    .io_resetcore(debug_io_resetcore)
  );
  assign io_dmi_req_ready = debug_io_dmi_req_ready; // @[Tile.scala 30:17:@4038.4]
  assign io_dmi_resp_valid = debug_io_dmi_resp_valid; // @[Tile.scala 30:17:@4032.4]
  assign io_dmi_resp_bits_data = debug_io_dmi_resp_bits_data; // @[Tile.scala 30:17:@4031.4]
  assign core_clock = clock; // @[:@3967.4]
  assign core_reset = debug_io_resetcore | reset; // @[:@3968.4 Tile.scala 27:15:@4023.4]
  assign core_io_ddpath_addr = debug_io_ddpath_addr; // @[Tile.scala 28:20:@4028.4]
  assign core_io_ddpath_wdata = debug_io_ddpath_wdata; // @[Tile.scala 28:20:@4027.4]
  assign core_io_imem_resp_bits_data = memory_io_core_ports_1_resp_bits_data; // @[Tile.scala 24:17:@4005.4]
  assign core_io_dmem_resp_valid = memory_io_core_ports_0_resp_valid; // @[Tile.scala 23:17:@3998.4]
  assign core_io_dmem_resp_bits_data = memory_io_core_ports_0_resp_bits_data; // @[Tile.scala 23:17:@3997.4]
  assign memory_clock = clock; // @[:@3992.4]
  assign memory_io_core_ports_0_req_valid = core_io_dmem_req_valid; // @[Tile.scala 23:17:@4003.4]
  assign memory_io_core_ports_0_req_bits_addr = core_io_dmem_req_bits_addr; // @[Tile.scala 23:17:@4002.4]
  assign memory_io_core_ports_0_req_bits_data = core_io_dmem_req_bits_data; // @[Tile.scala 23:17:@4001.4]
  assign memory_io_core_ports_0_req_bits_fcn = core_io_dmem_req_bits_fcn; // @[Tile.scala 23:17:@4000.4]
  assign memory_io_core_ports_0_req_bits_typ = core_io_dmem_req_bits_typ; // @[Tile.scala 23:17:@3999.4]
  assign memory_io_core_ports_1_req_bits_addr = core_io_imem_req_bits_addr; // @[Tile.scala 24:17:@4010.4]
  assign memory_io_debug_port_req_valid = debug_io_debugmem_req_valid; // @[Tile.scala 25:22:@4019.4]
  assign memory_io_debug_port_req_bits_addr = debug_io_debugmem_req_bits_addr; // @[Tile.scala 25:22:@4018.4]
  assign memory_io_debug_port_req_bits_data = debug_io_debugmem_req_bits_data; // @[Tile.scala 25:22:@4017.4]
  assign memory_io_debug_port_req_bits_fcn = debug_io_debugmem_req_bits_fcn; // @[Tile.scala 25:22:@4016.4]
  assign debug_clock = clock; // @[:@3995.4]
  assign debug_reset = reset; // @[:@3996.4]
  assign debug_io_dmi_req_valid = io_dmi_req_valid; // @[Tile.scala 30:17:@4037.4]
  assign debug_io_dmi_req_bits_op = io_dmi_req_bits_op; // @[Tile.scala 30:17:@4036.4]
  assign debug_io_dmi_req_bits_addr = io_dmi_req_bits_addr; // @[Tile.scala 30:17:@4035.4]
  assign debug_io_dmi_req_bits_data = io_dmi_req_bits_data; // @[Tile.scala 30:17:@4034.4]
  assign debug_io_ddpath_rdata = core_io_ddpath_rdata; // @[Tile.scala 28:20:@4025.4]
  assign debug_io_debugmem_resp_valid = memory_io_debug_port_resp_valid; // @[Tile.scala 25:22:@4014.4]
  assign debug_io_debugmem_resp_bits_data = memory_io_debug_port_resp_bits_data; // @[Tile.scala 25:22:@4013.4]
endmodule
module Top( // @[:@4049.2]
  input   clock, // @[:@4050.4]
  input   reset, // @[:@4051.4]
  output  io_success // @[:@4052.4]
);
  wire  tile_clock; // @[Top.scala 12:21:@4054.4]
  wire  tile_reset; // @[Top.scala 12:21:@4054.4]
  wire  tile_io_dmi_req_ready; // @[Top.scala 12:21:@4054.4]
  wire  tile_io_dmi_req_valid; // @[Top.scala 12:21:@4054.4]
  wire [1:0] tile_io_dmi_req_bits_op; // @[Top.scala 12:21:@4054.4]
  wire [6:0] tile_io_dmi_req_bits_addr; // @[Top.scala 12:21:@4054.4]
  wire [31:0] tile_io_dmi_req_bits_data; // @[Top.scala 12:21:@4054.4]
  wire  tile_io_dmi_resp_valid; // @[Top.scala 12:21:@4054.4]
  wire [31:0] tile_io_dmi_resp_bits_data; // @[Top.scala 12:21:@4054.4]
  wire [31:0] SimDTM_exit; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_debug_req_ready; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_debug_req_valid; // @[Top.scala 13:20:@4057.4]
  wire [1:0] SimDTM_debug_req_bits_op; // @[Top.scala 13:20:@4057.4]
  wire [6:0] SimDTM_debug_req_bits_addr; // @[Top.scala 13:20:@4057.4]
  wire [31:0] SimDTM_debug_req_bits_data; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_debug_resp_ready; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_debug_resp_valid; // @[Top.scala 13:20:@4057.4]
  wire [31:0] SimDTM_debug_resp_bits_data; // @[Top.scala 13:20:@4057.4]
  wire [1:0] SimDTM_debug_resp_bits_resp; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_reset; // @[Top.scala 13:20:@4057.4]
  wire  SimDTM_clk; // @[Top.scala 13:20:@4057.4]
  wire  _T_11; // @[Debug.scala 75:19:@4076.4]
  wire [31:0] _T_13; // @[Debug.scala 76:59:@4078.6]
  wire  _T_16; // @[Debug.scala 76:13:@4080.6]
  Tile tile ( // @[Top.scala 12:21:@4054.4]
    .clock(tile_clock),
    .reset(tile_reset),
    .io_dmi_req_ready(tile_io_dmi_req_ready),
    .io_dmi_req_valid(tile_io_dmi_req_valid),
    .io_dmi_req_bits_op(tile_io_dmi_req_bits_op),
    .io_dmi_req_bits_addr(tile_io_dmi_req_bits_addr),
    .io_dmi_req_bits_data(tile_io_dmi_req_bits_data),
    .io_dmi_resp_valid(tile_io_dmi_resp_valid),
    .io_dmi_resp_bits_data(tile_io_dmi_resp_bits_data)
  );
  SimDTM SimDTM ( // @[Top.scala 13:20:@4057.4]
    .exit(SimDTM_exit),
    .debug_req_ready(SimDTM_debug_req_ready),
    .debug_req_valid(SimDTM_debug_req_valid),
    .debug_req_bits_op(SimDTM_debug_req_bits_op),
    .debug_req_bits_addr(SimDTM_debug_req_bits_addr),
    .debug_req_bits_data(SimDTM_debug_req_bits_data),
    .debug_resp_ready(SimDTM_debug_resp_ready),
    .debug_resp_valid(SimDTM_debug_resp_valid),
    .debug_resp_bits_data(SimDTM_debug_resp_bits_data),
    .debug_resp_bits_resp(SimDTM_debug_resp_bits_resp),
    .reset(SimDTM_reset),
    .clk(SimDTM_clk)
  );
  assign _T_11 = SimDTM_exit >= 32'h2; // @[Debug.scala 75:19:@4076.4]
  assign _T_13 = SimDTM_exit >> 1'h1; // @[Debug.scala 76:59:@4078.6]
  assign _T_16 = reset == 1'h0; // @[Debug.scala 76:13:@4080.6]
  assign io_success = SimDTM_exit == 32'h1; // @[Debug.scala 74:15:@4075.4]
  assign tile_clock = clock; // @[:@4055.4]
  assign tile_reset = reset; // @[:@4056.4]
  assign tile_io_dmi_req_valid = SimDTM_debug_req_valid; // @[Debug.scala 72:11:@4072.4]
  assign tile_io_dmi_req_bits_op = SimDTM_debug_req_bits_op; // @[Debug.scala 72:11:@4071.4]
  assign tile_io_dmi_req_bits_addr = SimDTM_debug_req_bits_addr; // @[Debug.scala 72:11:@4070.4]
  assign tile_io_dmi_req_bits_data = SimDTM_debug_req_bits_data; // @[Debug.scala 72:11:@4069.4]
  assign SimDTM_debug_req_ready = tile_io_dmi_req_ready; // @[Debug.scala 72:11:@4073.4]
  assign SimDTM_debug_resp_valid = tile_io_dmi_resp_valid; // @[Debug.scala 72:11:@4067.4]
  assign SimDTM_debug_resp_bits_data = tile_io_dmi_resp_bits_data; // @[Debug.scala 72:11:@4066.4]
  assign SimDTM_debug_resp_bits_resp = 2'h0; // @[Debug.scala 72:11:@4065.4]
  assign SimDTM_reset = reset; // @[Debug.scala 71:14:@4064.4]
  assign SimDTM_clk = clock; // @[Debug.scala 70:12:@4063.4]
  always @(posedge clock) begin
    `ifndef SYNTHESIS
    `ifdef PRINTF_COND
      if (`PRINTF_COND) begin
    `endif
        if (_T_11 & _T_16) begin
          $fwrite(32'h80000002,"*** FAILED *** (exit code = %d)\n",_T_13); // @[Debug.scala 76:13:@4082.8]
        end
    `ifdef PRINTF_COND
      end
    `endif
    `endif // SYNTHESIS
  end
endmodule
