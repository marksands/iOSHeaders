//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSCountedSet, NSSet, NSString;

@interface FCTopicalNode : NSObject <NSCopying>
{
    double _score;
    _Bool _scored;
    NSSet *_identifiers;
    NSString *_identifier;
    NSSet *_displayedElements;
    NSCountedSet *_topicCollections;
    FCTopicalNode *_parent;
    NSSet *_children;
    double _scoreMultiplier;
    double _relatedness;
    double _specificity;
    double _parentRawScore;
    double _relatednessThreshold;
    double _relatednessKWeight;
    double _topicScoreWeight;
    double _highestScoringRelativeScoreMultiplier;
    NSString *_storedNodeIdentifier;
}

@property(retain, nonatomic) NSString *storedNodeIdentifier; // @synthesize storedNodeIdentifier=_storedNodeIdentifier;
@property(nonatomic) double highestScoringRelativeScoreMultiplier; // @synthesize highestScoringRelativeScoreMultiplier=_highestScoringRelativeScoreMultiplier;
@property(nonatomic) double topicScoreWeight; // @synthesize topicScoreWeight=_topicScoreWeight;
@property(nonatomic) double relatednessKWeight; // @synthesize relatednessKWeight=_relatednessKWeight;
@property(nonatomic) double relatednessThreshold; // @synthesize relatednessThreshold=_relatednessThreshold;
@property(nonatomic) double parentRawScore; // @synthesize parentRawScore=_parentRawScore;
@property(nonatomic) double specificity; // @synthesize specificity=_specificity;
@property(nonatomic) double relatedness; // @synthesize relatedness=_relatedness;
@property(nonatomic) _Bool scored; // @synthesize scored=_scored;
@property(nonatomic) double scoreMultiplier; // @synthesize scoreMultiplier=_scoreMultiplier;
@property(retain, nonatomic) NSSet *children; // @synthesize children=_children;
@property(nonatomic) __weak FCTopicalNode *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) NSCountedSet *topicCollections; // @synthesize topicCollections=_topicCollections;
@property(retain, nonatomic) NSSet *displayedElements; // @synthesize displayedElements=_displayedElements;
@property(retain) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSSet *identifiers; // @synthesize identifiers=_identifiers;
- (void).cxx_destruct;
- (void)calculateScoreWithTopicScoreProvider:(CDUnknownBlockType)arg1;
- (void)calculateNonLeafScoresWithTopicProvider:(CDUnknownBlockType)arg1;
- (id)calculateLeafScoresWithTopicScoreProvider:(CDUnknownBlockType)arg1;
- (double)individualScoreWithTopicScoreProvider:(CDUnknownBlockType)arg1;
@property(nonatomic) double score;
- (id)leaves;
- (id)description;
- (void)considerEdge:(id)arg1 withNodeScorer:(CDUnknownBlockType)arg2;
- (long long)compare:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 displayedElements:(id)arg2 allTopicCollections:(id)arg3 relatednessThreshold:(double)arg4 relatednessKWeight:(double)arg5 topicScoreWeight:(double)arg6 highestScoringRelativeScoreMultiplier:(double)arg7;

@end

