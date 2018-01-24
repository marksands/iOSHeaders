//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ARKit/ARTechnique.h>

@class NSSet;

@interface ARReplayResultDataTechnique : ARTechnique
{
    NSSet *_resultDataClasses;
    CDUnknownBlockType _retrieveResultsForTimestampBlock;
}

@property(copy, nonatomic) CDUnknownBlockType retrieveResultsForTimestampBlock; // @synthesize retrieveResultsForTimestampBlock=_retrieveResultsForTimestampBlock;
@property(retain, nonatomic) NSSet *resultDataClasses; // @synthesize resultDataClasses=_resultDataClasses;
- (void).cxx_destruct;
- (_Bool)isEqual:(id)arg1;
- (void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2;

@end

