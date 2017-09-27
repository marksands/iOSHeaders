//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VectorKit/VKTrafficFeature.h>

@class NSDate, NSString;

@interface VKTrafficIncidentFeature : VKTrafficFeature
{
    NSString *_title;
    NSString *_subtitle;
    long long _type;
    long long _routeRelevance;
    long long _significance;
    _Bool _isNotForDisplay;
    _Bool _isOnSelectedRoute;
    unsigned int _routeOffsetInMeters;
    NSString *_street;
    NSString *_crossStreet;
    NSString *_info;
    NSDate *_startDate;
    NSDate *_endDate;
    NSDate *_lastUpdatedDate;
    unsigned long long _uniqueID;
    NSString *_uniqueString;
}

@property(readonly, nonatomic) long long significance; // @synthesize significance=_significance;
@property(readonly, nonatomic) NSDate *lastUpdatedDate; // @synthesize lastUpdatedDate=_lastUpdatedDate;
@property(readonly, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(readonly, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(readonly, nonatomic) NSString *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *crossStreet; // @synthesize crossStreet=_crossStreet;
@property(readonly, nonatomic) NSString *street; // @synthesize street=_street;
@property(nonatomic) unsigned int routeOffsetInMeters; // @synthesize routeOffsetInMeters=_routeOffsetInMeters;
@property(nonatomic) _Bool isOnSelectedRoute; // @synthesize isOnSelectedRoute=_isOnSelectedRoute;
@property(nonatomic) long long routeRelevance; // @synthesize routeRelevance=_routeRelevance;
@property(readonly, nonatomic) _Bool isNotForDisplay; // @synthesize isNotForDisplay=_isNotForDisplay;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly, copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSString *uniqueString; // @synthesize uniqueString=_uniqueString;
@property(readonly, nonatomic) unsigned long long uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithRouteIncident:(id)arg1 routeRelevance:(long long)arg2;
- (id)initWithIncidentData:(const struct Incident *)arg1 worldPoint:(Matrix_6e1d3589 *)arg2;
- (_Bool)hasSameIdentifier:(id)arg1;

@end

