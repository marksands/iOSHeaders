//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@interface NTPBVideoGroupsConfig : PBCodable <NSCopying>
{
    long long _moreFromPublisherBarTime;
    long long _moreVideosGroupMaxNumberOfVideos;
    long long _moreVideosGroupMinNumberOfVideos;
    long long _nowPlayingBarTime;
    long long _upNextBarTime;
    int _moreVideosGroupFilterOption;
    int _moreVideosGroupSortOption;
    _Bool _moreFromPublisherBarEnabled;
    _Bool _playsMutedByDefault;
    struct {
        unsigned int moreFromPublisherBarTime:1;
        unsigned int moreVideosGroupMaxNumberOfVideos:1;
        unsigned int moreVideosGroupMinNumberOfVideos:1;
        unsigned int nowPlayingBarTime:1;
        unsigned int upNextBarTime:1;
        unsigned int moreVideosGroupFilterOption:1;
        unsigned int moreVideosGroupSortOption:1;
        unsigned int moreFromPublisherBarEnabled:1;
        unsigned int playsMutedByDefault:1;
    } _has;
}

@property(nonatomic) long long moreVideosGroupMaxNumberOfVideos; // @synthesize moreVideosGroupMaxNumberOfVideos=_moreVideosGroupMaxNumberOfVideos;
@property(nonatomic) long long moreVideosGroupMinNumberOfVideos; // @synthesize moreVideosGroupMinNumberOfVideos=_moreVideosGroupMinNumberOfVideos;
@property(nonatomic) _Bool moreFromPublisherBarEnabled; // @synthesize moreFromPublisherBarEnabled=_moreFromPublisherBarEnabled;
@property(nonatomic) long long moreFromPublisherBarTime; // @synthesize moreFromPublisherBarTime=_moreFromPublisherBarTime;
@property(nonatomic) long long upNextBarTime; // @synthesize upNextBarTime=_upNextBarTime;
@property(nonatomic) long long nowPlayingBarTime; // @synthesize nowPlayingBarTime=_nowPlayingBarTime;
@property(nonatomic) _Bool playsMutedByDefault; // @synthesize playsMutedByDefault=_playsMutedByDefault;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasMoreVideosGroupMaxNumberOfVideos;
@property(nonatomic) _Bool hasMoreVideosGroupMinNumberOfVideos;
@property(nonatomic) _Bool hasMoreVideosGroupFilterOption;
@property(nonatomic) int moreVideosGroupFilterOption; // @synthesize moreVideosGroupFilterOption=_moreVideosGroupFilterOption;
@property(nonatomic) _Bool hasMoreVideosGroupSortOption;
@property(nonatomic) int moreVideosGroupSortOption; // @synthesize moreVideosGroupSortOption=_moreVideosGroupSortOption;
@property(nonatomic) _Bool hasMoreFromPublisherBarEnabled;
@property(nonatomic) _Bool hasMoreFromPublisherBarTime;
@property(nonatomic) _Bool hasUpNextBarTime;
@property(nonatomic) _Bool hasNowPlayingBarTime;
@property(nonatomic) _Bool hasPlaysMutedByDefault;

@end

