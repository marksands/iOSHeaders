//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface _CNSortsByPositionInAuxiliaryArray : NSObject
{
    NSDictionary *_ranks;
    NSArray *_auxiliaryValues;
    CDUnknownBlockType _transform;
}

+ (CDUnknownBlockType)comparatorForSortingAccordingToAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;
@property(readonly, copy, nonatomic) NSArray *auxiliaryValues; // @synthesize auxiliaryValues=_auxiliaryValues;
@property(readonly, copy, nonatomic) NSDictionary *ranks; // @synthesize ranks=_ranks;
@property(readonly, copy, nonatomic) CDUnknownBlockType transform; // @synthesize transform=_transform;
- (void).cxx_destruct;
- (id)rankForObject:(id)arg1;
- (CDUnknownBlockType)comparator;
- (void)prepareRankingIndex;
- (id)initWithAuxiliaryValues:(id)arg1 transform:(CDUnknownBlockType)arg2;

@end

