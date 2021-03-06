//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class PGMeaningfulEventRequiredCriteria;

@interface PGMeaningfulEventMatchingResult : NSObject
{
    _Bool _isMatching;
    _Bool _isReliable;
    double _score;
    PGMeaningfulEventRequiredCriteria *_requiredCriteria;
}

@property(readonly, nonatomic) PGMeaningfulEventRequiredCriteria *requiredCriteria; // @synthesize requiredCriteria=_requiredCriteria;
@property(readonly, nonatomic) _Bool isReliable; // @synthesize isReliable=_isReliable;
@property(readonly, nonatomic) double score; // @synthesize score=_score;
@property(readonly, nonatomic) _Bool isMatching; // @synthesize isMatching=_isMatching;
- (void).cxx_destruct;
- (id)description;
- (id)initWithIsMatching:(_Bool)arg1 score:(double)arg2 isReliable:(_Bool)arg3 requiredCriteria:(id)arg4;

@end

