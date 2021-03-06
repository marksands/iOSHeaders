//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOLogMsgStateApplicationIdentifier, GEOLogMsgStateCarPlay, GEOLogMsgStateDeviceBase, GEOLogMsgStateDeviceConnection, GEOLogMsgStateDeviceIdentifier, GEOLogMsgStateDeviceLocale, GEOLogMsgStateExperiments, GEOLogMsgStateExtension, GEOLogMsgStateFlyover, GEOLogMsgStateMapRestore, GEOLogMsgStateMapSettings, GEOLogMsgStateMapUI, GEOLogMsgStateMapUIShown, GEOLogMsgStateMapView, GEOLogMsgStateMapViewLocation, GEOLogMsgStateMapsServer, GEOLogMsgStateNavigation, GEOLogMsgStatePairedDevice, GEOLogMsgStatePlaceCard, GEOLogMsgStatePlaceRequest, GEOLogMsgStateRealtimeTrafficProbe, GEOLogMsgStateReportAnIssue, GEOLogMsgStateRoute, GEOLogMsgStateSuggestions, GEOLogMsgStateTileSet, GEOLogMsgStateTransit, GEOLogMsgStateUserSession, NSString;

@interface GEOLogMsgState : PBCodable <NSCopying>
{
    GEOLogMsgStateApplicationIdentifier *_applicationIdentifier;
    GEOLogMsgStateCarPlay *_carPlay;
    GEOLogMsgStateDeviceBase *_deviceBase;
    GEOLogMsgStateDeviceConnection *_deviceConnection;
    GEOLogMsgStateDeviceIdentifier *_deviceIdentifier;
    GEOLogMsgStateDeviceLocale *_deviceLocale;
    GEOLogMsgStateExperiments *_experiments;
    GEOLogMsgStateExtension *_extension;
    GEOLogMsgStateFlyover *_flyover;
    GEOLogMsgStateMapRestore *_mapRestore;
    GEOLogMsgStateMapSettings *_mapSettings;
    GEOLogMsgStateMapUI *_mapUi;
    GEOLogMsgStateMapUIShown *_mapUiShown;
    GEOLogMsgStateMapView *_mapView;
    GEOLogMsgStateMapViewLocation *_mapViewLocation;
    GEOLogMsgStateMapsServer *_mapsServer;
    GEOLogMsgStateNavigation *_navigation;
    GEOLogMsgStatePairedDevice *_pairedDevice;
    GEOLogMsgStatePlaceCard *_placeCard;
    GEOLogMsgStatePlaceRequest *_placeRequest;
    GEOLogMsgStateRealtimeTrafficProbe *_realtimeTrafficProbe;
    GEOLogMsgStateReportAnIssue *_reportAnIssue;
    GEOLogMsgStateRoute *_route;
    NSString *_stateOrigin;
    int _stateType;
    GEOLogMsgStateSuggestions *_suggestions;
    GEOLogMsgStateTileSet *_tileSet;
    GEOLogMsgStateTransit *_transit;
    GEOLogMsgStateUserSession *_userSession;
    struct {
        unsigned int stateType:1;
    } _has;
}

