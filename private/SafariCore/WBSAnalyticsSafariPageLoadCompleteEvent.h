//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SafariCore/NSCopying-Protocol.h>

@interface WBSAnalyticsSafariPageLoadCompleteEvent : PBCodable <NSCopying>
{
    unsigned long long _configurationID;
    long long _errorCode;
    unsigned long long _pageID;
    unsigned long long _pageLoadTime;
    unsigned long long _timestamp;
    struct {
        unsigned int configurationID:1;
        unsigned int errorCode:1;
        unsigned int pageID:1;
        unsigned int pageLoadTime:1;
        unsigned int timestamp:1;
    } _has;
}

@property(nonatomic) long long errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long pageLoadTime; // @synthesize pageLoadTime=_pageLoadTime;
@property(nonatomic) unsigned long long pageID; // @synthesize pageID=_pageID;
@property(nonatomic) unsigned long long configurationID; // @synthesize configurationID=_configurationID;
@property(nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
@property(nonatomic) _Bool hasPageLoadTime;
@property(nonatomic) _Bool hasPageID;
@property(nonatomic) _Bool hasConfigurationID;
@property(nonatomic) _Bool hasTimestamp;

@end

