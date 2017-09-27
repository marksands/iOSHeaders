//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class GEOTraitsTransitScheduleModeFilter, GEOTraitsTransitScheduleTimeRange, PBUnknownFields;

@interface GEOTraitsTransitScheduleFilter : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOTraitsTransitScheduleModeFilter *_highFrequencyFilter;
    GEOTraitsTransitScheduleModeFilter *_lowFrequencyFilter;
    GEOTraitsTransitScheduleTimeRange *_operatingHoursRange;
}

@property(retain, nonatomic) GEOTraitsTransitScheduleTimeRange *operatingHoursRange; // @synthesize operatingHoursRange=_operatingHoursRange;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *lowFrequencyFilter; // @synthesize lowFrequencyFilter=_lowFrequencyFilter;
@property(retain, nonatomic) GEOTraitsTransitScheduleModeFilter *highFrequencyFilter; // @synthesize highFrequencyFilter=_highFrequencyFilter;
- (void).cxx_destruct;
@property(readonly, nonatomic) PBUnknownFields *unknownFields;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(readonly, nonatomic) _Bool hasOperatingHoursRange;
@property(readonly, nonatomic) _Bool hasLowFrequencyFilter;
@property(readonly, nonatomic) _Bool hasHighFrequencyFilter;

@end

