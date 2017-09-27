//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import "INGetUserCurrentRestaurantReservationBookingsIntentResponseExport.h"

@class NSArray, NSString;

@interface INGetUserCurrentRestaurantReservationBookingsIntentResponse : INIntentResponse <INGetUserCurrentRestaurantReservationBookingsIntentResponseExport>
{
    NSArray *_userCurrentBookings;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *userCurrentBookings; // @synthesize userCurrentBookings=_userCurrentBookings;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackingStore:(id)arg1;
- (id)initWithUserCurrentBookings:(id)arg1 code:(long long)arg2 userActivity:(id)arg3;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

