//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMapTable, NSMutableArray, NSString, PRSL2FeatureVector, PRSL3FeatureVector, PRSRankingSpanCalculator;

@interface PRSRankingItem : NSObject
{
    _Bool _isFromLocalResult;
    NSString *_identifier;
    double _rawScore;
    double _feedbackScore;
    double _score;
    double _quality_score;
    NSString *_sectionBundleIdentifier;
    PRSL2FeatureVector *_L2FeatureVector;
    PRSL3FeatureVector *_L3FeatureVector;
    NSDictionary *_serverFeatures;
    NSMapTable *_attributes;
    unsigned long long _indexScore;
    PRSRankingSpanCalculator *_spanCalculator;
    unsigned long long _inputToModelScore;
    NSMutableArray *_matchedSenders;
    NSMutableArray *_matchedVipSenders;
    NSMutableArray *_matchedRecipients;
    NSArray *_emailAddresses;
    unsigned long long _playCount;
}

+ (unsigned long long)featureFromVirtualIdx:(unsigned long long)arg1;
+ (id)rankingDescriptorForBundleFeature:(unsigned long long)arg1;
+ (id)defaultBundleFeatureArrValues;
+ (id)defaultArrForBundleFeature:(unsigned long long)arg1;
+ (id)deviceClass;
+ (id)requiredContactAttributes;
+ (id)requiredMailAttributes;
+ (id)requiredOtherAttributes;
+ (id)requiredTextFeatureAttributes;
+ (id)requiredAttributes;
+ (void)initialize;
@property(nonatomic) unsigned long long playCount; // @synthesize playCount=_playCount;
@property(retain, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property(retain, nonatomic) NSMutableArray *matchedRecipients; // @synthesize matchedRecipients=_matchedRecipients;
@property(retain, nonatomic) NSMutableArray *matchedVipSenders; // @synthesize matchedVipSenders=_matchedVipSenders;
@property(retain, nonatomic) NSMutableArray *matchedSenders; // @synthesize matchedSenders=_matchedSenders;
@property(nonatomic) unsigned long long inputToModelScore; // @synthesize inputToModelScore=_inputToModelScore;
@property(retain, nonatomic) PRSRankingSpanCalculator *spanCalculator; // @synthesize spanCalculator=_spanCalculator;
@property(nonatomic) unsigned long long indexScore; // @synthesize indexScore=_indexScore;
@property(retain, nonatomic) NSMapTable *attributes; // @synthesize attributes=_attributes;
@property(retain, nonatomic) NSDictionary *serverFeatures; // @synthesize serverFeatures=_serverFeatures;
@property(retain, nonatomic) PRSL3FeatureVector *L3FeatureVector; // @synthesize L3FeatureVector=_L3FeatureVector;
@property(retain, nonatomic) PRSL2FeatureVector *L2FeatureVector; // @synthesize L2FeatureVector=_L2FeatureVector;
@property(retain, nonatomic) NSString *sectionBundleIdentifier; // @synthesize sectionBundleIdentifier=_sectionBundleIdentifier;
@property(nonatomic) _Bool isFromLocalResult; // @synthesize isFromLocalResult=_isFromLocalResult;
@property(nonatomic) double quality_score; // @synthesize quality_score=_quality_score;
@property(nonatomic) double score; // @synthesize score=_score;
@property(nonatomic) double feedbackScore; // @synthesize feedbackScore=_feedbackScore;
@property(nonatomic) double rawScore; // @synthesize rawScore=_rawScore;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)dataCollectionRepresentation;
- (id)description;
- (id)likelyDisplayTitle;
- (long long)compare:(id)arg1;
- (id)interestingDate;
- (id)dedupeIdentifier;
- (void)populateFeature:(unsigned long long)arg1 value:(double)arg2;
- (void)populateTextFeatureValuesForProperty:(id)arg1 updatingBundleFeatureValues:(id)arg2 withEvaluator:(id)arg3 withContext:(struct _populate_text_features_ctx *)arg4;
- (void)hackPlayCounts;
- (void)populateFeaturesWithEvaluator:(id)arg1 updatingBundleFeatures:(double *)arg2;
- (void)populateOtherFeatures;
- (void)populateMailFeatures;
- (void)populateBundleSpecificFeatures;
- (void)populateCrossAttributeDerivedFeaturesWithContext:(struct _populate_text_features_ctx *)arg1;
- (void)updateBundleFeatures:(double *)arg1 withArrValues:(id)arg2;
- (void)updateAccumulatedBundleFeatures:(double *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateScoreDescriptorBundleFeatures:(double *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)updateNumScoreDescriptorBundleFeatures:(double *)arg1 values:(id)arg2 feature:(unsigned long long)arg3;
- (void)populateContactFeatures;
- (_Bool)didMatchRankingDescriptor:(id)arg1;
- (id)initWithAttributes:(id)arg1;

@end

