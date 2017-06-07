//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LOGMSGEVENTBookedTable : PBCodable <NSCopying>
{
    unsigned long long _muid;
    NSString *_appId;
    _Bool _bookedUsingMaps;
    _Bool _called;
    _Bool _cancelled;
    _Bool _isAsync;
    _Bool _routed;
    _Bool _shared;
    _Bool _tappedCancelReservation;
    _Bool _tappedChangeReservation;
    _Bool _tappedProactiveTrayItem;
    _Bool _viewedDetailsFromPlacecard;
    _Bool _viewedInPlacecard;
    _Bool _viewedInProactiveTray;
    struct {
        unsigned int muid:1;
        unsigned int bookedUsingMaps:1;
        unsigned int called:1;
        unsigned int cancelled:1;
        unsigned int isAsync:1;
        unsigned int routed:1;
        unsigned int shared:1;
        unsigned int tappedCancelReservation:1;
        unsigned int tappedChangeReservation:1;
        unsigned int tappedProactiveTrayItem:1;
        unsigned int viewedDetailsFromPlacecard:1;
        unsigned int viewedInPlacecard:1;
        unsigned int viewedInProactiveTray:1;
    } _has;
}

@property(nonatomic) _Bool shared; // @synthesize shared=_shared;
@property(nonatomic) _Bool tappedCancelReservation; // @synthesize tappedCancelReservation=_tappedCancelReservation;
@property(nonatomic) _Bool tappedChangeReservation; // @synthesize tappedChangeReservation=_tappedChangeReservation;
@property(nonatomic) _Bool routed; // @synthesize routed=_routed;
@property(nonatomic) _Bool called; // @synthesize called=_called;
@property(nonatomic) unsigned long long muid; // @synthesize muid=_muid;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
@property(nonatomic) _Bool isAsync; // @synthesize isAsync=_isAsync;
@property(nonatomic) _Bool viewedDetailsFromPlacecard; // @synthesize viewedDetailsFromPlacecard=_viewedDetailsFromPlacecard;
@property(nonatomic) _Bool viewedInPlacecard; // @synthesize viewedInPlacecard=_viewedInPlacecard;
@property(nonatomic) _Bool tappedProactiveTrayItem; // @synthesize tappedProactiveTrayItem=_tappedProactiveTrayItem;
@property(nonatomic) _Bool viewedInProactiveTray; // @synthesize viewedInProactiveTray=_viewedInProactiveTray;
@property(nonatomic) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic) _Bool bookedUsingMaps; // @synthesize bookedUsingMaps=_bookedUsingMaps;
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
@property(nonatomic) _Bool hasShared;
@property(nonatomic) _Bool hasTappedCancelReservation;
@property(nonatomic) _Bool hasTappedChangeReservation;
@property(nonatomic) _Bool hasRouted;
@property(nonatomic) _Bool hasCalled;
@property(nonatomic) _Bool hasMuid;
@property(readonly, nonatomic) _Bool hasAppId;
@property(nonatomic) _Bool hasIsAsync;
@property(nonatomic) _Bool hasViewedDetailsFromPlacecard;
@property(nonatomic) _Bool hasViewedInPlacecard;
@property(nonatomic) _Bool hasTappedProactiveTrayItem;
@property(nonatomic) _Bool hasViewedInProactiveTray;
@property(nonatomic) _Bool hasCancelled;
@property(nonatomic) _Bool hasBookedUsingMaps;

@end

