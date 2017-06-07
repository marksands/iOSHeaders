//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, NSString;

@interface GEOTransitRouteDisplayStrings : PBCodable <NSCopying>
{
    NSMutableArray *_advisorys;
    NSString *_detailTimeFormatted;
    GEOFormattedString *_duration;
    GEOFormattedString *_durationList;
    GEOFormattedString *_fareErrorMessage;
    GEOFormattedString *_overviewSubtitle;
    GEOFormattedString *_planningDescription;
    GEOFormattedString *_serviceGap;
    GEOFormattedString *_travelDescription;
}

+ (Class)advisoryType;
@property(retain, nonatomic) NSMutableArray *advisorys; // @synthesize advisorys=_advisorys;
@property(retain, nonatomic) GEOFormattedString *travelDescription; // @synthesize travelDescription=_travelDescription;
@property(retain, nonatomic) GEOFormattedString *fareErrorMessage; // @synthesize fareErrorMessage=_fareErrorMessage;
@property(retain, nonatomic) GEOFormattedString *overviewSubtitle; // @synthesize overviewSubtitle=_overviewSubtitle;
@property(retain, nonatomic) GEOFormattedString *serviceGap; // @synthesize serviceGap=_serviceGap;
@property(retain, nonatomic) GEOFormattedString *durationList; // @synthesize durationList=_durationList;
@property(retain, nonatomic) GEOFormattedString *duration; // @synthesize duration=_duration;
@property(retain, nonatomic) GEOFormattedString *planningDescription; // @synthesize planningDescription=_planningDescription;
@property(retain, nonatomic) NSString *detailTimeFormatted; // @synthesize detailTimeFormatted=_detailTimeFormatted;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)advisoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)advisorysCount;
- (void)addAdvisory:(id)arg1;
- (void)clearAdvisorys;
@property(readonly, nonatomic) _Bool hasTravelDescription;
@property(readonly, nonatomic) _Bool hasFareErrorMessage;
@property(readonly, nonatomic) _Bool hasOverviewSubtitle;
@property(readonly, nonatomic) _Bool hasServiceGap;
@property(readonly, nonatomic) _Bool hasDurationList;
@property(readonly, nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasPlanningDescription;
@property(readonly, nonatomic) _Bool hasDetailTimeFormatted;
- (void)dealloc;

@end
