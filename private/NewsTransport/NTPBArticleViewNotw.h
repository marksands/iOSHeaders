//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSString;

@interface NTPBArticleViewNotw : PBCodable <NSCopying>
{
    NSString *_articleId;
    int _articleViewType;
    float _maxScrollDepth;
    NSString *_referringSite;
    NSString *_referringUrl;
    NSString *_sourceChannelId;
    NSString *_windowId;
    struct {
        unsigned int articleViewType:1;
        unsigned int maxScrollDepth:1;
    } _has;
}

@property(retain, nonatomic) NSString *windowId; // @synthesize windowId=_windowId;
@property(retain, nonatomic) NSString *referringSite; // @synthesize referringSite=_referringSite;
@property(retain, nonatomic) NSString *referringUrl; // @synthesize referringUrl=_referringUrl;
@property(nonatomic) float maxScrollDepth; // @synthesize maxScrollDepth=_maxScrollDepth;
@property(retain, nonatomic) NSString *sourceChannelId; // @synthesize sourceChannelId=_sourceChannelId;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasWindowId;
@property(readonly, nonatomic) _Bool hasReferringSite;
@property(readonly, nonatomic) _Bool hasReferringUrl;
@property(nonatomic) _Bool hasMaxScrollDepth;
@property(readonly, nonatomic) _Bool hasSourceChannelId;
@property(readonly, nonatomic) _Bool hasArticleId;
@property(nonatomic) _Bool hasArticleViewType;
@property(nonatomic) int articleViewType; // @synthesize articleViewType=_articleViewType;

@end

