//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Symbolication/NSSecureCoding-Protocol.h>
#import <Symbolication/VMUStackLogReader-Protocol.h>

@class NSString, VMUDebugTimer, VMUProcessObjectGraph, VMURangeToStringMap, VMUVMRegionTracker;

__attribute__((visibility("hidden")))
@interface VMUGraphStackLogReader : NSObject <NSSecureCoding, VMUStackLogReader>
{
    unsigned int _task;
    struct _CSTypeRef _symbolicator;
    VMUProcessObjectGraph *_graph;
    VMUDebugTimer *_debugTimer;
    unsigned int _nodeNamespaceSize;
    unsigned int *_nodeToStackIdTable;
    struct {
        void *_field1;
        unsigned long long _field2;
        unsigned long long _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned int _field6;
        int _field7;
        unsigned int _field8;
        unsigned int _field9;
        unsigned int _field10;
        struct _opaque_pthread_rwlock_t {
            long long _field1;
            char _field2[192];
        } _field11;
    } *_backtraceUniquingTable;
    VMURangeToStringMap *_functionNameRanges;
    VMURangeToStringMap *_sourceInfoRanges;
    VMUVMRegionTracker *_regionTracker;
}

+ (void)initialize;
+ (void)_claimUnarchivingOfClass:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak VMUProcessObjectGraph *graph; // @synthesize graph=_graph;
@property(readonly) VMUVMRegionTracker *regionTracker; // @synthesize regionTracker=_regionTracker;
- (void).cxx_destruct;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
@property(readonly) _Bool usesLiteMode;
@property(readonly) _Bool inspectingLiveProcess;
- (struct _VMURange)sourceLineRangeContainingPCaddress:(unsigned long long)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (void)_parseSourceInfoString:(id)arg1 intoComponents:(unsigned int *)arg2;
- (void)_setSourcePath:(id)arg1 lineNumber:(unsigned int)arg2 forPCAddressRange:(struct _VMURange)arg3;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (void)_setFunctionName:(id)arg1 forPCAddressRange:(struct _VMURange)arg2;
- (void)symbolicateBacktraceUniquingTable;
- (void)populateBacktraceUniquingTableWithStackLogs:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1 symbolicator:(struct _CSTypeRef)arg2 graph:(id)arg3 debugTimer:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

