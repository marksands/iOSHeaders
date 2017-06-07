//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreParsec/PARRequest.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>

@class NSDate, NSString;

@interface PARFlightSearchRequest : PARRequest <NSSecureCoding>
{
    NSDate *_date;
    NSString *_flightQuery;
    NSString *_appBundleId;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property(copy, nonatomic) NSString *flightQuery; // @synthesize flightQuery=_flightQuery;
@property(copy, nonatomic) NSDate *date; // @synthesize date=_date;
- (void).cxx_destruct;
- (Class)responseClass;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