@property(retain, nonatomic) GEOLogMsgStateRealtimeTrafficProbe *realtimeTrafficProbe; // @synthesize realtimeTrafficProbe=_realtimeTrafficProbe;
@property(retain, nonatomic) GEOLogMsgStateReportAnIssue *reportAnIssue; // @synthesize reportAnIssue=_reportAnIssue;
@property(retain, nonatomic) GEOLogMsgStateSuggestions *suggestions; // @synthesize suggestions=_suggestions;
@property(retain, nonatomic) GEOLogMsgStateMapRestore *mapRestore; // @synthesize mapRestore=_mapRestore;
@property(retain, nonatomic) GEOLogMsgStateNavigation *navigation; // @synthesize navigation=_navigation;
@property(retain, nonatomic) GEOLogMsgStatePlaceRequest *placeRequest; // @synthesize placeRequest=_placeRequest;
@property(retain, nonatomic) GEOLogMsgStateTileSet *tileSet; // @synthesize tileSet=_tileSet;
@property(retain, nonatomic) GEOLogMsgStateMapsServer *mapsServer; // @synthesize mapsServer=_mapsServer;
@property(retain, nonatomic) GEOLogMsgStateFlyover *flyover; // @synthesize flyover=_flyover;
@property(retain, nonatomic) GEOLogMsgStateRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) GEOLogMsgStatePlaceCard *placeCard; // @synthesize placeCard=_placeCard;
@property(retain, nonatomic) GEOLogMsgStateExperiments *experiments; // @synthesize experiments=_experiments;
@property(retain, nonatomic) GEOLogMsgStateUserSession *userSession; // @synthesize userSession=_userSession;
@property(retain, nonatomic) GEOLogMsgStateMapUIShown *mapUiShown; // @synthesize mapUiShown=_mapUiShown;
@property(retain, nonatomic) GEOLogMsgStateMapUI *mapUi; // @synthesize mapUi=_mapUi;
@property(retain, nonatomic) GEOLogMsgStateMapSettings *mapSettings; // @synthesize mapSettings=_mapSettings;
@property(retain, nonatomic) GEOLogMsgStateTransit *transit; // @synthesize transit=_transit;
@property(retain, nonatomic) GEOLogMsgStateMapViewLocation *mapViewLocation; // @synthesize mapViewLocation=_mapViewLocation;
@property(retain, nonatomic) GEOLogMsgStateMapView *mapView; // @synthesize mapView=_mapView;
@property(retain, nonatomic) GEOLogMsgStateExtension *extension; // @synthesize extension=_extension;
@property(retain, nonatomic) GEOLogMsgStatePairedDevice *pairedDevice; // @synthesize pairedDevice=_pairedDevice;
@property(retain, nonatomic) GEOLogMsgStateCarPlay *carPlay; // @synthesize carPlay=_carPlay;
@property(retain, nonatomic) GEOLogMsgStateDeviceConnection *deviceConnection; // @synthesize deviceConnection=_deviceConnection;
@property(retain, nonatomic) GEOLogMsgStateDeviceLocale *deviceLocale; // @synthesize deviceLocale=_deviceLocale;
@property(retain, nonatomic) GEOLogMsgStateDeviceBase *deviceBase; // @synthesize deviceBase=_deviceBase;
@property(retain, nonatomic) GEOLogMsgStateApplicationIdentifier *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property(retain, nonatomic) GEOLogMsgStateDeviceIdentifier *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property(retain, nonatomic) NSString *stateOrigin; // @synthesize stateOrigin=_stateOrigin;
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
@property(readonly, nonatomic) _Bool hasRealtimeTrafficProbe;
@property(readonly, nonatomic) _Bool hasReportAnIssue;
@property(readonly, nonatomic) _Bool hasSuggestions;
@property(readonly, nonatomic) _Bool hasMapRestore;
@property(readonly, nonatomic) _Bool hasNavigation;
@property(readonly, nonatomic) _Bool hasPlaceRequest;
@property(readonly, nonatomic) _Bool hasTileSet;
@property(readonly, nonatomic) _Bool hasMapsServer;
@property(readonly, nonatomic) _Bool hasFlyover;
@property(readonly, nonatomic) _Bool hasRoute;
@property(readonly, nonatomic) _Bool hasPlaceCard;
@property(readonly, nonatomic) _Bool hasExperiments;
@property(readonly, nonatomic) _Bool hasUserSession;
@property(readonly, nonatomic) _Bool hasMapUiShown;
@property(readonly, nonatomic) _Bool hasMapUi;
@property(readonly, nonatomic) _Bool hasMapSettings;
@property(readonly, nonatomic) _Bool hasTransit;
@property(readonly, nonatomic) _Bool hasMapViewLocation;
@property(readonly, nonatomic) _Bool hasMapView;
@property(readonly, nonatomic) _Bool hasExtension;
@property(readonly, nonatomic) _Bool hasPairedDevice;
@property(readonly, nonatomic) _Bool hasCarPlay;
@property(readonly, nonatomic) _Bool hasDeviceConnection;
@property(readonly, nonatomic) _Bool hasDeviceLocale;
@property(readonly, nonatomic) _Bool hasDeviceBase;
@property(readonly, nonatomic) _Bool hasApplicationIdentifier;
@property(readonly, nonatomic) _Bool hasDeviceIdentifier;
- (int)StringAsStateType:(id)arg1;
- (id)stateTypeAsString:(int)arg1;
@property(nonatomic) _Bool hasStateType;
@property(nonatomic) int stateType; // @synthesize stateType=_stateType;
@property(readonly, nonatomic) _Bool hasStateOrigin;

@end

