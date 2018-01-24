//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NTPBPublisherFavorabilityScores;

@interface FCPersonalizationFavorabilityScores : NSObject <NSSecureCoding>
{
    NTPBPublisherFavorabilityScores *_pbFavorabilityScores;
    NSDictionary *_tagIDToScores;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSDictionary *tagIDToScores; // @synthesize tagIDToScores=_tagIDToScores;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)scoreForTagID:(id)arg1;
@property(readonly, nonatomic) unsigned long long count;
- (id)init;
- (id)initWithPBFavorabilityScores:(id)arg1;

@end

