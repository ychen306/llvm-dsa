add_llvm_library(LLVMDataStructure
  AddressTakenAnalysis.cpp 
  CompleteBottomUp.cpp 
  EntryPointAnalysis.cpp    
  AllocatorIdentification.cpp 
  DSCallGraph.cpp 
  EquivClassGraphs.cpp 
  SanityCheck.cpp
  Basic.cpp 
  DSGraph.cpp 
  GraphChecker.cpp 
  StdLibPass.cpp
  BottomUpClosure.cpp 
  DSTest.cpp 
  Local.cpp 
  TopDownClosure.cpp
  DataStructure.cpp 
  TypeSafety.cpp
  CallTargets.cpp 
  DataStructureStats.cpp 
  Printer.cpp

  ADDITIONAL_HEADER_DIRS
  ${LLVM_MAIN_INCLUDE_DIR}/dsa

  DEPENDS
  intrinsics_gen
  )
