//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VMUStackLogReader.h"

@class NSString, VMUTaskMemoryScanner, VMUVMRegionTracker;

@interface VMUTaskStackLogReader : NSObject <VMUStackLogReader>
{
    unsigned int _task;
    _Bool _usesLiteMode;
    VMUTaskMemoryScanner *_scanner;
    VMUVMRegionTracker *_regionTracker;
}

@property(nonatomic) __weak VMUTaskMemoryScanner *scanner; // @synthesize scanner=_scanner;
@property(readonly) _Bool usesLiteMode; // @synthesize usesLiteMode=_usesLiteMode;
- (void).cxx_destruct;
- (int)enumerateRecords:(CDUnknownBlockType)arg1;
- (unsigned int)sourceLineNumberForPCaddress:(unsigned long long)arg1;
- (id)sourceFileNameForPCaddress:(unsigned long long)arg1;
- (id)sourcePathForPCaddress:(unsigned long long)arg1;
- (id)vmuVMRegionForAddress:(unsigned long long)arg1;
- (struct _VMURange)functionRangeContainingPCaddress:(unsigned long long)arg1;
- (id)functionNameForPCaddress:(unsigned long long)arg1;
- (long long)getFramesForStackID:(unsigned long long)arg1 stackFramesBuffer:(unsigned long long *)arg2;
- (long long)getFramesForAddress:(unsigned long long)arg1 size:(unsigned long long)arg2 inLiteZone:(_Bool)arg3 stackFramesBuffer:(unsigned long long *)arg4;
- (long long)getFramesForNode:(unsigned int)arg1 inLiteZone:(_Bool)arg2 stackFramesBuffer:(unsigned long long *)arg3;
- (unsigned long long)liteModeStackIDforVMregionAddress:(unsigned long long)arg1;
- (unsigned long long)liteModeStackIDforAddress:(unsigned long long)arg1 size:(unsigned long long)arg2;
@property(readonly) VMUVMRegionTracker *regionTracker;
@property(readonly) _Bool inspectingLiveProcess;
- (void)dealloc;
- (id)initWithTask:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

