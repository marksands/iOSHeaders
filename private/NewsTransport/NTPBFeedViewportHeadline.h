//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString, NTPBDate;

@interface NTPBFeedViewportHeadline : PBCodable <NSCopying>
{
    double _tileProminenceScore;
    NSString *_articleID;
    NSString *_clusterID;
    NTPBDate *_displayDate;
    int _storyType;
    int _surfacedByBinIDRef;
    int _surfacedByChannelIDRef;
    int _surfacedBySectionIDRef;
    int _surfacedByTopicIDRef;
    int _topStoryType;
    _Bool _usesImageOnTopLayout;
    struct {
        unsigned int tileProminenceScore:1;
        unsigned int storyType:1;
        unsigned int surfacedByBinIDRef:1;
        unsigned int surfacedByChannelIDRef:1;
        unsigned int surfacedBySectionIDRef:1;
        unsigned int surfacedByTopicIDRef:1;
        unsigned int topStoryType:1;
        unsigned int usesImageOnTopLayout:1;
    } _has;
}

@property(retain, nonatomic) NTPBDate *displayDate; // @synthesize displayDate=_displayDate;
@property(retain, nonatomic) NSString *clusterID; // @synthesize clusterID=_clusterID;
@property(nonatomic) _Bool usesImageOnTopLayout; // @synthesize usesImageOnTopLayout=_usesImageOnTopLayout;
@property(nonatomic) double tileProminenceScore; // @synthesize tileProminenceScore=_tileProminenceScore;
@property(nonatomic) int surfacedByBinIDRef; // @synthesize surfacedByBinIDRef=_surfacedByBinIDRef;
@property(nonatomic) int surfacedByTopicIDRef; // @synthesize surfacedByTopicIDRef=_surfacedByTopicIDRef;
@property(nonatomic) int surfacedByChannelIDRef; // @synthesize surfacedByChannelIDRef=_surfacedByChannelIDRef;
@property(nonatomic) int surfacedBySectionIDRef; // @synthesize surfacedBySectionIDRef=_surfacedBySectionIDRef;
@property(retain, nonatomic) NSString *articleID; // @synthesize articleID=_articleID;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasDisplayDate;
@property(nonatomic) _Bool hasStoryType;
@property(nonatomic) int storyType; // @synthesize storyType=_storyType;
@property(readonly, nonatomic) _Bool hasClusterID;
@property(nonatomic) _Bool hasUsesImageOnTopLayout;
@property(nonatomic) _Bool hasTileProminenceScore;
@property(nonatomic) _Bool hasTopStoryType;
@property(nonatomic) int topStoryType; // @synthesize topStoryType=_topStoryType;
@property(nonatomic) _Bool hasSurfacedByBinIDRef;
@property(nonatomic) _Bool hasSurfacedByTopicIDRef;
@property(nonatomic) _Bool hasSurfacedByChannelIDRef;
@property(nonatomic) _Bool hasSurfacedBySectionIDRef;
@property(readonly, nonatomic) _Bool hasArticleID;
- (void)dealloc;

@end

