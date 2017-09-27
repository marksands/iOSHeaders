//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

#import "INBookRestaurantReservationIntentResponseExport.h"

@class INRestaurantReservationUserBooking, NSString;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse <INBookRestaurantReservationIntentResponseExport>
{
    INRestaurantReservationUserBooking *_userBooking;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INRestaurantReservationUserBooking *userBooking; // @synthesize userBooking=_userBooking;
- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (id)descriptionAtIndent:(unsigned long long)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

