#ifndef LLVM_INITIALIZE_DSA_PASSES
#define LLVM_INITIALIZE_DSA_PASSES

namespace llvm {

class PassRegistry;

// AllocIdentify
void initializeAllocIdentifyPass(PassRegistry &);

// AddressTakenAnalysis
void initializeAddressTakenAnalysisPass(PassRegistry &);

// BasicDataStructures
void initializeBasicDataStructuresPass(PassRegistry &);

// BUDataStructures
void initializeBUDataStructuresPass(PassRegistry &);

// CompleteBUDataStructures
void initializeCompleteBUDataStructuresPass(PassRegistry &);

// DSGraphStats
void initializeDSGraphStatsPass(PassRegistry &);

// EntryPointAnalysis
void initializeEntryPointAnalysisPass(PassRegistry &);

// EquivBUDataStructures
void initializeEquivBUDataStructuresPass(PassRegistry &);

// DSGC
void initializeDSGCPass(PassRegistry &);

// LocalDataStructures
void initializeLocalDataStructuresPass(PassRegistry &);

// SanityCheck
void initializeSanityCheckPass(PassRegistry &);

// StdLibDataStructures
void initializeStdLibDataStructuresPass(PassRegistry &);

// TDDataStructures
void initializeTDDataStructuresPass(PassRegistry &);

// EQTDDataStructures
void initializeEQTDDataStructuresPass(PassRegistry &);

// TypeSafety<EQTDDataStructures>
void initializeTypeSafetyEQTD(PassRegistry &);

// TypeSafety<TDDataStructures>
void initializeTypeSafetyTD(PassRegistry &);

// TypeSafety<EquivBUDataStructures>
void initializeTypeSafetyEquivBU(PassRegistry &);
}

#endif
