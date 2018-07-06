//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Symbolication/VMUObjectGraph.h>

#import "VMUCommonGraphInterface.h"

@class NSArray, NSDictionary, NSString, VMUClassInfoMap, VMUDebugTimer, VMUGraphStackLogReader, VMUNodeToStringMap, VMURangeToStringMap;

@interface VMUProcessObjectGraph : VMUObjectGraph <VMUCommonGraphInterface>
{
    int _pid;
    unsigned int _kernPageSize;
    unsigned long long _machAbsolute;
    NSArray *_regions;
    unsigned int _regionCount;
    NSArray *_zoneNames;
    NSString *_processName;
    NSString *_processDescriptionString;
    NSString *_binaryImagesDescription;
    VMURangeToStringMap *_threadNameRanges;
    VMURangeToStringMap *_binarySectionNameRanges;
    VMURangeToStringMap *_regionSymbolNameRanges;
    _Bool _gotObjcClassStructureRanges;
    _Bool _showRawClassNames;
    _Bool _javaScriptCoreUsingPoisoning;
    NSDictionary *_pthreadOffsets;
    VMUNodeToStringMap *_nodeLabels;
    void *_userMarked;
    VMUGraphStackLogReader *_stackLogReader;
    VMUDebugTimer *_debugTimer;
    unsigned long long _physicalFootprint;
    unsigned long long _physicalFootprintPeak;
    _Bool _showsPhysFootprint;
}

@property(nonatomic) _Bool showsPhysFootprint; // @synthesize showsPhysFootprint=_showsPhysFootprint;
@property(nonatomic) _Bool javaScriptCoreUsingPoisoning; // @synthesize javaScriptCoreUsingPoisoning=_javaScriptCoreUsingPoisoning;
@property(nonatomic) unsigned long long physicalFootprintPeak; // @synthesize physicalFootprintPeak=_physicalFootprintPeak;
@property(nonatomic) unsigned long long physicalFootprint; // @synthesize physicalFootprint=_physicalFootprint;
@property(nonatomic) _Bool showRawClassNames; // @synthesize showRawClassNames=_showRawClassNames;
@property(retain, nonatomic) id <VMUStackLogReader> stackLogReader; // @synthesize stackLogReader=_stackLogReader;
@property(retain, nonatomic) VMUDebugTimer *debugTimer; // @synthesize debugTimer=_debugTimer;
@property(nonatomic) unsigned long long snapshotMachTime; // @synthesize snapshotMachTime=_machAbsolute;
@property(readonly, nonatomic) unsigned int regionCount; // @synthesize regionCount=_regionCount;
@property(readonly, nonatomic) unsigned int vmPageSize; // @synthesize vmPageSize=_kernPageSize;
@property(readonly, nonatomic) int pid; // @synthesize pid=_pid;
- (void).cxx_destruct;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2 showLeakedVMregions:(_Bool)arg3;
- (void)markReachableNodesFromRoots:(void *)arg1 inMap:(void *)arg2;
- (void)refineEdges:(unsigned int)arg1 withOptions:(unsigned int)arg2 markingInvalid:(void *)arg3;
- (void)refineTypesWithOverlay:(id)arg1;
- (id)referenceDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (id)_detailedNodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3 alignmentSpacing:(unsigned int)arg4;
- (id)nodeOffsetDescription:(CDStruct_8b65991f)arg1 withSourceNode:(unsigned int)arg2 destinationNode:(unsigned int)arg3;
- (id)nodeDescription:(unsigned int)arg1 withDestinationNode:(unsigned int)arg2 referenceInfo:(CDStruct_8b65991f)arg3;
- (id)nodeDescription:(unsigned int)arg1 withOffset:(unsigned long long)arg2;
- (id)nodeDescription:(unsigned int)arg1;
- (id)shortNodeDescription:(unsigned int)arg1;
- (id)vmuVMRegionForNode:(unsigned int)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (id)_descriptionForRegionAddress:(unsigned long long)arg1 withOffset:(unsigned long long)arg2 showSegment:(_Bool)arg3;
@property(readonly, nonatomic) _Bool is64bit;
- (void)setProcessName:(id)arg1;
@property(readonly, nonatomic) NSString *processName;
- (void)setBinaryImagesDescription:(id)arg1;
@property(readonly, nonatomic) NSString *binaryImagesDescription;
- (void)setProcessDescriptionString:(id)arg1;
@property(readonly, nonatomic) NSString *processDescriptionString;
- (void)setUserMarked:(void *)arg1;
- (void *)copyUserMarked;
- (void)_renameWithNodeMap:(unsigned int *)arg1 nodeNamespace:(unsigned int)arg2 edgeMap:(unsigned int *)arg3 edgeNamespace:(unsigned int)arg4;
- (unsigned int)enumerateRegionsWithBlock:(CDUnknownBlockType)arg1;
- (id)zoneNameForIndex:(unsigned int)arg1;
@property(readonly, nonatomic) unsigned int zoneCount;
@property(readonly, nonatomic) VMUClassInfoMap *realizedClasses;
- (id)shortLabelForNode:(unsigned int)arg1;
- (void *)contentForNode:(unsigned int)arg1;
- (_Bool)hasLabelsForNodes;
- (id)labelForNode:(unsigned int)arg1;
- (void)setLabel:(id)arg1 forNode:(unsigned int)arg2;
- (unsigned int)nodeReferencedFromDataRegion:(id)arg1 byGlobalSymbol:(id)arg2;
- (unsigned int)enumerateReferencesFromDataRegion:(id)arg1 atGlobalSymbol:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (struct _VMURange)rangeForSymbolName:(id)arg1 inRegion:(id)arg2;
- (struct _VMURange)regionSymbolRangeContainingAddress:(unsigned long long)arg1;
- (id)regionSymbolNameForAddress:(unsigned long long)arg1;
- (void)setRegionSymbolName:(id)arg1 forRange:(struct _VMURange)arg2;
- (void)_deriveObjcClassStructureRanges;
- (struct _VMURange)binarySectionRangeContainingAddress:(unsigned long long)arg1;
- (id)binarySectionNameForAddress:(unsigned long long)arg1;
- (void)setBinarySectionName:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)threadNameForAddress:(unsigned long long)arg1;
- (void)setThreadName:(id)arg1 forRange:(struct _VMURange)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)archiveDictionaryRepresentation:(id)arg1 options:(unsigned long long)arg2;
- (id)initWithArchived:(id)arg1 version:(long long)arg2 options:(unsigned long long)arg3;
- (void)dealloc;
- (id)initWithPid:(int)arg1 nodes:(struct _VMUBlockNode *)arg2 nodeCount:(unsigned int)arg3 zoneNames:(id)arg4 classInfoMap:(id)arg5 regions:(id)arg6 pthreadOffsets:(id)arg7 userMarked:(void *)arg8;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned int nodeCount;
@property(readonly, nonatomic) unsigned int nodeNamespaceSize;
@property(readonly) Class superclass;

@end

