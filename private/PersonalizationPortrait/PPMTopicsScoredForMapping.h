//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PETScalarEventTracker;

@interface PPMTopicsScoredForMapping : NSObject
{
    PETScalarEventTracker *_tracker;
}

@property(readonly, nonatomic) PETScalarEventTracker *tracker; // @synthesize tracker=_tracker;
- (void).cxx_destruct;
- (void)trackEventWithScalar:(unsigned long long)arg1 bundleId:(id)arg2 mappingId:(id)arg3 resultSizeLog10:(unsigned long long)arg4 timeLimited:(struct PPMTypeSafeBool_)arg5 exclusionSpec:(struct PPMTypeSafeBool_)arg6 error:(struct PPMTypeSafeBool_)arg7;
- (id)init;

@end

