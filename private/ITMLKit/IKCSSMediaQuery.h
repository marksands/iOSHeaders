//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IKCSSMediaQueryList;

@interface IKCSSMediaQuery : NSObject
{
    _Bool _evaluated;
    _Bool _evaluationResult;
    IKCSSMediaQueryList *_queryList;
}

+ (id)buildMediaQueryExpression:(id)arg1;
+ (id)buildMediaQuery:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long *)arg3;
+ (id)buildMediaQueryList:(id)arg1 offset:(unsigned long long)arg2 consumed:(unsigned long long *)arg3;
+ (id)mediaQueryFromTokenList:(id)arg1;
@property(readonly, nonatomic) IKCSSMediaQueryList *queryList; // @synthesize queryList=_queryList;
@property(readonly) _Bool evaluationResult; // @synthesize evaluationResult=_evaluationResult;
@property(readonly) _Bool evaluated; // @synthesize evaluated=_evaluated;
- (void).cxx_destruct;
- (id)description;
- (void)setNeedsReEvaluation;
- (_Bool)evaluate;
- (id)queryExpression;
- (id)initWithQueryList:(id)arg1;

@end

