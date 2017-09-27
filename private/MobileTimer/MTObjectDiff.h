//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSMutableDictionary;

@interface MTObjectDiff : NSObject
{
    id <MTDiffable> _diffable1;
    id <MTDiffable> _diffable2;
    unsigned long long _results;
    NSMutableDictionary *_differencesByKey;
}

+ (id)diffBetweenObject:(id)arg1 andObject:(id)arg2;
@property(retain, nonatomic) NSMutableDictionary *differencesByKey; // @synthesize differencesByKey=_differencesByKey;
@property(nonatomic) unsigned long long results; // @synthesize results=_results;
@property(copy, nonatomic) id <MTDiffable> diffable2; // @synthesize diffable2=_diffable2;
@property(copy, nonatomic) id <MTDiffable> diffable1; // @synthesize diffable1=_diffable1;
- (void).cxx_destruct;
- (id)description;
- (_Bool)hasDifferencesInKeys:(id)arg1;
- (id)differenceForKey:(id)arg1;
@property(readonly, nonatomic) NSArray *differences;
- (void)_handleDifferenceForKey:(id)arg1 value1:(id)arg2 value2:(id)arg3;
- (void)computeDiff;
- (id)initWithObject:(id)arg1 andObject:(id)arg2;

@end

