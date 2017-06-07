//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOComposedTransitRouteStep.h>

@class GEOPBTransitAccessPoint, GEOTransitEnterExitInfo, GEOTransitTransferInfo, NSString;

@interface GEOComposedTransitStationRouteStep : GEOComposedTransitRouteStep
{
    unsigned int _expectedTime;
    _Bool _isArrivalUncertain;
    GEOTransitTransferInfo *_transitTransfer;
    GEOTransitEnterExitInfo *_enterExitInfo;
    GEOPBTransitAccessPoint *_accessPoint;
}

@property(readonly, nonatomic) unsigned int expectedTime; // @synthesize expectedTime=_expectedTime;
@property(readonly, nonatomic) _Bool isArrivalUncertain; // @synthesize isArrivalUncertain=_isArrivalUncertain;
@property(readonly, nonatomic) GEOTransitTransferInfo *transitTransfer; // @synthesize transitTransfer=_transitTransfer;
@property(readonly, nonatomic) GEOPBTransitAccessPoint *accessPoint; // @synthesize accessPoint=_accessPoint;
- (void).cxx_destruct;
- (CDStruct_c3b9c2ee)endGeoCoordinate;
- (CDStruct_c3b9c2ee)startGeoCoordinate;
@property(readonly, nonatomic) _Bool hasDisplayStop;
@property(readonly, nonatomic) _Bool displayStop;
@property(readonly, nonatomic) NSString *exitSign;
- (id)initWithComposedRoute:(id)arg1 decoderData:(id)arg2 step:(id)arg3 stepIndex:(unsigned long long)arg4 duration:(unsigned int)arg5 pointRange:(struct _NSRange)arg6;

@end

