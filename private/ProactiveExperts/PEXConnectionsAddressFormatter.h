//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  7 2017 08:40:43).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PEXConnectionsAddressFormatter : NSObject
{
}

+ (id)addressDictionaryForPEXLocation:(id)arg1;
+ (id)addressDictionaryFromAttributeSet:(id)arg1;
+ (id)formattedAddressWithSemanticTag:(unsigned char)arg1 address:(id)arg2 duetEvent:(id)arg3 shortStyle:(_Bool)arg4;
+ (id)postalAddressFromAttributeSet:(id)arg1;
+ (id)singleLineFormattedAddressWithPostalAddress:(id)arg1 shortStyle:(_Bool)arg2;
+ (id)formattedCityAndStateWithCity:(id)arg1 state:(id)arg2;
+ (id)formattedStreetNameWithThoroughfare:(id)arg1 subThoroughfare:(id)arg2;
+ (_Bool)isValidAddressDictionary:(id)arg1;
+ (id)addressComponentValueWithSemanticTag:(unsigned char)arg1 forAddress:(id)arg2 duetEvent:(id)arg3;

@end

