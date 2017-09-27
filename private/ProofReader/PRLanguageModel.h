//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, PRLexicon;

@interface PRLanguageModel : NSObject
{
    NSString *_localization;
    NSString *_appIdentifier;
    void *_model;
    PRLexicon *_lexicon;
}

+ (void)setLogLevel:(long long)arg1;
+ (void)performMaintenance;
+ (id)languageModelWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;
- (void)pruneToSize:(unsigned long long)arg1;
- (void)applyExponentialDecay;
- (void)flushDynamicData;
- (void)reset;
- (void)countDynamicNgramsForOrder:(unsigned long long)arg1 threshold:(float)arg2 dynamicModelCount:(unsigned long long *)arg3 cacheCount:(unsigned long long *)arg4;
- (void)recordWithDifferentialPrivacy:(id)arg1;
- (void)incrementUsageCountForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3;
- (_Bool)shouldAdaptToTokenSequence:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (_Bool)getFirstDynamicTokenID:(unsigned int *)arg1 lastDynamicTokenID:(unsigned int *)arg2;
- (_Bool)addTokenForString:(id)arg1 tokenID:(unsigned int *)arg2;
- (void)enumeratePredictionsForContext:(const unsigned int *)arg1 length:(unsigned long long)arg2 maxPredictions:(unsigned long long)arg3 maxTokensPerPrediction:(unsigned long long)arg4 withBlock:(CDUnknownBlockType)arg5;
- (void)enumerateCompletionsForPrefix:(id)arg1 maxCompletions:(unsigned long long)arg2 withBlock:(CDUnknownBlockType)arg3;
- (_Bool)tokenSequenceIsBlacklisted:(const unsigned int *)arg1 length:(unsigned long long)arg2;
- (float)usageCountForTokenID:(unsigned int)arg1;
- (_Bool)getUnigramProbabilityForString:(id)arg1 probability:(double *)arg2;
- (_Bool)getConditionalProbabilityForTokenID:(unsigned int)arg1 context:(const unsigned int *)arg2 length:(unsigned long long)arg3 probability:(double *)arg4;
- (id)stringForTokenID:(unsigned int)arg1;
- (unsigned int)tokenIDForString:(id)arg1;
- (id)appIdentifier;
- (id)localization;
- (id)description;
- (void)dealloc;
- (id)initWithLocalization:(id)arg1 appIdentifier:(id)arg2 lexicon:(id)arg3;

@end

