//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VMUCommonGraphInterface.h"

@class NSMutableArray, NSString, VMUClassInfoMap, VMUDebugTimer, VMUObjectIdentifier, VMUProcessObjectGraph, VMURangeArray, VMUVMRegionIdentifier;

@interface VMUTaskMemoryScanner : NSObject <VMUCommonGraphInterface>
{
    unsigned int _task;
    int _pid;
    unsigned long long _suspendTime;
    unsigned int _suspensionToken;
    VMUObjectIdentifier *_objectIdentifier;
    VMUVMRegionIdentifier *_regionIdentifier;
    struct _VMUBlockNode *_blocks;
    unsigned int _blocksCount;
    unsigned int _blocksSize;
    struct _VMURegionNode *_regions;
    unsigned int _regionsCount;
    struct _VMURegionMap *_regionMap;
    VMURangeArray *_stackRanges;
    NSMutableArray *_zoneNames;
    struct _VMUZoneNode *_zones;
    unsigned int _zonesCount;
    unsigned int _zonesSize;
    struct _VMUThreadNode *_threads;
    unsigned int _threadsCount;
    struct _VMUInstanceValues *_instanceValues;
    unsigned int _instanceValuesCount;
    unsigned int _instanceValuesSize;
    id *_classInfos;
    unsigned int _classInfosCount;
    VMUClassInfoMap *_classInfoIndexer;
    struct _VMUScanLocationCache **_scanCaches;
    _Bool _exactScanningEnabled;
    unsigned long long _maxInteriorOffset;
    unsigned int _scanningMask;
    VMUDebugTimer *_debugTimer;
    _Bool _showRawClassNames;
    _Bool _javaScriptCoreUsingPoisoning;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_binaryImagesDescription;
    unsigned long long _physicalFootprint;
    unsigned long long _physicalFootprintPeak;
    unsigned long long _regionDescriptionOptions;
    CDUnknownBlockType _referenceLogger;
    CDUnknownBlockType _nodeLogger;
    _Bool _abandonedMarkingEnabled;
    _Bool _saveNodeLabelsInGraph;
    VMUProcessObjectGraph *_processObjectGraph;
    void *_userMarkedAbandoned;
    unsigned long long _cfPasteboardReservedBase;
}

+ (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(CDStruct_599faf0f)arg2 destinationNode:(CDStruct_599faf0f)arg3 sortedVMRegions:(id)arg4 symbolicator:(struct _CSTypeRef)arg5 alignmentSpacing:(unsigned int)arg6;
+ (id)nodeDescription:(CDStruct_599faf0f)arg1 withNodeOffset:(unsigned long long)arg2 sortedVMRegions:(id)arg3;
+ (void)initialize;
@property(readonly, nonatomic) unsigned long long physicalFootprintPeak; // @synthesize physicalFootprintPeak=_physicalFootprintPeak;
@property(readonly, nonatomic) unsigned long long physicalFootprint; // @synthesize physicalFootprint=_physicalFootprint;
@property(readonly, nonatomic) NSString *binaryImagesDescription; // @synthesize binaryImagesDescription=_binaryImagesDescription;
@property(readonly, nonatomic) NSString *processDescriptionString; // @synthesize processDescriptionString=_processDescriptionString;
@property(readonly, nonatomic) NSString *processName; // @synthesize processName=_processName;
@property(nonatomic) _Bool showRawClassNames; // @synthesize showRawClassNames=_showRawClassNames;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) _Bool abandonedMarkingEnabled; // @synthesize abandonedMarkingEnabled=_abandonedMarkingEnabled;
@property(nonatomic) _Bool saveNodeLabelsInGraph; // @synthesize saveNodeLabelsInGraph=_saveNodeLabelsInGraph;
@property(nonatomic) unsigned int scanningMask; // @synthesize scanningMask=_scanningMask;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionsCount;
@property(readonly, nonatomic) unsigned int zoneCount; // @synthesize zoneCount=_zonesCount;
@property(readonly, nonatomic) unsigned int nodeCount; // @synthesize nodeCount=_blocksCount;
@property(nonatomic) _Bool exactScanningEnabled; // @synthesize exactScanningEnabled=_exactScanningEnabled;
@property(nonatomic) unsigned long long maxInteriorOffset; // @synthesize maxInteriorOffset=_maxInteriorOffset;
@property(readonly, nonatomic) VMUObjectIdentifier *objectIdentifier; // @synthesize objectIdentifier=_objectIdentifier;
@property(readonly, nonatomic) unsigned int task; // @synthesize task=_task;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 symbolicator:(struct _CSTypeRef)arg4 alignmentSpacing:(unsigned int)arg5;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (void)setReferenceScanningLogger:(CDUnknownBlockType)arg1;
- (void)setNodeScanningLogger:(CDUnknownBlockType)arg1;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly, nonatomic) unsigned int vmPageSize;
- (void *)copyUserMarked;
- (unsigned int)enumerateReferencesWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateMarkedObjects:(void *)arg1 withBlock:(CDUnknownBlockType)arg2;
- (unsigned int)enumerateObjectsWithBlock:(CDUnknownBlockType)arg1;
- (unsigned int)enumerateNodesWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)validateAddressRange:(struct _VMURange)arg1;
- (id)classInfoForObjectAtAddress:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int mallocNodeCount;
- (void *)contentForNode:(unsigned int)arg1;
- (id)labelForNode:(unsigned int)arg1;
- (_Bool)hasLabelsForNodes;
- (id)zoneNameForIndex:(unsigned int)arg1;
- (id)zoneNameForNode:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (CDStruct_599faf0f)nodeDetails:(unsigned int)arg1;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
- (id)processSnapshotGraph;
- (id)processSnapshotGraphWithMallocStackLogs:(_Bool)arg1;
- (void)scanNodesForReferences:(CDUnknownBlockType)arg1;
- (void)removeRootReachableNodes;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (unsigned int)_removeFalsePositiveLeakedVMregionsFromNodes:(unsigned int *)arg1 nodeCount:(unsigned int)arg2 recorder:(CDUnknownBlockType)arg3;
- (void)_orderedScanWithScanner:(CDUnknownBlockType)arg1 recorder:(CDUnknownBlockType)arg2 keepMapped:(_Bool)arg3 actions:(CDUnknownBlockType)arg4;
- (void)orderedNodeTraversal:(int)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)_withOrderedNodeMapper:(CDUnknownBlockType)arg1;
- (void)_withScanningContext:(CDUnknownBlockType)arg1;
- (void)_buildRegionPageBlockMaps;
- (void)refineTypesWithOverlay:(id)arg1;
- (void)_findMarkedAbandonedBlocks;
- (void)_fixupBlockIsas;
- (void)_sortAndClassifyBlocks;
- (void)addMallocNodes:(id)arg1;
- (void)addMallocNodesFromTask;
- (void)_sortBlocks;
- (void)addRootNodesFromTask;
- (void)_updateLinearClassInfos;
- (void)_destroyLinearClassInfos;
- (void)_callRemoteMallocEnumerators:(unsigned int)arg1 block:(CDUnknownBlockType)arg2;
- (void)_withMemoryReaderBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)detachFromTask;
- (_Bool)_suspend;
- (id)initWithTask:(unsigned int)arg1;
- (id)initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;
- (id)initWithSelfTaskAndOptions:(unsigned long long)arg1;
- (id)_initWithTask:(unsigned int)arg1 options:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

