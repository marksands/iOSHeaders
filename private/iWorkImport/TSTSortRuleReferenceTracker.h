//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCEReferenceTrackerDelegate-Protocol.h>

@class NSMutableSet, NSString, TSCEReferenceTracker, TSTInfo;

__attribute__((visibility("hidden")))
@interface TSTSortRuleReferenceTracker : NSObject <TSCEReferenceTrackerDelegate>
{
    TSTInfo *mTableInfo;
    NSMutableSet *mReferences;
    TSCEReferenceTracker *mReferenceTracker;
}

@property(nonatomic) TSTInfo *tableInfo; // @synthesize tableInfo=mTableInfo;
- (id)initFromArchive:(const struct SortRuleReferenceTrackerArchive *)arg1 unarchiver:(id)arg2;
- (void)encodeToArchive:(struct SortRuleReferenceTrackerArchive *)arg1 archiver:(id)arg2;
- (void)referencedCellWasModified:(id)arg1;
- (void)trackedReferenceWasDeleted:(id)arg1 fromOwnerUID:(const UUIDData_5fbc143e *)arg2;
- (id)cellRangeWasInserted:(const struct TSCERangeRef *)arg1;
- (_Bool)shouldRewriteOnTableIDReassignment;
- (_Bool)shouldRewriteOnTranspose;
- (_Bool)shouldRewriteOnCellMerge;
- (_Bool)shouldRewriteOnTectonicShift;
- (_Bool)shouldRewriteOnRangeMove;
- (_Bool)shouldRewriteOnSort;
- (void)setOwnerUID:(const UUIDData_5fbc143e *)arg1;
- (UUIDData_5fbc143e)ownerUID;
- (void)updateForSortRules:(id)arg1;
- (id)p_ruleReferenceForTrackedReference:(id)arg1;
- (unsigned char)p_columnForTrackedReference:(id)arg1;
- (struct TSCESpanningRangeRef)p_referenceForColumnIndex:(unsigned char)arg1;
- (void)unregisterFromCalculationEngine;
- (void)registerWithCalculationEngine:(id)arg1;
- (void)dealloc;
- (id)initWithTableInfo:(id)arg1 context:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

