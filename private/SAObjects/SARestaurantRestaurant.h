//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <SAObjects/SALocalSearchBusiness2.h>

@class NSArray, NSURL;

@interface SARestaurantRestaurant : SALocalSearchBusiness2
{
}

+ (id)restaurantWithDictionary:(id)arg1 context:(id)arg2;
+ (id)restaurant;
@property(copy, nonatomic) NSArray *orderDeliveryPunchOuts;
@property(copy, nonatomic) NSArray *openings;
@property(copy, nonatomic) NSURL *menuLink;
@property(copy, nonatomic) NSArray *makeReservationPunchOuts;
@property(copy, nonatomic) NSArray *attributeSet;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

