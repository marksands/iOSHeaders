//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOMapRegion, GEOPDFlyover, NSString;

@interface GEOAnnouncement : PBCodable <NSCopying>
{
    unsigned int _announcementID;
    int _announcementType;
    NSString *_buttonOneAppURI;
    NSString *_buttonOneMessage;
    NSString *_buttonTwoAppURI;
    NSString *_buttonTwoMessage;
    unsigned int _displayDestinations;
    GEOPDFlyover *_flyoverInfo;
    GEOMapRegion *_mapRegion;
    int _releasePhase;
    NSString *_title;
    NSString *_userMessage;
    struct {
        unsigned int announcementID:1;
        unsigned int announcementType:1;
        unsigned int displayDestinations:1;
        unsigned int releasePhase:1;
    } _has;
}

@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) GEOPDFlyover *flyoverInfo; // @synthesize flyoverInfo=_flyoverInfo;
@property(nonatomic) unsigned int displayDestinations; // @synthesize displayDestinations=_displayDestinations;
@property(retain, nonatomic) NSString *buttonTwoAppURI; // @synthesize buttonTwoAppURI=_buttonTwoAppURI;
@property(retain, nonatomic) NSString *buttonTwoMessage; // @synthesize buttonTwoMessage=_buttonTwoMessage;
@property(retain, nonatomic) NSString *buttonOneAppURI; // @synthesize buttonOneAppURI=_buttonOneAppURI;
@property(retain, nonatomic) NSString *buttonOneMessage; // @synthesize buttonOneMessage=_buttonOneMessage;
@property(retain, nonatomic) NSString *userMessage; // @synthesize userMessage=_userMessage;
@property(retain, nonatomic) GEOMapRegion *mapRegion; // @synthesize mapRegion=_mapRegion;
@property(nonatomic) unsigned int announcementID; // @synthesize announcementID=_announcementID;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (int)StringAsAnnouncementType:(id)arg1;
- (id)announcementTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasAnnouncementType;
@property(nonatomic) int announcementType; // @synthesize announcementType=_announcementType;
@property(readonly, nonatomic) _Bool hasTitle;
@property(readonly, nonatomic) _Bool hasFlyoverInfo;
- (int)StringAsReleasePhase:(id)arg1;
- (id)releasePhaseAsString:(int)arg1;
@property(nonatomic) _Bool hasReleasePhase;
@property(nonatomic) int releasePhase; // @synthesize releasePhase=_releasePhase;
@property(nonatomic) _Bool hasDisplayDestinations;
@property(readonly, nonatomic) _Bool hasButtonTwoAppURI;
@property(readonly, nonatomic) _Bool hasButtonTwoMessage;
@property(readonly, nonatomic) _Bool hasButtonOneAppURI;
@property(readonly, nonatomic) _Bool hasButtonOneMessage;
@property(readonly, nonatomic) _Bool hasUserMessage;
@property(readonly, nonatomic) _Bool hasMapRegion;
@property(nonatomic) _Bool hasAnnouncementID;

@end

