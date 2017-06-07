//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/NSCopying-Protocol.h>
#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOComposedRoute, GEOComposedWaypoint, GEOETARoute, MNCommuteDestinationSuggestion, MNLocation, MNObserverHashTable, NSDictionary, NSString;

@interface MNCommuteDestination : NSObject <NSSecureCoding, NSCopying>
{
    GEOComposedRoute *_nonRecommendedRoute;
    _Bool _invalid;
    MNCommuteDestinationSuggestion *_suggestion;
    GEOComposedRoute *_route;
    MNLocation *_lastMatchedLocation;
    GEOETARoute *_etaRoute;
    double _remainingTime;
    double _remainingDistance;
    MNLocation *_lastLocation;
    long long _score;
    NSDictionary *_scores;
    MNObserverHashTable *_observers;
}

+ (_Bool)supportsSecureCoding;
+ (id)sharedDefaults;
+ (void)removeStaleArchivedDestinations;
+ (id)archivedDestinationForUniqueID:(id)arg1;
@property(retain) MNObserverHashTable *observers; // @synthesize observers=_observers;
@property(retain, nonatomic) NSDictionary *scores; // @synthesize scores=_scores;
@property(nonatomic) long long score; // @synthesize score=_score;
@property(retain, nonatomic) MNLocation *lastLocation; // @synthesize lastLocation=_lastLocation;
@property(nonatomic) double remainingDistance; // @synthesize remainingDistance=_remainingDistance;
@property(nonatomic) double remainingTime; // @synthesize remainingTime=_remainingTime;
@property(retain, nonatomic) GEOETARoute *etaRoute; // @synthesize etaRoute=_etaRoute;
@property(retain, nonatomic) MNLocation *lastMatchedLocation; // @synthesize lastMatchedLocation=_lastMatchedLocation;
@property(retain, nonatomic) GEOComposedRoute *route; // @synthesize route=_route;
@property(retain, nonatomic) MNCommuteDestinationSuggestion *suggestion; // @synthesize suggestion=_suggestion;
@property(nonatomic) _Bool invalid; // @synthesize invalid=_invalid;
- (void).cxx_destruct;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)updateFrom:(id)arg1;
@property(readonly, nonatomic) double geodesicDistance;
@property(readonly) _Bool canCalculateETA;
@property(readonly) _Bool canGetETARoute;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) GEOComposedWaypoint *waypoint;
@property(readonly, nonatomic) NSString *uniqueIdentifier;
@property(readonly) NSString *shortDescription;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
@property(retain, nonatomic) GEOComposedRoute *nonRecommendedRoute;
- (void)archiveDestination;

@end

